#include <verilated.h>
#include "Vstarting_position.h"
#include <SDL2/SDL.h>
#include <cstdint>
#include <cstdio>
#include <cmath>

// -----------------------------------------------------------------------------
// Display
// -----------------------------------------------------------------------------
static constexpr int SCREEN_WIDTH  = 640;
static constexpr int SCREEN_HEIGHT = 480;
static constexpr uint64_t MAX_FRAME_CYCLES = 10000000ULL;

static constexpr uint32_t CEILING_COLOR = 0xFF202020;
static constexpr uint32_t WALL_COLOR    = 0xFFB0B0B0;
static constexpr uint32_t FLOOR_COLOR   = 0xFF303030;

static uint32_t framebuffer[SCREEN_WIDTH * SCREEN_HEIGHT];

// -----------------------------------------------------------------------------
// Same map as the RTL
// -----------------------------------------------------------------------------
static constexpr int MAP_W = 12;
static constexpr int MAP_H = 12;

static const int MAP[MAP_H][MAP_W] = {
    {1,1,1,1,1,1,1,1,1,1,1,1},
    {1,0,0,0,0,0,0,0,0,0,0,1},
    {1,0,0,0,0,0,0,0,0,0,0,1},
    {1,0,0,1,1,1,0,0,0,0,0,1},
    {1,0,0,0,0,1,0,0,0,0,0,1},
    {1,0,0,0,0,1,0,0,0,0,0,1},
    {1,0,0,0,0,1,0,1,1,1,0,1},
    {1,0,0,0,0,0,0,0,0,0,0,1},
    {1,0,0,0,0,0,0,0,0,0,0,1},
    {1,0,0,0,0,0,0,0,0,0,0,1},
    {1,0,0,0,0,0,0,0,0,0,0,1},
    {1,1,1,1,1,1,1,1,1,1,1,1}
};

// -----------------------------------------------------------------------------
// DEBUG PLAYER STATE
//
// This is a SOFTWARE COPY used ONLY by the minimap.
// It does NOT connect to RTL and does NOT add any RTL pipeline latency.
//
// Q8.8:
//   256 = 1 world cell
//
// Must match the current RTL starting state.
// -----------------------------------------------------------------------------
static int32_t debug_pos_x = 640;  // 2.5 cells
static int32_t debug_pos_y = 640;  // 2.5 cells

static int32_t debug_dir_x = 256;  // +X
static int32_t debug_dir_y = 0;

// Keep this equal to RTL MOVE_STEP.
static constexpr int MOVE_STEP = 4;

// Keep these equal to the RTL rotation constants.
static constexpr int COS_5 = 255;
static constexpr int SIN_5 = 22;

// -----------------------------------------------------------------------------
// SDL renderer
// -----------------------------------------------------------------------------
static SDL_Renderer* g_renderer = nullptr;

// -----------------------------------------------------------------------------
// RTL clock
// -----------------------------------------------------------------------------
static void clock_tick(Vstarting_position* dut)
{
    dut->clk_i = 0;
    dut->eval();

    dut->clk_i = 1;
    dut->eval();

    dut->clk_i = 0;
    dut->eval();
}

// -----------------------------------------------------------------------------
// 3D framebuffer
// -----------------------------------------------------------------------------
static void clear_frame()
{
    for (int y = 0; y < SCREEN_HEIGHT; ++y) {
        for (int x = 0; x < SCREEN_WIDTH; ++x) {
            framebuffer[y * SCREEN_WIDTH + x] =
                (y < SCREEN_HEIGHT / 2)
                    ? CEILING_COLOR
                    : FLOOR_COLOR;
        }
    }
}

static void draw_column(int x, int top, int bottom)
{
    if (x < 0 || x >= SCREEN_WIDTH)
        return;

    if (top < 0) top = 0;
    if (bottom < 0) bottom = 0;
    if (top > SCREEN_HEIGHT) top = SCREEN_HEIGHT;
    if (bottom > SCREEN_HEIGHT) bottom = SCREEN_HEIGHT;

    if (bottom < top)
        bottom = top;

    for (int y = 0; y < top; ++y)
        framebuffer[y * SCREEN_WIDTH + x] = CEILING_COLOR;

    for (int y = top; y < bottom; ++y)
        framebuffer[y * SCREEN_WIDTH + x] = WALL_COLOR;

    for (int y = bottom; y < SCREEN_HEIGHT; ++y)
        framebuffer[y * SCREEN_WIDTH + x] = FLOOR_COLOR;
}

// -----------------------------------------------------------------------------
// SOFTWARE DEBUG PLAYER UPDATE
// -----------------------------------------------------------------------------
static void update_debug_player(
    bool forward,
    bool backward,
    bool left,
    bool right)
{
    // Movement.
    if (forward) {
        debug_pos_x += (debug_dir_x * MOVE_STEP) >> 8;
        debug_pos_y += (debug_dir_y * MOVE_STEP) >> 8;
    }

    if (backward) {
        debug_pos_x -= (debug_dir_x * MOVE_STEP) >> 8;
        debug_pos_y -= (debug_dir_y * MOVE_STEP) >> 8;
    }

    // Right = clockwise because +Y points down.
    if (right) {
        const int32_t old_x = debug_dir_x;
        const int32_t old_y = debug_dir_y;

        debug_dir_x =
            ((old_x * COS_5) - (old_y * SIN_5)) >> 8;

        debug_dir_y =
            ((old_x * SIN_5) + (old_y * COS_5)) >> 8;
    }

    // Left = counter-clockwise.
    if (left) {
        const int32_t old_x = debug_dir_x;
        const int32_t old_y = debug_dir_y;

        debug_dir_x =
            ((old_x * COS_5) + (old_y * SIN_5)) >> 8;

        debug_dir_y =
            ((-old_x * SIN_5) + (old_y * COS_5)) >> 8;
    }
}

// -----------------------------------------------------------------------------
// Draw software minimap.
//
// This does NOT use pos_x_o/pos_y_o/dir_x_o/dir_y_o.
// It is deliberately independent from the RTL.
//
// The minimap is in the top-right corner.
// -----------------------------------------------------------------------------
static void draw_minimap()
{
    constexpr int CELL = 12;
    constexpr int PAD  = 8;

    const int map_w_px = MAP_W * CELL;
    const int map_h_px = MAP_H * CELL;

    const int origin_x =
        SCREEN_WIDTH - map_w_px - PAD;

    const int origin_y = PAD;

    // Background around map.
    SDL_Rect bg{
        origin_x - 3,
        origin_y - 3,
        map_w_px + 6,
        map_h_px + 6
    };

    SDL_SetRenderDrawColor(
        g_renderer, 10, 10, 10, 255);

    SDL_RenderFillRect(
        g_renderer, &bg);

    // Draw map.
    for (int y = 0; y < MAP_H; ++y) {
        for (int x = 0; x < MAP_W; ++x) {

            SDL_Rect cell{
                origin_x + x * CELL,
                origin_y + y * CELL,
                CELL - 1,
                CELL - 1
            };

            if (MAP[y][x]) {
                SDL_SetRenderDrawColor(
                    g_renderer, 180, 180, 180, 255);
            }
            else {
                SDL_SetRenderDrawColor(
                    g_renderer, 45, 45, 45, 255);
            }

            SDL_RenderFillRect(
                g_renderer, &cell);
        }
    }

    // Q8.8 -> map coordinates.
    const float player_x =
        debug_pos_x / 256.0f;

    const float player_y =
        debug_pos_y / 256.0f;

    const float px =
        origin_x + player_x * CELL;

    const float py =
        origin_y + player_y * CELL;

    // Player.
    SDL_SetRenderDrawColor(
        g_renderer, 255, 50, 50, 255);

    SDL_Rect player{
        static_cast<int>(px) - 4,
        static_cast<int>(py) - 4,
        8,
        8
    };

    SDL_RenderFillRect(
        g_renderer, &player);

    // Direction arrow.
    const float dx =
        debug_dir_x / 256.0f;

    const float dy =
        debug_dir_y / 256.0f;

    constexpr float ARROW_LENGTH = 20.0f;

    const float end_x =
        px + dx * ARROW_LENGTH;

    const float end_y =
        py + dy * ARROW_LENGTH;

    SDL_RenderDrawLine(
        g_renderer,
        static_cast<int>(px),
        static_cast<int>(py),
        static_cast<int>(end_x),
        static_cast<int>(end_y)
    );

    // Direction arrow head.
    const float length =
        std::sqrt(dx * dx + dy * dy);

    if (length > 0.001f) {
        const float ux = dx / length;
        const float uy = dy / length;

        const float side_x = -uy;
        const float side_y = ux;

        constexpr float HEAD = 6.0f;

        SDL_RenderDrawLine(
            g_renderer,
            static_cast<int>(end_x),
            static_cast<int>(end_y),
            static_cast<int>(
                end_x - ux * HEAD + side_x * HEAD * 0.5f),
            static_cast<int>(
                end_y - uy * HEAD + side_y * HEAD * 0.5f)
        );

        SDL_RenderDrawLine(
            g_renderer,
            static_cast<int>(end_x),
            static_cast<int>(end_y),
            static_cast<int>(
                end_x - ux * HEAD - side_x * HEAD * 0.5f),
            static_cast<int>(
                end_y - uy * HEAD - side_y * HEAD * 0.5f)
        );
    }
}

// -----------------------------------------------------------------------------
// Render one complete RTL frame.
// -----------------------------------------------------------------------------
static bool render_frame(
    Vstarting_position* dut,
    bool forward,
    bool backward,
    bool left,
    bool right)
{
    clear_frame();

    // Update the software minimap state once per player command.
    update_debug_player(
        forward,
        backward,
        left,
        right
    );

    // Send exactly one button pulse to RTL.
    dut->forward_button_i = forward ? 1 : 0;
    dut->back_button_i    = backward ? 1 : 0;
    dut->left_button_i    = left ? 1 : 0;
    dut->right_button_i   = right ? 1 : 0;

    clock_tick(dut);

    // Release buttons.
    dut->forward_button_i = 0;
    dut->back_button_i    = 0;
    dut->left_button_i    = 0;
    dut->right_button_i   = 0;

    int columns_received = 0;
    uint64_t cycles = 0;

    while (columns_received < SCREEN_WIDTH) {

        clock_tick(dut);
        ++cycles;

        if (dut->data_out_valid_o) {

            const int x =
                static_cast<int>(dut->screen_x_o);

            const int top =
                static_cast<int>(dut->wall_top_o);

            const int bottom =
                static_cast<int>(dut->wall_bottom_o);

            draw_column(x, top, bottom);

            ++columns_received;
        }

        if (cycles >= MAX_FRAME_CYCLES) {
            std::fprintf(
                stderr,
                "ERROR: RTL frame timeout. Received %d/%d columns.\n",
                columns_received,
                SCREEN_WIDTH
            );
            return false;
        }
    }

    return true;
}

// -----------------------------------------------------------------------------
// Main
// -----------------------------------------------------------------------------
int main(int argc, char** argv)
{
    Verilated::commandArgs(argc, argv);

    if (SDL_Init(SDL_INIT_VIDEO | SDL_INIT_EVENTS) != 0) {
        std::fprintf(
            stderr,
            "SDL_Init failed: %s\n",
            SDL_GetError()
        );
        return 1;
    }

    SDL_Window* window = SDL_CreateWindow(
        "FPGA Raycaster - Verilator",
        SDL_WINDOWPOS_CENTERED,
        SDL_WINDOWPOS_CENTERED,
        SCREEN_WIDTH,
        SCREEN_HEIGHT,
        SDL_WINDOW_SHOWN
    );

    if (!window) {
        std::fprintf(
            stderr,
            "SDL_CreateWindow failed: %s\n",
            SDL_GetError()
        );
        SDL_Quit();
        return 1;
    }

    g_renderer = SDL_CreateRenderer(
        window,
        -1,
        SDL_RENDERER_ACCELERATED
    );

    if (!g_renderer) {
        std::fprintf(
            stderr,
            "SDL_CreateRenderer failed: %s\n",
            SDL_GetError()
        );
        SDL_DestroyWindow(window);
        SDL_Quit();
        return 1;
    }

    SDL_Texture* texture = SDL_CreateTexture(
        g_renderer,
        SDL_PIXELFORMAT_ARGB8888,
        SDL_TEXTUREACCESS_STREAMING,
        SCREEN_WIDTH,
        SCREEN_HEIGHT
    );

    if (!texture) {
        std::fprintf(
            stderr,
            "SDL_CreateTexture failed: %s\n",
            SDL_GetError()
        );
        SDL_DestroyRenderer(g_renderer);
        SDL_DestroyWindow(window);
        SDL_Quit();
        return 1;
    }

    // -------------------------------------------------------------------------
    // RTL
    // -------------------------------------------------------------------------
    Vstarting_position* dut =
        new Vstarting_position;

    dut->clk_i = 0;
    dut->rst_n_i = 0;

    dut->forward_button_i = 0;
    dut->back_button_i    = 0;
    dut->left_button_i    = 0;
    dut->right_button_i   = 0;

    // Reset.
    for (int i = 0; i < 10; ++i)
        clock_tick(dut);

    dut->rst_n_i = 1;

    // Initial frame.
    if (!render_frame(
            dut,
            false,
            false,
            false,
            false)) {

        delete dut;
        SDL_DestroyTexture(texture);
        SDL_DestroyRenderer(g_renderer);
        SDL_DestroyWindow(window);
        SDL_Quit();

        return 1;
    }

    bool running = true;

    bool key_w = false;
    bool key_s = false;
    bool key_a = false;
    bool key_d = false;

    while (running) {

        SDL_Event event;

        while (SDL_PollEvent(&event)) {

            if (event.type == SDL_QUIT)
                running = false;

            if (event.type == SDL_KEYDOWN &&
                !event.key.repeat) {

                switch (event.key.keysym.sym) {

                    case SDLK_ESCAPE:
                        running = false;
                        break;

                    case SDLK_w:
                        key_w = true;
                        break;

                    case SDLK_s:
                        key_s = true;
                        break;

                    case SDLK_a:
                        key_a = true;
                        break;

                    case SDLK_d:
                        key_d = true;
                        break;

                    default:
                        break;
                }
            }

            if (event.type == SDL_KEYUP) {

                switch (event.key.keysym.sym) {

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

        if (key_w || key_s || key_a || key_d) {

            if (!render_frame(
                    dut,
                    key_w,
                    key_s,
                    key_a,
                    key_d)) {

                running = false;
                continue;
            }
        }

        SDL_UpdateTexture(
            texture,
            nullptr,
            framebuffer,
            SCREEN_WIDTH * sizeof(uint32_t)
        );

        SDL_RenderClear(g_renderer);

        SDL_RenderCopy(
            g_renderer,
            texture,
            nullptr,
            nullptr
        );

        // Software-only debug minimap.
        draw_minimap();

        SDL_RenderPresent(g_renderer);

        SDL_Delay(1);
    }

    delete dut;

    SDL_DestroyTexture(texture);
    SDL_DestroyRenderer(g_renderer);
    SDL_DestroyWindow(window);

    SDL_Quit();

    return 0;
}
