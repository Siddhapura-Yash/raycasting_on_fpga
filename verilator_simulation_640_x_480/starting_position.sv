module starting_position #(
    parameter int unsigned DATA_WIDTH = 20,
    parameter int unsigned SCREEN_WIDTH = 640,
    parameter int unsigned SPEED = 1,
    parameter int unsigned SCREEN_HEIGHT = 480
)(
    input logic clk_i,
    input logic rst_n_i,

    input logic forward_button_i,
    input logic back_button_i,
    input logic left_button_i,
    input logic right_button_i,
    // input logic data_in_valid_i,

    output logic [3*DATA_WIDTH:0]wall_top_o,
    output logic [3*DATA_WIDTH:0]wall_bottom_o,
    output logic [3*DATA_WIDTH:0]wall_height_o,
    //for verilator simulation
    output logic [DATA_WIDTH-1:0]screen_x_o,
    output logic data_out_valid_o
);
// assign screen_x_o = screen_x;
parameter int  MOVE_STEP = 4;
logic data_valid;

logic signed [DATA_WIDTH-1:0]dir_x;
logic signed [DATA_WIDTH-1:0]dir_y;
logic [DATA_WIDTH-1:0]pos_x;
logic [DATA_WIDTH-1:0]pos_y;
logic signed [DATA_WIDTH-1:0]plane_x;
logic signed [DATA_WIDTH-1:0]plane_y;
logic [$clog2(SCREEN_WIDTH)-1:0]screen_x;

top #(
    .DATA_WIDTH(DATA_WIDTH),
    .SCREEN_WIDTH(SCREEN_WIDTH),
    .SCREEN_HEIGHT(SCREEN_HEIGHT),
    .SPEED(SPEED)
)top_dut(
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

    .screen_x_perp(screen_x_o),
    .wall_top_o(wall_top_o),
    .wall_bottom_o(wall_bottom_o),
    .wall_height_o(wall_height_o),
    .data_out_valid_o(data_out_valid_o)
);

parameter int  COS_5 = 255;
parameter int  SIN_5 = 22;

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

always_ff@(posedge clk_i or negedge rst_n_i) begin
    if(!rst_n_i) begin
        screen_x <= 0;
        data_valid <= 0;
    end
    else if(left_button_i | right_button_i |
                back_button_i | forward_button_i) begin
        screen_x <= 0;
        data_valid <= 0;
    end
    else if(screen_x < SCREEN_WIDTH) begin
        screen_x <= screen_x + 1'b1;
        data_valid <= 1;
    end
    else begin
        screen_x <= screen_x;
        data_valid <= 0;
    end
end

always_comb begin

    // right = clockwise because +Y is down
    new_right_dir_x =
        (($signed(dir_x) * COS_5) -
        ($signed(dir_y) * SIN_5)) >>> 8;

    new_right_dir_y =
        (($signed(dir_x) * SIN_5) +
        ($signed(dir_y) * COS_5)) >>> 8;

    new_right_plane_x =
        (($signed(plane_x) * COS_5) -
        ($signed(plane_y) * SIN_5)) >>> 8;

    new_right_plane_y =
        (($signed(plane_x) * SIN_5) +
        ($signed(plane_y) * COS_5)) >>> 8;

    // left = counter-clockwise
    new_left_dir_x =
        (($signed(dir_x) * COS_5) +
        ($signed(dir_y) * SIN_5)) >>> 8;

    new_left_dir_y =
        ((-$signed(dir_x) * SIN_5) +
        ($signed(dir_y) * COS_5)) >>> 8;

    new_left_plane_x =
        (($signed(plane_x) * COS_5) +
        ($signed(plane_y) * SIN_5)) >>> 8;

    new_left_plane_y =
        ((-$signed(plane_x) * SIN_5) +
        ($signed(plane_y) * COS_5)) >>> 8;

end

always_ff@(posedge clk_i or negedge rst_n_i) begin
    if(!rst_n_i)begin
        dir_x <= 256;
        dir_y <= 0;
        pos_x <= 640;
        pos_y <= 640;
        plane_x <= 0;
        plane_y <= 169;
    end
    else begin
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
        if(left_button_i) begin
            dir_x   <= new_left_dir_x;
            dir_y   <= new_left_dir_y;
            plane_x <= new_left_plane_x;
            plane_y <= new_left_plane_y;
        end
    end
end


endmodule
