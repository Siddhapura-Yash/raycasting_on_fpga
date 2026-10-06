module tb_top;

parameter int unsigned DATA_WIDTH = 10;
parameter int unsigned SCREEN_WIDTH = 5;
parameter int unsigned SPEED = 1;
parameter int unsigned SCREEN_HEIGHT = 5;


logic clk;
logic rst;

logic signed [DATA_WIDTH-1:0]dir_x;
logic signed [DATA_WIDTH-1:0]dir_y;
logic [DATA_WIDTH-1:0]pos_x;
logic [DATA_WIDTH-1:0]pos_y;
logic signed [DATA_WIDTH-1:0]plane_x;
logic signed [DATA_WIDTH-1:0]plane_y;
logic data_in_valid;

top #(
    .DATA_WIDTH(DATA_WIDTH),
    .SCREEN_WIDTH(SCREEN_WIDTH),
    .SCREEN_HEIGHT(SCREEN_HEIGHT),
    .SPEED(1)
)top_dut (
    .clk_i(clk),
    .rst_n_i(rst),
    .dir_x_i(dir_x),
    .dir_y_i(dir_y),
    .pos_x_i(pos_x),
    .pos_y_i(pos_y),
    .plane_x_i(plane_x),
    .plane_y_i(plane_y),
    .data_in_valid_i(data_in_valid)
);


initial begin
    clk = 0;
    rst = 1;
end

always #5 clk = ~clk;

initial begin
    rst = 1'b0;

    #10;
     rst = 1'b1;

    dir_x   = 256;
    dir_y   = 0;

    plane_x = 0;
    plane_y = 169;

    pos_x   = 640;
    pos_y   = 640;
    data_in_valid = 1'b1;
    // #20 data_in_valid = 1'b0;

    #500;
    $finish;

end

initial begin
    $dumpfile("dump.vcd");
    $dumpvars(0,tb_top);
end

endmodule
