module dual_port_ram #(
    parameter int unsigned DATA_WIDTH = 20,
    parameter int unsigned DEPTH = 640,
    parameter int unsigned SCREEN_WIDTH = 1920,
    parameter int unsigned ADD_WIDTH = $clog2(DEPTH + 1)
) (
    input logic clk_i,
    input logic rst_n_i,

    input logic [DATA_WIDTH-1:0] data_in_i,
    input logic [ADD_WIDTH-1:0] read_adder_i,
    input logic [ADD_WIDTH-1:0] write_adder_i,
    input logic data_in_valid_i,
    input logic read_enable_i,

    output logic [DATA_WIDTH-1:0] data_out_o,
    output logic full_o,
    output logic data_out_valid_o
);

  logic [DATA_WIDTH-1:0] mem[0:DEPTH-1];

  //write side
  always_ff @(posedge clk_i or negedge rst_n_i) begin
    if (!rst_n_i) begin

    end else if (data_in_valid_i) begin
      mem[write_adder_i] <= data_in_i;
    end
  end

  //read side
  always_ff @(posedge clk_i or negedge rst_n_i) begin
    if (!rst_n_i) begin
      data_out_valid_o <= 1'b0;
    end else if (read_enable_i) begin
      data_out_o <= mem[read_adder_i];
      data_out_valid_o <= 1'b1;
    end else begin
      data_out_valid_o <= 1'b0;
    end
  end

  logic temp;

  always_ff @(posedge clk_i or negedge rst_n_i) begin
    if (!rst_n_i) begin
      temp   <= 0;
      full_o <= 0;
    end else if (!temp & write_adder_i >= SCREEN_WIDTH - 1) begin
      full_o <= 1'b1;
      temp   <= 1'b1;
    end else begin
      full_o <= full_o;
      temp   <= temp;
    end
  end

endmodule
