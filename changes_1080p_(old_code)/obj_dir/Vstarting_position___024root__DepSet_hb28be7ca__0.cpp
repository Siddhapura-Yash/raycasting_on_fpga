// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vstarting_position.h for the primary calling header

#include "Vstarting_position__pch.h"
#include "Vstarting_position___024root.h"

void Vstarting_position___024root___eval_act(Vstarting_position___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vstarting_position__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstarting_position___024root___eval_act\n"); );
}

VL_INLINE_OPT void Vstarting_position___024root___nba_sequent__TOP__0(Vstarting_position___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vstarting_position__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstarting_position___024root___nba_sequent__TOP__0\n"); );
    // Init
    IData/*19:0*/ __Vdly__starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__map_x;
    __Vdly__starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__map_x = 0;
    IData/*19:0*/ __Vdly__starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__map_y;
    __Vdly__starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__map_y = 0;
    IData/*19:0*/ __Vdly__starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__abs_ray_x;
    __Vdly__starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__abs_ray_x = 0;
    IData/*19:0*/ __Vdly__starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__abs_ray_y;
    __Vdly__starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__abs_ray_y = 0;
    IData/*23:0*/ __Vdly__starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__ray_dir_x_stage1;
    __Vdly__starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__ray_dir_x_stage1 = 0;
    IData/*23:0*/ __Vdly__starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__ray_dir_y_stage1;
    __Vdly__starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__ray_dir_y_stage1 = 0;
    CData/*3:0*/ __Vdly__starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__state;
    __Vdly__starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__state = 0;
    IData/*19:0*/ __Vdly__starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__dir_x_o_stage1;
    __Vdly__starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__dir_x_o_stage1 = 0;
    IData/*19:0*/ __Vdly__starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__dir_y_o_stage1;
    __Vdly__starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__dir_y_o_stage1 = 0;
    IData/*19:0*/ __Vdly__starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__screen_x_o_stage1;
    __Vdly__starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__screen_x_o_stage1 = 0;
    QData/*40:0*/ __Vdly__starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__delta_dis_x;
    __Vdly__starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__delta_dis_x = 0;
    QData/*40:0*/ __Vdly__starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__delta_dis_y;
    __Vdly__starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__delta_dis_y = 0;
    IData/*19:0*/ __Vdly__starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__next_x_boundary;
    __Vdly__starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__next_x_boundary = 0;
    IData/*19:0*/ __Vdly__starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__next_y_boundary;
    __Vdly__starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__next_y_boundary = 0;
    IData/*23:0*/ __Vdly__starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__ray_dir_x_stage2;
    __Vdly__starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__ray_dir_x_stage2 = 0;
    IData/*23:0*/ __Vdly__starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__ray_dir_y_stage2;
    __Vdly__starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__ray_dir_y_stage2 = 0;
    IData/*19:0*/ __Vdly__starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__dir_x_o_stage2;
    __Vdly__starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__dir_x_o_stage2 = 0;
    IData/*19:0*/ __Vdly__starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__dir_y_o_stage2;
    __Vdly__starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__dir_y_o_stage2 = 0;
    IData/*19:0*/ __Vdly__starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__screen_x_o_stage2;
    __Vdly__starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__screen_x_o_stage2 = 0;
    QData/*40:0*/ __Vdly__starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__side_x;
    __Vdly__starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__side_x = 0;
    QData/*40:0*/ __Vdly__starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__side_y;
    __Vdly__starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__side_y = 0;
    IData/*23:0*/ __Vdly__starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__ray_dir_x_stage3;
    __Vdly__starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__ray_dir_x_stage3 = 0;
    IData/*23:0*/ __Vdly__starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__ray_dir_y_stage3;
    __Vdly__starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__ray_dir_y_stage3 = 0;
    IData/*19:0*/ __Vdly__starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__dir_x_o_stage3;
    __Vdly__starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__dir_x_o_stage3 = 0;
    IData/*19:0*/ __Vdly__starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__dir_y_o_stage3;
    __Vdly__starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__dir_y_o_stage3 = 0;
    IData/*19:0*/ __Vdly__starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__screen_x_o_stage3;
    __Vdly__starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__screen_x_o_stage3 = 0;
    IData/*19:0*/ __Vdly__starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__dir_x_o_stage4;
    __Vdly__starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__dir_x_o_stage4 = 0;
    IData/*19:0*/ __Vdly__starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__dir_y_o_stage4;
    __Vdly__starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__dir_y_o_stage4 = 0;
    IData/*23:0*/ __Vdly__starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__ray_dir_x_stage4;
    __Vdly__starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__ray_dir_x_stage4 = 0;
    IData/*23:0*/ __Vdly__starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__ray_dir_y_stage4;
    __Vdly__starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__ray_dir_y_stage4 = 0;
    IData/*19:0*/ __Vdly__starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__screen_x_o_stage4;
    __Vdly__starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__screen_x_o_stage4 = 0;
    CData/*0:0*/ __Vdly__starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__hit_side;
    __Vdly__starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__hit_side = 0;
    IData/*23:0*/ __Vdly__starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__ray_dir_x_stage5;
    __Vdly__starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__ray_dir_x_stage5 = 0;
    IData/*23:0*/ __Vdly__starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__ray_dir_y_stage5;
    __Vdly__starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__ray_dir_y_stage5 = 0;
    IData/*19:0*/ __Vdly__starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__dir_x_o_stage5;
    __Vdly__starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__dir_x_o_stage5 = 0;
    IData/*19:0*/ __Vdly__starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__dir_y_o_stage5;
    __Vdly__starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__dir_y_o_stage5 = 0;
    IData/*19:0*/ __Vdly__starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__screen_x_o_stage5;
    __Vdly__starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__screen_x_o_stage5 = 0;
    IData/*23:0*/ __Vdly__starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__ray_dir_x_stage6;
    __Vdly__starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__ray_dir_x_stage6 = 0;
    IData/*23:0*/ __Vdly__starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__ray_dir_y_stage6;
    __Vdly__starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__ray_dir_y_stage6 = 0;
    IData/*19:0*/ __Vdly__starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__dir_x_o_stage6;
    __Vdly__starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__dir_x_o_stage6 = 0;
    IData/*19:0*/ __Vdly__starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__dir_y_o_stage6;
    __Vdly__starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__dir_y_o_stage6 = 0;
    IData/*19:0*/ __Vdly__starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__screen_x_o_stage6;
    __Vdly__starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__screen_x_o_stage6 = 0;
    // Body
    vlSelf->__Vdly__starting_position__DOT__screen_x 
        = vlSelf->starting_position__DOT__screen_x;
    vlSelf->__Vdly__starting_position__DOT__pos_y = vlSelf->starting_position__DOT__pos_y;
    vlSelf->__Vdly__starting_position__DOT__pos_x = vlSelf->starting_position__DOT__pos_x;
    __Vdly__starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__screen_x_o_stage6 
        = vlSelf->starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__screen_x_o_stage6;
    __Vdly__starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__dir_y_o_stage6 
        = vlSelf->starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__dir_y_o_stage6;
    __Vdly__starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__dir_x_o_stage6 
        = vlSelf->starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__dir_x_o_stage6;
    __Vdly__starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__ray_dir_y_stage6 
        = vlSelf->starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__ray_dir_y_stage6;
    __Vdly__starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__ray_dir_x_stage6 
        = vlSelf->starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__ray_dir_x_stage6;
    __Vdly__starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__screen_x_o_stage5 
        = vlSelf->starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__screen_x_o_stage5;
    __Vdly__starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__dir_y_o_stage5 
        = vlSelf->starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__dir_y_o_stage5;
    __Vdly__starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__dir_x_o_stage5 
        = vlSelf->starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__dir_x_o_stage5;
    __Vdly__starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__ray_dir_y_stage5 
        = vlSelf->starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__ray_dir_y_stage5;
    __Vdly__starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__ray_dir_x_stage5 
        = vlSelf->starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__ray_dir_x_stage5;
    __Vdly__starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__hit_side 
        = vlSelf->starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__hit_side;
    __Vdly__starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__screen_x_o_stage4 
        = vlSelf->starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__screen_x_o_stage4;
    __Vdly__starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__ray_dir_y_stage4 
        = vlSelf->starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__ray_dir_y_stage4;
    __Vdly__starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__ray_dir_x_stage4 
        = vlSelf->starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__ray_dir_x_stage4;
    __Vdly__starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__dir_y_o_stage4 
        = vlSelf->starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__dir_y_o_stage4;
    __Vdly__starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__dir_x_o_stage4 
        = vlSelf->starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__dir_x_o_stage4;
    __Vdly__starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__screen_x_o_stage3 
        = vlSelf->starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__screen_x_o_stage3;
    __Vdly__starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__dir_y_o_stage3 
        = vlSelf->starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__dir_y_o_stage3;
    __Vdly__starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__dir_x_o_stage3 
        = vlSelf->starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__dir_x_o_stage3;
    __Vdly__starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__ray_dir_y_stage3 
        = vlSelf->starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__ray_dir_y_stage3;
    __Vdly__starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__ray_dir_x_stage3 
        = vlSelf->starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__ray_dir_x_stage3;
    __Vdly__starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__side_y 
        = vlSelf->starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__side_y;
    __Vdly__starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__side_x 
        = vlSelf->starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__side_x;
    __Vdly__starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__screen_x_o_stage2 
        = vlSelf->starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__screen_x_o_stage2;
    __Vdly__starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__dir_y_o_stage2 
        = vlSelf->starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__dir_y_o_stage2;
    __Vdly__starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__dir_x_o_stage2 
        = vlSelf->starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__dir_x_o_stage2;
    __Vdly__starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__ray_dir_y_stage2 
        = vlSelf->starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__ray_dir_y_stage2;
    __Vdly__starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__ray_dir_x_stage2 
        = vlSelf->starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__ray_dir_x_stage2;
    __Vdly__starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__next_y_boundary 
        = vlSelf->starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__next_y_boundary;
    __Vdly__starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__next_x_boundary 
        = vlSelf->starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__next_x_boundary;
    __Vdly__starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__delta_dis_y 
        = vlSelf->starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__delta_dis_y;
    __Vdly__starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__delta_dis_x 
        = vlSelf->starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__delta_dis_x;
    __Vdly__starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__screen_x_o_stage1 
        = vlSelf->starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__screen_x_o_stage1;
    __Vdly__starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__dir_y_o_stage1 
        = vlSelf->starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__dir_y_o_stage1;
    __Vdly__starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__dir_x_o_stage1 
        = vlSelf->starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__dir_x_o_stage1;
    __Vdly__starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__state 
        = vlSelf->starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__state;
    vlSelf->__Vdly__starting_position__DOT__top_dut__DOT__dda_busy 
        = vlSelf->starting_position__DOT__top_dut__DOT__dda_busy;
    __Vdly__starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__ray_dir_y_stage1 
        = vlSelf->starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__ray_dir_y_stage1;
    __Vdly__starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__ray_dir_x_stage1 
        = vlSelf->starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__ray_dir_x_stage1;
    __Vdly__starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__abs_ray_y 
        = vlSelf->starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__abs_ray_y;
    __Vdly__starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__abs_ray_x 
        = vlSelf->starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__abs_ray_x;
    __Vdly__starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__map_y 
        = vlSelf->starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__map_y;
    __Vdly__starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__map_x 
        = vlSelf->starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__map_x;
    vlSelf->data_out_valid_o = ((IData)(vlSelf->rst_n_i) 
                                && (IData)(vlSelf->starting_position__DOT__top_dut__DOT__data_out_valid_dda));
    if (vlSelf->rst_n_i) {
        if (vlSelf->forward_button_i) {
            vlSelf->__Vdly__starting_position__DOT__pos_y 
                = (0xfffffU & (vlSelf->starting_position__DOT__pos_y 
                               + VL_SHIFTRS_III(20,32,32, 
                                                VL_MULS_III(32, (IData)(4U), 
                                                            VL_EXTENDS_II(32,20, vlSelf->starting_position__DOT__dir_y)), 8U)));
            vlSelf->__Vdly__starting_position__DOT__pos_x 
                = (0xfffffU & (vlSelf->starting_position__DOT__pos_x 
                               + VL_SHIFTRS_III(20,32,32, 
                                                VL_MULS_III(32, (IData)(4U), 
                                                            VL_EXTENDS_II(32,20, vlSelf->starting_position__DOT__dir_x)), 8U)));
        }
        if (vlSelf->back_button_i) {
            vlSelf->__Vdly__starting_position__DOT__pos_y 
                = (0xfffffU & (vlSelf->starting_position__DOT__pos_y 
                               - VL_SHIFTRS_III(20,32,32, 
                                                VL_MULS_III(32, (IData)(4U), 
                                                            VL_EXTENDS_II(32,20, vlSelf->starting_position__DOT__dir_y)), 8U)));
            vlSelf->__Vdly__starting_position__DOT__pos_x 
                = (0xfffffU & (vlSelf->starting_position__DOT__pos_x 
                               - VL_SHIFTRS_III(20,32,32, 
                                                VL_MULS_III(32, (IData)(4U), 
                                                            VL_EXTENDS_II(32,20, vlSelf->starting_position__DOT__dir_x)), 8U)));
        }
        if (((((((((0U == (IData)(vlSelf->starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__state)) 
                   | (1U == (IData)(vlSelf->starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__state))) 
                  | (2U == (IData)(vlSelf->starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__state))) 
                 | (3U == (IData)(vlSelf->starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__state))) 
                | (4U == (IData)(vlSelf->starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__state))) 
               | (5U == (IData)(vlSelf->starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__state))) 
              | (6U == (IData)(vlSelf->starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__state))) 
             | (7U == (IData)(vlSelf->starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__state)))) {
            if ((0U == (IData)(vlSelf->starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__state))) {
                if (vlSelf->starting_position__DOT__top_dut__DOT__dda_start) {
                    __Vdly__starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__map_x 
                        = (0xfffffU & VL_SHIFTR_III(20,20,32, vlSelf->starting_position__DOT__top_dut__DOT__posx_dut_data_out, 8U));
                    __Vdly__starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__map_y 
                        = (0xfffffU & VL_SHIFTR_III(20,20,32, vlSelf->starting_position__DOT__top_dut__DOT__posy_dut_data_out, 8U));
                    __Vdly__starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__abs_ray_x 
                        = (0xfffffU & (VL_GTS_III(32, 0U, 
                                                  VL_EXTENDS_II(32,24, vlSelf->starting_position__DOT__top_dut__DOT__ray_dirx_dut_data_out))
                                        ? (- vlSelf->starting_position__DOT__top_dut__DOT__ray_dirx_dut_data_out)
                                        : vlSelf->starting_position__DOT__top_dut__DOT__ray_dirx_dut_data_out));
                    __Vdly__starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__abs_ray_y 
                        = (0xfffffU & (VL_GTS_III(32, 0U, 
                                                  VL_EXTENDS_II(32,24, vlSelf->starting_position__DOT__top_dut__DOT__ray_diry_dut_data_out))
                                        ? (- vlSelf->starting_position__DOT__top_dut__DOT__ray_diry_dut_data_out)
                                        : vlSelf->starting_position__DOT__top_dut__DOT__ray_diry_dut_data_out));
                    __Vdly__starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__ray_dir_x_stage1 
                        = vlSelf->starting_position__DOT__top_dut__DOT__ray_dirx_dut_data_out;
                    __Vdly__starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__ray_dir_y_stage1 
                        = vlSelf->starting_position__DOT__top_dut__DOT__ray_diry_dut_data_out;
                    vlSelf->__Vdly__starting_position__DOT__top_dut__DOT__dda_busy = 1U;
                    vlSelf->starting_position__DOT__top_dut__DOT__dda_done = 0U;
                    __Vdly__starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__state = 1U;
                    __Vdly__starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__dir_x_o_stage1 
                        = vlSelf->starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__dir_x_i;
                    __Vdly__starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__dir_y_o_stage1 
                        = vlSelf->starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__dir_y_i;
                    vlSelf->starting_position__DOT__top_dut__DOT__data_out_valid_dda = 0U;
                    __Vdly__starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__screen_x_o_stage1 
                        = vlSelf->starting_position__DOT__top_dut__DOT__screen_x_dut_data_out;
                } else {
                    vlSelf->__Vdly__starting_position__DOT__top_dut__DOT__dda_busy = 0U;
                    vlSelf->starting_position__DOT__top_dut__DOT__dda_done = 0U;
                    vlSelf->starting_position__DOT__top_dut__DOT__data_out_valid_dda = 0U;
                    __Vdly__starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__state = 0U;
                }
            } else if ((1U == (IData)(vlSelf->starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__state))) {
                __Vdly__starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__delta_dis_x 
                    = ((0U == vlSelf->starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__abs_ray_x)
                        ? 0x3ffULL : (0x1ffffffffffULL 
                                      & VL_DIV_QQQ(41, 0x10000ULL, (QData)((IData)(vlSelf->starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__abs_ray_x)))));
                __Vdly__starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__delta_dis_y 
                    = ((0U == vlSelf->starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__abs_ray_y)
                        ? 0x3ffULL : (0x1ffffffffffULL 
                                      & VL_DIV_QQQ(41, 0x10000ULL, (QData)((IData)(vlSelf->starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__abs_ray_y)))));
                __Vdly__starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__next_x_boundary 
                    = (0xfffffU & (VL_LTS_III(32, 0U, 
                                              VL_EXTENDS_II(32,20, 
                                                            (VL_LTS_III(32, 0U, 
                                                                        VL_EXTENDS_II(32,24, vlSelf->starting_position__DOT__top_dut__DOT__ray_dirx_dut_data_out))
                                                              ? 1U
                                                              : 0xfffffU)))
                                    ? (VL_SHIFTL_III(32,32,32, 
                                                     ((IData)(1U) 
                                                      + vlSelf->starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__map_x), 8U) 
                                       - vlSelf->starting_position__DOT__top_dut__DOT__posx_dut_data_out)
                                    : (vlSelf->starting_position__DOT__top_dut__DOT__posx_dut_data_out 
                                       - VL_SHIFTL_III(32,32,32, vlSelf->starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__map_x, 8U))));
                __Vdly__starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__next_y_boundary 
                    = (0xfffffU & (VL_LTS_III(32, 0U, 
                                              VL_EXTENDS_II(32,20, 
                                                            (VL_LTS_III(32, 0U, 
                                                                        VL_EXTENDS_II(32,24, vlSelf->starting_position__DOT__top_dut__DOT__ray_diry_dut_data_out))
                                                              ? 1U
                                                              : 0xfffffU)))
                                    ? (VL_SHIFTL_III(32,32,32, 
                                                     ((IData)(1U) 
                                                      + vlSelf->starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__map_y), 8U) 
                                       - vlSelf->starting_position__DOT__top_dut__DOT__posy_dut_data_out)
                                    : (vlSelf->starting_position__DOT__top_dut__DOT__posy_dut_data_out 
                                       - VL_SHIFTL_III(32,32,32, vlSelf->starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__map_y, 8U))));
                __Vdly__starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__ray_dir_x_stage2 
                    = vlSelf->starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__ray_dir_x_stage1;
                __Vdly__starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__ray_dir_y_stage2 
                    = vlSelf->starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__ray_dir_y_stage1;
                __Vdly__starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__dir_x_o_stage2 
                    = vlSelf->starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__dir_x_o_stage1;
                __Vdly__starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__dir_y_o_stage2 
                    = vlSelf->starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__dir_y_o_stage1;
                __Vdly__starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__screen_x_o_stage2 
                    = vlSelf->starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__screen_x_o_stage1;
                __Vdly__starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__state = 2U;
            } else if ((2U == (IData)(vlSelf->starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__state))) {
                __Vdly__starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__side_x 
                    = ((0U == vlSelf->starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__abs_ray_x)
                        ? 0x3ffULL : (0x1ffffffffffULL 
                                      & VL_DIV_QQQ(41, 
                                                   (0x1ffffffffffULL 
                                                    & VL_SHIFTL_QQI(41,41,32, (QData)((IData)(vlSelf->starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__next_x_boundary)), 8U)), (QData)((IData)(vlSelf->starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__abs_ray_x)))));
                __Vdly__starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__side_y 
                    = ((0U == vlSelf->starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__abs_ray_y)
                        ? 0x3ffULL : (0x1ffffffffffULL 
                                      & VL_DIV_QQQ(41, 
                                                   (0x1ffffffffffULL 
                                                    & VL_SHIFTL_QQI(41,41,32, (QData)((IData)(vlSelf->starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__next_y_boundary)), 8U)), (QData)((IData)(vlSelf->starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__abs_ray_y)))));
                __Vdly__starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__ray_dir_x_stage3 
                    = vlSelf->starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__ray_dir_x_stage2;
                __Vdly__starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__ray_dir_y_stage3 
                    = vlSelf->starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__ray_dir_y_stage2;
                __Vdly__starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__dir_x_o_stage3 
                    = vlSelf->starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__dir_x_o_stage2;
                __Vdly__starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__dir_y_o_stage3 
                    = vlSelf->starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__dir_y_o_stage2;
                __Vdly__starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__screen_x_o_stage3 
                    = vlSelf->starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__screen_x_o_stage2;
                __Vdly__starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__state = 3U;
            } else if ((3U == (IData)(vlSelf->starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__state))) {
                __Vdly__starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__state 
                    = ((vlSelf->starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__side_x 
                        < vlSelf->starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__side_y)
                        ? 4U : 5U);
                __Vdly__starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__dir_x_o_stage4 
                    = vlSelf->starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__dir_x_o_stage3;
                __Vdly__starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__dir_y_o_stage4 
                    = vlSelf->starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__dir_y_o_stage3;
                __Vdly__starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__ray_dir_x_stage4 
                    = vlSelf->starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__ray_dir_x_stage3;
                __Vdly__starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__ray_dir_y_stage4 
                    = vlSelf->starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__ray_dir_y_stage3;
                __Vdly__starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__screen_x_o_stage4 
                    = vlSelf->starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__screen_x_o_stage3;
            } else if ((4U == (IData)(vlSelf->starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__state))) {
                __Vdly__starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__map_x 
                    = (0xfffffU & (vlSelf->starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__map_x 
                                   + (VL_LTS_III(32, 0U, 
                                                 VL_EXTENDS_II(32,24, vlSelf->starting_position__DOT__top_dut__DOT__ray_dirx_dut_data_out))
                                       ? 1U : 0xfffffU)));
                __Vdly__starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__side_x 
                    = (0x1ffffffffffULL & (vlSelf->starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__side_x 
                                           + vlSelf->starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__delta_dis_x));
                __Vdly__starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__hit_side = 1U;
                __Vdly__starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__ray_dir_x_stage5 
                    = vlSelf->starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__ray_dir_x_stage4;
                __Vdly__starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__ray_dir_y_stage5 
                    = vlSelf->starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__ray_dir_y_stage4;
                __Vdly__starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__dir_x_o_stage5 
                    = vlSelf->starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__dir_x_o_stage4;
                __Vdly__starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__dir_y_o_stage5 
                    = vlSelf->starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__dir_y_o_stage4;
                __Vdly__starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__screen_x_o_stage5 
                    = vlSelf->starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__screen_x_o_stage4;
                __Vdly__starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__state = 6U;
            } else if ((5U == (IData)(vlSelf->starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__state))) {
                __Vdly__starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__map_y 
                    = (0xfffffU & (vlSelf->starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__map_y 
                                   + (VL_LTS_III(32, 0U, 
                                                 VL_EXTENDS_II(32,24, vlSelf->starting_position__DOT__top_dut__DOT__ray_diry_dut_data_out))
                                       ? 1U : 0xfffffU)));
                __Vdly__starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__side_y 
                    = (0x1ffffffffffULL & (vlSelf->starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__side_y 
                                           + vlSelf->starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__delta_dis_y));
                __Vdly__starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__hit_side = 0U;
                __Vdly__starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__ray_dir_x_stage5 
                    = vlSelf->starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__ray_dir_x_stage4;
                __Vdly__starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__ray_dir_y_stage5 
                    = vlSelf->starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__ray_dir_y_stage4;
                __Vdly__starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__dir_x_o_stage5 
                    = vlSelf->starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__dir_x_o_stage4;
                __Vdly__starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__dir_y_o_stage5 
                    = vlSelf->starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__dir_y_o_stage4;
                __Vdly__starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__screen_x_o_stage5 
                    = vlSelf->starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__screen_x_o_stage4;
                __Vdly__starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__state = 6U;
            } else if ((6U == (IData)(vlSelf->starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__state))) {
                if (((0xbU >= (0xfU & vlSelf->starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__map_x)) 
                     && vlSelf->starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__map
                     [((0xbU >= (0xfU & vlSelf->starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__map_y))
                        ? (0xfU & vlSelf->starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__map_y)
                        : 0U)][(0xfU & vlSelf->starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__map_x)])) {
                    __Vdly__starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__ray_dir_x_stage6 
                        = vlSelf->starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__ray_dir_x_stage5;
                    __Vdly__starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__ray_dir_y_stage6 
                        = vlSelf->starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__ray_dir_y_stage5;
                    __Vdly__starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__dir_x_o_stage6 
                        = vlSelf->starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__dir_x_o_stage5;
                    __Vdly__starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__dir_y_o_stage6 
                        = vlSelf->starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__dir_y_o_stage5;
                    __Vdly__starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__screen_x_o_stage6 
                        = vlSelf->starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__screen_x_o_stage5;
                    __Vdly__starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__state = 7U;
                    vlSelf->starting_position__DOT__top_dut__DOT__hit_distance 
                        = (0x1ffffffffffULL & ((IData)(vlSelf->starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__hit_side)
                                                ? (vlSelf->starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__side_x 
                                                   - vlSelf->starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__delta_dis_x)
                                                : (vlSelf->starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__side_y 
                                                   - vlSelf->starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__delta_dis_y)));
                } else {
                    __Vdly__starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__state = 3U;
                }
            } else {
                vlSelf->starting_position__DOT__top_dut__DOT__ray_dir_x_dda 
                    = vlSelf->starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__ray_dir_x_stage6;
                vlSelf->starting_position__DOT__top_dut__DOT__ray_dir_y_dda 
                    = vlSelf->starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__ray_dir_y_stage6;
                vlSelf->starting_position__DOT__top_dut__DOT__dir_x_dda 
                    = vlSelf->starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__dir_x_o_stage6;
                vlSelf->starting_position__DOT__top_dut__DOT__dir_y_dda 
                    = vlSelf->starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__dir_y_o_stage6;
                vlSelf->starting_position__DOT__top_dut__DOT__screen_x_dda 
                    = vlSelf->starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__screen_x_o_stage6;
                vlSelf->starting_position__DOT__top_dut__DOT__data_out_valid_dda = 1U;
                vlSelf->starting_position__DOT__top_dut__DOT__dda_done = 1U;
                vlSelf->__Vdly__starting_position__DOT__top_dut__DOT__dda_busy = 0U;
                vlSelf->starting_position__DOT__top_dut__DOT__mapx 
                    = vlSelf->starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__map_x;
                vlSelf->starting_position__DOT__top_dut__DOT__mapy 
                    = vlSelf->starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__map_y;
                __Vdly__starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__state = 0U;
            }
        } else {
            __Vdly__starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__state = 0U;
        }
    } else {
        vlSelf->__Vdly__starting_position__DOT__pos_y = 0x280U;
        vlSelf->__Vdly__starting_position__DOT__pos_x = 0x280U;
        __Vdly__starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__map_x = 0U;
        __Vdly__starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__map_y = 0U;
        __Vdly__starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__abs_ray_x = 0U;
        __Vdly__starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__abs_ray_y = 0U;
        __Vdly__starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__delta_dis_x = 0ULL;
        __Vdly__starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__delta_dis_y = 0ULL;
        __Vdly__starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__next_x_boundary = 0U;
        __Vdly__starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__next_y_boundary = 0U;
        vlSelf->starting_position__DOT__top_dut__DOT__data_out_valid_dda = 0U;
        vlSelf->__Vdly__starting_position__DOT__top_dut__DOT__dda_busy = 0U;
        vlSelf->starting_position__DOT__top_dut__DOT__dda_done = 0U;
        vlSelf->starting_position__DOT__top_dut__DOT__dir_x_dda = 0U;
        vlSelf->starting_position__DOT__top_dut__DOT__dir_y_dda = 0U;
        vlSelf->starting_position__DOT__top_dut__DOT__hit_distance = 0ULL;
        vlSelf->starting_position__DOT__top_dut__DOT__mapx = 0U;
        vlSelf->starting_position__DOT__top_dut__DOT__mapy = 0U;
        vlSelf->starting_position__DOT__top_dut__DOT__screen_x_dda = 0U;
        __Vdly__starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__state = 0U;
    }
    vlSelf->starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__map_x 
        = __Vdly__starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__map_x;
    vlSelf->starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__map_y 
        = __Vdly__starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__map_y;
    vlSelf->starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__abs_ray_x 
        = __Vdly__starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__abs_ray_x;
    vlSelf->starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__abs_ray_y 
        = __Vdly__starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__abs_ray_y;
    vlSelf->starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__ray_dir_x_stage1 
        = __Vdly__starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__ray_dir_x_stage1;
    vlSelf->starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__ray_dir_y_stage1 
        = __Vdly__starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__ray_dir_y_stage1;
    vlSelf->starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__state 
        = __Vdly__starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__state;
    vlSelf->starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__dir_x_o_stage1 
        = __Vdly__starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__dir_x_o_stage1;
    vlSelf->starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__dir_y_o_stage1 
        = __Vdly__starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__dir_y_o_stage1;
    vlSelf->starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__screen_x_o_stage1 
        = __Vdly__starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__screen_x_o_stage1;
    vlSelf->starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__delta_dis_x 
        = __Vdly__starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__delta_dis_x;
    vlSelf->starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__delta_dis_y 
        = __Vdly__starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__delta_dis_y;
    vlSelf->starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__next_x_boundary 
        = __Vdly__starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__next_x_boundary;
    vlSelf->starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__next_y_boundary 
        = __Vdly__starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__next_y_boundary;
    vlSelf->starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__ray_dir_x_stage2 
        = __Vdly__starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__ray_dir_x_stage2;
    vlSelf->starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__ray_dir_y_stage2 
        = __Vdly__starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__ray_dir_y_stage2;
    vlSelf->starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__dir_x_o_stage2 
        = __Vdly__starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__dir_x_o_stage2;
    vlSelf->starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__dir_y_o_stage2 
        = __Vdly__starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__dir_y_o_stage2;
    vlSelf->starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__screen_x_o_stage2 
        = __Vdly__starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__screen_x_o_stage2;
    vlSelf->starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__side_x 
        = __Vdly__starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__side_x;
    vlSelf->starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__side_y 
        = __Vdly__starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__side_y;
    vlSelf->starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__ray_dir_x_stage3 
        = __Vdly__starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__ray_dir_x_stage3;
    vlSelf->starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__ray_dir_y_stage3 
        = __Vdly__starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__ray_dir_y_stage3;
    vlSelf->starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__dir_x_o_stage3 
        = __Vdly__starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__dir_x_o_stage3;
    vlSelf->starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__dir_y_o_stage3 
        = __Vdly__starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__dir_y_o_stage3;
    vlSelf->starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__screen_x_o_stage3 
        = __Vdly__starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__screen_x_o_stage3;
    vlSelf->starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__dir_x_o_stage4 
        = __Vdly__starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__dir_x_o_stage4;
    vlSelf->starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__dir_y_o_stage4 
        = __Vdly__starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__dir_y_o_stage4;
    vlSelf->starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__ray_dir_x_stage4 
        = __Vdly__starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__ray_dir_x_stage4;
    vlSelf->starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__ray_dir_y_stage4 
        = __Vdly__starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__ray_dir_y_stage4;
    vlSelf->starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__screen_x_o_stage4 
        = __Vdly__starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__screen_x_o_stage4;
    vlSelf->starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__hit_side 
        = __Vdly__starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__hit_side;
    vlSelf->starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__ray_dir_x_stage5 
        = __Vdly__starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__ray_dir_x_stage5;
    vlSelf->starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__ray_dir_y_stage5 
        = __Vdly__starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__ray_dir_y_stage5;
    vlSelf->starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__dir_x_o_stage5 
        = __Vdly__starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__dir_x_o_stage5;
    vlSelf->starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__dir_y_o_stage5 
        = __Vdly__starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__dir_y_o_stage5;
    vlSelf->starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__screen_x_o_stage5 
        = __Vdly__starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__screen_x_o_stage5;
    vlSelf->starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__ray_dir_x_stage6 
        = __Vdly__starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__ray_dir_x_stage6;
    vlSelf->starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__ray_dir_y_stage6 
        = __Vdly__starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__ray_dir_y_stage6;
    vlSelf->starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__dir_x_o_stage6 
        = __Vdly__starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__dir_x_o_stage6;
    vlSelf->starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__dir_y_o_stage6 
        = __Vdly__starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__dir_y_o_stage6;
    vlSelf->starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__screen_x_o_stage6 
        = __Vdly__starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__screen_x_o_stage6;
    vlSelf->screen_x_o = vlSelf->starting_position__DOT__top_dut__DOT__screen_x_dda;
}

VL_INLINE_OPT void Vstarting_position___024root___nba_sequent__TOP__1(Vstarting_position___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vstarting_position__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstarting_position___024root___nba_sequent__TOP__1\n"); );
    // Init
    SData/*11:0*/ __Vdly__starting_position__DOT__top_dut__DOT__sync_fifo_screen_x_dut__DOT__w_ptr;
    __Vdly__starting_position__DOT__top_dut__DOT__sync_fifo_screen_x_dut__DOT__w_ptr = 0;
    SData/*10:0*/ __Vdlyvdim0__starting_position__DOT__top_dut__DOT__sync_fifo_screen_x_dut__DOT__mem__v0;
    __Vdlyvdim0__starting_position__DOT__top_dut__DOT__sync_fifo_screen_x_dut__DOT__mem__v0 = 0;
    IData/*19:0*/ __Vdlyvval__starting_position__DOT__top_dut__DOT__sync_fifo_screen_x_dut__DOT__mem__v0;
    __Vdlyvval__starting_position__DOT__top_dut__DOT__sync_fifo_screen_x_dut__DOT__mem__v0 = 0;
    CData/*0:0*/ __Vdlyvset__starting_position__DOT__top_dut__DOT__sync_fifo_screen_x_dut__DOT__mem__v0;
    __Vdlyvset__starting_position__DOT__top_dut__DOT__sync_fifo_screen_x_dut__DOT__mem__v0 = 0;
    SData/*11:0*/ __Vdly__starting_position__DOT__top_dut__DOT__sync_fifo_screen_x_dut__DOT__r_ptr;
    __Vdly__starting_position__DOT__top_dut__DOT__sync_fifo_screen_x_dut__DOT__r_ptr = 0;
    SData/*11:0*/ __Vdly__starting_position__DOT__top_dut__DOT__sync_fifo_screen_x_dut__DOT__data_count;
    __Vdly__starting_position__DOT__top_dut__DOT__sync_fifo_screen_x_dut__DOT__data_count = 0;
    SData/*11:0*/ __Vdly__starting_position__DOT__top_dut__DOT__sync_fifo_dirx_dut__DOT__w_ptr;
    __Vdly__starting_position__DOT__top_dut__DOT__sync_fifo_dirx_dut__DOT__w_ptr = 0;
    SData/*10:0*/ __Vdlyvdim0__starting_position__DOT__top_dut__DOT__sync_fifo_dirx_dut__DOT__mem__v0;
    __Vdlyvdim0__starting_position__DOT__top_dut__DOT__sync_fifo_dirx_dut__DOT__mem__v0 = 0;
    IData/*19:0*/ __Vdlyvval__starting_position__DOT__top_dut__DOT__sync_fifo_dirx_dut__DOT__mem__v0;
    __Vdlyvval__starting_position__DOT__top_dut__DOT__sync_fifo_dirx_dut__DOT__mem__v0 = 0;
    CData/*0:0*/ __Vdlyvset__starting_position__DOT__top_dut__DOT__sync_fifo_dirx_dut__DOT__mem__v0;
    __Vdlyvset__starting_position__DOT__top_dut__DOT__sync_fifo_dirx_dut__DOT__mem__v0 = 0;
    SData/*11:0*/ __Vdly__starting_position__DOT__top_dut__DOT__sync_fifo_dirx_dut__DOT__r_ptr;
    __Vdly__starting_position__DOT__top_dut__DOT__sync_fifo_dirx_dut__DOT__r_ptr = 0;
    SData/*11:0*/ __Vdly__starting_position__DOT__top_dut__DOT__sync_fifo_diry_dut__DOT__w_ptr;
    __Vdly__starting_position__DOT__top_dut__DOT__sync_fifo_diry_dut__DOT__w_ptr = 0;
    SData/*10:0*/ __Vdlyvdim0__starting_position__DOT__top_dut__DOT__sync_fifo_diry_dut__DOT__mem__v0;
    __Vdlyvdim0__starting_position__DOT__top_dut__DOT__sync_fifo_diry_dut__DOT__mem__v0 = 0;
    IData/*19:0*/ __Vdlyvval__starting_position__DOT__top_dut__DOT__sync_fifo_diry_dut__DOT__mem__v0;
    __Vdlyvval__starting_position__DOT__top_dut__DOT__sync_fifo_diry_dut__DOT__mem__v0 = 0;
    CData/*0:0*/ __Vdlyvset__starting_position__DOT__top_dut__DOT__sync_fifo_diry_dut__DOT__mem__v0;
    __Vdlyvset__starting_position__DOT__top_dut__DOT__sync_fifo_diry_dut__DOT__mem__v0 = 0;
    SData/*11:0*/ __Vdly__starting_position__DOT__top_dut__DOT__sync_fifo_diry_dut__DOT__r_ptr;
    __Vdly__starting_position__DOT__top_dut__DOT__sync_fifo_diry_dut__DOT__r_ptr = 0;
    SData/*11:0*/ __Vdly__starting_position__DOT__top_dut__DOT__sync_fifo_diry_dut__DOT__data_count;
    __Vdly__starting_position__DOT__top_dut__DOT__sync_fifo_diry_dut__DOT__data_count = 0;
    SData/*11:0*/ __Vdly__starting_position__DOT__top_dut__DOT__sync_fifo_posx_dut__DOT__w_ptr;
    __Vdly__starting_position__DOT__top_dut__DOT__sync_fifo_posx_dut__DOT__w_ptr = 0;
    SData/*10:0*/ __Vdlyvdim0__starting_position__DOT__top_dut__DOT__sync_fifo_posx_dut__DOT__mem__v0;
    __Vdlyvdim0__starting_position__DOT__top_dut__DOT__sync_fifo_posx_dut__DOT__mem__v0 = 0;
    IData/*19:0*/ __Vdlyvval__starting_position__DOT__top_dut__DOT__sync_fifo_posx_dut__DOT__mem__v0;
    __Vdlyvval__starting_position__DOT__top_dut__DOT__sync_fifo_posx_dut__DOT__mem__v0 = 0;
    CData/*0:0*/ __Vdlyvset__starting_position__DOT__top_dut__DOT__sync_fifo_posx_dut__DOT__mem__v0;
    __Vdlyvset__starting_position__DOT__top_dut__DOT__sync_fifo_posx_dut__DOT__mem__v0 = 0;
    SData/*11:0*/ __Vdly__starting_position__DOT__top_dut__DOT__sync_fifo_posx_dut__DOT__r_ptr;
    __Vdly__starting_position__DOT__top_dut__DOT__sync_fifo_posx_dut__DOT__r_ptr = 0;
    SData/*11:0*/ __Vdly__starting_position__DOT__top_dut__DOT__sync_fifo_posx_dut__DOT__data_count;
    __Vdly__starting_position__DOT__top_dut__DOT__sync_fifo_posx_dut__DOT__data_count = 0;
    SData/*11:0*/ __Vdly__starting_position__DOT__top_dut__DOT__sync_fifo_posy_dut__DOT__w_ptr;
    __Vdly__starting_position__DOT__top_dut__DOT__sync_fifo_posy_dut__DOT__w_ptr = 0;
    SData/*10:0*/ __Vdlyvdim0__starting_position__DOT__top_dut__DOT__sync_fifo_posy_dut__DOT__mem__v0;
    __Vdlyvdim0__starting_position__DOT__top_dut__DOT__sync_fifo_posy_dut__DOT__mem__v0 = 0;
    IData/*19:0*/ __Vdlyvval__starting_position__DOT__top_dut__DOT__sync_fifo_posy_dut__DOT__mem__v0;
    __Vdlyvval__starting_position__DOT__top_dut__DOT__sync_fifo_posy_dut__DOT__mem__v0 = 0;
    CData/*0:0*/ __Vdlyvset__starting_position__DOT__top_dut__DOT__sync_fifo_posy_dut__DOT__mem__v0;
    __Vdlyvset__starting_position__DOT__top_dut__DOT__sync_fifo_posy_dut__DOT__mem__v0 = 0;
    SData/*11:0*/ __Vdly__starting_position__DOT__top_dut__DOT__sync_fifo_posy_dut__DOT__r_ptr;
    __Vdly__starting_position__DOT__top_dut__DOT__sync_fifo_posy_dut__DOT__r_ptr = 0;
    SData/*11:0*/ __Vdly__starting_position__DOT__top_dut__DOT__sync_fifo_posy_dut__DOT__data_count;
    __Vdly__starting_position__DOT__top_dut__DOT__sync_fifo_posy_dut__DOT__data_count = 0;
    SData/*11:0*/ __Vdly__starting_position__DOT__top_dut__DOT__sync_fifo_ray_dirx_dut__DOT__w_ptr;
    __Vdly__starting_position__DOT__top_dut__DOT__sync_fifo_ray_dirx_dut__DOT__w_ptr = 0;
    SData/*10:0*/ __Vdlyvdim0__starting_position__DOT__top_dut__DOT__sync_fifo_ray_dirx_dut__DOT__mem__v0;
    __Vdlyvdim0__starting_position__DOT__top_dut__DOT__sync_fifo_ray_dirx_dut__DOT__mem__v0 = 0;
    IData/*23:0*/ __Vdlyvval__starting_position__DOT__top_dut__DOT__sync_fifo_ray_dirx_dut__DOT__mem__v0;
    __Vdlyvval__starting_position__DOT__top_dut__DOT__sync_fifo_ray_dirx_dut__DOT__mem__v0 = 0;
    CData/*0:0*/ __Vdlyvset__starting_position__DOT__top_dut__DOT__sync_fifo_ray_dirx_dut__DOT__mem__v0;
    __Vdlyvset__starting_position__DOT__top_dut__DOT__sync_fifo_ray_dirx_dut__DOT__mem__v0 = 0;
    SData/*11:0*/ __Vdly__starting_position__DOT__top_dut__DOT__sync_fifo_ray_dirx_dut__DOT__r_ptr;
    __Vdly__starting_position__DOT__top_dut__DOT__sync_fifo_ray_dirx_dut__DOT__r_ptr = 0;
    SData/*11:0*/ __Vdly__starting_position__DOT__top_dut__DOT__sync_fifo_ray_dirx_dut__DOT__data_count;
    __Vdly__starting_position__DOT__top_dut__DOT__sync_fifo_ray_dirx_dut__DOT__data_count = 0;
    SData/*11:0*/ __Vdly__starting_position__DOT__top_dut__DOT__sync_fifo_ray_diry_dut__DOT__w_ptr;
    __Vdly__starting_position__DOT__top_dut__DOT__sync_fifo_ray_diry_dut__DOT__w_ptr = 0;
    SData/*10:0*/ __Vdlyvdim0__starting_position__DOT__top_dut__DOT__sync_fifo_ray_diry_dut__DOT__mem__v0;
    __Vdlyvdim0__starting_position__DOT__top_dut__DOT__sync_fifo_ray_diry_dut__DOT__mem__v0 = 0;
    IData/*23:0*/ __Vdlyvval__starting_position__DOT__top_dut__DOT__sync_fifo_ray_diry_dut__DOT__mem__v0;
    __Vdlyvval__starting_position__DOT__top_dut__DOT__sync_fifo_ray_diry_dut__DOT__mem__v0 = 0;
    CData/*0:0*/ __Vdlyvset__starting_position__DOT__top_dut__DOT__sync_fifo_ray_diry_dut__DOT__mem__v0;
    __Vdlyvset__starting_position__DOT__top_dut__DOT__sync_fifo_ray_diry_dut__DOT__mem__v0 = 0;
    SData/*11:0*/ __Vdly__starting_position__DOT__top_dut__DOT__sync_fifo_ray_diry_dut__DOT__r_ptr;
    __Vdly__starting_position__DOT__top_dut__DOT__sync_fifo_ray_diry_dut__DOT__r_ptr = 0;
    SData/*11:0*/ __Vdly__starting_position__DOT__top_dut__DOT__sync_fifo_ray_diry_dut__DOT__data_count;
    __Vdly__starting_position__DOT__top_dut__DOT__sync_fifo_ray_diry_dut__DOT__data_count = 0;
    // Body
    __Vdly__starting_position__DOT__top_dut__DOT__sync_fifo_ray_diry_dut__DOT__w_ptr 
        = vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_ray_diry_dut__DOT__w_ptr;
    __Vdly__starting_position__DOT__top_dut__DOT__sync_fifo_ray_dirx_dut__DOT__w_ptr 
        = vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_ray_dirx_dut__DOT__w_ptr;
    __Vdly__starting_position__DOT__top_dut__DOT__sync_fifo_posy_dut__DOT__w_ptr 
        = vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_posy_dut__DOT__w_ptr;
    __Vdly__starting_position__DOT__top_dut__DOT__sync_fifo_posx_dut__DOT__w_ptr 
        = vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_posx_dut__DOT__w_ptr;
    __Vdly__starting_position__DOT__top_dut__DOT__sync_fifo_diry_dut__DOT__w_ptr 
        = vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_diry_dut__DOT__w_ptr;
    __Vdly__starting_position__DOT__top_dut__DOT__sync_fifo_screen_x_dut__DOT__w_ptr 
        = vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_screen_x_dut__DOT__w_ptr;
    __Vdly__starting_position__DOT__top_dut__DOT__sync_fifo_dirx_dut__DOT__w_ptr 
        = vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_dirx_dut__DOT__w_ptr;
    __Vdly__starting_position__DOT__top_dut__DOT__sync_fifo_ray_diry_dut__DOT__r_ptr 
        = vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_ray_diry_dut__DOT__r_ptr;
    __Vdly__starting_position__DOT__top_dut__DOT__sync_fifo_ray_dirx_dut__DOT__r_ptr 
        = vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_ray_dirx_dut__DOT__r_ptr;
    __Vdly__starting_position__DOT__top_dut__DOT__sync_fifo_posy_dut__DOT__r_ptr 
        = vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_posy_dut__DOT__r_ptr;
    __Vdly__starting_position__DOT__top_dut__DOT__sync_fifo_posx_dut__DOT__r_ptr 
        = vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_posx_dut__DOT__r_ptr;
    __Vdly__starting_position__DOT__top_dut__DOT__sync_fifo_diry_dut__DOT__r_ptr 
        = vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_diry_dut__DOT__r_ptr;
    __Vdly__starting_position__DOT__top_dut__DOT__sync_fifo_screen_x_dut__DOT__r_ptr 
        = vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_screen_x_dut__DOT__r_ptr;
    __Vdly__starting_position__DOT__top_dut__DOT__sync_fifo_dirx_dut__DOT__r_ptr 
        = vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_dirx_dut__DOT__r_ptr;
    __Vdlyvset__starting_position__DOT__top_dut__DOT__sync_fifo_posy_dut__DOT__mem__v0 = 0U;
    __Vdlyvset__starting_position__DOT__top_dut__DOT__sync_fifo_posx_dut__DOT__mem__v0 = 0U;
    __Vdlyvset__starting_position__DOT__top_dut__DOT__sync_fifo_screen_x_dut__DOT__mem__v0 = 0U;
    __Vdly__starting_position__DOT__top_dut__DOT__sync_fifo_ray_diry_dut__DOT__data_count 
        = vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_ray_diry_dut__DOT__data_count;
    __Vdly__starting_position__DOT__top_dut__DOT__sync_fifo_ray_dirx_dut__DOT__data_count 
        = vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_ray_dirx_dut__DOT__data_count;
    __Vdly__starting_position__DOT__top_dut__DOT__sync_fifo_posy_dut__DOT__data_count 
        = vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_posy_dut__DOT__data_count;
    __Vdly__starting_position__DOT__top_dut__DOT__sync_fifo_posx_dut__DOT__data_count 
        = vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_posx_dut__DOT__data_count;
    __Vdly__starting_position__DOT__top_dut__DOT__sync_fifo_diry_dut__DOT__data_count 
        = vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_diry_dut__DOT__data_count;
    __Vdly__starting_position__DOT__top_dut__DOT__sync_fifo_screen_x_dut__DOT__data_count 
        = vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_screen_x_dut__DOT__data_count;
    vlSelf->__Vdly__starting_position__DOT__top_dut__DOT__sync_fifo_dirx_dut__DOT__data_count 
        = vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_dirx_dut__DOT__data_count;
    __Vdlyvset__starting_position__DOT__top_dut__DOT__sync_fifo_diry_dut__DOT__mem__v0 = 0U;
    __Vdlyvset__starting_position__DOT__top_dut__DOT__sync_fifo_dirx_dut__DOT__mem__v0 = 0U;
    __Vdlyvset__starting_position__DOT__top_dut__DOT__sync_fifo_ray_diry_dut__DOT__mem__v0 = 0U;
    __Vdlyvset__starting_position__DOT__top_dut__DOT__sync_fifo_ray_dirx_dut__DOT__mem__v0 = 0U;
    if (vlSelf->rst_n_i) {
        __Vdly__starting_position__DOT__top_dut__DOT__sync_fifo_ray_diry_dut__DOT__data_count 
            = (0xfffU & ((2U == ((((IData)(vlSelf->starting_position__DOT__data_valid) 
                                   & (~ (IData)(vlSelf->starting_position__DOT__top_dut__DOT__ray_diry_dut_full))) 
                                  << 1U) | ((IData)(vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_read_enable) 
                                            & (~ (IData)(vlSelf->starting_position__DOT__top_dut__DOT__ray_diry_dut_empty)))))
                          ? ((IData)(1U) + (IData)(vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_ray_diry_dut__DOT__data_count))
                          : ((1U == ((((IData)(vlSelf->starting_position__DOT__data_valid) 
                                       & (~ (IData)(vlSelf->starting_position__DOT__top_dut__DOT__ray_diry_dut_full))) 
                                      << 1U) | ((IData)(vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_read_enable) 
                                                & (~ (IData)(vlSelf->starting_position__DOT__top_dut__DOT__ray_diry_dut_empty)))))
                              ? ((IData)(vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_ray_diry_dut__DOT__data_count) 
                                 - (IData)(1U)) : (IData)(vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_ray_diry_dut__DOT__data_count))));
        __Vdly__starting_position__DOT__top_dut__DOT__sync_fifo_ray_dirx_dut__DOT__data_count 
            = (0xfffU & ((2U == ((((IData)(vlSelf->starting_position__DOT__data_valid) 
                                   & (~ (IData)(vlSelf->starting_position__DOT__top_dut__DOT__ray_dirx_dut_full))) 
                                  << 1U) | ((IData)(vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_read_enable) 
                                            & (~ (IData)(vlSelf->starting_position__DOT__top_dut__DOT__ray_dirx_dut_empty)))))
                          ? ((IData)(1U) + (IData)(vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_ray_dirx_dut__DOT__data_count))
                          : ((1U == ((((IData)(vlSelf->starting_position__DOT__data_valid) 
                                       & (~ (IData)(vlSelf->starting_position__DOT__top_dut__DOT__ray_dirx_dut_full))) 
                                      << 1U) | ((IData)(vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_read_enable) 
                                                & (~ (IData)(vlSelf->starting_position__DOT__top_dut__DOT__ray_dirx_dut_empty)))))
                              ? ((IData)(vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_ray_dirx_dut__DOT__data_count) 
                                 - (IData)(1U)) : (IData)(vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_ray_dirx_dut__DOT__data_count))));
        __Vdly__starting_position__DOT__top_dut__DOT__sync_fifo_posy_dut__DOT__data_count 
            = (0xfffU & ((2U == ((((IData)(vlSelf->starting_position__DOT__data_valid) 
                                   & (~ (IData)(vlSelf->starting_position__DOT__top_dut__DOT__posy_dut_full))) 
                                  << 1U) | ((IData)(vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_read_enable) 
                                            & (~ (IData)(vlSelf->starting_position__DOT__top_dut__DOT__posy_dut_empty)))))
                          ? ((IData)(1U) + (IData)(vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_posy_dut__DOT__data_count))
                          : ((1U == ((((IData)(vlSelf->starting_position__DOT__data_valid) 
                                       & (~ (IData)(vlSelf->starting_position__DOT__top_dut__DOT__posy_dut_full))) 
                                      << 1U) | ((IData)(vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_read_enable) 
                                                & (~ (IData)(vlSelf->starting_position__DOT__top_dut__DOT__posy_dut_empty)))))
                              ? ((IData)(vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_posy_dut__DOT__data_count) 
                                 - (IData)(1U)) : (IData)(vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_posy_dut__DOT__data_count))));
        __Vdly__starting_position__DOT__top_dut__DOT__sync_fifo_posx_dut__DOT__data_count 
            = (0xfffU & ((2U == ((((IData)(vlSelf->starting_position__DOT__data_valid) 
                                   & (~ (IData)(vlSelf->starting_position__DOT__top_dut__DOT__posx_dut_full))) 
                                  << 1U) | ((IData)(vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_read_enable) 
                                            & (~ (IData)(vlSelf->starting_position__DOT__top_dut__DOT__posx_dut_empty)))))
                          ? ((IData)(1U) + (IData)(vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_posx_dut__DOT__data_count))
                          : ((1U == ((((IData)(vlSelf->starting_position__DOT__data_valid) 
                                       & (~ (IData)(vlSelf->starting_position__DOT__top_dut__DOT__posx_dut_full))) 
                                      << 1U) | ((IData)(vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_read_enable) 
                                                & (~ (IData)(vlSelf->starting_position__DOT__top_dut__DOT__posx_dut_empty)))))
                              ? ((IData)(vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_posx_dut__DOT__data_count) 
                                 - (IData)(1U)) : (IData)(vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_posx_dut__DOT__data_count))));
        __Vdly__starting_position__DOT__top_dut__DOT__sync_fifo_diry_dut__DOT__data_count 
            = (0xfffU & ((2U == ((((IData)(vlSelf->starting_position__DOT__data_valid) 
                                   & (~ (IData)(vlSelf->starting_position__DOT__top_dut__DOT__diry_dut_full))) 
                                  << 1U) | ((IData)(vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_read_enable) 
                                            & (~ (IData)(vlSelf->starting_position__DOT__top_dut__DOT__diry_dut_empty)))))
                          ? ((IData)(1U) + (IData)(vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_diry_dut__DOT__data_count))
                          : ((1U == ((((IData)(vlSelf->starting_position__DOT__data_valid) 
                                       & (~ (IData)(vlSelf->starting_position__DOT__top_dut__DOT__diry_dut_full))) 
                                      << 1U) | ((IData)(vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_read_enable) 
                                                & (~ (IData)(vlSelf->starting_position__DOT__top_dut__DOT__diry_dut_empty)))))
                              ? ((IData)(vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_diry_dut__DOT__data_count) 
                                 - (IData)(1U)) : (IData)(vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_diry_dut__DOT__data_count))));
        __Vdly__starting_position__DOT__top_dut__DOT__sync_fifo_screen_x_dut__DOT__data_count 
            = (0xfffU & ((2U == ((((IData)(vlSelf->starting_position__DOT__data_valid) 
                                   & (~ (IData)(vlSelf->starting_position__DOT__top_dut__DOT__screen_x_dut_full))) 
                                  << 1U) | ((IData)(vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_read_enable) 
                                            & (~ (IData)(vlSelf->starting_position__DOT__top_dut__DOT__screen_x_dut_empty)))))
                          ? ((IData)(1U) + (IData)(vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_screen_x_dut__DOT__data_count))
                          : ((1U == ((((IData)(vlSelf->starting_position__DOT__data_valid) 
                                       & (~ (IData)(vlSelf->starting_position__DOT__top_dut__DOT__screen_x_dut_full))) 
                                      << 1U) | ((IData)(vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_read_enable) 
                                                & (~ (IData)(vlSelf->starting_position__DOT__top_dut__DOT__screen_x_dut_empty)))))
                              ? ((IData)(vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_screen_x_dut__DOT__data_count) 
                                 - (IData)(1U)) : (IData)(vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_screen_x_dut__DOT__data_count))));
        vlSelf->__Vdly__starting_position__DOT__top_dut__DOT__sync_fifo_dirx_dut__DOT__data_count 
            = (0xfffU & ((2U == ((((IData)(vlSelf->starting_position__DOT__data_valid) 
                                   & (~ (IData)(vlSelf->starting_position__DOT__top_dut__DOT__dirx_dut_full))) 
                                  << 1U) | ((IData)(vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_read_enable) 
                                            & (~ (IData)(vlSelf->starting_position__DOT__top_dut__DOT__dirx_dut_empty)))))
                          ? ((IData)(1U) + (IData)(vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_dirx_dut__DOT__data_count))
                          : ((1U == ((((IData)(vlSelf->starting_position__DOT__data_valid) 
                                       & (~ (IData)(vlSelf->starting_position__DOT__top_dut__DOT__dirx_dut_full))) 
                                      << 1U) | ((IData)(vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_read_enable) 
                                                & (~ (IData)(vlSelf->starting_position__DOT__top_dut__DOT__dirx_dut_empty)))))
                              ? ((IData)(vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_dirx_dut__DOT__data_count) 
                                 - (IData)(1U)) : (IData)(vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_dirx_dut__DOT__data_count))));
        vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_ray_diry_dut__DOT__wr_ack = 0U;
        if (((IData)(vlSelf->starting_position__DOT__data_valid) 
             & (0x800U != (IData)(vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_ray_diry_dut__DOT__data_count)))) {
            __Vdly__starting_position__DOT__top_dut__DOT__sync_fifo_ray_diry_dut__DOT__w_ptr 
                = (0xfffU & ((IData)(1U) + (IData)(vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_ray_diry_dut__DOT__w_ptr)));
            __Vdlyvval__starting_position__DOT__top_dut__DOT__sync_fifo_ray_diry_dut__DOT__mem__v0 
                = (0xffffffU & ((IData)((0xffffffffffULL 
                                         & VL_EXTENDS_QI(40,20, vlSelf->starting_position__DOT__dir_y))) 
                                + (IData)((0xffffffffffULL 
                                           & VL_DIVS_QQQ(40, 
                                                         (0xffffffffffULL 
                                                          & VL_MULS_QQQ(40, 
                                                                        (0xffffffffffULL 
                                                                         & VL_EXTENDS_QI(40,20, vlSelf->starting_position__DOT__plane_y)), 
                                                                        (0xffffffffffULL 
                                                                         & VL_EXTENDS_QI(40,20, 
                                                                                (0xfffffU 
                                                                                & (VL_DIV_III(32, 
                                                                                VL_SHIFTL_III(32,32,32, (IData)(vlSelf->starting_position__DOT__screen_x), 9U), (IData)(0x77fU)) 
                                                                                - (IData)(0x100U))))))), 0x100ULL)))));
            __Vdlyvset__starting_position__DOT__top_dut__DOT__sync_fifo_ray_diry_dut__DOT__mem__v0 = 1U;
            __Vdlyvdim0__starting_position__DOT__top_dut__DOT__sync_fifo_ray_diry_dut__DOT__mem__v0 
                = (0x7ffU & (IData)(vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_ray_diry_dut__DOT__w_ptr));
            vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_ray_diry_dut__DOT__wr_ack = 1U;
        }
        vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_ray_dirx_dut__DOT__wr_ack = 0U;
        if (((IData)(vlSelf->starting_position__DOT__data_valid) 
             & (0x800U != (IData)(vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_ray_dirx_dut__DOT__data_count)))) {
            __Vdly__starting_position__DOT__top_dut__DOT__sync_fifo_ray_dirx_dut__DOT__w_ptr 
                = (0xfffU & ((IData)(1U) + (IData)(vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_ray_dirx_dut__DOT__w_ptr)));
            __Vdlyvval__starting_position__DOT__top_dut__DOT__sync_fifo_ray_dirx_dut__DOT__mem__v0 
                = (0xffffffU & ((IData)((0xffffffffffULL 
                                         & VL_EXTENDS_QI(40,20, vlSelf->starting_position__DOT__dir_x))) 
                                + (IData)((0xffffffffffULL 
                                           & VL_DIVS_QQQ(40, 
                                                         (0xffffffffffULL 
                                                          & VL_MULS_QQQ(40, 
                                                                        (0xffffffffffULL 
                                                                         & VL_EXTENDS_QI(40,20, vlSelf->starting_position__DOT__plane_x)), 
                                                                        (0xffffffffffULL 
                                                                         & VL_EXTENDS_QI(40,20, 
                                                                                (0xfffffU 
                                                                                & (VL_DIV_III(32, 
                                                                                VL_SHIFTL_III(32,32,32, (IData)(vlSelf->starting_position__DOT__screen_x), 9U), (IData)(0x77fU)) 
                                                                                - (IData)(0x100U))))))), 0x100ULL)))));
            __Vdlyvset__starting_position__DOT__top_dut__DOT__sync_fifo_ray_dirx_dut__DOT__mem__v0 = 1U;
            __Vdlyvdim0__starting_position__DOT__top_dut__DOT__sync_fifo_ray_dirx_dut__DOT__mem__v0 
                = (0x7ffU & (IData)(vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_ray_dirx_dut__DOT__w_ptr));
            vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_ray_dirx_dut__DOT__wr_ack = 1U;
        }
        vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_posy_dut__DOT__wr_ack = 0U;
        if (((IData)(vlSelf->starting_position__DOT__data_valid) 
             & (0x800U != (IData)(vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_posy_dut__DOT__data_count)))) {
            __Vdly__starting_position__DOT__top_dut__DOT__sync_fifo_posy_dut__DOT__w_ptr 
                = (0xfffU & ((IData)(1U) + (IData)(vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_posy_dut__DOT__w_ptr)));
            __Vdlyvval__starting_position__DOT__top_dut__DOT__sync_fifo_posy_dut__DOT__mem__v0 
                = vlSelf->starting_position__DOT__pos_y;
            __Vdlyvset__starting_position__DOT__top_dut__DOT__sync_fifo_posy_dut__DOT__mem__v0 = 1U;
            __Vdlyvdim0__starting_position__DOT__top_dut__DOT__sync_fifo_posy_dut__DOT__mem__v0 
                = (0x7ffU & (IData)(vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_posy_dut__DOT__w_ptr));
            vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_posy_dut__DOT__wr_ack = 1U;
        }
        vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_posx_dut__DOT__wr_ack = 0U;
        if (((IData)(vlSelf->starting_position__DOT__data_valid) 
             & (0x800U != (IData)(vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_posx_dut__DOT__data_count)))) {
            __Vdly__starting_position__DOT__top_dut__DOT__sync_fifo_posx_dut__DOT__w_ptr 
                = (0xfffU & ((IData)(1U) + (IData)(vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_posx_dut__DOT__w_ptr)));
            __Vdlyvval__starting_position__DOT__top_dut__DOT__sync_fifo_posx_dut__DOT__mem__v0 
                = vlSelf->starting_position__DOT__pos_x;
            __Vdlyvset__starting_position__DOT__top_dut__DOT__sync_fifo_posx_dut__DOT__mem__v0 = 1U;
            __Vdlyvdim0__starting_position__DOT__top_dut__DOT__sync_fifo_posx_dut__DOT__mem__v0 
                = (0x7ffU & (IData)(vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_posx_dut__DOT__w_ptr));
            vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_posx_dut__DOT__wr_ack = 1U;
        }
        vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_diry_dut__DOT__wr_ack = 0U;
        if (((IData)(vlSelf->starting_position__DOT__data_valid) 
             & (0x800U != (IData)(vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_diry_dut__DOT__data_count)))) {
            __Vdly__starting_position__DOT__top_dut__DOT__sync_fifo_diry_dut__DOT__w_ptr 
                = (0xfffU & ((IData)(1U) + (IData)(vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_diry_dut__DOT__w_ptr)));
            __Vdlyvval__starting_position__DOT__top_dut__DOT__sync_fifo_diry_dut__DOT__mem__v0 
                = vlSelf->starting_position__DOT__dir_y;
            __Vdlyvset__starting_position__DOT__top_dut__DOT__sync_fifo_diry_dut__DOT__mem__v0 = 1U;
            __Vdlyvdim0__starting_position__DOT__top_dut__DOT__sync_fifo_diry_dut__DOT__mem__v0 
                = (0x7ffU & (IData)(vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_diry_dut__DOT__w_ptr));
            vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_diry_dut__DOT__wr_ack = 1U;
        }
        vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_screen_x_dut__DOT__wr_ack = 0U;
        if (((IData)(vlSelf->starting_position__DOT__data_valid) 
             & (0x800U != (IData)(vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_screen_x_dut__DOT__data_count)))) {
            __Vdly__starting_position__DOT__top_dut__DOT__sync_fifo_screen_x_dut__DOT__w_ptr 
                = (0xfffU & ((IData)(1U) + (IData)(vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_screen_x_dut__DOT__w_ptr)));
            __Vdlyvval__starting_position__DOT__top_dut__DOT__sync_fifo_screen_x_dut__DOT__mem__v0 
                = vlSelf->starting_position__DOT__screen_x;
            __Vdlyvset__starting_position__DOT__top_dut__DOT__sync_fifo_screen_x_dut__DOT__mem__v0 = 1U;
            __Vdlyvdim0__starting_position__DOT__top_dut__DOT__sync_fifo_screen_x_dut__DOT__mem__v0 
                = (0x7ffU & (IData)(vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_screen_x_dut__DOT__w_ptr));
            vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_screen_x_dut__DOT__wr_ack = 1U;
        }
        vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_dirx_dut__DOT__wr_ack = 0U;
        if (((IData)(vlSelf->starting_position__DOT__data_valid) 
             & (0x800U != (IData)(vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_dirx_dut__DOT__data_count)))) {
            __Vdly__starting_position__DOT__top_dut__DOT__sync_fifo_dirx_dut__DOT__w_ptr 
                = (0xfffU & ((IData)(1U) + (IData)(vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_dirx_dut__DOT__w_ptr)));
            __Vdlyvval__starting_position__DOT__top_dut__DOT__sync_fifo_dirx_dut__DOT__mem__v0 
                = vlSelf->starting_position__DOT__dir_x;
            __Vdlyvset__starting_position__DOT__top_dut__DOT__sync_fifo_dirx_dut__DOT__mem__v0 = 1U;
            __Vdlyvdim0__starting_position__DOT__top_dut__DOT__sync_fifo_dirx_dut__DOT__mem__v0 
                = (0x7ffU & (IData)(vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_dirx_dut__DOT__w_ptr));
            vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_dirx_dut__DOT__wr_ack = 1U;
        }
        vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_ray_diry_dut__DOT__rd_valid = 0U;
        if (((IData)(vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_read_enable) 
             & (0U != (IData)(vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_ray_diry_dut__DOT__data_count)))) {
            __Vdly__starting_position__DOT__top_dut__DOT__sync_fifo_ray_diry_dut__DOT__r_ptr 
                = (0xfffU & ((IData)(1U) + (IData)(vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_ray_diry_dut__DOT__r_ptr)));
            vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_ray_diry_dut__DOT__rd_valid = 1U;
            vlSelf->starting_position__DOT__top_dut__DOT__ray_diry_dut_data_out 
                = vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_ray_diry_dut__DOT__mem
                [(0x7ffU & (IData)(vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_ray_diry_dut__DOT__r_ptr))];
        }
        vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_ray_dirx_dut__DOT__rd_valid = 0U;
        if (((IData)(vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_read_enable) 
             & (0U != (IData)(vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_ray_dirx_dut__DOT__data_count)))) {
            __Vdly__starting_position__DOT__top_dut__DOT__sync_fifo_ray_dirx_dut__DOT__r_ptr 
                = (0xfffU & ((IData)(1U) + (IData)(vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_ray_dirx_dut__DOT__r_ptr)));
            vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_ray_dirx_dut__DOT__rd_valid = 1U;
            vlSelf->starting_position__DOT__top_dut__DOT__ray_dirx_dut_data_out 
                = vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_ray_dirx_dut__DOT__mem
                [(0x7ffU & (IData)(vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_ray_dirx_dut__DOT__r_ptr))];
        }
        vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_posy_dut__DOT__rd_valid = 0U;
        if (((IData)(vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_read_enable) 
             & (0U != (IData)(vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_posy_dut__DOT__data_count)))) {
            __Vdly__starting_position__DOT__top_dut__DOT__sync_fifo_posy_dut__DOT__r_ptr 
                = (0xfffU & ((IData)(1U) + (IData)(vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_posy_dut__DOT__r_ptr)));
            vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_posy_dut__DOT__rd_valid = 1U;
            vlSelf->starting_position__DOT__top_dut__DOT__posy_dut_data_out 
                = vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_posy_dut__DOT__mem
                [(0x7ffU & (IData)(vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_posy_dut__DOT__r_ptr))];
        }
        vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_posx_dut__DOT__rd_valid = 0U;
        if (((IData)(vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_read_enable) 
             & (0U != (IData)(vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_posx_dut__DOT__data_count)))) {
            __Vdly__starting_position__DOT__top_dut__DOT__sync_fifo_posx_dut__DOT__r_ptr 
                = (0xfffU & ((IData)(1U) + (IData)(vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_posx_dut__DOT__r_ptr)));
            vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_posx_dut__DOT__rd_valid = 1U;
            vlSelf->starting_position__DOT__top_dut__DOT__posx_dut_data_out 
                = vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_posx_dut__DOT__mem
                [(0x7ffU & (IData)(vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_posx_dut__DOT__r_ptr))];
        }
        vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_diry_dut__DOT__rd_valid = 0U;
        if (((IData)(vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_read_enable) 
             & (0U != (IData)(vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_diry_dut__DOT__data_count)))) {
            __Vdly__starting_position__DOT__top_dut__DOT__sync_fifo_diry_dut__DOT__r_ptr 
                = (0xfffU & ((IData)(1U) + (IData)(vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_diry_dut__DOT__r_ptr)));
            vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_diry_dut__DOT__rd_valid = 1U;
            vlSelf->starting_position__DOT__top_dut__DOT__diry_dut_data_out 
                = vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_diry_dut__DOT__mem
                [(0x7ffU & (IData)(vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_diry_dut__DOT__r_ptr))];
        }
        vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_screen_x_dut__DOT__rd_valid = 0U;
        if (((IData)(vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_read_enable) 
             & (0U != (IData)(vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_screen_x_dut__DOT__data_count)))) {
            __Vdly__starting_position__DOT__top_dut__DOT__sync_fifo_screen_x_dut__DOT__r_ptr 
                = (0xfffU & ((IData)(1U) + (IData)(vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_screen_x_dut__DOT__r_ptr)));
            vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_screen_x_dut__DOT__rd_valid = 1U;
            vlSelf->starting_position__DOT__top_dut__DOT__screen_x_dut_data_out 
                = vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_screen_x_dut__DOT__mem
                [(0x7ffU & (IData)(vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_screen_x_dut__DOT__r_ptr))];
        }
        vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_dirx_dut__DOT__rd_valid = 0U;
        if (((IData)(vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_read_enable) 
             & (0U != (IData)(vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_dirx_dut__DOT__data_count)))) {
            __Vdly__starting_position__DOT__top_dut__DOT__sync_fifo_dirx_dut__DOT__r_ptr 
                = (0xfffU & ((IData)(1U) + (IData)(vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_dirx_dut__DOT__r_ptr)));
            vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_dirx_dut__DOT__rd_valid = 1U;
            vlSelf->starting_position__DOT__top_dut__DOT__dirx_dut_data_out 
                = vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_dirx_dut__DOT__mem
                [(0x7ffU & (IData)(vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_dirx_dut__DOT__r_ptr))];
        }
    } else {
        __Vdly__starting_position__DOT__top_dut__DOT__sync_fifo_ray_diry_dut__DOT__w_ptr = 0U;
        __Vdly__starting_position__DOT__top_dut__DOT__sync_fifo_ray_dirx_dut__DOT__w_ptr = 0U;
        __Vdly__starting_position__DOT__top_dut__DOT__sync_fifo_posy_dut__DOT__w_ptr = 0U;
        __Vdly__starting_position__DOT__top_dut__DOT__sync_fifo_posx_dut__DOT__w_ptr = 0U;
        __Vdly__starting_position__DOT__top_dut__DOT__sync_fifo_diry_dut__DOT__w_ptr = 0U;
        __Vdly__starting_position__DOT__top_dut__DOT__sync_fifo_screen_x_dut__DOT__w_ptr = 0U;
        __Vdly__starting_position__DOT__top_dut__DOT__sync_fifo_dirx_dut__DOT__w_ptr = 0U;
        __Vdly__starting_position__DOT__top_dut__DOT__sync_fifo_ray_diry_dut__DOT__r_ptr = 0U;
        __Vdly__starting_position__DOT__top_dut__DOT__sync_fifo_ray_dirx_dut__DOT__r_ptr = 0U;
        __Vdly__starting_position__DOT__top_dut__DOT__sync_fifo_posy_dut__DOT__r_ptr = 0U;
        __Vdly__starting_position__DOT__top_dut__DOT__sync_fifo_posx_dut__DOT__r_ptr = 0U;
        __Vdly__starting_position__DOT__top_dut__DOT__sync_fifo_diry_dut__DOT__r_ptr = 0U;
        __Vdly__starting_position__DOT__top_dut__DOT__sync_fifo_screen_x_dut__DOT__r_ptr = 0U;
        __Vdly__starting_position__DOT__top_dut__DOT__sync_fifo_dirx_dut__DOT__r_ptr = 0U;
        __Vdly__starting_position__DOT__top_dut__DOT__sync_fifo_ray_diry_dut__DOT__data_count = 0U;
        __Vdly__starting_position__DOT__top_dut__DOT__sync_fifo_ray_dirx_dut__DOT__data_count = 0U;
        __Vdly__starting_position__DOT__top_dut__DOT__sync_fifo_posy_dut__DOT__data_count = 0U;
        __Vdly__starting_position__DOT__top_dut__DOT__sync_fifo_posx_dut__DOT__data_count = 0U;
        __Vdly__starting_position__DOT__top_dut__DOT__sync_fifo_diry_dut__DOT__data_count = 0U;
        __Vdly__starting_position__DOT__top_dut__DOT__sync_fifo_screen_x_dut__DOT__data_count = 0U;
        vlSelf->__Vdly__starting_position__DOT__top_dut__DOT__sync_fifo_dirx_dut__DOT__data_count = 0U;
        vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_ray_diry_dut__DOT__wr_ack = 0U;
        vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_ray_dirx_dut__DOT__wr_ack = 0U;
        vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_posy_dut__DOT__wr_ack = 0U;
        vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_posx_dut__DOT__wr_ack = 0U;
        vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_diry_dut__DOT__wr_ack = 0U;
        vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_screen_x_dut__DOT__wr_ack = 0U;
        vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_dirx_dut__DOT__wr_ack = 0U;
        vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_ray_diry_dut__DOT__rd_valid = 0U;
        vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_ray_dirx_dut__DOT__rd_valid = 0U;
        vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_posy_dut__DOT__rd_valid = 0U;
        vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_posx_dut__DOT__rd_valid = 0U;
        vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_diry_dut__DOT__rd_valid = 0U;
        vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_screen_x_dut__DOT__rd_valid = 0U;
        vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_dirx_dut__DOT__rd_valid = 0U;
        vlSelf->starting_position__DOT__top_dut__DOT__diry_dut_data_out = 0U;
        vlSelf->starting_position__DOT__top_dut__DOT__dirx_dut_data_out = 0U;
        vlSelf->starting_position__DOT__top_dut__DOT__posx_dut_data_out = 0U;
        vlSelf->starting_position__DOT__top_dut__DOT__posy_dut_data_out = 0U;
        vlSelf->starting_position__DOT__top_dut__DOT__ray_dirx_dut_data_out = 0U;
        vlSelf->starting_position__DOT__top_dut__DOT__ray_diry_dut_data_out = 0U;
        vlSelf->starting_position__DOT__top_dut__DOT__screen_x_dut_data_out = 0U;
    }
    vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_ray_diry_dut__DOT__overflow 
        = ((IData)(vlSelf->rst_n_i) && ((IData)(vlSelf->starting_position__DOT__data_valid) 
                                        & (0x800U == (IData)(vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_ray_diry_dut__DOT__data_count))));
    vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_ray_dirx_dut__DOT__overflow 
        = ((IData)(vlSelf->rst_n_i) && ((IData)(vlSelf->starting_position__DOT__data_valid) 
                                        & (0x800U == (IData)(vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_ray_dirx_dut__DOT__data_count))));
    vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_posy_dut__DOT__overflow 
        = ((IData)(vlSelf->rst_n_i) && ((IData)(vlSelf->starting_position__DOT__data_valid) 
                                        & (0x800U == (IData)(vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_posy_dut__DOT__data_count))));
    vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_posx_dut__DOT__overflow 
        = ((IData)(vlSelf->rst_n_i) && ((IData)(vlSelf->starting_position__DOT__data_valid) 
                                        & (0x800U == (IData)(vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_posx_dut__DOT__data_count))));
    vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_diry_dut__DOT__overflow 
        = ((IData)(vlSelf->rst_n_i) && ((IData)(vlSelf->starting_position__DOT__data_valid) 
                                        & (0x800U == (IData)(vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_diry_dut__DOT__data_count))));
    vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_screen_x_dut__DOT__overflow 
        = ((IData)(vlSelf->rst_n_i) && ((IData)(vlSelf->starting_position__DOT__data_valid) 
                                        & (0x800U == (IData)(vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_screen_x_dut__DOT__data_count))));
    vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_dirx_dut__DOT__overflow 
        = ((IData)(vlSelf->rst_n_i) && ((IData)(vlSelf->starting_position__DOT__data_valid) 
                                        & (0x800U == (IData)(vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_dirx_dut__DOT__data_count))));
    vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_ray_diry_dut__DOT__underflow 
        = ((IData)(vlSelf->rst_n_i) && ((IData)(vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_read_enable) 
                                        & (0U == (IData)(vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_ray_diry_dut__DOT__data_count))));
    vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_ray_dirx_dut__DOT__underflow 
        = ((IData)(vlSelf->rst_n_i) && ((IData)(vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_read_enable) 
                                        & (0U == (IData)(vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_ray_dirx_dut__DOT__data_count))));
    vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_posy_dut__DOT__underflow 
        = ((IData)(vlSelf->rst_n_i) && ((IData)(vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_read_enable) 
                                        & (0U == (IData)(vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_posy_dut__DOT__data_count))));
    vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_posx_dut__DOT__underflow 
        = ((IData)(vlSelf->rst_n_i) && ((IData)(vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_read_enable) 
                                        & (0U == (IData)(vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_posx_dut__DOT__data_count))));
    vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_diry_dut__DOT__underflow 
        = ((IData)(vlSelf->rst_n_i) && ((IData)(vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_read_enable) 
                                        & (0U == (IData)(vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_diry_dut__DOT__data_count))));
    vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_screen_x_dut__DOT__underflow 
        = ((IData)(vlSelf->rst_n_i) && ((IData)(vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_read_enable) 
                                        & (0U == (IData)(vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_screen_x_dut__DOT__data_count))));
    vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_dirx_dut__DOT__underflow 
        = ((IData)(vlSelf->rst_n_i) && ((IData)(vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_read_enable) 
                                        & (0U == (IData)(vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_dirx_dut__DOT__data_count))));
    vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_posy_dut__DOT__w_ptr 
        = __Vdly__starting_position__DOT__top_dut__DOT__sync_fifo_posy_dut__DOT__w_ptr;
    vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_posx_dut__DOT__w_ptr 
        = __Vdly__starting_position__DOT__top_dut__DOT__sync_fifo_posx_dut__DOT__w_ptr;
    vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_screen_x_dut__DOT__w_ptr 
        = __Vdly__starting_position__DOT__top_dut__DOT__sync_fifo_screen_x_dut__DOT__w_ptr;
    vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_diry_dut__DOT__w_ptr 
        = __Vdly__starting_position__DOT__top_dut__DOT__sync_fifo_diry_dut__DOT__w_ptr;
    vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_dirx_dut__DOT__w_ptr 
        = __Vdly__starting_position__DOT__top_dut__DOT__sync_fifo_dirx_dut__DOT__w_ptr;
    vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_ray_diry_dut__DOT__w_ptr 
        = __Vdly__starting_position__DOT__top_dut__DOT__sync_fifo_ray_diry_dut__DOT__w_ptr;
    vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_ray_dirx_dut__DOT__w_ptr 
        = __Vdly__starting_position__DOT__top_dut__DOT__sync_fifo_ray_dirx_dut__DOT__w_ptr;
    vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_diry_dut__DOT__r_ptr 
        = __Vdly__starting_position__DOT__top_dut__DOT__sync_fifo_diry_dut__DOT__r_ptr;
    if (__Vdlyvset__starting_position__DOT__top_dut__DOT__sync_fifo_diry_dut__DOT__mem__v0) {
        vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_diry_dut__DOT__mem[__Vdlyvdim0__starting_position__DOT__top_dut__DOT__sync_fifo_diry_dut__DOT__mem__v0] 
            = __Vdlyvval__starting_position__DOT__top_dut__DOT__sync_fifo_diry_dut__DOT__mem__v0;
    }
    vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_diry_dut__DOT__data_count 
        = __Vdly__starting_position__DOT__top_dut__DOT__sync_fifo_diry_dut__DOT__data_count;
    vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_dirx_dut__DOT__r_ptr 
        = __Vdly__starting_position__DOT__top_dut__DOT__sync_fifo_dirx_dut__DOT__r_ptr;
    if (__Vdlyvset__starting_position__DOT__top_dut__DOT__sync_fifo_dirx_dut__DOT__mem__v0) {
        vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_dirx_dut__DOT__mem[__Vdlyvdim0__starting_position__DOT__top_dut__DOT__sync_fifo_dirx_dut__DOT__mem__v0] 
            = __Vdlyvval__starting_position__DOT__top_dut__DOT__sync_fifo_dirx_dut__DOT__mem__v0;
    }
    vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_posx_dut__DOT__r_ptr 
        = __Vdly__starting_position__DOT__top_dut__DOT__sync_fifo_posx_dut__DOT__r_ptr;
    if (__Vdlyvset__starting_position__DOT__top_dut__DOT__sync_fifo_posx_dut__DOT__mem__v0) {
        vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_posx_dut__DOT__mem[__Vdlyvdim0__starting_position__DOT__top_dut__DOT__sync_fifo_posx_dut__DOT__mem__v0] 
            = __Vdlyvval__starting_position__DOT__top_dut__DOT__sync_fifo_posx_dut__DOT__mem__v0;
    }
    vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_posx_dut__DOT__data_count 
        = __Vdly__starting_position__DOT__top_dut__DOT__sync_fifo_posx_dut__DOT__data_count;
    vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_posy_dut__DOT__r_ptr 
        = __Vdly__starting_position__DOT__top_dut__DOT__sync_fifo_posy_dut__DOT__r_ptr;
    if (__Vdlyvset__starting_position__DOT__top_dut__DOT__sync_fifo_posy_dut__DOT__mem__v0) {
        vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_posy_dut__DOT__mem[__Vdlyvdim0__starting_position__DOT__top_dut__DOT__sync_fifo_posy_dut__DOT__mem__v0] 
            = __Vdlyvval__starting_position__DOT__top_dut__DOT__sync_fifo_posy_dut__DOT__mem__v0;
    }
    vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_posy_dut__DOT__data_count 
        = __Vdly__starting_position__DOT__top_dut__DOT__sync_fifo_posy_dut__DOT__data_count;
    vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_ray_dirx_dut__DOT__r_ptr 
        = __Vdly__starting_position__DOT__top_dut__DOT__sync_fifo_ray_dirx_dut__DOT__r_ptr;
    if (__Vdlyvset__starting_position__DOT__top_dut__DOT__sync_fifo_ray_dirx_dut__DOT__mem__v0) {
        vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_ray_dirx_dut__DOT__mem[__Vdlyvdim0__starting_position__DOT__top_dut__DOT__sync_fifo_ray_dirx_dut__DOT__mem__v0] 
            = __Vdlyvval__starting_position__DOT__top_dut__DOT__sync_fifo_ray_dirx_dut__DOT__mem__v0;
    }
    vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_ray_dirx_dut__DOT__data_count 
        = __Vdly__starting_position__DOT__top_dut__DOT__sync_fifo_ray_dirx_dut__DOT__data_count;
    vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_ray_diry_dut__DOT__r_ptr 
        = __Vdly__starting_position__DOT__top_dut__DOT__sync_fifo_ray_diry_dut__DOT__r_ptr;
    if (__Vdlyvset__starting_position__DOT__top_dut__DOT__sync_fifo_ray_diry_dut__DOT__mem__v0) {
        vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_ray_diry_dut__DOT__mem[__Vdlyvdim0__starting_position__DOT__top_dut__DOT__sync_fifo_ray_diry_dut__DOT__mem__v0] 
            = __Vdlyvval__starting_position__DOT__top_dut__DOT__sync_fifo_ray_diry_dut__DOT__mem__v0;
    }
    vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_ray_diry_dut__DOT__data_count 
        = __Vdly__starting_position__DOT__top_dut__DOT__sync_fifo_ray_diry_dut__DOT__data_count;
    vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_screen_x_dut__DOT__r_ptr 
        = __Vdly__starting_position__DOT__top_dut__DOT__sync_fifo_screen_x_dut__DOT__r_ptr;
    if (__Vdlyvset__starting_position__DOT__top_dut__DOT__sync_fifo_screen_x_dut__DOT__mem__v0) {
        vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_screen_x_dut__DOT__mem[__Vdlyvdim0__starting_position__DOT__top_dut__DOT__sync_fifo_screen_x_dut__DOT__mem__v0] 
            = __Vdlyvval__starting_position__DOT__top_dut__DOT__sync_fifo_screen_x_dut__DOT__mem__v0;
    }
    vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_screen_x_dut__DOT__data_count 
        = __Vdly__starting_position__DOT__top_dut__DOT__sync_fifo_screen_x_dut__DOT__data_count;
    vlSelf->starting_position__DOT__top_dut__DOT__diry_dut_full 
        = (0x800U == (IData)(vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_diry_dut__DOT__data_count));
    vlSelf->starting_position__DOT__top_dut__DOT__diry_dut_empty 
        = (0U == (IData)(vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_diry_dut__DOT__data_count));
    vlSelf->starting_position__DOT__top_dut__DOT__posx_dut_full 
        = (0x800U == (IData)(vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_posx_dut__DOT__data_count));
    vlSelf->starting_position__DOT__top_dut__DOT__posx_dut_empty 
        = (0U == (IData)(vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_posx_dut__DOT__data_count));
    vlSelf->starting_position__DOT__top_dut__DOT__posy_dut_full 
        = (0x800U == (IData)(vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_posy_dut__DOT__data_count));
    vlSelf->starting_position__DOT__top_dut__DOT__posy_dut_empty 
        = (0U == (IData)(vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_posy_dut__DOT__data_count));
    vlSelf->starting_position__DOT__top_dut__DOT__ray_dirx_dut_full 
        = (0x800U == (IData)(vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_ray_dirx_dut__DOT__data_count));
    vlSelf->starting_position__DOT__top_dut__DOT__ray_dirx_dut_empty 
        = (0U == (IData)(vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_ray_dirx_dut__DOT__data_count));
    vlSelf->starting_position__DOT__top_dut__DOT__ray_diry_dut_full 
        = (0x800U == (IData)(vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_ray_diry_dut__DOT__data_count));
    vlSelf->starting_position__DOT__top_dut__DOT__ray_diry_dut_empty 
        = (0U == (IData)(vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_ray_diry_dut__DOT__data_count));
    vlSelf->starting_position__DOT__top_dut__DOT__screen_x_dut_full 
        = (0x800U == (IData)(vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_screen_x_dut__DOT__data_count));
    vlSelf->starting_position__DOT__top_dut__DOT__screen_x_dut_empty 
        = (0U == (IData)(vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_screen_x_dut__DOT__data_count));
}

extern const VlUnpacked<CData/*2:0*/, 64> Vstarting_position__ConstPool__TABLE_h7cd01606_0;
extern const VlUnpacked<CData/*0:0*/, 64> Vstarting_position__ConstPool__TABLE_h40ff336c_0;
extern const VlUnpacked<CData/*2:0*/, 64> Vstarting_position__ConstPool__TABLE_hcab673e2_0;
extern const VlUnpacked<CData/*0:0*/, 64> Vstarting_position__ConstPool__TABLE_h186ff629_0;

VL_INLINE_OPT void Vstarting_position___024root___nba_sequent__TOP__2(Vstarting_position___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vstarting_position__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstarting_position___024root___nba_sequent__TOP__2\n"); );
    // Init
    CData/*5:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
    vlSelf->starting_position__DOT__pos_y = vlSelf->__Vdly__starting_position__DOT__pos_y;
    vlSelf->starting_position__DOT__pos_x = vlSelf->__Vdly__starting_position__DOT__pos_x;
    if (vlSelf->rst_n_i) {
        if (vlSelf->right_button_i) {
            vlSelf->starting_position__DOT__plane_y 
                = vlSelf->starting_position__DOT__new_right_plane_y;
            vlSelf->starting_position__DOT__dir_y = vlSelf->starting_position__DOT__new_right_dir_y;
            vlSelf->starting_position__DOT__plane_x 
                = vlSelf->starting_position__DOT__new_right_plane_x;
            vlSelf->starting_position__DOT__dir_x = vlSelf->starting_position__DOT__new_right_dir_x;
        }
        if (vlSelf->left_button_i) {
            vlSelf->starting_position__DOT__plane_y 
                = vlSelf->starting_position__DOT__new_left_plane_y;
            vlSelf->starting_position__DOT__dir_y = vlSelf->starting_position__DOT__new_left_dir_y;
            vlSelf->starting_position__DOT__plane_x 
                = vlSelf->starting_position__DOT__new_left_plane_x;
            vlSelf->starting_position__DOT__dir_x = vlSelf->starting_position__DOT__new_left_dir_x;
        }
        if (((((IData)(vlSelf->left_button_i) | (IData)(vlSelf->right_button_i)) 
              | (IData)(vlSelf->back_button_i)) | (IData)(vlSelf->forward_button_i))) {
            vlSelf->__Vdly__starting_position__DOT__screen_x = 0U;
            vlSelf->starting_position__DOT__data_valid = 0U;
        } else if ((0x780U > (IData)(vlSelf->starting_position__DOT__screen_x))) {
            vlSelf->__Vdly__starting_position__DOT__screen_x 
                = (0x7ffU & ((IData)(1U) + (IData)(vlSelf->starting_position__DOT__screen_x)));
            vlSelf->starting_position__DOT__data_valid = 1U;
        } else {
            vlSelf->__Vdly__starting_position__DOT__screen_x 
                = vlSelf->starting_position__DOT__screen_x;
            vlSelf->starting_position__DOT__data_valid = 0U;
        }
    } else {
        vlSelf->starting_position__DOT__plane_y = 0xa9U;
        vlSelf->starting_position__DOT__dir_y = 0U;
        vlSelf->starting_position__DOT__plane_x = 0U;
        vlSelf->starting_position__DOT__dir_x = 0x100U;
        vlSelf->__Vdly__starting_position__DOT__screen_x = 0U;
        vlSelf->starting_position__DOT__data_valid = 0U;
    }
    __Vtableidx1 = (((0U == (IData)(vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_dirx_dut__DOT__data_count)) 
                     << 5U) | (((IData)(vlSelf->starting_position__DOT__top_dut__DOT__dda_busy) 
                                << 4U) | (((IData)(vlSelf->starting_position__DOT__top_dut__DOT__ren_state) 
                                           << 1U) | (IData)(vlSelf->rst_n_i))));
    if ((1U & Vstarting_position__ConstPool__TABLE_h7cd01606_0
         [__Vtableidx1])) {
        vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_read_enable 
            = Vstarting_position__ConstPool__TABLE_h40ff336c_0
            [__Vtableidx1];
    }
    if ((2U & Vstarting_position__ConstPool__TABLE_h7cd01606_0
         [__Vtableidx1])) {
        vlSelf->starting_position__DOT__top_dut__DOT__ren_state 
            = Vstarting_position__ConstPool__TABLE_hcab673e2_0
            [__Vtableidx1];
    }
    if ((4U & Vstarting_position__ConstPool__TABLE_h7cd01606_0
         [__Vtableidx1])) {
        vlSelf->starting_position__DOT__top_dut__DOT__dda_start 
            = Vstarting_position__ConstPool__TABLE_h186ff629_0
            [__Vtableidx1];
    }
    vlSelf->starting_position__DOT__screen_x = vlSelf->__Vdly__starting_position__DOT__screen_x;
    vlSelf->starting_position__DOT__top_dut__DOT__dda_busy 
        = vlSelf->__Vdly__starting_position__DOT__top_dut__DOT__dda_busy;
    vlSelf->starting_position__DOT__top_dut__DOT__perpendicular_distance_dut__DOT__y_mul_temp 
        = (0x1fffffffffffffffULL & VL_MULS_QQQ(61, 
                                               (0x1fffffffffffffffULL 
                                                & VL_EXTENDS_QI(61,24, vlSelf->starting_position__DOT__top_dut__DOT__ray_dir_y_dda)), 
                                               (0x1fffffffffffffffULL 
                                                & VL_EXTENDS_QI(61,20, vlSelf->starting_position__DOT__dir_y))));
    vlSelf->starting_position__DOT__new_right_plane_x 
        = (0xfffffU & VL_SHIFTRS_III(20,32,32, (VL_MULS_III(32, (IData)(0xffU), 
                                                            VL_EXTENDS_II(32,20, vlSelf->starting_position__DOT__plane_x)) 
                                                - VL_MULS_III(32, (IData)(0x16U), 
                                                              VL_EXTENDS_II(32,20, vlSelf->starting_position__DOT__plane_y))), 8U));
    vlSelf->starting_position__DOT__new_right_plane_y 
        = (0xfffffU & VL_SHIFTRS_III(20,32,32, (VL_MULS_III(32, (IData)(0x16U), 
                                                            VL_EXTENDS_II(32,20, vlSelf->starting_position__DOT__plane_x)) 
                                                + VL_MULS_III(32, (IData)(0xffU), 
                                                              VL_EXTENDS_II(32,20, vlSelf->starting_position__DOT__plane_y))), 8U));
    vlSelf->starting_position__DOT__new_left_plane_x 
        = (0xfffffU & VL_SHIFTRS_III(20,32,32, (VL_MULS_III(32, (IData)(0xffU), 
                                                            VL_EXTENDS_II(32,20, vlSelf->starting_position__DOT__plane_x)) 
                                                + VL_MULS_III(32, (IData)(0x16U), 
                                                              VL_EXTENDS_II(32,20, vlSelf->starting_position__DOT__plane_y))), 8U));
    vlSelf->starting_position__DOT__new_left_plane_y 
        = (0xfffffU & VL_SHIFTRS_III(20,32,32, (VL_MULS_III(32, (IData)(0x16U), 
                                                            (- 
                                                             VL_EXTENDS_II(32,20, vlSelf->starting_position__DOT__plane_x))) 
                                                + VL_MULS_III(32, (IData)(0xffU), 
                                                              VL_EXTENDS_II(32,20, vlSelf->starting_position__DOT__plane_y))), 8U));
    vlSelf->starting_position__DOT__new_right_dir_x 
        = (0xfffffU & VL_SHIFTRS_III(20,32,32, (VL_MULS_III(32, (IData)(0xffU), 
                                                            VL_EXTENDS_II(32,20, vlSelf->starting_position__DOT__dir_x)) 
                                                - VL_MULS_III(32, (IData)(0x16U), 
                                                              VL_EXTENDS_II(32,20, vlSelf->starting_position__DOT__dir_y))), 8U));
    vlSelf->starting_position__DOT__new_right_dir_y 
        = (0xfffffU & VL_SHIFTRS_III(20,32,32, (VL_MULS_III(32, (IData)(0x16U), 
                                                            VL_EXTENDS_II(32,20, vlSelf->starting_position__DOT__dir_x)) 
                                                + VL_MULS_III(32, (IData)(0xffU), 
                                                              VL_EXTENDS_II(32,20, vlSelf->starting_position__DOT__dir_y))), 8U));
    vlSelf->starting_position__DOT__new_left_dir_x 
        = (0xfffffU & VL_SHIFTRS_III(20,32,32, (VL_MULS_III(32, (IData)(0xffU), 
                                                            VL_EXTENDS_II(32,20, vlSelf->starting_position__DOT__dir_x)) 
                                                + VL_MULS_III(32, (IData)(0x16U), 
                                                              VL_EXTENDS_II(32,20, vlSelf->starting_position__DOT__dir_y))), 8U));
    vlSelf->starting_position__DOT__new_left_dir_y 
        = (0xfffffU & VL_SHIFTRS_III(20,32,32, (VL_MULS_III(32, (IData)(0x16U), 
                                                            (- 
                                                             VL_EXTENDS_II(32,20, vlSelf->starting_position__DOT__dir_x))) 
                                                + VL_MULS_III(32, (IData)(0xffU), 
                                                              VL_EXTENDS_II(32,20, vlSelf->starting_position__DOT__dir_y))), 8U));
    vlSelf->starting_position__DOT__top_dut__DOT__perpendicular_distance_dut__DOT__x_mul_temp 
        = (0x1fffffffffffffffULL & VL_MULS_QQQ(61, 
                                               (0x1fffffffffffffffULL 
                                                & VL_EXTENDS_QI(61,24, vlSelf->starting_position__DOT__top_dut__DOT__ray_dir_x_dda)), 
                                               (0x1fffffffffffffffULL 
                                                & VL_EXTENDS_QI(61,20, vlSelf->starting_position__DOT__dir_x))));
    vlSelf->starting_position__DOT__top_dut__DOT__perpendicular_distance_dut__DOT__dot_temp 
        = (0x1fffffffffffffffULL & (vlSelf->starting_position__DOT__top_dut__DOT__perpendicular_distance_dut__DOT__x_mul_temp 
                                    + vlSelf->starting_position__DOT__top_dut__DOT__perpendicular_distance_dut__DOT__y_mul_temp));
    vlSelf->starting_position__DOT__top_dut__DOT__perpendicular_distance_dut__DOT__perp_result 
        = (0x1fffffffffffffffULL & VL_DIV_QQQ(61, (0x1fffffffffffffffULL 
                                                   & ((0x1fffffffffffffffULL 
                                                       & (VL_GTS_IQQ(61, 0ULL, vlSelf->starting_position__DOT__top_dut__DOT__perpendicular_distance_dut__DOT__dot_temp)
                                                           ? 
                                                          (- vlSelf->starting_position__DOT__top_dut__DOT__perpendicular_distance_dut__DOT__dot_temp)
                                                           : vlSelf->starting_position__DOT__top_dut__DOT__perpendicular_distance_dut__DOT__dot_temp)) 
                                                      * vlSelf->starting_position__DOT__top_dut__DOT__hit_distance)), 
                                              (0x1fffffffffffffffULL 
                                               & (VL_MULS_QQQ(61, 
                                                              (0x1fffffffffffffffULL 
                                                               & VL_EXTENDS_QI(61,20, vlSelf->starting_position__DOT__dir_x)), 
                                                              (0x1fffffffffffffffULL 
                                                               & VL_EXTENDS_QI(61,20, vlSelf->starting_position__DOT__dir_x))) 
                                                  + 
                                                  VL_MULS_QQQ(61, 
                                                              (0x1fffffffffffffffULL 
                                                               & VL_EXTENDS_QI(61,20, vlSelf->starting_position__DOT__dir_y)), 
                                                              (0x1fffffffffffffffULL 
                                                               & VL_EXTENDS_QI(61,20, vlSelf->starting_position__DOT__dir_y)))))));
    vlSelf->wall_height_o = ((0ULL == vlSelf->starting_position__DOT__top_dut__DOT__perpendicular_distance_dut__DOT__perp_result)
                              ? 0x438ULL : (0x1fffffffffffffffULL 
                                            & VL_DIV_QQQ(61, 0x43800ULL, vlSelf->starting_position__DOT__top_dut__DOT__perpendicular_distance_dut__DOT__perp_result)));
    if ((0x438ULL <= vlSelf->wall_height_o)) {
        vlSelf->wall_top_o = 0ULL;
        vlSelf->wall_bottom_o = 0x438ULL;
    } else {
        vlSelf->wall_top_o = (0x1fffffffffffffffULL 
                              & VL_SHIFTR_QQI(61,61,32, 
                                              (0x1fffffffffffffffULL 
                                               & (0x438ULL 
                                                  - vlSelf->wall_height_o)), 1U));
        vlSelf->wall_bottom_o = (0x1fffffffffffffffULL 
                                 & VL_SHIFTR_QQI(61,61,32, 
                                                 (0x1fffffffffffffffULL 
                                                  & (0x438ULL 
                                                     + vlSelf->wall_height_o)), 1U));
    }
}

VL_INLINE_OPT void Vstarting_position___024root___nba_sequent__TOP__3(Vstarting_position___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vstarting_position__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstarting_position___024root___nba_sequent__TOP__3\n"); );
    // Body
    vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_dirx_dut__DOT__data_count 
        = vlSelf->__Vdly__starting_position__DOT__top_dut__DOT__sync_fifo_dirx_dut__DOT__data_count;
    vlSelf->starting_position__DOT__top_dut__DOT__dirx_dut_empty 
        = (0U == (IData)(vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_dirx_dut__DOT__data_count));
    vlSelf->starting_position__DOT__top_dut__DOT__dirx_dut_full 
        = (0x800U == (IData)(vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_dirx_dut__DOT__data_count));
}

void Vstarting_position___024root___eval_nba(Vstarting_position___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vstarting_position__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstarting_position___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vstarting_position___024root___nba_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vstarting_position___024root___nba_sequent__TOP__1(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vstarting_position___024root___nba_sequent__TOP__2(vlSelf);
        vlSelf->__Vm_traceActivity[3U] = 1U;
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vstarting_position___024root___nba_sequent__TOP__3(vlSelf);
        vlSelf->__Vm_traceActivity[4U] = 1U;
    }
}

void Vstarting_position___024root___eval_triggers__act(Vstarting_position___024root* vlSelf);

bool Vstarting_position___024root___eval_phase__act(Vstarting_position___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vstarting_position__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstarting_position___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<2> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vstarting_position___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        Vstarting_position___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vstarting_position___024root___eval_phase__nba(Vstarting_position___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vstarting_position__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstarting_position___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vstarting_position___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vstarting_position___024root___dump_triggers__nba(Vstarting_position___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vstarting_position___024root___dump_triggers__act(Vstarting_position___024root* vlSelf);
#endif  // VL_DEBUG

void Vstarting_position___024root___eval(Vstarting_position___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vstarting_position__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstarting_position___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vstarting_position___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("starting_position.sv", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                Vstarting_position___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("starting_position.sv", 1, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (Vstarting_position___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (Vstarting_position___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vstarting_position___024root___eval_debug_assertions(Vstarting_position___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vstarting_position__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstarting_position___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk_i & 0xfeU))) {
        Verilated::overWidthError("clk_i");}
    if (VL_UNLIKELY((vlSelf->rst_n_i & 0xfeU))) {
        Verilated::overWidthError("rst_n_i");}
    if (VL_UNLIKELY((vlSelf->forward_button_i & 0xfeU))) {
        Verilated::overWidthError("forward_button_i");}
    if (VL_UNLIKELY((vlSelf->back_button_i & 0xfeU))) {
        Verilated::overWidthError("back_button_i");}
    if (VL_UNLIKELY((vlSelf->left_button_i & 0xfeU))) {
        Verilated::overWidthError("left_button_i");}
    if (VL_UNLIKELY((vlSelf->right_button_i & 0xfeU))) {
        Verilated::overWidthError("right_button_i");}
}
#endif  // VL_DEBUG
