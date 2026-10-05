module tb_dda_algo;

parameter int unsigned DATA_WIDTH = 10;

logic clk_i;
logic rst_n_i;
logic signed [DATA_WIDTH+3:0]ray_dir_x_i;
logic signed [DATA_WIDTH+3:0]ray_dir_y_i;
logic [DATA_WIDTH-1:0]pos_x_i;
logic [DATA_WIDTH-1:0]pos_y_i;

dda_algo #(
    .DATA_WIDTH(DATA_WIDTH)
)dda_algo_dut (
    .clk_i(clk_i),
    .rst_n_i(rst_n_i),
    .ray_dir_x_i(ray_dir_x_i),
    .ray_dir_y_i(ray_dir_y_i),
    .pos_x_i(pos_x_i),
    .pos_y_i(pos_y_i)
);

initial begin
    clk_i = 1'b0;
    rst_n_i = 1'b1;
end

always #5 clk_i = ~clk_i;

initial begin
    rst_n_i = 1'b0;

    #10;
    rst_n_i = 1'b1;

    ray_dir_x_i = 14'sd256;
    ray_dir_y_i = 14'sd169;

    pos_x_i = 640;
    pos_y_i = 640;

    #500;
    $finish;
end

initial begin
    $dumpfile("dump.vcd");
    $dumpvars(0,tb_dda_algo);
end

endmodule
