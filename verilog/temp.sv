module temp;
assign step_x = ray_dir_x_i[DATA_WIDTH-1] == 0 ? 1'b1 : -1;
assign step_y = ray_dir_y_i[DATA_WIDTH-1] == 0 ? 1'b1 : -1;

always_ff@(posedge clk_i or negedge rst_n_i) begin
    if(!rst_n_i) begin
        map_x <= {DATA_WIDTH{1'b0}};
        map_y <= {DATA_WIDTH{1'b0}};

        abs_ray_x <= {DATA_WIDTH{1'b0}};
        abs_ray_y <= {DATA_WIDTH{1'b0}};

        delta_dis_x <= {DATA_WIDTH{1'b0}};
        delta_dis_y <= {DATA_WIDTH{1'b0}};

        next_x_boundary <= {DATA_WIDTH{1'b0}};
        next_y_boundary <= {DATA_WIDTH{1'b0}};
        state <= INIT;
    end
    else begin
        case(state)

        INIT : begin
            map_x <= pos_x_i >> 8;
            map_y <= pos_y_i >> 8;
            abs_ray_x <= (ray_dir_x_i < 0) ? -ray_dir_x_i : ray_dir_x_i;
            abs_ray_y <= (ray_dir_y_i < 0) ? -ray_dir_y_i : ray_dir_y_i;
            state <= CALCULATE_DDA;
        end

        CALCULATE_DDA : begin
            delta_dis_x <= (256 * 256)/abs_ray_x;
            delta_dis_y <= (256 * 256)/abs_ray_y;
            next_x_boundary <= (step_x) > 0 ? ((map_x + 1) * 256) - pos_x_i : pos_x_i - (map_x * 256);
            next_y_boundary <= (step_y) > 0 ? ((map_y + 1) * 256) - pos_y_i : pos_y_i - (map_y * 256);
            state <= SIDE_CALCULATE;
        end

        SIDE_CALCULATE : begin
            side_x <= (next_x_boundary *256)/abs_ray_x;
            side_y <= (next_y_boundary *256)/abs_ray_y;
            state <= COMPARE;
        end

        COMPARE : begin
            if(side_x < side_y)begin
                state <= MOVE_X;
            end
            else begin
                state <= MOVE_Y;
            end
        end

        MOVE_X : begin
            map_x <= map_x + step_x;
            side_x <= side_x + delta_dis_x;
            state <= CHECK_WALL;
        end

        MOVE_Y : begin
            map_y <= map_y + step_y;
            side_y <= side_y + delta_dis_y;
            state <= CHECK_WALL;
        end


        default : INIT;

        endcase
    end
end

endmodule
