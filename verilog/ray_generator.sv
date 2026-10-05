module ray_generator #(
    parameter int unsigned DATA_WIDTH = 8,
    parameter int unsigned SCREEN_WIDTH = 640,
    parameter int unsigned SPEED = 0.1
)(
    input logic clk_i,
    input logic rst_n_i,

    input logic signed [DATA_WIDTH-1:0]dir_x_i,
    input logic signed [DATA_WIDTH-1:0]dir_y_i,
    input logic [DATA_WIDTH-1:0]pos_x_i,
    input logic [DATA_WIDTH-1:0]pos_y_i,
    input logic signed [DATA_WIDTH-1:0]plane_x_i,
    input logic signed [DATA_WIDTH-1:0]plane_y_i,

    output logic [DATA_WIDTH-1:0]dir_x_o,
    output logic [DATA_WIDTH-1:0]dir_y_o,
    output logic [DATA_WIDTH-1:0]pos_x_o,
    output logic [DATA_WIDTH-1:0]pos_y_o,
    output logic [DATA_WIDTH-1:0]plane_x_o,
    output logic [DATA_WIDTH-1:0]plane_y_o,

    //ray direction will be pass to the DDA algo
    output logic signed [DATA_WIDTH+3:0]ray_dir_x_o,
    output logic signed [DATA_WIDTH+3:0]ray_dir_y_o
);

logic signed [2*DATA_WIDTH-1:0]temp_x;
logic signed [2*DATA_WIDTH-1:0]temp_y;
logic signed [DATA_WIDTH-1:0]camera_x;
integer i = 0;
//for forward direction
// logic new_pos_x;
// assign new_pos_x = pos_x_i + dir_x_i * SPEED;
// logic new_pos_y;
// assign new_pos_y = pos_y_i + dir_y_i * SPEED;

always_ff@(posedge clk_i or negedge rst_n_i) begin
    if(!rst_n_i) begin
        dir_x_o <= {DATA_WIDTH{1'b0}};
        dir_y_o <= {DATA_WIDTH{1'b0}};
        // pos_x_o <= {DATA_WIDTH{1'b0}};
        // pos_y_o <= {DATA_WIDTH{1'b0}};
        plane_x_o <= {DATA_WIDTH{1'b0}};
        plane_y_o <= {DATA_WIDTH{1'b0}};

        // ray_dir_x_o <= {DATA_WIDTH{1'b0}};
        // ray_dir_y_o <= {DATA_WIDTH{1'b0}};
    end
    else if(i<SCREEN_WIDTH)begin
            camera_x <= ((2*i*256)/(SCREEN_WIDTH-1)) - 256;
            i <= i + 1'b1;
        end
    end

assign temp_x = (plane_x_i * camera_x);
assign temp_y = (plane_y_i * camera_x);

assign ray_dir_x_o = dir_x_i + (temp_x/256);
assign ray_dir_y_o = dir_y_i + (temp_y/256);

assign pos_x_o = pos_x_i;
assign pos_y_o = pos_y_i;

endmodule
