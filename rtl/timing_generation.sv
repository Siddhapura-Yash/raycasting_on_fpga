module timing_generation #(
    parameter int unsigned DATA_WIDTH = 20,
    parameter int unsigned SCREEN_WIDTH = 1920,
    parameter int unsigned SCREEN_HEIGHT = 1080
) (
    input logic pixel_clk_i,
    input logic rst_n_i,
    input logic dual_port_full_i,

    output logic [10:0] pixel_x_o,
    output logic [10:0] pixel_y_o,
    output logic active_video_o,
    output logic hsync_o,
    output logic vsync_o
);


  parameter int unsigned H_ACTIVE = 1920;
  parameter int unsigned H_FRONT  = 88;
  parameter int unsigned H_SYNC   = 44;
  parameter int unsigned H_BACK   = 148;
  parameter int unsigned H_TOTAL  = 2200;

  parameter int unsigned V_ACTIVE = 1080;
  parameter int unsigned V_FRONT  = 4;
  parameter int unsigned V_SYNC   = 5;
  parameter int unsigned V_BACK   = 36;
  parameter int unsigned V_TOTAL  = 1125;

  logic [11:0] h_count;
  logic [10:0] v_count;

  always_ff @(posedge pixel_clk_i) begin
    if (!rst_n_i) begin
      h_count <= 0;
      v_count <= 0;
    end else if (dual_port_full_i) begin
      if (h_count == H_TOTAL - 1) begin
        h_count <= 0;

        if (v_count == V_TOTAL - 1) v_count <= 0;
        else v_count <= v_count + 1'b1;
      end else begin
        h_count <= h_count + 1'b1;
      end
    end
  end


  always_comb begin

    active_video_o = (h_count < H_ACTIVE) && (v_count < V_ACTIVE);

    pixel_x_o = h_count[10:0];
    pixel_y_o = v_count;

    hsync_o = (h_count >= H_ACTIVE + H_FRONT) && (h_count < H_ACTIVE + H_FRONT + H_SYNC);

    vsync_o = (v_count >= V_ACTIVE + V_FRONT) && (v_count < V_ACTIVE + V_FRONT + V_SYNC);
  end



endmodule
