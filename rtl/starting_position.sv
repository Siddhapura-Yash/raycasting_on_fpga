module starting_position #(
    parameter int unsigned DATA_WIDTH = 20,
    parameter int unsigned SCREEN_WIDTH = 1920,
    parameter int unsigned SPEED = 1,
    parameter int unsigned SCREEN_HEIGHT = 1080
) (
    input logic clk_i,
    input logic rst_n_i,

    input logic forward_button_i,
    input logic back_button_i,
    input logic left_button_i,
    input logic right_button_i,
    // input logic data_in_valid_i,

    output logic [3*DATA_WIDTH-1:0] wall_top_o,
    output logic [3*DATA_WIDTH-1:0] wall_bottom_o,
    output logic [3*DATA_WIDTH-1:0] wall_height_o,
    //for verilator simulation
    output logic [DATA_WIDTH-1:0] screen_x_o,
    output logic data_out_valid_o,
    output logic [10:0] temp_pixel_x,
    output logic [10:0] temp_pixel_y,

    output logic [7:0] red_pixel_value,
    output logic [7:0] green_pixel_value,
    output logic [7:0] blue_pixel_value

);
  // assign screen_x_o = screen_x;
  parameter int MOVE_STEP = 4;
  logic data_valid;

  logic signed [DATA_WIDTH-1:0] dir_x;
  logic signed [DATA_WIDTH-1:0] dir_y;
  logic [DATA_WIDTH-1:0] pos_x;
  logic [DATA_WIDTH-1:0] pos_y;
  logic signed [DATA_WIDTH-1:0] plane_x;
  logic signed [DATA_WIDTH-1:0] plane_y;
  logic [DATA_WIDTH-1:0] screen_x;
  logic top_data_out_valid;

  top #(
      .DATA_WIDTH(DATA_WIDTH),
      .SCREEN_WIDTH(SCREEN_WIDTH),
      .SCREEN_HEIGHT(SCREEN_HEIGHT),
      .SPEED(SPEED)
  ) top_dut (
      .clk_i(clk_i),
      .rst_n_i(rst_n_i),
      .data_in_valid_i(data_valid),

      .dir_x_i(dir_x),
      .dir_y_i(dir_y),
      .pos_x_i(pos_x),
      .pos_y_i(pos_y),
      .plane_x_i(plane_x),
      .plane_y_i(plane_y),
      .screen_x_i(screen_x),

      .screen_x_perp_o(screen_x_o),
      .wall_top_o(wall_top_o),
      .wall_bottom_o(wall_bottom_o),
      .wall_height_o(wall_height_o),
      .data_out_valid_o(top_data_out_valid)
  );

  logic active_video;

  timing_generation #(
      .DATA_WIDTH(DATA_WIDTH),
      .SCREEN_WIDTH(SCREEN_WIDTH),
      .SCREEN_HEIGHT(SCREEN_HEIGHT)
  ) timing_generation_dut (
      .pixel_clk_i(clk_i),  //may need to change with actual hdmi clock
      .rst_n_i(rst_n_i),
      .dual_port_full_i(dual_port_full),
      .pixel_x_o(temp_pixel_x),
      .pixel_y_o(temp_pixel_y),
      .active_video_o(active_video),
      .hsync_o(),
      .vsync_o()
  );

  logic dual_port_full;
  logic [(6*DATA_WIDTH)-1:0] dual_port_out;
  logic dual_port_out_valid;

  parameter int unsigned DUAL_PORT_RAM_DEPTH = SCREEN_WIDTH;
  parameter int unsigned ADD_WIDTH_RAM = $clog2(DUAL_PORT_RAM_DEPTH + 1);

  logic [10:0] dram_pixel_x;
  logic [10:0] dram_pixel_y;
  logic delay_active_video;

  always_ff @(posedge clk_i or negedge rst_n_i) begin
    if (!rst_n_i) begin
      dram_pixel_x <= 0;
      dram_pixel_y <= 0;
      delay_active_video <= 0;
    end else begin
      dram_pixel_x <= temp_pixel_x;
      dram_pixel_y <= temp_pixel_y;
      delay_active_video <= active_video;
    end
  end

  logic dual_read_enable;
  assign dual_read_enable = dual_port_full & active_video;

  dual_port_ram #(
      .DATA_WIDTH(6 * DATA_WIDTH),
      .DEPTH(DUAL_PORT_RAM_DEPTH),
      .SCREEN_WIDTH(SCREEN_WIDTH),
      .ADD_WIDTH(ADD_WIDTH_RAM)
  ) dual_port_ram_dut (
      .clk_i(clk_i),
      .rst_n_i(rst_n_i),
      .data_in_i({wall_top_o, wall_bottom_o}),
      .read_adder_i(temp_pixel_x),
      .write_adder_i(ADD_WIDTH_RAM'(screen_x_o)),
      .data_in_valid_i(top_data_out_valid),
      .read_enable_i(dual_read_enable),

      .data_out_o(dual_port_out),
      .full_o(dual_port_full),
      .data_out_valid_o(dual_port_out_valid)
  );

  // logic [7:0]red_pixel_value;
  // logic [7:0]green_pixel_value;
  // logic [7:0]blue_pixel_value;

  wall_or_not #(
      .DATA_WIDTH(DATA_WIDTH),
      .SCREEN_WIDTH(SCREEN_WIDTH),
      .SCREEN_HEIGHT(SCREEN_HEIGHT)
  ) wall_or_not_dut (
      .clk_i(clk_i),
      .rst_n_i(rst_n_i),
      .pixel_x_i(dram_pixel_x),
      .pixel_y_i(dram_pixel_y),
      .active_video_i(active_video),
      .hsync_i(),
      .vsync_i(),
      .data_in_valid_i(dual_port_out_valid),
      .full_i(dual_port_full),
      .wall_in_i(dual_port_out),

      .data_out_valid_o(data_out_valid_o),
      .red_o(red_pixel_value),
      .green_o(green_pixel_value),
      .blue_o(blue_pixel_value)
  );

  parameter int COS_5 = 255;
  parameter int SIN_5 = 22;

  logic signed [19:0] move_dx;
  logic signed [19:0] move_dy;

  always_comb begin
    move_dx = ($signed(dir_x) * MOVE_STEP) >>> 8;
    move_dy = ($signed(dir_y) * MOVE_STEP) >>> 8;
  end

  logic signed [19:0] new_left_dir_x;
  logic signed [19:0] new_left_dir_y;
  logic signed [19:0] new_left_plane_x;
  logic signed [19:0] new_left_plane_y;

  logic signed [19:0] new_right_dir_x;
  logic signed [19:0] new_right_dir_y;
  logic signed [19:0] new_right_plane_x;
  logic signed [19:0] new_right_plane_y;

  always_ff @(posedge clk_i or negedge rst_n_i) begin
    if (!rst_n_i) begin
      screen_x   <= 0;
      data_valid <= 0;
    end else if (left_button_i | right_button_i | back_button_i | forward_button_i) begin
      screen_x   <= 0;
      data_valid <= 0;
    end else if (screen_x < SCREEN_WIDTH) begin
      screen_x   <= screen_x + 1'b1;
      data_valid <= 1;
    end else begin
      screen_x   <= screen_x;
      data_valid <= 0;
    end
  end

  always_comb begin

    // right = clockwise because +Y is down
    new_right_dir_x = (($signed(dir_x) * COS_5) - ($signed(dir_y) * SIN_5)) >>> 8;

    new_right_dir_y = (($signed(dir_x) * SIN_5) + ($signed(dir_y) * COS_5)) >>> 8;

    new_right_plane_x = (($signed(plane_x) * COS_5) - ($signed(plane_y) * SIN_5)) >>> 8;

    new_right_plane_y = (($signed(plane_x) * SIN_5) + ($signed(plane_y) * COS_5)) >>> 8;

    // left = counter-clockwise
    new_left_dir_x = (($signed(dir_x) * COS_5) + ($signed(dir_y) * SIN_5)) >>> 8;

    new_left_dir_y = ((-$signed(dir_x) * SIN_5) + ($signed(dir_y) * COS_5)) >>> 8;

    new_left_plane_x = (($signed(plane_x) * COS_5) + ($signed(plane_y) * SIN_5)) >>> 8;

    new_left_plane_y = ((-$signed(plane_x) * SIN_5) + ($signed(plane_y) * COS_5)) >>> 8;

  end

  always_ff @(posedge clk_i or negedge rst_n_i) begin
    if (!rst_n_i) begin
      dir_x   <= 256;
      dir_y   <= 0;
      pos_x   <= 640;
      pos_y   <= 640;
      plane_x <= 0;
      plane_y <= 169;
    end else begin
      if (forward_button_i) begin
        pos_x <= pos_x + move_dx;
        pos_y <= pos_y + move_dy;
      end
      if (back_button_i) begin
        pos_x <= pos_x - move_dx;
        pos_y <= pos_y - move_dy;
      end
      if (right_button_i) begin
        dir_x   <= new_right_dir_x;
        dir_y   <= new_right_dir_y;
        plane_x <= new_right_plane_x;
        plane_y <= new_right_plane_y;
      end
      if (left_button_i) begin
        dir_x   <= new_left_dir_x;
        dir_y   <= new_left_dir_y;
        plane_x <= new_left_plane_x;
        plane_y <= new_left_plane_y;
      end
    end
  end


endmodule
