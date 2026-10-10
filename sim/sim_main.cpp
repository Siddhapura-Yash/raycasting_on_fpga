// raycaster testbench: verilator + sdl2
// keys: w/s move, a/d turn, left shift sprint, m minimap, esc quit
// flags: --pixel (use real 1080p pixel stream), --dump (write frame0.ppm and exit)

#include <verilated.h>
#include "Vstarting_position.h"
#include <SDL2/SDL.h>

#include <algorithm>
#include <cstdint>
#include <cstdio>
#include <cstring>
#include <memory>

static constexpr int screen_w = 1920;
static constexpr int screen_h = 1080;

// speeds in real time, pulses per second
static constexpr double move_rate = 200.0; // 4/256 cell per pulse
static constexpr double turn_rate = 24.0;  // 5 degrees per pulse
static constexpr double sprint_mult = 2.0;
static constexpr int max_pulses = 64;

// rtl clocks per gui frame, must be more than the ~43k a full redraw needs
static constexpr int clocks_column = 60000;
static constexpr int clocks_pixel = 100000;

static constexpr uint32_t ceiling_color = 0xFF000000u | (40u << 16) | (40u << 8) | 80u;
static constexpr uint32_t wall_color = 0xFF000000u | (180u << 16) | (180u << 8) | 180u;
static constexpr uint32_t floor_color = 0xFF000000u | (80u << 16) | (80u << 8) | 80u;

static constexpr int map_w = 12;
static constexpr int map_h = 12;
static const uint8_t world_map[map_h][map_w] = {
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1},
    {1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1},
    {1, 0, 0, 1, 1, 1, 0, 0, 0, 0, 0, 1},
    {1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 1},
    {1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 1},
    {1, 0, 0, 0, 0, 1, 0, 1, 1, 1, 0, 1},
    {1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1},
    {1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1},
    {1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1},
    {1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1}};

// must match the constants in starting_position.sv
static constexpr int move_step = 4;
static constexpr int cos_5 = 255;
static constexpr int sin_5 = 22;

// software copy of the player pose in q8.8, only used by the minimap
struct pose_t
{
    int32_t pos_x = 640, pos_y = 640;
    int32_t dir_x = 256, dir_y = 0;
    int32_t plane_x = 0, plane_y = 169;
};

static pose_t pose;
static uint32_t framebuffer[screen_w * screen_h];
static bool pixel_mode = false;

// pixel mode: rgb shows up 2 clocks after the coordinates that produced it
static unsigned hist_x[3], hist_y[3];

// column mode: last span painted per column
static int col_top[screen_w], col_bot[screen_w];

static void pose_pulse(bool fwd, bool back, bool left, bool right)
{
    const int32_t mx = (pose.dir_x * move_step) >> 8;
    const int32_t my = (pose.dir_y * move_step) >> 8;

    if (fwd)
    {
        pose.pos_x += mx;
        pose.pos_y += my;
    }
    if (back)
    {
        pose.pos_x -= mx;
        pose.pos_y -= my;
    }

    const int32_t dx = pose.dir_x, dy = pose.dir_y;
    const int32_t px = pose.plane_x, py = pose.plane_y;

    if (right)
    {
        pose.dir_x = (dx * cos_5 - dy * sin_5) >> 8;
        pose.dir_y = (dx * sin_5 + dy * cos_5) >> 8;
        pose.plane_x = (px * cos_5 - py * sin_5) >> 8;
        pose.plane_y = (px * sin_5 + py * cos_5) >> 8;
    }
    if (left)
    {
        pose.dir_x = (dx * cos_5 + dy * sin_5) >> 8;
        pose.dir_y = (-dx * sin_5 + dy * cos_5) >> 8;
        pose.plane_x = (px * cos_5 + py * sin_5) >> 8;
        pose.plane_y = (-px * sin_5 + py * cos_5) >> 8;
    }
}

static void draw_minimap(SDL_Renderer *r)
{
    const int cell = 14;
    const int pad = 8;
    const int w = map_w * cell;
    const int h = map_h * cell;

    SDL_SetRenderDrawBlendMode(r, SDL_BLENDMODE_BLEND);

    SDL_Rect bg{pad - 4, pad - 4, w + 8, h + 8};
    SDL_SetRenderDrawColor(r, 0, 0, 0, 200);
    SDL_RenderFillRect(r, &bg);

    for (int y = 0; y < map_h; ++y)
    {
        for (int x = 0; x < map_w; ++x)
        {
            SDL_Rect c{pad + x * cell, pad + y * cell, cell - 1, cell - 1};
            if (world_map[y][x])
                SDL_SetRenderDrawColor(r, 170, 170, 170, 230);
            else
                SDL_SetRenderDrawColor(r, 50, 50, 50, 200);
            SDL_RenderFillRect(r, &c);
        }
    }

    const float k = 1.0f / 256.0f;
    const float px = pad + pose.pos_x * k * cell;
    const float py = pad + pose.pos_y * k * cell;
    const float dx = pose.dir_x * k, dy = pose.dir_y * k;
    const float qx = pose.plane_x * k, qy = pose.plane_y * k;
    const float len = 2.5f * cell;

    auto line = [&](float x1, float y1)
    {
        SDL_RenderDrawLine(r, int(px), int(py), int(x1), int(y1));
        SDL_RenderDrawLine(r, int(px) + 1, int(py), int(x1) + 1, int(y1));
    };

    // fov edges are dir -/+ plane, same as the ray generator
    SDL_SetRenderDrawColor(r, 255, 220, 60, 220);
    line(px + (dx - qx) * len, py + (dy - qy) * len);
    line(px + (dx + qx) * len, py + (dy + qy) * len);

    SDL_SetRenderDrawColor(r, 80, 255, 80, 255);
    line(px + dx * len, py + dy * len);

    SDL_SetRenderDrawColor(r, 255, 50, 50, 255);
    SDL_Rect me{int(px) - 3, int(py) - 3, 7, 7};
    SDL_RenderFillRect(r, &me);

    SDL_SetRenderDrawBlendMode(r, SDL_BLENDMODE_NONE);
}

// wall_top_o and wall_bottom_o are 60 bit, compare unsigned like the rtl does
static int clamp_row(uint64_t raw)
{
    const uint64_t v = raw & ((1ULL << 60) - 1);
    return v > screen_h ? screen_h : int(v);
}

static void paint_column(int x, int top, int bot)
{
    if (bot < top)
        bot = top;
    uint32_t *p = &framebuffer[x];
    int y = 0;
    for (; y < top; ++y, p += screen_w)
        *p = ceiling_color;
    for (; y < bot; ++y, p += screen_w)
        *p = wall_color;
    for (; y < screen_h; ++y, p += screen_w)
        *p = floor_color;
}

static void tick(Vstarting_position *dut)
{
    dut->clk_i = 1;
    dut->eval();

    if (pixel_mode)
    {
        hist_x[2] = hist_x[1];
        hist_x[1] = hist_x[0];
        hist_x[0] = dut->temp_pixel_x;
        hist_y[2] = hist_y[1];
        hist_y[1] = hist_y[0];
        hist_y[0] = dut->temp_pixel_y;

        if (dut->data_out_valid_o)
        {
            const unsigned x = hist_x[2], y = hist_y[2];
            if (x < screen_w && y < screen_h)
            {
                framebuffer[y * screen_w + x] = 0xFF000000u | (uint32_t(dut->red_pixel_value) << 16) | (uint32_t(dut->green_pixel_value) << 8) | uint32_t(dut->blue_pixel_value);
            }
        }
    }
    else
    {
        // column valid is not a port. it fires on the first clock of a new
        // screen_x_o, and wall_*_o can already show the next column one clock
        // later, so only sample when screen_x_o changes
        static unsigned last_x = ~0u;
        const unsigned x = dut->screen_x_o;

        if (x != last_x)
        {
            last_x = x;
            if (x < screen_w)
            {
                const int top = clamp_row(dut->wall_top_o);
                const int bot = clamp_row(dut->wall_bottom_o);
                if (top != col_top[x] || bot != col_bot[x])
                {
                    col_top[x] = top;
                    col_bot[x] = bot;
                    paint_column(int(x), top, bot);
                }
            }
        }
    }

    dut->clk_i = 0;
    dut->eval();
}

// hold the buttons for n clocks, one clock is one step in the rtl
static void hold_buttons(Vstarting_position *dut, int n,
                         bool fwd, bool back, bool left, bool right)
{
    dut->forward_button_i = fwd;
    dut->back_button_i = back;
    dut->left_button_i = left;
    dut->right_button_i = right;

    for (int i = 0; i < n; ++i)
    {
        pose_pulse(fwd, back, left, right);
        tick(dut);
    }

    dut->forward_button_i = 0;
    dut->back_button_i = 0;
    dut->left_button_i = 0;
    dut->right_button_i = 0;
}

static void reset_dut(Vstarting_position *dut)
{
    dut->clk_i = 0;
    dut->rst_n_i = 0;
    dut->forward_button_i = 0;
    dut->back_button_i = 0;
    dut->left_button_i = 0;
    dut->right_button_i = 0;

    for (int i = 0; i < 16; ++i)
        tick(dut);
    dut->rst_n_i = 1;

    // column ram starts at zero and the rtl never writes column 0
    std::fill(std::begin(col_top), std::end(col_top), 0);
    std::fill(std::begin(col_bot), std::end(col_bot), 0);
    std::fill(std::begin(framebuffer), std::end(framebuffer), floor_color);
}

static int dump_frame(Vstarting_position *dut)
{
    const uint64_t clocks = pixel_mode ? 5000000ULL : 100000ULL;
    for (uint64_t i = 0; i < clocks; ++i)
        tick(dut);

    FILE *f = std::fopen("frame0.ppm", "wb");
    if (!f)
    {
        std::perror("frame0.ppm");
        return 1;
    }

    std::fprintf(f, "P6\n%d %d\n255\n", screen_w, screen_h);
    for (int i = 0; i < screen_w * screen_h; ++i)
    {
        const uint32_t p = framebuffer[i];
        const uint8_t rgb[3] = {uint8_t(p >> 16), uint8_t(p >> 8), uint8_t(p)};
        std::fwrite(rgb, 1, 3, f);
    }
    std::fclose(f);

    std::printf("wrote frame0.ppm (%s mode)\n", pixel_mode ? "pixel" : "column");
    return 0;
}

int main(int argc, char **argv)
{
    Verilated::commandArgs(argc, argv);

    bool dump = false;
    for (int i = 1; i < argc; ++i)
    {
        if (!std::strcmp(argv[i], "--pixel"))
            pixel_mode = true;
        if (!std::strcmp(argv[i], "--dump"))
            dump = true;
    }

    auto dut = std::make_unique<Vstarting_position>();
    reset_dut(dut.get());

    if (dump)
    {
        const int rc = dump_frame(dut.get());
        dut->final();
        return rc;
    }

    if (SDL_Init(SDL_INIT_VIDEO | SDL_INIT_EVENTS) != 0)
    {
        std::fprintf(stderr, "sdl_init failed: %s\n", SDL_GetError());
        return 1;
    }

    SDL_Window *window = SDL_CreateWindow(
        pixel_mode ? "raycaster (pixel stream)" : "raycaster (column mode)",
        SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED,
        screen_w, screen_h, SDL_WINDOW_SHOWN);
    if (!window)
    {
        std::fprintf(stderr, "sdl_createwindow failed: %s\n", SDL_GetError());
        SDL_Quit();
        return 1;
    }

    SDL_Renderer *renderer = SDL_CreateRenderer(
        window, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);
    if (!renderer)
        renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED);
    if (!renderer)
    {
        std::fprintf(stderr, "sdl_createrenderer failed: %s\n", SDL_GetError());
        SDL_DestroyWindow(window);
        SDL_Quit();
        return 1;
    }

    SDL_Texture *texture = SDL_CreateTexture(
        renderer, SDL_PIXELFORMAT_ARGB8888, SDL_TEXTUREACCESS_STREAMING,
        screen_w, screen_h);
    if (!texture)
    {
        std::fprintf(stderr, "sdl_createtexture failed: %s\n", SDL_GetError());
        SDL_DestroyRenderer(renderer);
        SDL_DestroyWindow(window);
        SDL_Quit();
        return 1;
    }

    const int clocks_per_frame = pixel_mode ? clocks_pixel : clocks_column;

    bool running = true;
    bool show_map = true;
    bool key_w = false, key_s = false, key_a = false, key_d = false;
    bool tap_a = false, tap_d = false;
    double move_acc = 0.0, turn_acc = 0.0;

    const double freq = double(SDL_GetPerformanceFrequency());
    uint64_t last = SDL_GetPerformanceCounter();

    while (running)
    {
        SDL_Event e;
        while (SDL_PollEvent(&e))
        {
            if (e.type == SDL_QUIT)
                running = false;

            if (e.type == SDL_KEYDOWN && !e.key.repeat)
            {
                switch (e.key.keysym.sym)
                {
                case SDLK_ESCAPE:
                    running = false;
                    break;
                case SDLK_m:
                    show_map = !show_map;
                    break;
                case SDLK_w:
                    key_w = true;
                    break;
                case SDLK_s:
                    key_s = true;
                    break;
                case SDLK_a:
                    key_a = true;
                    tap_a = true;
                    break;
                case SDLK_d:
                    key_d = true;
                    tap_d = true;
                    break;
                default:
                    break;
                }
            }
            if (e.type == SDL_KEYUP)
            {
                switch (e.key.keysym.sym)
                {
                case SDLK_w:
                    key_w = false;
                    break;
                case SDLK_s:
                    key_s = false;
                    break;
                case SDLK_a:
                    key_a = false;
                    break;
                case SDLK_d:
                    key_d = false;
                    break;
                default:
                    break;
                }
            }
        }

        const uint64_t now = SDL_GetPerformanceCounter();
        const double dt = std::min(double(now - last) / freq, 0.1);
        last = now;

        const bool sprint = (SDL_GetModState() & KMOD_SHIFT) != 0;
        const bool moving = key_w != key_s;
        const bool turn_l = key_a || tap_a;
        const bool turn_r = key_d || tap_d;
        const bool turning = turn_l != turn_r;

        // turn elapsed time into button pulses, keep the fraction for next frame
        move_acc = moving ? move_acc + dt * move_rate * (sprint ? sprint_mult : 1.0) : 0.0;
        turn_acc = turning ? turn_acc + dt * turn_rate : 0.0;

        // a quick tap always turns at least once
        if (turning && (tap_a || tap_d))
            turn_acc = std::max(turn_acc, 1.0);
        tap_a = tap_d = false;

        const int move_n = std::min(int(move_acc), max_pulses);
        const int turn_n = std::min(int(turn_acc), max_pulses);
        move_acc -= move_n;
        turn_acc -= turn_n;

        if (move_n > 0)
            hold_buttons(dut.get(), move_n, key_w, key_s, false, false);
        if (turn_n > 0)
            hold_buttons(dut.get(), turn_n, false, false, turn_l, turn_r);

        for (int i = 0; i < clocks_per_frame; ++i)
            tick(dut.get());

        SDL_UpdateTexture(texture, nullptr, framebuffer, screen_w * sizeof(uint32_t));
        SDL_RenderClear(renderer);
        SDL_RenderCopy(renderer, texture, nullptr, nullptr);
        if (show_map)
            draw_minimap(renderer);
        SDL_RenderPresent(renderer);
    }

    dut->final();
    dut.reset();
    SDL_DestroyTexture(texture);
    SDL_DestroyRenderer(renderer);
    SDL_DestroyWindow(window);
    SDL_Quit();
    return 0;
}
