module perpendicular_distance #(
    parameter int unsigned DATA_WIDTH = 9,
    parameter int unsigned SCREEN_WIDTH = 5,
    parameter int unsigned SCREEN_HEIGHT = 5
)(
    input logic clk_i,
    input logic rst_n_i,

    input logic [2*DATA_WIDTH:0]hit_distance_i,
    input logic signed [DATA_WIDTH+3:0]ray_dir_x_i,
    input logic signed [DATA_WIDTH+3:0]ray_dir_y_i,
    input logic signed [DATA_WIDTH-1:0]dir_x_i,
    input logic signed [DATA_WIDTH-1:0]dir_y_i,
    input logic hit_side_i
);

logic signed [3*DATA_WIDTH:0]perp_result_temp;
logic [3*DATA_WIDTH:0]perp_result;

logic signed [3*DATA_WIDTH:0]x_mul_temp;
assign x_mul_temp = ray_dir_x_i * dir_x_i;

logic signed [3*DATA_WIDTH:0]y_mul_temp;
assign y_mul_temp = ray_dir_y_i * dir_y_i;

logic [3*DATA_WIDTH:0]square_temp;
assign square_temp = ((dir_x_i*dir_x_i) + (dir_y_i*dir_y_i));

logic [3*DATA_WIDTH:0]abs_mul_x;
logic [3*DATA_WIDTH:0]abs_mul_y;

assign abs_mul_x = x_mul_temp < 0 ? -x_mul_temp : x_mul_temp;
assign abs_mul_y = y_mul_temp < 0 ? -y_mul_temp : y_mul_temp;

assign perp_result_temp = (abs_mul_x + abs_mul_y) * hit_distance_i;

assign perp_result = perp_result_temp / square_temp;



logic [3*DATA_WIDTH:0]wall_height;

assign wall_height = (SCREEN_HEIGHT * 256) / perp_result;

logic [3*DATA_WIDTH:0]wall_top;
logic [3*DATA_WIDTH:0]wall_bottom;

assign wall_top    = (SCREEN_HEIGHT - wall_height) / 2;
assign wall_bottom = (SCREEN_HEIGHT + wall_height) / 2;

endmodule
