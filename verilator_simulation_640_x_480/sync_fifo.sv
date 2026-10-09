/*
  Configurable SYNCHRONOUS FIFO IP

  Supported Modes:

  MODE = 0 : FWFT (First Word Fall Through)
              Data is available at the output without asserting read enable.

  MODE = 1 : Standard FIFO
              Data is available only after read enable is asserted.


  Reset:

  rst_n is an active-low reset (negedge rst_n).


  Configurable Parameters:

  DEPTH            : FIFO depth
  DATA_WIDTH       : Data width
  PROG_FULL_VALUE  : Programmable full threshold
  PROG_EMPTY_VALUE : Programmable empty threshold

  These parameters can be changed according to your application requirements.
*/

module sync_fifo #(
  parameter int unsigned DATA_WIDTH = 4, 
  parameter int unsigned DEPTH = 4,
  parameter int unsigned PROG_FULL_VALUE = (DEPTH/2) - 1, 
  parameter int unsigned PROG_EMPTY_VALUE = (DEPTH/2) + 1,
  parameter int unsigned MODE = 1,
  parameter int unsigned PTR_WIDTH = $clog2(DEPTH)
) (
    input                           clk,
    input                           rst_n,
    input                           r_en,
    input                           w_en,
    input   [DATA_WIDTH - 1 : 0]    data_in,

    output reg [DATA_WIDTH - 1 : 0] data_out,
    output reg [PTR_WIDTH:0]        data_count,

  /* output flags */
    output                          rst_busy,
    output reg                      full,
    output reg                      empty,
    output                          half_full,
    output                          half_empty,
    output                          almost_full,
    output                          almost_empty,
    output                          prog_full,
    output                          prog_empty,
    output reg                      overflow,
    output reg                      underflow,
    output reg                      wr_ack,
    output reg                      rd_valid
  );

  reg [$clog2(DEPTH) : 0] w_ptr,r_ptr;        /* one extra bit for wrap */

  reg [DATA_WIDTH - 1 : 0] mem [0 : DEPTH - 1];

  /* actual memory addresses */
  wire [$clog2(DEPTH)-1:0] w_addr = w_ptr[$clog2(DEPTH)-1:0];
  wire [$clog2(DEPTH)-1:0] r_addr = r_ptr[$clog2(DEPTH)-1:0];

  /* write data */
  always@(posedge clk) begin
    if (!rst_n) begin
        w_ptr  <= 0;
        wr_ack <= 1'b0;
    end else begin
        wr_ack <= 1'b0;

        if (w_en && !full) begin
          mem[w_addr] <= data_in;
          w_ptr       <= w_ptr + 1;
          wr_ack      <= 1'b1;
        end
   end
  end

/* read data */
always @(posedge clk) begin
  if (!rst_n) begin
    r_ptr    <= 0;
    data_out <= 0;
    rd_valid <= 1'b0;
  end else begin
    rd_valid <= 1'b0;

    /* STANDARD MODE */
    if (MODE) begin
      if (r_en && !empty) begin
          data_out <= mem[r_addr];
          r_ptr    <= r_ptr + 1;
          rd_valid <= 1'b1;
      end
    end else begin
        if (!empty) begin
            data_out <= mem[r_addr];  /* first data always visible without read enable */
            rd_valid <= 1'b1;
        end

        if (r_en && !empty) begin
            r_ptr <= r_ptr + 1;
        end
    end
  end
end

  /* data count */
  always @(posedge clk) begin
    if (!rst_n) begin
        data_count <= 0;
    end
    else begin
      case({w_en && !full, r_en && !empty})
        2'b10:   data_count <= data_count + 1;
        2'b01:   data_count <= data_count - 1;
        default: data_count <= data_count;
      endcase
    end
end

  /* overflow */
  always@(posedge clk) begin
    if (!rst_n) begin
        overflow <= 1'b0;
    end else begin
      if (w_en && full) begin
          overflow <= 1'b1;
      end else begin
          overflow <= 1'b0;
      end
    end
  end

  /* underflow */
  always@(posedge clk) begin
    if (!rst_n) begin
        underflow <= 1'b0;
    end
    else begin
      if (r_en && empty) begin
          underflow <= 1'b1;
      end
      else begin
          underflow <= 1'b0;
      end
    end
  end

  /* output flags */
  assign almost_empty = (data_count <= 1);
  assign prog_empty = (data_count <= PROG_EMPTY_VALUE);
  assign half_full = (data_count >= DEPTH/2);
  assign prog_full = (data_count >= PROG_FULL_VALUE);
  assign almost_full = (data_count >= DEPTH-1);
  assign half_empty = (data_count <= DEPTH/2 );
  assign rst_busy = !rst_n;

  assign empty = (data_count == 0);
  assign full = (data_count == DEPTH);

// always@(posedge clk or negedge rst_n) begin
//   if(!rst_n) begin
//     full <= 1'b0;
//     empty <= 1'b1;
//   end
//   else begin
//     full <= (data_count == DEPTH);
//     empty <= (data_count == 0);
//   end
// end

endmodule
