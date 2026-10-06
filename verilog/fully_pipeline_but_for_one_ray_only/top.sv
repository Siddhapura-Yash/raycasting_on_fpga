module top #(
    parameter int unsigned DATA_WIDTH = 10,
    parameter int unsigned SCREEN_WIDTH = 5,
    parameter int unsigned SPEED = 1,
    parameter int unsigned SCREEN_HEIGHT = 5
)(
    input logic clk_i,
    input logic rst_n_i,
    input logic data_in_valid_i,

    input logic signed [DATA_WIDTH-1:0]dir_x_i,
    input logic signed [DATA_WIDTH-1:0]dir_y_i,
    input logic [DATA_WIDTH-1:0]pos_x_i,
    input logic [DATA_WIDTH-1:0]pos_y_i,
    input logic signed [DATA_WIDTH-1:0]plane_x_i,
    input logic signed [DATA_WIDTH-1:0]plane_y_i

);

logic [DATA_WIDTH-1:0]plane_x;
logic [DATA_WIDTH-1:0]plane_y;

ray_generator #(
    .DATA_WIDTH(DATA_WIDTH),
    .SCREEN_WIDTH(SCREEN_WIDTH),
    .SPEED(SPEED)
)ray_generator_dut (
    .clk_i(clk_i),
    .rst_n_i(rst_n_i),
    .dir_x_i(dir_x_i),
    .dir_y_i(dir_y_i),
    .pos_x_i(pos_x_i),
    .pos_y_i(pos_y_i),
    .plane_x_i(plane_x_i),
    .plane_y_i(plane_y_i),
    .screen_x_i(10'd3),
    .data_in_valid_i(data_in_valid_i),

    .dir_x_o(dir_x),
    .dir_y_o(dir_y),
    .pos_x_o(pos_x),
    .pos_y_o(pos_y),
    .plane_x_o(plane_x),
    .plane_y_o(plane_y),
    .ray_dir_x_o(ray_dir_x),
    .ray_dir_y_o(ray_dir_y),
    .data_out_valid_o(data_out_valid)
);

logic data_out_valid;

logic signed [DATA_WIDTH+3:0]ray_dir_x;
logic signed [DATA_WIDTH+3:0]ray_dir_y;
logic [DATA_WIDTH-1:0]pos_x;
logic [DATA_WIDTH-1:0]pos_y;

logic [2*DATA_WIDTH:0]hit_distance;
logic signed [DATA_WIDTH+3:0]ray_dir_x_dda;
logic signed [DATA_WIDTH+3:0]ray_dir_y_dda;
logic signed [DATA_WIDTH-1:0]dir_x;
logic signed [DATA_WIDTH-1:0]dir_y;
logic signed [DATA_WIDTH-1:0]dir_x_dda;
logic signed [DATA_WIDTH-1:0]dir_y_dda;
logic hit_side;
logic data_out_valid_dda;

dda_algo #(
    .DATA_WIDTH(DATA_WIDTH)
)dda_algo_dut (
    .clk_i(clk_i),
    .rst_n_i(rst_n_i),
    .ray_dir_x_i(ray_dir_x),
    .ray_dir_y_i(ray_dir_y),
    .pos_x_i(pos_x),
    .pos_y_i(pos_y),
    .start_i(data_out_valid),

    .hit_distance_o(hit_distance),
    .ray_dir_x_o(ray_dir_x_dda),
    .ray_dir_y_o(ray_dir_y_dda),
    .dir_x_o(dir_x_dda),
    .dir_y_o(dir_y_dda),
    .hit_side_o(hit_side),
    .data_out_valid_o(data_out_valid_dda)
);

logic [3*DATA_WIDTH:0]wall_top;
logic [3*DATA_WIDTH:0]wall_bottom;
logic [3*DATA_WIDTH:0]wall_height;

perpendicular_distance #(
    .DATA_WIDTH(DATA_WIDTH),
    .SCREEN_WIDTH(SCREEN_WIDTH),
    .SCREEN_HEIGHT(SCREEN_HEIGHT)
)perpendicular_distance_dut (
    .clk_i(clk_i),
    .rst_n_i(rst_n_i),
    .hit_distance_i(hit_distance),
    .ray_dir_x_i(ray_dir_x_dda),
    .ray_dir_y_i(ray_dir_y_dda),
    .dir_x_i(dir_x),
    .dir_y_i(dir_y),
    .hit_side_i(hit_side),

    .wall_top_o(wall_top),
    .wall_bottom_o(wall_bottom),
    .wall_height_o(wall_height)
);




endmodule
