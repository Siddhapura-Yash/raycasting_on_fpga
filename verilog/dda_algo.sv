module dda_algo #(
    parameter int unsigned DATA_WIDTH = 8
)(
    input logic clk_i,
    input logic rst_n_i,

    input logic signed [DATA_WIDTH+3:0]ray_dir_x_i,
    input logic signed [DATA_WIDTH+3:0]ray_dir_y_i,
    input logic [DATA_WIDTH-1:0]pos_x_i,
    input logic [DATA_WIDTH-1:0]pos_y_i
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
logic [2*DATA_WIDTH:0]hit_distance;
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

assign step_x = ray_dir_x_i > 0 ? 1'b1 : -1;
assign step_y = ray_dir_y_i > 0 ? 1'b1 : -1;

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
        state <= INIT;
    end
    else begin
        case(state)

        INIT : begin
            map_x <= pos_x_i >> 8;
            map_y <= pos_y_i >> 8;
            abs_ray_x <= (ray_dir_x_i < 0) ? -ray_dir_x_i : ray_dir_x_i;
            abs_ray_y <= (ray_dir_y_i < 0) ? -ray_dir_y_i : ray_dir_y_i;
            state <= CALCULATE_DDA;
        end

        CALCULATE_DDA : begin
            delta_dis_x <= (abs_ray_x == 0) ? 1023 : (256 * 256)/abs_ray_x;
            delta_dis_y <= (abs_ray_y == 0) ? 1023 : (256 * 256)/abs_ray_y;
            next_x_boundary <= (step_x > 0) ? ((map_x + 1) * 256) - pos_x_i : pos_x_i - (map_x * 256);
            next_y_boundary <= (step_y > 0) ? ((map_y + 1) * 256) - pos_y_i : pos_y_i - (map_y * 256);
            state <= SIDE_CALCULATE;
        end

        SIDE_CALCULATE : begin
            side_x <= (abs_ray_x == 0) ? 1023 : (next_x_boundary *256)/abs_ray_x;
            side_y <= (abs_ray_y == 0) ? 1023 : (next_y_boundary *256)/abs_ray_y;
            state <= COMPARE;
        end

        COMPARE : begin
            if(side_x < side_y)begin
                state <= MOVE_X;
            end
            else begin
                state <= MOVE_Y;
            end
        end

        MOVE_X : begin
            map_x <= map_x + step_x;
            side_x <= side_x + delta_dis_x;
            hit_side <= X_HIT;
            state <= CHECK_WALL;
        end

        MOVE_Y : begin
            map_y <= map_y + step_y;
            side_y <= side_y + delta_dis_y;
            hit_side <= Y_HIT;
            state <= CHECK_WALL;
        end

        CHECK_WALL : begin
            if(map[map_y][map_x] == 1)begin
                state <= HIT;
                    if (hit_side == X_HIT ) begin
                        hit_distance <= side_x - delta_dis_x;
                    end
                    else begin
                        hit_distance <= side_y - delta_dis_y;
                    end
            end
            else begin
                state <= COMPARE;
            end
        end

        HIT : begin

        end

        default : state <= INIT;
        endcase
    end
end










localparam int MAP_WIDTH  = 7;
localparam int MAP_HEIGHT = 7;

logic map [0:MAP_HEIGHT-1][0:MAP_WIDTH-1];

initial begin 

    // Y = 0
    map[0][0] = 1;
    map[0][1] = 1;
    map[0][2] = 1;
    map[0][3] = 1;
    map[0][4] = 1;
    map[0][5] = 1;
    map[0][6] = 1;

    // Y = 1
    map[1][0] = 1;
    map[1][1] = 0;
    map[1][2] = 0;
    map[1][3] = 1;  // <-- wall our ray should hit
    map[1][4] = 0;
    map[1][5] = 0;
    map[1][6] = 1;

    // Y = 2
    map[2][0] = 1;
    map[2][1] = 0;
    map[2][2] = 0;  // <-- player is here
    map[2][3] = 0;
    map[2][4] = 0;
    map[2][5] = 0;
    map[2][6] = 1;

    // Y = 3
    map[3][0] = 1;
    map[3][1] = 0;
    map[3][2] = 0;
    map[3][3] = 0;
    map[3][4] = 0;
    map[3][5] = 0;
    map[3][6] = 1;

    // Y = 4
    map[4][0] = 1;
    map[4][1] = 0;
    map[4][2] = 0;
    map[4][3] = 0;
    map[4][4] = 0;
    map[4][5] = 0;
    map[4][6] = 1;

    // Y = 5
    map[5][0] = 1;
    map[5][1] = 0;
    map[5][2] = 0;
    map[5][3] = 0;
    map[5][4] = 0;
    map[5][5] = 0;
    map[5][6] = 1;

    // Y = 6
    map[6][0] = 1;
    map[6][1] = 1;
    map[6][2] = 1;
    map[6][3] = 1;
    map[6][4] = 1;
    map[6][5] = 1;
    map[6][6] = 1;

end


endmodule
