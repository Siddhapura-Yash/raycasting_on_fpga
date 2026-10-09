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
    input logic hit_side_i,
    input logic [DATA_WIDTH-1:0]map_x_i,
    input logic [DATA_WIDTH-1:0]map_y_i,
    input logic data_in_valid_i,
    input logic [DATA_WIDTH-1:0]screen_x_i,

    output logic [DATA_WIDTH-1:0]screen_x_o,
    output logic [3*DATA_WIDTH:0]wall_top_o,
    output logic [3*DATA_WIDTH:0]wall_bottom_o,
    output logic [3*DATA_WIDTH:0]wall_height_o,
    output logic [DATA_WIDTH-1:0]map_x_o,
    output logic [DATA_WIDTH-1:0]map_y_o,
    output logic data_out_valid_o
);
assign screen_x_o = screen_x_i;
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

logic signed [3*DATA_WIDTH:0] dot_temp;
logic        [3*DATA_WIDTH:0] abs_dot;
assign dot_temp = x_mul_temp + y_mul_temp;
assign abs_dot  = dot_temp < 0 ? -dot_temp : dot_temp;
assign perp_result_temp = abs_dot * hit_distance_i;
assign perp_result = perp_result_temp / square_temp;

assign wall_height_o = (perp_result == 0) ? SCREEN_HEIGHT : (SCREEN_HEIGHT * 256) / perp_result;

always_comb begin
    if(wall_height_o >= SCREEN_HEIGHT)begin
        wall_top_o = 0;
        wall_bottom_o = SCREEN_HEIGHT;
    end
    else begin
        wall_top_o = (SCREEN_HEIGHT - wall_height_o) / 2;
        wall_bottom_o = (SCREEN_HEIGHT + wall_height_o) / 2;
    end
end

// assign wall_top_o = (SCREEN_HEIGHT - wall_height_o) / 2;
// assign wall_bottom_o = (SCREEN_HEIGHT + wall_height_o) / 2;

assign map_x_o = map_x_i;
assign map_y_o = map_y_i;

always_ff@(posedge clk_i or negedge rst_n_i) begin
    if(!rst_n_i)begin
        data_out_valid_o <= 1'b0;
    end
    else begin
        data_out_valid_o <= data_in_valid_i;
    end
end

endmodule
