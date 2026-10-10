module wall_or_not #(
    parameter int unsigned DATA_WIDTH = 20,
    parameter int unsigned SCREEN_WIDTH = 5,
    parameter int unsigned SCREEN_HEIGHT = 5
) (
    input logic clk_i,
    input logic rst_n_i,

    input logic [10:0] pixel_x_i,
    input logic [10:0] pixel_y_i,
    input logic active_video_i,
    input logic hsync_i,
    input logic vsync_i,
    input logic data_in_valid_i,

    input logic full_i,
    input logic [6*DATA_WIDTH-1:0] wall_in_i,

    output logic data_out_valid_o,
    output logic [7:0] red_o,
    output logic [7:0] green_o,
    output logic [7:0] blue_o
);

  logic [3*DATA_WIDTH:0] wall_top;
  logic [3*DATA_WIDTH:0] wall_bottom;

  assign wall_top = wall_in_i[6*DATA_WIDTH-1-:3*DATA_WIDTH];
  assign wall_bottom = wall_in_i[0+:3*DATA_WIDTH];

  always_ff @(posedge clk_i or negedge rst_n_i) begin
    if (!rst_n_i) begin
      red_o   <= 0;
      green_o <= 0;
      blue_o  <= 0;
    end else begin
      if (pixel_y_i < wall_top) begin  //menas ceiling
        red_o   <= 8'd40;
        green_o <= 8'd40;
        blue_o  <= 8'd80;
      end else if (pixel_y_i >= wall_top && pixel_y_i < wall_bottom) begin  //means wall
        red_o   <= 8'd180;
        green_o <= 8'd180;
        blue_o  <= 8'd180;
      end else if (pixel_y_i >= wall_bottom) begin  //means floor
        red_o   <= 8'd80;
        green_o <= 8'd80;
        blue_o  <= 8'd80;
      end else begin
        red_o   <= 8'd00;
        green_o <= 8'd00;
        blue_o  <= 8'd00;
      end
      data_out_valid_o <= data_in_valid_i;
    end
  end


endmodule
