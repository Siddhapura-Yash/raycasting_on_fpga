module new_dda_algo #(
    parameter int unsigned DATA_WIDTH = 8
)(
    input logic clk_i,
    input logic rst_n_i,

    input logic signed [DATA_WIDTH:0]ray_dir_x_i,
    input logic signed [DATA_WIDTH:0]ray_dir_y_i,
    input logic [DATA_WIDTH-1:0]pos_x_i,
    input logic [DATA_WIDTH-1:0]pos_y_i
);

logic [DATA_WIDTH-1:0]map_x;
logic [DATA_WIDTH-1:0]map_y;
// assign map_x = pos_x_i >> 8;
// assign map_y = pos_y_i >> 8;

logic signed [DATA_WIDTH-1:0]step_x;
logic signed [DATA_WIDTH-1:0]step_y;
//step == 1 means +ve step == 0 means -ve
assign step_x = ray_dir_x_i[DATA_WIDTH-1] == 0 ? 1'b1 : -1;
assign step_y = ray_dir_y_i[DATA_WIDTH-1] == 0 ? 1'b1 : -1;

logic [DATA_WIDTH-1:0]abs_ray_x;
logic [DATA_WIDTH-1:0]abs_ray_y;
assign abs_ray_x = (ray_dir_x_i < 0) ? -ray_dir_x_i : ray_dir_x_i;
assign abs_ray_y = (ray_dir_y_i < 0) ? -ray_dir_y_i : ray_dir_y_i;

logic [DATA_WIDTH-1:0]delta_dis_y;
logic [DATA_WIDTH-1:0]delta_dis_x;
//later we have to handle zero case as well (256*256)/0
assign delta_dis_x = (256 * 256)/abs_ray_x;
assign delta_dis_y = (256 * 256)/abs_ray_y;

logic [DATA_WIDTH-1:0]next_x_boundary;
logic [DATA_WIDTH-1:0]next_y_boundary;

always_comb begin
    if(step_x > 0) begin
        next_x_boundary = ((map_x + 1) * 256) - pos_x_i;
    end
    else begin
        next_x_boundary = pos_x_i - (map_x * 256);
    end
end

always_comb begin
    if(step_y > 0) begin
        next_y_boundary = ((map_y + 1) * 256) - pos_y_i;
    end
    else begin
        next_y_boundary = pos_y_i - (map_y * 256);
    end
end

logic [DATA_WIDTH-1:0]side_x;
logic [DATA_WIDTH-1:0]side_y;
assign side_x = (next_x_boundary *256)/abs_ray_x;
assign side_y = (next_y_boundary *256)/abs_ray_y;


always_comb begin
    case()
        1 : begin               //init stage
            map_x = pos_x_i >> 8;
            map_y = pos_y_i >> 8;
        end
        2 : begin               //compare and change mapx or mapy

        end
end



endmodule
