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
    input logic signed [DATA_WIDTH-1:0]plane_y_i,
    input logic [DATA_WIDTH-1:0]screen_x_i,

    output logic [DATA_WIDTH-1:0]screen_x_perp,
    output logic [3*DATA_WIDTH:0]wall_top_o,
    output logic [3*DATA_WIDTH:0]wall_bottom_o,
    output logic [3*DATA_WIDTH:0]wall_height_o,
    output logic data_out_valid_o
);

logic [DATA_WIDTH-1:0]plane_x;
logic [DATA_WIDTH-1:0]plane_y;
logic [DATA_WIDTH-1:0]screen_x_ray_gen;
logic ray_gen_data_out_valid;

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
    .screen_x_i(screen_x_i),
    .data_in_valid_i(data_in_valid_i),

    .dir_x_o(dir_x),
    .dir_y_o(dir_y),
    .pos_x_o(pos_x),
    .pos_y_o(pos_y),

    .plane_x_o(plane_x),
    .plane_y_o(plane_y),
    .screen_x_o(screen_x_ray_gen),
    .data_out_valid_o(ray_gen_data_out_valid),

    .ray_dir_x_o(ray_dir_x),
    .ray_dir_y_o(ray_dir_y)
);

logic [DATA_WIDTH-1:0]screen_x_dut_data_out;
logic screen_x_dut_full;
logic screen_x_dut_empty;

sync_fifo #(
    .DATA_WIDTH(DATA_WIDTH),
    .DEPTH(1024),
    .PROG_FULL_VALUE(2),
    .PROG_EMPTY_VALUE(2),
    .MODE(1),
    .PTR_WIDTH($clog2(1024))
)sync_fifo_screen_x_dut(
    .clk(clk_i),
    .rst_n(rst_n_i),
    .r_en(sync_fifo_read_enable),
    .w_en(ray_gen_data_out_valid),
    .data_in(screen_x_ray_gen),
    .prog_full(),
    .prog_empty(),
    .data_out(screen_x_dut_data_out),
    .full(screen_x_dut_full),
    .empty(screen_x_dut_empty),
    .rst_busy(),
    .half_full(),
    .half_empty(),
    .data_count(),
    .almost_full(),
    .almost_empty(),
    .overflow(),
    .underflow(),
    .wr_ack(),
    .rd_valid()
);

logic signed [DATA_WIDTH-1:0]dirx_dut_data_out;
logic dirx_dut_full;
logic dirx_dut_empty;

sync_fifo #(
    .DATA_WIDTH(DATA_WIDTH),
    .DEPTH(1024),
    .PROG_FULL_VALUE(2),
    .PROG_EMPTY_VALUE(2),
    .MODE(1),
    .PTR_WIDTH($clog2(1024))
)sync_fifo_dirx_dut(
    .clk(clk_i),
    .rst_n(rst_n_i),
    .r_en(sync_fifo_read_enable),
    .w_en(ray_gen_data_out_valid),
    .data_in(dir_x),
    .prog_full(),
    .prog_empty(),
    .data_out(dirx_dut_data_out),
    .full(dirx_dut_full),
    .empty(dirx_dut_empty),
    .rst_busy(),
    .half_full(),
    .half_empty(),
    .data_count(),
    .almost_full(),
    .almost_empty(),
    .overflow(),
    .underflow(),
    .wr_ack(),
    .rd_valid()
);

logic signed [DATA_WIDTH-1:0]diry_dut_data_out;
logic diry_dut_full;
logic diry_dut_empty;

sync_fifo #(
    .DATA_WIDTH(DATA_WIDTH),
    .DEPTH(1024),
    .PROG_FULL_VALUE(2),
    .PROG_EMPTY_VALUE(2),
    .MODE(1),
    .PTR_WIDTH($clog2(1024))
)sync_fifo_diry_dut(
    .clk(clk_i),
    .rst_n(rst_n_i),
    .r_en(sync_fifo_read_enable),
    .w_en(ray_gen_data_out_valid),
    .data_in(dir_y),
    .prog_full(),
    .prog_empty(),
    .data_out(diry_dut_data_out),
    .full(diry_dut_full),
    .empty(diry_dut_empty),
    .rst_busy(),
    .half_full(),
    .half_empty(),
    .data_count(),
    .almost_full(),
    .almost_empty(),
    .overflow(),
    .underflow(),
    .wr_ack(),
    .rd_valid()
);

logic signed [DATA_WIDTH-1:0]posx_dut_data_out;
logic posx_dut_full;
logic posx_dut_empty;

sync_fifo #(
    .DATA_WIDTH(DATA_WIDTH),
    .DEPTH(1024),
    .PROG_FULL_VALUE(2),
    .PROG_EMPTY_VALUE(2),
    .MODE(1),
    .PTR_WIDTH($clog2(1024))
)sync_fifo_posx_dut(
    .clk(clk_i),
    .rst_n(rst_n_i),
    .r_en(sync_fifo_read_enable),
    .w_en(ray_gen_data_out_valid),
    .data_in(pos_x),
    .prog_full(),
    .prog_empty(),
    .data_out(posx_dut_data_out),
    .full(posx_dut_full),
    .empty(posx_dut_empty),
    .rst_busy(),
    .half_full(),
    .half_empty(),
    .data_count(),
    .almost_full(),
    .almost_empty(),
    .overflow(),
    .underflow(),
    .wr_ack(),
    .rd_valid()
);

logic signed [DATA_WIDTH-1:0]posy_dut_data_out;
logic posy_dut_full;
logic posy_dut_empty;

sync_fifo #(
    .DATA_WIDTH(DATA_WIDTH),
    .DEPTH(1024),
    .PROG_FULL_VALUE(2),
    .PROG_EMPTY_VALUE(2),
    .MODE(1),
    .PTR_WIDTH($clog2(1024))
)sync_fifo_posy_dut(
    .clk(clk_i),
    .rst_n(rst_n_i),
    .r_en(sync_fifo_read_enable),
    .w_en(ray_gen_data_out_valid),
    .data_in(pos_y),
    .prog_full(),
    .prog_empty(),
    .data_out(posy_dut_data_out),
    .full(posy_dut_full),
    .empty(posy_dut_empty),
    .rst_busy(),
    .half_full(),
    .half_empty(),
    .data_count(),
    .almost_full(),
    .almost_empty(),
    .overflow(),
    .underflow(),
    .wr_ack(),
    .rd_valid()
);

logic signed [DATA_WIDTH+3:0]ray_dirx_dut_data_out;
logic ray_dirx_dut_full;
logic ray_dirx_dut_empty;

sync_fifo #(
    .DATA_WIDTH(DATA_WIDTH+4),
    .DEPTH(1024),
    .PROG_FULL_VALUE(2),
    .PROG_EMPTY_VALUE(2),
    .MODE(1),
    .PTR_WIDTH($clog2(1024))
)sync_fifo_ray_dirx_dut(
    .clk(clk_i),
    .rst_n(rst_n_i),
    .r_en(sync_fifo_read_enable),
    .w_en(ray_gen_data_out_valid),
    .data_in(ray_dir_x),
    .prog_full(),
    .prog_empty(),
    .data_out(ray_dirx_dut_data_out),
    .full(ray_dirx_dut_full),
    .empty(ray_dirx_dut_empty),
    .rst_busy(),
    .half_full(),
    .half_empty(),
    .data_count(),
    .almost_full(),
    .almost_empty(),
    .overflow(),
    .underflow(),
    .wr_ack(),
    .rd_valid()
);

logic signed [DATA_WIDTH+3:0]ray_diry_dut_data_out;
logic ray_diry_dut_full;
logic ray_diry_dut_empty;

sync_fifo #(
    .DATA_WIDTH(DATA_WIDTH+4),
    .DEPTH(1024),
    .PROG_FULL_VALUE(2),
    .PROG_EMPTY_VALUE(2),
    .MODE(1),
    .PTR_WIDTH($clog2(1024))
)sync_fifo_ray_diry_dut(
    .clk(clk_i),
    .rst_n(rst_n_i),
    .r_en(sync_fifo_read_enable),
    .w_en(ray_gen_data_out_valid),
    .data_in(ray_dir_y),
    .prog_full(),
    .prog_empty(),
    .data_out(ray_diry_dut_data_out),
    .full(ray_diry_dut_full),
    .empty(ray_diry_dut_empty),
    .rst_busy(),
    .half_full(),
    .half_empty(),
    .data_count(),
    .almost_full(),
    .almost_empty(),
    .overflow(),
    .underflow(),
    .wr_ack(),
    .rd_valid()
);

logic sync_fifo_read_enable;
logic [2:0]ren_state;

always_ff@(posedge clk_i or negedge rst_n_i) begin
    if(!rst_n_i) begin
        sync_fifo_read_enable <= 1'b0;
        dda_start <= 1'b0;
    end
    else begin
        case(ren_state)

        1 : begin
            if (!dda_busy && (!dirx_dut_empty)) begin
                sync_fifo_read_enable <= 1'b1;
                ren_state <= 2;
            end
            else begin
                sync_fifo_read_enable <= 1'b0;
                ren_state <= 1;
            end
        end
        // sync_fifo_read_enable <= !(dda_busy && !(dirx_dut_empty && diry_dut_empty && posx_dut_empty
                                    // && posy_dut_empty && ray_dirx_dut_empty && ray_diry_dut_empty));
        2 : begin
            sync_fifo_read_enable <= 1'b0;
            dda_start <= 1'b1;
            ren_state <= 3;
        end

        3 : begin
            sync_fifo_read_enable <= 1'b0;
            dda_start <= 1'b0;
            ren_state <= 1;
        end

        default : ren_state <= 1;
        endcase
    end
end

logic dda_start;
// assign dda_start = sync_fifo_read_enable;
// always_ff@(posedge clk_i or negedge rst_n_i) begin
//     if(!rst_n_i) begin
//         dda_start <= 1'b0;
//     end
//     else begin
//         dda_start <= sync_fifo_read_enable;
//     end
// end

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

logic dda_busy;
logic dda_done;
logic [DATA_WIDTH-1:0]mapx;
logic [DATA_WIDTH-1:0]mapy;
logic [DATA_WIDTH-1:0]screen_x_dda;

dda_algo #(
    .DATA_WIDTH(DATA_WIDTH)
)dda_algo_dut (
    .clk_i(clk_i),
    .rst_n_i(rst_n_i),
    .pos_x_i(posx_dut_data_out),
    .pos_y_i(posy_dut_data_out),
    .ray_dir_x_i(ray_dirx_dut_data_out),
    .ray_dir_y_i(ray_diry_dut_data_out),
    .start_i(dda_start),
    .screen_x_i(screen_x_dut_data_out),

    .screen_x_o(screen_x_dda),
    .hit_distance_o(hit_distance),
    .ray_dir_x_o(ray_dir_x_dda),
    .ray_dir_y_o(ray_dir_y_dda),
    .dir_x_o(dir_x_dda),
    .dir_y_o(dir_y_dda),
    .hit_side_o(hit_side),
    .data_out_valid_o(data_out_valid_dda),
    .mapx_o(mapx),
    .mapy_o(mapy),

    .busy_o(dda_busy),
    .done_o(dda_done)
);

logic [3*DATA_WIDTH:0]wall_top;
logic [3*DATA_WIDTH:0]wall_bottom;
logic [3*DATA_WIDTH:0]wall_height;
logic data_out_valid_perp;

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
    .map_x_i(mapx),
    .map_y_i(mapy),
    .data_in_valid_i(data_out_valid_dda),
    .screen_x_i(screen_x_dda),

    // .wall_top_o(wall_top),
    // .wall_bottom_o(wall_bottom),
    // .wall_height_o(wall_height),
    // .data_out_valid_o(data_out_valid_perp)
    .screen_x_o(screen_x_perp),
    .wall_top_o(wall_top_o),
    .wall_bottom_o(wall_bottom_o),
    .wall_height_o(wall_height_o),
    .data_out_valid_o(data_out_valid_o)
);

/*
sync_fifo #(
    .DATA_WIDTH(DATA_WIDTH*9),
    .DEPTH(1024),
    .PROG_FULL_VALUE(2),
    .PROG_EMPTY_VALUE(2),
    .MODE(1),
    .PTR_WIDTH($clog2(1024))
)sync_fifo_per_distance_dut(
    .clk(clk_i),
    .rst_n(rst_n_i),
    .r_en(),
    .w_en(data_out_valid_perp),
    .data_in({wall_top,wall_bottom,wall_height}),
    .prog_full(),
    .prog_empty(),
    .data_out(),
    .full(),
    .empty(),
    .rst_busy(),
    .half_full(),
    .half_empty(),
    .data_count(),
    .almost_full(),
    .almost_empty(),
    .overflow(),
    .underflow(),
    .wr_ack(),
    .rd_valid()
);
*/

endmodule
