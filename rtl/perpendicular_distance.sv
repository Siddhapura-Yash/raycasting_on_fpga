module perpendicular_distance #(
    parameter int unsigned DATA_WIDTH = 9,
    parameter int unsigned SCREEN_WIDTH = 5,
    parameter int unsigned SCREEN_HEIGHT = 5
) (
    input logic clk_i,
    input logic rst_n_i,

    input logic [2*DATA_WIDTH:0] hit_distance_i,
    input logic signed [DATA_WIDTH+3:0] ray_dir_x_i,
    input logic signed [DATA_WIDTH+3:0] ray_dir_y_i,
    input logic signed [DATA_WIDTH-1:0] dir_x_i,
    input logic signed [DATA_WIDTH-1:0] dir_y_i,
    input logic hit_side_i,
    input logic [DATA_WIDTH-1:0] map_x_i,
    input logic [DATA_WIDTH-1:0] map_y_i,
    input logic data_in_valid_i,
    input logic [DATA_WIDTH-1:0] screen_x_i,

    output logic [DATA_WIDTH-1:0] screen_x_o,
    output logic [3*DATA_WIDTH-1:0] wall_top_o,
    output logic [3*DATA_WIDTH-1:0] wall_bottom_o,
    output logic [3*DATA_WIDTH-1:0] wall_height_o,
    output logic [DATA_WIDTH-1:0] map_x_o,
    output logic [DATA_WIDTH-1:0] map_y_o,
    output logic data_out_valid_o
);

  logic signed [2*DATA_WIDTH-1:0] temp_mul_dir_x;
  logic signed [2*DATA_WIDTH-1:0] temp_mul_dir_y;

  logic signed [3*DATA_WIDTH:0] perp_result_temp;
  logic [3*DATA_WIDTH:0] perp_result;

  logic signed [3*DATA_WIDTH:0] x_mul_temp_stage1;
  logic signed [3*DATA_WIDTH:0] y_mul_temp_stage1;

  logic [3*DATA_WIDTH:0] square_temp_stage1;
  logic [3*DATA_WIDTH:0] square_temp_stage2;
  logic [3*DATA_WIDTH:0] square_temp_stage3;
  logic [3*DATA_WIDTH:0] square_temp_stage4;

  // assign x_mul_temp = ray_dir_x_i * dir_x_i;
  // assign y_mul_temp = ray_dir_y_i * dir_y_i;
  // assign square_temp = ((dir_x_i*dir_x_i) + (dir_y_i*dir_y_i));


  logic [3*DATA_WIDTH:0] abs_mul_x_stage2;
  logic [3*DATA_WIDTH:0] abs_mul_y_stage2;
  logic signed [3*DATA_WIDTH:0] dot_temp_stage2;

  // assign abs_mul_x = x_mul_temp < 0 ? -x_mul_temp : x_mul_temp;
  // assign abs_mul_y = y_mul_temp < 0 ? -y_mul_temp : y_mul_temp;
  // assign dot_temp = x_mul_temp + y_mul_temp;


  logic [3*DATA_WIDTH:0] abs_dot_stage3;
  // logic [3*DATA_WIDTH:0] abs_dot;

  // assign abs_dot  = dot_temp < 0 ? -dot_temp : dot_temp;

  logic [2*DATA_WIDTH:0] hit_distance_stage1;
  logic [2*DATA_WIDTH:0] hit_distance_stage2;
  logic [2*DATA_WIDTH:0] hit_distance_stage3;


  // assign perp_result_temp = abs_dot * hit_distance_i;
  // assign perp_result = perp_result_temp / square_temp;

  logic [3*DATA_WIDTH-1:0] wall_height_stage6;
  logic [3*DATA_WIDTH-1:0] wall_height_stage7;

  // assign wall_height_o = (perp_result == 0) ? SCREEN_HEIGHT : (SCREEN_HEIGHT * 256) / perp_result;

  // always_comb begin
  //     if(wall_height_o >= SCREEN_HEIGHT)begin
  //         wall_top_o = 0;
  //         wall_bottom_o = SCREEN_HEIGHT;
  //     end
  //     else begin
  //         wall_top_o = (SCREEN_HEIGHT - wall_height_o) / 2;
  //         wall_bottom_o = (SCREEN_HEIGHT + wall_height_o) / 2;
  //     end
  // end

  // assign wall_top_o = (SCREEN_HEIGHT - wall_height_o) / 2;
  // assign wall_bottom_o = (SCREEN_HEIGHT + wall_height_o) / 2;

  logic [DATA_WIDTH-1:0] screen_x_stage1;
  logic [DATA_WIDTH-1:0] screen_x_stage2;
  logic [DATA_WIDTH-1:0] screen_x_stage3;
  logic [DATA_WIDTH-1:0] screen_x_stage4;
  logic [DATA_WIDTH-1:0] screen_x_stage5;
  logic [DATA_WIDTH-1:0] screen_x_stage6;
  logic [DATA_WIDTH-1:0] screen_x_stage7;

  logic [3*DATA_WIDTH-1:0] wall_top_stage7;
  logic [3*DATA_WIDTH-1:0] wall_bottom_stage7;


  logic [DATA_WIDTH-1:0] map_x_stage1;
  logic [DATA_WIDTH-1:0] map_x_stage2;
  logic [DATA_WIDTH-1:0] map_x_stage3;
  logic [DATA_WIDTH-1:0] map_x_stage4;
  logic [DATA_WIDTH-1:0] map_x_stage5;
  logic [DATA_WIDTH-1:0] map_x_stage6;
  logic [DATA_WIDTH-1:0] map_x_stage7;

  logic [DATA_WIDTH-1:0] map_y_stage1;
  logic [DATA_WIDTH-1:0] map_y_stage2;
  logic [DATA_WIDTH-1:0] map_y_stage3;
  logic [DATA_WIDTH-1:0] map_y_stage4;
  logic [DATA_WIDTH-1:0] map_y_stage5;
  logic [DATA_WIDTH-1:0] map_y_stage6;
  logic [DATA_WIDTH-1:0] map_y_stage7;

  logic data_out_valid_stage1;
  logic data_out_valid_stage2;
  logic data_out_valid_stage3;
  logic data_out_valid_stage4;
  logic data_out_valid_stage5;
  logic data_out_valid_stage6;
  logic data_out_valid_stage7;


  // assign map_x_o = map_x_i;
  // assign map_y_o = map_y_i;

  // always_comb begin
  //     if(!rst_n_i)begin
  //         data_out_valid_o = 1'b0;
  //     end
  //     else begin
  //         data_out_valid_o = data_in_valid_i;
  //         screen_x_o = screen_x_i;
  //     end
  // end

  // assign screen_x_o = screen_x_i;


  always_ff @(posedge clk_i or negedge rst_n_i) begin
    if (!rst_n_i) begin

    end else begin
      x_mul_temp_stage1 <= ray_dir_x_i * dir_x_i;
      y_mul_temp_stage1 <= ray_dir_y_i * dir_y_i;
      // square_temp_stage1 <= ((dir_x_i*dir_x_i) + (dir_y_i*dir_y_i));
      temp_mul_dir_x <= (dir_x_i * dir_x_i);
      temp_mul_dir_y <= (dir_y_i * dir_y_i);
      hit_distance_stage1 <= hit_distance_i;
      screen_x_stage1 <= screen_x_i;
      map_x_stage1 <= map_x_i;
      map_y_stage1 <= map_y_i;
      data_out_valid_stage1 <= data_in_valid_i;


      abs_mul_x_stage2 <= x_mul_temp_stage1 < 0 ? -x_mul_temp_stage1 : x_mul_temp_stage1;
      abs_mul_y_stage2 <= y_mul_temp_stage1 < 0 ? -y_mul_temp_stage1 : y_mul_temp_stage1;
      dot_temp_stage2 <= x_mul_temp_stage1 + y_mul_temp_stage1;
      hit_distance_stage2 <= hit_distance_stage1;
      square_temp_stage2 <= temp_mul_dir_x + temp_mul_dir_y;
      screen_x_stage2 <= screen_x_stage1;
      map_x_stage2 <= map_x_stage1;
      map_y_stage2 <= map_y_stage1;
      data_out_valid_stage2 <= data_out_valid_stage1;


      abs_dot_stage3 <= dot_temp_stage2 < 0 ? -dot_temp_stage2 : dot_temp_stage2;
      hit_distance_stage3 <= hit_distance_stage2;
      square_temp_stage3 <= square_temp_stage2;
      screen_x_stage3 <= screen_x_stage2;
      map_x_stage3 <= map_x_stage2;
      map_y_stage3 <= map_y_stage2;
      data_out_valid_stage3 <= data_out_valid_stage2;


      perp_result_temp <= abs_dot_stage3 * hit_distance_stage3;
      square_temp_stage4 <= square_temp_stage3;
      screen_x_stage4 <= screen_x_stage3;
      map_x_stage4 <= map_x_stage3;
      map_y_stage4 <= map_y_stage3;
      data_out_valid_stage4 <= data_out_valid_stage3;


      perp_result <= perp_result_temp / square_temp_stage4;
      screen_x_stage5 <= screen_x_stage4;
      map_x_stage5 <= map_x_stage4;
      map_y_stage5 <= map_y_stage4;
      data_out_valid_stage5 <= data_out_valid_stage4;


      wall_height_stage6 <= (perp_result == 0) ? SCREEN_HEIGHT : (SCREEN_HEIGHT * 256) / perp_result;
      screen_x_stage6 <= screen_x_stage5;
      map_x_stage6 <= map_x_stage5;
      map_y_stage6 <= map_y_stage5;
      data_out_valid_stage6 <= data_out_valid_stage5;


      wall_top_stage7 <= (wall_height_stage6 >= SCREEN_HEIGHT) ? 0 : (SCREEN_HEIGHT - wall_height_stage6)/2;
      wall_bottom_stage7 <= (wall_height_stage6 >= SCREEN_HEIGHT) ? SCREEN_HEIGHT : (SCREEN_HEIGHT + wall_height_stage6)/2;
      wall_height_stage7 <= wall_height_stage6;
      screen_x_stage7 <= screen_x_stage6;
      map_x_stage7 <= map_x_stage6;
      map_y_stage7 <= map_y_stage6;
      data_out_valid_stage7 <= data_out_valid_stage6;


      wall_top_o <= wall_top_stage7;
      wall_bottom_o <= wall_bottom_stage7;
      wall_height_o <= wall_height_stage7;
      screen_x_o <= screen_x_stage7;
      map_x_o <= map_x_stage7;
      map_y_o <= map_y_stage7;
      data_out_valid_o <= data_out_valid_stage7;

    end
  end

endmodule
