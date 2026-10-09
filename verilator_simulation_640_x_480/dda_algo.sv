module dda_algo #(
    parameter int unsigned DATA_WIDTH = 8
)(
    input logic clk_i,
    input logic rst_n_i,

    input logic signed [DATA_WIDTH+3:0]ray_dir_x_i,
    input logic signed [DATA_WIDTH+3:0]ray_dir_y_i,
    input logic [DATA_WIDTH-1:0]pos_x_i,
    input logic [DATA_WIDTH-1:0]pos_y_i,
    input logic start_i,
    input logic signed [DATA_WIDTH-1:0]dir_x_i,
    input logic signed [DATA_WIDTH-1:0]dir_y_i,

    input logic [DATA_WIDTH-1:0]screen_x_i,

    output logic [DATA_WIDTH-1:0]screen_x_o,

    output logic [2*DATA_WIDTH:0]hit_distance_o,
    output logic signed [DATA_WIDTH+3:0]ray_dir_x_o,
    output logic signed [DATA_WIDTH+3:0]ray_dir_y_o,
    output logic signed [DATA_WIDTH-1:0]dir_x_o,
    output logic signed [DATA_WIDTH-1:0]dir_y_o,
    output logic hit_side_o,
    output logic data_out_valid_o,
    output logic [DATA_WIDTH-1:0]mapx_o,
    output logic [DATA_WIDTH-1:0]mapy_o,

    output logic busy_o,
    output logic done_o
);

logic signed [DATA_WIDTH-1:0]step_x;
logic signed [DATA_WIDTH-1:0]step_y;
logic [DATA_WIDTH-1:0]map_x;
logic [DATA_WIDTH-1:0]map_y;
logic [DATA_WIDTH-1:0]abs_ray_x;
logic [DATA_WIDTH-1:0]abs_ray_y;
logic [DATA_WIDTH-1:0]next_x_boundary;
logic [DATA_WIDTH-1:0]next_y_boundary;
logic [2*DATA_WIDTH:0]delta_dis_y;
logic [2*DATA_WIDTH:0]delta_dis_x;
logic [2*DATA_WIDTH:0]side_x;
logic [2*DATA_WIDTH:0]side_y;
// logic [2*DATA_WIDTH:0]hit_distance;
logic [3:0]state;

parameter int unsigned INIT = 0;
parameter int unsigned CALCULATE_DDA = 1;
parameter int unsigned SIDE_CALCULATE = 2;
parameter int unsigned COMPARE = 3;
parameter int unsigned MOVE_X = 4;
parameter int unsigned MOVE_Y = 5;
parameter int unsigned CHECK_WALL = 6;
parameter int unsigned HIT = 7;

localparam X_HIT = 1'b1;
localparam Y_HIT = 1'b0;
logic hit_side;

assign step_x = ray_dir_x_i > 0 ? 1 : -1;
assign step_y = ray_dir_y_i > 0 ? 1 : -1;

logic signed [DATA_WIDTH+3:0]ray_dir_x_stage1;
logic signed [DATA_WIDTH+3:0]ray_dir_y_stage1;
logic signed [DATA_WIDTH+3:0]ray_dir_x_stage2;
logic signed [DATA_WIDTH+3:0]ray_dir_y_stage2;
logic signed [DATA_WIDTH+3:0]ray_dir_x_stage3;
logic signed [DATA_WIDTH+3:0]ray_dir_y_stage3;
logic signed [DATA_WIDTH+3:0]ray_dir_x_stage4;
logic signed [DATA_WIDTH+3:0]ray_dir_y_stage4;
logic signed [DATA_WIDTH+3:0]ray_dir_x_stage5;
logic signed [DATA_WIDTH+3:0]ray_dir_y_stage5;
logic signed [DATA_WIDTH+3:0]ray_dir_x_stage6;
logic signed [DATA_WIDTH+3:0]ray_dir_y_stage6;

logic signed [DATA_WIDTH-1:0]dir_x_o_stage1;
logic signed [DATA_WIDTH-1:0]dir_y_o_stage1;
logic signed [DATA_WIDTH-1:0]dir_x_o_stage2;
logic signed [DATA_WIDTH-1:0]dir_y_o_stage2;
logic signed [DATA_WIDTH-1:0]dir_x_o_stage3;
logic signed [DATA_WIDTH-1:0]dir_y_o_stage3;
logic signed [DATA_WIDTH-1:0]dir_x_o_stage4;
logic signed [DATA_WIDTH-1:0]dir_y_o_stage4;
logic signed [DATA_WIDTH-1:0]dir_x_o_stage5;
logic signed [DATA_WIDTH-1:0]dir_y_o_stage5;
logic signed [DATA_WIDTH-1:0]dir_x_o_stage6;
logic signed [DATA_WIDTH-1:0]dir_y_o_stage6;

logic [DATA_WIDTH-1:0]screen_x_o_stage1;
logic [DATA_WIDTH-1:0]screen_x_o_stage2;
logic [DATA_WIDTH-1:0]screen_x_o_stage3;
logic [DATA_WIDTH-1:0]screen_x_o_stage4;
logic [DATA_WIDTH-1:0]screen_x_o_stage5;
logic [DATA_WIDTH-1:0]screen_x_o_stage6;

always_ff@(posedge clk_i or negedge rst_n_i) begin
    if(!rst_n_i) begin
        map_x <= {DATA_WIDTH{1'b0}};
        map_y <= {DATA_WIDTH{1'b0}};

        abs_ray_x <= {DATA_WIDTH{1'b0}};
        abs_ray_y <= {DATA_WIDTH{1'b0}};

        delta_dis_x <= {DATA_WIDTH{1'b0}};
        delta_dis_y <= {DATA_WIDTH{1'b0}};

        next_x_boundary <= {DATA_WIDTH{1'b0}};
        next_y_boundary <= {DATA_WIDTH{1'b0}};
        data_out_valid_o <= 1'b0;
        busy_o <= 1'b0;
        done_o <= 1'b0;
        dir_x_o <= 1'b0;
        dir_y_o <= 1'b0;
        hit_distance_o <= {2*DATA_WIDTH{1'b0}};
        mapx_o <= {DATA_WIDTH{1'b0}};
        mapy_o <= {DATA_WIDTH{1'b0}};
        screen_x_o <= {DATA_WIDTH{1'b0}};
        state <= INIT;
    end
    else begin
        case(state)

        INIT : begin
            if(start_i) begin
                map_x <= pos_x_i >> 8;
                map_y <= pos_y_i >> 8;
                abs_ray_x <= (ray_dir_x_i < 0) ? -ray_dir_x_i : ray_dir_x_i;
                abs_ray_y <= (ray_dir_y_i < 0) ? -ray_dir_y_i : ray_dir_y_i;
                ray_dir_x_stage1 <= ray_dir_x_i;
                ray_dir_y_stage1 <= ray_dir_y_i;
                busy_o <= 1'b1;
                done_o <= 1'b0;
                state <= CALCULATE_DDA;
                dir_x_o_stage1 <= dir_x_i;
                dir_y_o_stage1 <= dir_y_i;
                data_out_valid_o <= 1'b0;
                screen_x_o_stage1 <= screen_x_i;
            end
            else begin
                busy_o <= 1'b0;
                done_o <= 1'b0;
                data_out_valid_o <= 1'b0;
                state <= INIT;
            end
        end

        CALCULATE_DDA : begin
            delta_dis_x <= (abs_ray_x == 0) ? 1023 : (256 * 256)/abs_ray_x;
            delta_dis_y <= (abs_ray_y == 0) ? 1023 : (256 * 256)/abs_ray_y;
            next_x_boundary <= (step_x > 0) ? ((map_x + 1) * 256) - pos_x_i : pos_x_i - (map_x * 256);
            next_y_boundary <= (step_y > 0) ? ((map_y + 1) * 256) - pos_y_i : pos_y_i - (map_y * 256);
            ray_dir_x_stage2 <= ray_dir_x_stage1;
            ray_dir_y_stage2 <= ray_dir_y_stage1;
            dir_x_o_stage2 <= dir_x_o_stage1;
            dir_y_o_stage2 <= dir_y_o_stage1;
            screen_x_o_stage2 <= screen_x_o_stage1;
            state <= SIDE_CALCULATE;
        end

        SIDE_CALCULATE : begin
            side_x <= (abs_ray_x == 0) ? 1023 : (next_x_boundary *256)/abs_ray_x;
            side_y <= (abs_ray_y == 0) ? 1023 : (next_y_boundary *256)/abs_ray_y;
            ray_dir_x_stage3 <= ray_dir_x_stage2;
            ray_dir_y_stage3 <= ray_dir_y_stage2;
            dir_x_o_stage3 <= dir_x_o_stage2;
            dir_y_o_stage3 <= dir_y_o_stage2;
            screen_x_o_stage3 <= screen_x_o_stage2;
            state <= COMPARE;
        end

        COMPARE : begin
            if(side_x < side_y)begin
                state <= MOVE_X;
            end
            else begin
                state <= MOVE_Y;
            end
            dir_x_o_stage4 <= dir_x_o_stage3;
            dir_y_o_stage4 <= dir_y_o_stage3;
            ray_dir_x_stage4 <= ray_dir_x_stage3;
            ray_dir_y_stage4 <= ray_dir_y_stage3;
            screen_x_o_stage4 <= screen_x_o_stage3;
        end

        MOVE_X : begin
            map_x <= map_x + step_x;
            side_x <= side_x + delta_dis_x;
            hit_side <= X_HIT;
            ray_dir_x_stage5 <= ray_dir_x_stage4;
            ray_dir_y_stage5 <= ray_dir_y_stage4;
            dir_x_o_stage5 <= dir_x_o_stage4;
            dir_y_o_stage5 <= dir_y_o_stage4;
            screen_x_o_stage5 <= screen_x_o_stage4;
            state <= CHECK_WALL;
        end

        MOVE_Y : begin
            map_y <= map_y + step_y;
            side_y <= side_y + delta_dis_y;
            hit_side <= Y_HIT;
            ray_dir_x_stage5 <= ray_dir_x_stage4;
            ray_dir_y_stage5 <= ray_dir_y_stage4;
            dir_x_o_stage5 <= dir_x_o_stage4;
            dir_y_o_stage5 <= dir_y_o_stage4;
            screen_x_o_stage5 <= screen_x_o_stage4;
            state <= CHECK_WALL;
        end

        CHECK_WALL : begin
            if(map[map_y][map_x] == 1)begin
                ray_dir_x_stage6 <= ray_dir_x_stage5;
                ray_dir_y_stage6 <= ray_dir_y_stage5;
                dir_x_o_stage6 <= dir_x_o_stage5;
                dir_y_o_stage6 <= dir_y_o_stage5;
                screen_x_o_stage6 <= screen_x_o_stage5;
                state <= HIT;
                        if (hit_side == X_HIT ) begin
                            hit_distance_o <= side_x - delta_dis_x;
                        end
                        else begin
                            hit_distance_o <= side_y - delta_dis_y;
                        end
            end
            else begin
                state <= COMPARE;
            end
        end

        HIT : begin
            ray_dir_x_o <= ray_dir_x_stage6;
            ray_dir_y_o <= ray_dir_y_stage6;
            dir_x_o <= dir_x_o_stage6;
            dir_x_o <= dir_y_o_stage6;
            screen_x_o <= screen_x_o_stage6;
            data_out_valid_o <= 1'b1;
            done_o <= 1'b1;
            busy_o <= 1'b0;
            mapx_o <= map_x;
            mapy_o <= map_y;
            state <= INIT;
        end

        default : state <= INIT;
        endcase
    end
end


localparam int MAP_WIDTH  = 12;
localparam int MAP_HEIGHT = 12;

logic map [0:MAP_HEIGHT-1][0:MAP_WIDTH-1];

initial begin

    // Y = 0
    map[0][0]  = 1;
    map[0][1]  = 1;
    map[0][2]  = 1;
    map[0][3]  = 1;
    map[0][4]  = 1;
    map[0][5]  = 1;
    map[0][6]  = 1;
    map[0][7]  = 1;
    map[0][8]  = 1;
    map[0][9]  = 1;
    map[0][10] = 1;
    map[0][11] = 1;

    // Y = 1
    map[1][0]  = 1;
    map[1][1]  = 0;
    map[1][2]  = 0;
    map[1][3]  = 0;
    map[1][4]  = 0;
    map[1][5]  = 0;
    map[1][6]  = 0;
    map[1][7]  = 0;
    map[1][8]  = 0;
    map[1][9]  = 0;
    map[1][10] = 0;
    map[1][11] = 1;

    // Y = 2
    map[2][0]  = 1;
    map[2][1]  = 0;
    map[2][2]  = 0;
    map[2][3]  = 0;
    map[2][4]  = 0;
    map[2][5]  = 0;
    map[2][6]  = 0;
    map[2][7]  = 0;
    map[2][8]  = 0;
    map[2][9]  = 0;
    map[2][10] = 0;
    map[2][11] = 1;

    // Y = 3
    map[3][0]  = 1;
    map[3][1]  = 0;
    map[3][2]  = 0;
    map[3][3]  = 1;
    map[3][4]  = 1;
    map[3][5]  = 1;
    map[3][6]  = 0;
    map[3][7]  = 0;
    map[3][8]  = 0;
    map[3][9]  = 0;
    map[3][10] = 0;
    map[3][11] = 1;

    // Y = 4
    map[4][0]  = 1;
    map[4][1]  = 0;
    map[4][2]  = 0;
    map[4][3]  = 0;
    map[4][4]  = 0;
    map[4][5]  = 1;
    map[4][6]  = 0;
    map[4][7]  = 0;
    map[4][8]  = 0;
    map[4][9]  = 0;
    map[4][10] = 0;
    map[4][11] = 1;

    // Y = 5
    map[5][0]  = 1;
    map[5][1]  = 0;
    map[5][2]  = 0;
    map[5][3]  = 0;
    map[5][4]  = 0;
    map[5][5]  = 1;
    map[5][6]  = 0;
    map[5][7]  = 0;
    map[5][8]  = 0;
    map[5][9]  = 0;
    map[5][10] = 0;
    map[5][11] = 1;

    // Y = 6
    map[6][0]  = 1;
    map[6][1]  = 0;
    map[6][2]  = 0;
    map[6][3]  = 0;
    map[6][4]  = 0;
    map[6][5]  = 1;
    map[6][6]  = 0;
    map[6][7]  = 1;
    map[6][8]  = 1;
    map[6][9]  = 1;
    map[6][10] = 0;
    map[6][11] = 1;

    // Y = 7
    map[7][0]  = 1;
    map[7][1]  = 0;
    map[7][2]  = 0;
    map[7][3]  = 0;
    map[7][4]  = 0;
    map[7][5]  = 0;
    map[7][6]  = 0;
    map[7][7]  = 0;
    map[7][8]  = 0;
    map[7][9]  = 0;
    map[7][10] = 0;
    map[7][11] = 1;

    // Y = 8
    map[8][0]  = 1;
    map[8][1]  = 0;
    map[8][2]  = 0;
    map[8][3]  = 0;
    map[8][4]  = 0;
    map[8][5]  = 0;
    map[8][6]  = 0;
    map[8][7]  = 0;
    map[8][8]  = 0;
    map[8][9]  = 0;
    map[8][10] = 0;
    map[8][11] = 1;

    // Y = 9
    map[9][0]  = 1;
    map[9][1]  = 0;
    map[9][2]  = 0;
    map[9][3]  = 0;
    map[9][4]  = 0;
    map[9][5]  = 0;
    map[9][6]  = 0;
    map[9][7]  = 0;
    map[9][8]  = 0;
    map[9][9]  = 0;
    map[9][10] = 0;
    map[9][11] = 1;

    // Y = 10
    map[10][0]  = 1;
    map[10][1]  = 0;
    map[10][2]  = 0;
    map[10][3]  = 0;
    map[10][4]  = 0;
    map[10][5]  = 0;
    map[10][6]  = 0;
    map[10][7]  = 0;
    map[10][8]  = 0;
    map[10][9]  = 0;
    map[10][10] = 0;
    map[10][11] = 1;

    // Y = 11
    map[11][0]  = 1;
    map[11][1]  = 1;
    map[11][2]  = 1;
    map[11][3]  = 1;
    map[11][4]  = 1;
    map[11][5]  = 1;
    map[11][6]  = 1;
    map[11][7]  = 1;
    map[11][8]  = 1;
    map[11][9]  = 1;
    map[11][10] = 1;
    map[11][11] = 1;

end

endmodule
