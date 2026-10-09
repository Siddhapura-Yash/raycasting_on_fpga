// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vstarting_position.h for the primary calling header

#ifndef VERILATED_VSTARTING_POSITION___024ROOT_H_
#define VERILATED_VSTARTING_POSITION___024ROOT_H_  // guard

#include "verilated.h"


class Vstarting_position__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vstarting_position___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clk_i,0,0);
        VL_IN8(rst_n_i,0,0);
        VL_IN8(forward_button_i,0,0);
        VL_IN8(back_button_i,0,0);
        VL_IN8(left_button_i,0,0);
        VL_IN8(right_button_i,0,0);
        VL_OUT8(data_out_valid_o,0,0);
        CData/*0:0*/ starting_position__DOT__data_valid;
        CData/*0:0*/ starting_position__DOT__top_dut__DOT__screen_x_dut_full;
        CData/*0:0*/ starting_position__DOT__top_dut__DOT__screen_x_dut_empty;
        CData/*0:0*/ starting_position__DOT__top_dut__DOT__dirx_dut_full;
        CData/*0:0*/ starting_position__DOT__top_dut__DOT__dirx_dut_empty;
        CData/*0:0*/ starting_position__DOT__top_dut__DOT__posx_dut_full;
        CData/*0:0*/ starting_position__DOT__top_dut__DOT__posx_dut_empty;
        CData/*0:0*/ starting_position__DOT__top_dut__DOT__posy_dut_full;
        CData/*0:0*/ starting_position__DOT__top_dut__DOT__posy_dut_empty;
        CData/*0:0*/ starting_position__DOT__top_dut__DOT__ray_dirx_dut_full;
        CData/*0:0*/ starting_position__DOT__top_dut__DOT__ray_dirx_dut_empty;
        CData/*0:0*/ starting_position__DOT__top_dut__DOT__ray_diry_dut_full;
        CData/*0:0*/ starting_position__DOT__top_dut__DOT__ray_diry_dut_empty;
        CData/*0:0*/ starting_position__DOT__top_dut__DOT__sync_fifo_read_enable;
        CData/*2:0*/ starting_position__DOT__top_dut__DOT__ren_state;
        CData/*0:0*/ starting_position__DOT__top_dut__DOT__dda_start;
        CData/*0:0*/ starting_position__DOT__top_dut__DOT__data_out_valid_dda;
        CData/*0:0*/ starting_position__DOT__top_dut__DOT__dda_busy;
        CData/*3:0*/ starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__state;
        CData/*0:0*/ starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__hit_side;
        CData/*0:0*/ __Vdly__starting_position__DOT__top_dut__DOT__dda_busy;
        CData/*0:0*/ __VstlFirstIteration;
        CData/*0:0*/ __Vtrigprevexpr___TOP__clk_i__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__rst_n_i__0;
        CData/*0:0*/ __VactContinue;
        SData/*9:0*/ starting_position__DOT__screen_x;
        SData/*10:0*/ starting_position__DOT__top_dut__DOT__sync_fifo_screen_x_dut__DOT__data_count;
        SData/*10:0*/ starting_position__DOT__top_dut__DOT__sync_fifo_screen_x_dut__DOT__w_ptr;
        SData/*10:0*/ starting_position__DOT__top_dut__DOT__sync_fifo_screen_x_dut__DOT__r_ptr;
        SData/*10:0*/ starting_position__DOT__top_dut__DOT__sync_fifo_dirx_dut__DOT__data_count;
        SData/*10:0*/ starting_position__DOT__top_dut__DOT__sync_fifo_posx_dut__DOT__data_count;
        SData/*10:0*/ starting_position__DOT__top_dut__DOT__sync_fifo_posx_dut__DOT__w_ptr;
        SData/*10:0*/ starting_position__DOT__top_dut__DOT__sync_fifo_posx_dut__DOT__r_ptr;
        SData/*10:0*/ starting_position__DOT__top_dut__DOT__sync_fifo_posy_dut__DOT__data_count;
        SData/*10:0*/ starting_position__DOT__top_dut__DOT__sync_fifo_posy_dut__DOT__w_ptr;
        SData/*10:0*/ starting_position__DOT__top_dut__DOT__sync_fifo_posy_dut__DOT__r_ptr;
        SData/*10:0*/ starting_position__DOT__top_dut__DOT__sync_fifo_ray_dirx_dut__DOT__data_count;
        SData/*10:0*/ starting_position__DOT__top_dut__DOT__sync_fifo_ray_dirx_dut__DOT__w_ptr;
        SData/*10:0*/ starting_position__DOT__top_dut__DOT__sync_fifo_ray_dirx_dut__DOT__r_ptr;
        SData/*10:0*/ starting_position__DOT__top_dut__DOT__sync_fifo_ray_diry_dut__DOT__data_count;
        SData/*10:0*/ starting_position__DOT__top_dut__DOT__sync_fifo_ray_diry_dut__DOT__w_ptr;
        SData/*10:0*/ starting_position__DOT__top_dut__DOT__sync_fifo_ray_diry_dut__DOT__r_ptr;
        SData/*9:0*/ __Vdly__starting_position__DOT__screen_x;
        SData/*10:0*/ __Vdly__starting_position__DOT__top_dut__DOT__sync_fifo_dirx_dut__DOT__data_count;
        VL_OUT(screen_x_o,19,0);
        IData/*19:0*/ starting_position__DOT__dir_x;
        IData/*19:0*/ starting_position__DOT__dir_y;
        IData/*19:0*/ starting_position__DOT__pos_x;
        IData/*19:0*/ starting_position__DOT__pos_y;
        IData/*19:0*/ starting_position__DOT__plane_x;
        IData/*19:0*/ starting_position__DOT__plane_y;
        IData/*19:0*/ starting_position__DOT__new_left_dir_x;
        IData/*19:0*/ starting_position__DOT__new_left_dir_y;
        IData/*19:0*/ starting_position__DOT__new_left_plane_x;
        IData/*19:0*/ starting_position__DOT__new_left_plane_y;
        IData/*19:0*/ starting_position__DOT__new_right_dir_x;
        IData/*19:0*/ starting_position__DOT__new_right_dir_y;
    };
    struct {
        IData/*19:0*/ starting_position__DOT__new_right_plane_x;
        IData/*19:0*/ starting_position__DOT__new_right_plane_y;
        IData/*19:0*/ starting_position__DOT__top_dut__DOT__screen_x_dut_data_out;
        IData/*19:0*/ starting_position__DOT__top_dut__DOT__posx_dut_data_out;
        IData/*19:0*/ starting_position__DOT__top_dut__DOT__posy_dut_data_out;
        IData/*23:0*/ starting_position__DOT__top_dut__DOT__ray_dirx_dut_data_out;
        IData/*23:0*/ starting_position__DOT__top_dut__DOT__ray_diry_dut_data_out;
        IData/*23:0*/ starting_position__DOT__top_dut__DOT__ray_dir_x_dda;
        IData/*23:0*/ starting_position__DOT__top_dut__DOT__ray_dir_y_dda;
        IData/*19:0*/ starting_position__DOT__top_dut__DOT__screen_x_dda;
        IData/*19:0*/ starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__dir_x_i;
        IData/*19:0*/ starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__dir_y_i;
        IData/*19:0*/ starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__map_x;
        IData/*19:0*/ starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__map_y;
        IData/*19:0*/ starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__abs_ray_x;
        IData/*19:0*/ starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__abs_ray_y;
        IData/*19:0*/ starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__next_x_boundary;
        IData/*19:0*/ starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__next_y_boundary;
        IData/*23:0*/ starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__ray_dir_x_stage1;
        IData/*23:0*/ starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__ray_dir_y_stage1;
        IData/*23:0*/ starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__ray_dir_x_stage2;
        IData/*23:0*/ starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__ray_dir_y_stage2;
        IData/*23:0*/ starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__ray_dir_x_stage3;
        IData/*23:0*/ starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__ray_dir_y_stage3;
        IData/*23:0*/ starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__ray_dir_x_stage4;
        IData/*23:0*/ starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__ray_dir_y_stage4;
        IData/*23:0*/ starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__ray_dir_x_stage5;
        IData/*23:0*/ starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__ray_dir_y_stage5;
        IData/*23:0*/ starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__ray_dir_x_stage6;
        IData/*23:0*/ starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__ray_dir_y_stage6;
        IData/*19:0*/ starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__dir_x_o_stage1;
        IData/*19:0*/ starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__dir_y_o_stage1;
        IData/*19:0*/ starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__dir_x_o_stage2;
        IData/*19:0*/ starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__dir_y_o_stage2;
        IData/*19:0*/ starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__dir_x_o_stage3;
        IData/*19:0*/ starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__dir_y_o_stage3;
        IData/*19:0*/ starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__dir_x_o_stage4;
        IData/*19:0*/ starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__dir_y_o_stage4;
        IData/*19:0*/ starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__dir_x_o_stage5;
        IData/*19:0*/ starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__dir_y_o_stage5;
        IData/*19:0*/ starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__screen_x_o_stage1;
        IData/*19:0*/ starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__screen_x_o_stage2;
        IData/*19:0*/ starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__screen_x_o_stage3;
        IData/*19:0*/ starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__screen_x_o_stage4;
        IData/*19:0*/ starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__screen_x_o_stage5;
        IData/*19:0*/ starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__screen_x_o_stage6;
        IData/*19:0*/ __Vdly__starting_position__DOT__pos_x;
        IData/*19:0*/ __Vdly__starting_position__DOT__pos_y;
        IData/*31:0*/ __VactIterCount;
        VL_OUT64(wall_top_o,60,0);
        VL_OUT64(wall_bottom_o,60,0);
        VL_OUT64(wall_height_o,60,0);
        QData/*40:0*/ starting_position__DOT__top_dut__DOT__hit_distance;
        QData/*40:0*/ starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__delta_dis_y;
        QData/*40:0*/ starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__delta_dis_x;
        QData/*40:0*/ starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__side_x;
        QData/*40:0*/ starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__side_y;
        VlUnpacked<IData/*19:0*/, 1024> starting_position__DOT__top_dut__DOT__sync_fifo_screen_x_dut__DOT__mem;
        VlUnpacked<IData/*19:0*/, 1024> starting_position__DOT__top_dut__DOT__sync_fifo_posx_dut__DOT__mem;
        VlUnpacked<IData/*19:0*/, 1024> starting_position__DOT__top_dut__DOT__sync_fifo_posy_dut__DOT__mem;
        VlUnpacked<IData/*23:0*/, 1024> starting_position__DOT__top_dut__DOT__sync_fifo_ray_dirx_dut__DOT__mem;
        VlUnpacked<IData/*23:0*/, 1024> starting_position__DOT__top_dut__DOT__sync_fifo_ray_diry_dut__DOT__mem;
        VlUnpacked<VlUnpacked<CData/*0:0*/, 12>, 12> starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__map;
    };
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<2> __VactTriggered;
    VlTriggerVec<2> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vstarting_position__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vstarting_position___024root(Vstarting_position__Syms* symsp, const char* v__name);
    ~Vstarting_position___024root();
    VL_UNCOPYABLE(Vstarting_position___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
