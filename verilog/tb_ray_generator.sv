module tb_ray_generator;

parameter int unsigned DATA_WIDTH = 10;
parameter int unsigned SCREEN_WIDTH = 5;
parameter int unsigned SPEED = 1;

logic clk;
logic rst;

logic signed [DATA_WIDTH-1:0]dir_x_i;
logic signed [DATA_WIDTH-1:0]dir_y_i;
logic signed [DATA_WIDTH-1:0]plane_x_i;
logic signed [DATA_WIDTH-1:0]plane_y_i;

logic [DATA_WIDTH-1:0]dir_x_o;
logic [DATA_WIDTH-1:0]dir_y_o;
logic [DATA_WIDTH-1:0]plane_x_o;
logic [DATA_WIDTH-1:0]plane_y_o;

initial begin
    clk = 1'b0;
    rst = 1'b1;
end

ray_generator #(
    .DATA_WIDTH(DATA_WIDTH),
    .SCREEN_WIDTH(SCREEN_WIDTH),
    .SPEED(SPEED)
)ray_generator_dut(
    .clk_i(clk),
    .rst_n_i(rst),
    .dir_x_i(dir_x_i),
    .dir_y_i(dir_y_i),
    .plane_x_i(plane_x_i),
    .plane_y_i(plane_y_i)
);

always #5 clk = ~clk;

initial begin
    rst = 1'b0;

    #10;
     rst = 1'b1;

    dir_x_i = 10'd256;
    dir_y_i = 10'd0;

    plane_x_i = 10'd0;
    plane_y_i = 10'd169;

    #1000;
    $finish;
end

initial begin
    $dumpfile("dump.vcd");
    $dumpvars(0,tb_ray_generator);
end

endmodule
