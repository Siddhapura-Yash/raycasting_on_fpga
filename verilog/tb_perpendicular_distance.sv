module tb_perpendicular_distance;

parameter int unsigned DATA_WIDTH = 10;
parameter int unsigned SCREEN_WIDTH = 5;
parameter int unsigned SCREEN_HEIGHT = 480;

logic clk;
logic rst;

logic signed [DATA_WIDTH-1:0]dir_x;
logic signed [DATA_WIDTH-1:0]dir_y;
logic signed [DATA_WIDTH+3:0]ray_dir_x;
logic signed [DATA_WIDTH+3:0]ray_dir_y;
logic hit_side;
logic [2*DATA_WIDTH:0]hit_distance;


perpendicular_distance #(
    .DATA_WIDTH(DATA_WIDTH),
    .SCREEN_WIDTH(SCREEN_WIDTH),
    .SCREEN_HEIGHT(SCREEN_HEIGHT)
)perpendicular_distance_dut (
    .clk_i(clk),
    .rst_n_i(rst),
    .hit_distance_i(hit_distance),
    .ray_dir_x_i(ray_dir_x),
    .ray_dir_y_i(ray_dir_y),
    .dir_x_i(dir_x),
    .dir_y_i(dir_y),
    .hit_side_i(hit_side)
);

initial begin
    clk = 0;
    rst = 1;
end

always #5 clk = ~clk;

initial begin

    rst = 0;
    #10;
    rst = 1;

    dir_x = 256;
    dir_y = 0;
    ray_dir_x = 192;
    ray_dir_y = 128;
    hit_distance = 1024;
    hit_side = 1;

    #100;
    $finish;
end

initial begin
    $dumpfile("dump.vcd");
    $dumpvars(0,tb_perpendicular_distance);
end

endmodule
