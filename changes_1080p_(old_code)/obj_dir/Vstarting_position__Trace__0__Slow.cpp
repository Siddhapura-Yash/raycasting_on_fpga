// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vstarting_position__Syms.h"


VL_ATTR_COLD void Vstarting_position___024root__trace_init_sub__TOP__0(Vstarting_position___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vstarting_position__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstarting_position___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+232,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+233,0,"rst_n_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+234,0,"forward_button_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+235,0,"back_button_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+236,0,"left_button_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+237,0,"right_button_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+238,0,"wall_top_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 60,0);
    tracep->declQuad(c+240,0,"wall_bottom_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 60,0);
    tracep->declQuad(c+242,0,"wall_height_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 60,0);
    tracep->declBus(c+244,0,"screen_x_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBit(c+245,0,"data_out_valid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("starting_position", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+249,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+250,0,"SCREEN_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+251,0,"SPEED",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+252,0,"SCREEN_HEIGHT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+232,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+233,0,"rst_n_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+234,0,"forward_button_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+235,0,"back_button_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+236,0,"left_button_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+237,0,"right_button_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+238,0,"wall_top_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 60,0);
    tracep->declQuad(c+240,0,"wall_bottom_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 60,0);
    tracep->declQuad(c+242,0,"wall_height_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 60,0);
    tracep->declBus(c+244,0,"screen_x_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBit(c+245,0,"data_out_valid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+253,0,"MOVE_STEP",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+177,0,"data_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+178,0,"dir_x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBus(c+179,0,"dir_y",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBus(c+180,0,"pos_x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBus(c+181,0,"pos_y",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBus(c+182,0,"plane_x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBus(c+183,0,"plane_y",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBus(c+184,0,"screen_x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+254,0,"COS_5",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+255,0,"SIN_5",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+185,0,"move_dx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBus(c+186,0,"move_dy",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBus(c+187,0,"new_left_dir_x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBus(c+188,0,"new_left_dir_y",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBus(c+189,0,"new_left_plane_x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBus(c+190,0,"new_left_plane_y",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBus(c+191,0,"new_right_dir_x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBus(c+192,0,"new_right_dir_y",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBus(c+193,0,"new_right_plane_x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBus(c+194,0,"new_right_plane_y",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->pushPrefix("top_dut", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+249,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+250,0,"SCREEN_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+251,0,"SPEED",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+252,0,"SCREEN_HEIGHT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+232,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+233,0,"rst_n_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+177,0,"data_in_valid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+178,0,"dir_x_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBus(c+179,0,"dir_y_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBus(c+180,0,"pos_x_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBus(c+181,0,"pos_y_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBus(c+182,0,"plane_x_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBus(c+183,0,"plane_y_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBus(c+195,0,"screen_x_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBus(c+244,0,"screen_x_perp",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declQuad(c+238,0,"wall_top_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 60,0);
    tracep->declQuad(c+240,0,"wall_bottom_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 60,0);
    tracep->declQuad(c+242,0,"wall_height_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 60,0);
    tracep->declBit(c+245,0,"data_out_valid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+182,0,"plane_x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBus(c+183,0,"plane_y",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBus(c+195,0,"screen_x_ray_gen",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBit(c+177,0,"ray_gen_data_out_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+58,0,"screen_x_dut_data_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBit(c+59,0,"screen_x_dut_full",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+60,0,"screen_x_dut_empty",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+61,0,"dirx_dut_data_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBit(c+223,0,"dirx_dut_full",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+224,0,"dirx_dut_empty",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+62,0,"diry_dut_data_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBit(c+63,0,"diry_dut_full",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+64,0,"diry_dut_empty",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+65,0,"posx_dut_data_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBit(c+66,0,"posx_dut_full",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+67,0,"posx_dut_empty",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+68,0,"posy_dut_data_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBit(c+69,0,"posy_dut_full",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+70,0,"posy_dut_empty",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+71,0,"ray_dirx_dut_data_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBit(c+72,0,"ray_dirx_dut_full",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+73,0,"ray_dirx_dut_empty",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+74,0,"ray_diry_dut_data_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBit(c+75,0,"ray_diry_dut_full",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+76,0,"ray_diry_dut_empty",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+196,0,"sync_fifo_read_enable",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+197,0,"ren_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+198,0,"dda_start",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+256,0,"data_out_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+199,0,"ray_dir_x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+200,0,"ray_dir_y",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+180,0,"pos_x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBus(c+181,0,"pos_y",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declQuad(c+1,0,"hit_distance",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 40,0);
    tracep->declBus(c+3,0,"ray_dir_x_dda",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+4,0,"ray_dir_y_dda",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+178,0,"dir_x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBus(c+179,0,"dir_y",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBus(c+5,0,"dir_x_dda",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBus(c+6,0,"dir_y_dda",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBit(c+257,0,"hit_side",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+7,0,"data_out_valid_dda",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+201,0,"dda_busy",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+8,0,"dda_done",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+9,0,"mapx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBus(c+10,0,"mapy",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBus(c+11,0,"screen_x_dda",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declQuad(c+258,0,"wall_top",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 60,0);
    tracep->declQuad(c+260,0,"wall_bottom",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 60,0);
    tracep->declQuad(c+262,0,"wall_height",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 60,0);
    tracep->declBit(c+264,0,"data_out_valid_perp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("dda_algo_dut", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+249,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+232,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+233,0,"rst_n_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+71,0,"ray_dir_x_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+74,0,"ray_dir_y_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+65,0,"pos_x_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBus(c+68,0,"pos_y_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBit(c+198,0,"start_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+265,0,"dir_x_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBus(c+266,0,"dir_y_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBus(c+58,0,"screen_x_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBus(c+11,0,"screen_x_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declQuad(c+1,0,"hit_distance_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 40,0);
    tracep->declBus(c+3,0,"ray_dir_x_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+4,0,"ray_dir_y_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+5,0,"dir_x_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBus(c+6,0,"dir_y_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBit(c+257,0,"hit_side_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+7,0,"data_out_valid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+9,0,"mapx_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBus(c+10,0,"mapy_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBit(c+201,0,"busy_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+8,0,"done_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+77,0,"step_x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBus(c+78,0,"step_y",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBus(c+12,0,"map_x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBus(c+13,0,"map_y",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBus(c+14,0,"abs_ray_x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBus(c+15,0,"abs_ray_y",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBus(c+16,0,"next_x_boundary",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBus(c+17,0,"next_y_boundary",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declQuad(c+18,0,"delta_dis_y",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 40,0);
    tracep->declQuad(c+20,0,"delta_dis_x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 40,0);
    tracep->declQuad(c+22,0,"side_x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 40,0);
    tracep->declQuad(c+24,0,"side_y",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 40,0);
    tracep->declBus(c+26,0,"state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+267,0,"INIT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+251,0,"CALCULATE_DDA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+268,0,"SIDE_CALCULATE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+269,0,"COMPARE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+270,0,"MOVE_X",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+271,0,"MOVE_Y",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+272,0,"CHECK_WALL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+273,0,"HIT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+274,0,"X_HIT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+275,0,"Y_HIT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBit(c+27,0,"hit_side",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+28,0,"ray_dir_x_stage1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+29,0,"ray_dir_y_stage1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+30,0,"ray_dir_x_stage2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+31,0,"ray_dir_y_stage2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+32,0,"ray_dir_x_stage3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+33,0,"ray_dir_y_stage3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+34,0,"ray_dir_x_stage4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+35,0,"ray_dir_y_stage4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+36,0,"ray_dir_x_stage5",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+37,0,"ray_dir_y_stage5",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+38,0,"ray_dir_x_stage6",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+39,0,"ray_dir_y_stage6",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+40,0,"dir_x_o_stage1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBus(c+41,0,"dir_y_o_stage1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBus(c+42,0,"dir_x_o_stage2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBus(c+43,0,"dir_y_o_stage2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBus(c+44,0,"dir_x_o_stage3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBus(c+45,0,"dir_y_o_stage3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBus(c+46,0,"dir_x_o_stage4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBus(c+47,0,"dir_y_o_stage4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBus(c+48,0,"dir_x_o_stage5",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBus(c+49,0,"dir_y_o_stage5",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBus(c+50,0,"dir_x_o_stage6",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBus(c+51,0,"dir_y_o_stage6",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBus(c+52,0,"screen_x_o_stage1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBus(c+53,0,"screen_x_o_stage2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBus(c+54,0,"screen_x_o_stage3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBus(c+55,0,"screen_x_o_stage4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBus(c+56,0,"screen_x_o_stage5",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBus(c+57,0,"screen_x_o_stage6",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBus(c+276,0,"MAP_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+276,0,"MAP_HEIGHT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("perpendicular_distance_dut", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+249,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+250,0,"SCREEN_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+252,0,"SCREEN_HEIGHT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+232,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+233,0,"rst_n_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1,0,"hit_distance_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 40,0);
    tracep->declBus(c+3,0,"ray_dir_x_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+4,0,"ray_dir_y_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+178,0,"dir_x_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBus(c+179,0,"dir_y_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBit(c+257,0,"hit_side_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+9,0,"map_x_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBus(c+10,0,"map_y_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBit(c+7,0,"data_in_valid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+11,0,"screen_x_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBus(c+244,0,"screen_x_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declQuad(c+238,0,"wall_top_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 60,0);
    tracep->declQuad(c+240,0,"wall_bottom_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 60,0);
    tracep->declQuad(c+242,0,"wall_height_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 60,0);
    tracep->declBus(c+9,0,"map_x_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBus(c+10,0,"map_y_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBit(c+245,0,"data_out_valid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+246,0,"perp_result_temp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 60,0);
    tracep->declQuad(c+202,0,"perp_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 60,0);
    tracep->declQuad(c+204,0,"x_mul_temp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 60,0);
    tracep->declQuad(c+206,0,"y_mul_temp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 60,0);
    tracep->declQuad(c+208,0,"square_temp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 60,0);
    tracep->declQuad(c+210,0,"abs_mul_x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 60,0);
    tracep->declQuad(c+212,0,"abs_mul_y",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 60,0);
    tracep->declQuad(c+214,0,"dot_temp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 60,0);
    tracep->declQuad(c+216,0,"abs_dot",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 60,0);
    tracep->popPrefix();
    tracep->pushPrefix("ray_generator_dut", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+249,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+250,0,"SCREEN_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+251,0,"SPEED",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+232,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+233,0,"rst_n_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+178,0,"dir_x_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBus(c+179,0,"dir_y_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBus(c+180,0,"pos_x_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBus(c+181,0,"pos_y_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBus(c+182,0,"plane_x_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBus(c+183,0,"plane_y_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBus(c+195,0,"screen_x_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBit(c+177,0,"data_in_valid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+178,0,"dir_x_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBus(c+179,0,"dir_y_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBus(c+180,0,"pos_x_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBus(c+181,0,"pos_y_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBus(c+182,0,"plane_x_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBus(c+183,0,"plane_y_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBus(c+195,0,"screen_x_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBit(c+177,0,"data_out_valid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+199,0,"ray_dir_x_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+200,0,"ray_dir_y_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declQuad(c+218,0,"temp_x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 39,0);
    tracep->declQuad(c+220,0,"temp_y",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 39,0);
    tracep->declBus(c+222,0,"camera_x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBus(c+277,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("sync_fifo_dirx_dut", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+249,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+278,0,"DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+268,0,"PROG_FULL_VALUE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+268,0,"PROG_EMPTY_VALUE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+251,0,"MODE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+279,0,"PTR_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+232,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+233,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+196,0,"r_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+177,0,"w_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+178,0,"data_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBus(c+61,0,"data_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBus(c+225,0,"data_count",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBit(c+248,0,"rst_busy",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+223,0,"full",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+224,0,"empty",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+226,0,"half_full",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+227,0,"half_empty",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+228,0,"almost_full",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+229,0,"almost_empty",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+230,0,"prog_full",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+231,0,"prog_empty",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+79,0,"overflow",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+80,0,"underflow",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+81,0,"wr_ack",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+82,0,"rd_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+83,0,"w_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+84,0,"r_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+85,0,"w_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+86,0,"r_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->popPrefix();
    tracep->pushPrefix("sync_fifo_diry_dut", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+249,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+278,0,"DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+268,0,"PROG_FULL_VALUE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+268,0,"PROG_EMPTY_VALUE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+251,0,"MODE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+279,0,"PTR_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+232,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+233,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+196,0,"r_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+177,0,"w_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+179,0,"data_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBus(c+62,0,"data_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBus(c+87,0,"data_count",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBit(c+248,0,"rst_busy",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+63,0,"full",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+64,0,"empty",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+88,0,"half_full",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+89,0,"half_empty",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+90,0,"almost_full",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+91,0,"almost_empty",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+92,0,"prog_full",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+93,0,"prog_empty",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+94,0,"overflow",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+95,0,"underflow",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+96,0,"wr_ack",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+97,0,"rd_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+98,0,"w_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+99,0,"r_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+100,0,"w_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+101,0,"r_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->popPrefix();
    tracep->pushPrefix("sync_fifo_posx_dut", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+249,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+278,0,"DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+268,0,"PROG_FULL_VALUE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+268,0,"PROG_EMPTY_VALUE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+251,0,"MODE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+279,0,"PTR_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+232,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+233,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+196,0,"r_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+177,0,"w_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+180,0,"data_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBus(c+65,0,"data_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBus(c+102,0,"data_count",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBit(c+248,0,"rst_busy",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+66,0,"full",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+67,0,"empty",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+103,0,"half_full",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+104,0,"half_empty",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+105,0,"almost_full",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+106,0,"almost_empty",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+107,0,"prog_full",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+108,0,"prog_empty",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+109,0,"overflow",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+110,0,"underflow",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+111,0,"wr_ack",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+112,0,"rd_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+113,0,"w_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+114,0,"r_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+115,0,"w_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+116,0,"r_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->popPrefix();
    tracep->pushPrefix("sync_fifo_posy_dut", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+249,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+278,0,"DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+268,0,"PROG_FULL_VALUE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+268,0,"PROG_EMPTY_VALUE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+251,0,"MODE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+279,0,"PTR_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+232,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+233,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+196,0,"r_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+177,0,"w_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+181,0,"data_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBus(c+68,0,"data_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBus(c+117,0,"data_count",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBit(c+248,0,"rst_busy",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+69,0,"full",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+70,0,"empty",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+118,0,"half_full",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+119,0,"half_empty",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+120,0,"almost_full",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+121,0,"almost_empty",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+122,0,"prog_full",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+123,0,"prog_empty",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+124,0,"overflow",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+125,0,"underflow",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+126,0,"wr_ack",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+127,0,"rd_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+128,0,"w_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+129,0,"r_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+130,0,"w_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+131,0,"r_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->popPrefix();
    tracep->pushPrefix("sync_fifo_ray_dirx_dut", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+280,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+278,0,"DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+268,0,"PROG_FULL_VALUE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+268,0,"PROG_EMPTY_VALUE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+251,0,"MODE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+279,0,"PTR_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+232,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+233,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+196,0,"r_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+177,0,"w_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+199,0,"data_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+71,0,"data_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+132,0,"data_count",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBit(c+248,0,"rst_busy",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+72,0,"full",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+73,0,"empty",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+133,0,"half_full",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+134,0,"half_empty",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+135,0,"almost_full",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+136,0,"almost_empty",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+137,0,"prog_full",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+138,0,"prog_empty",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+139,0,"overflow",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+140,0,"underflow",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+141,0,"wr_ack",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+142,0,"rd_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+143,0,"w_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+144,0,"r_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+145,0,"w_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+146,0,"r_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->popPrefix();
    tracep->pushPrefix("sync_fifo_ray_diry_dut", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+280,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+278,0,"DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+268,0,"PROG_FULL_VALUE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+268,0,"PROG_EMPTY_VALUE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+251,0,"MODE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+279,0,"PTR_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+232,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+233,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+196,0,"r_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+177,0,"w_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+200,0,"data_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+74,0,"data_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+147,0,"data_count",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBit(c+248,0,"rst_busy",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+75,0,"full",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+76,0,"empty",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+148,0,"half_full",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+149,0,"half_empty",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+150,0,"almost_full",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+151,0,"almost_empty",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+152,0,"prog_full",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+153,0,"prog_empty",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+154,0,"overflow",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+155,0,"underflow",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+156,0,"wr_ack",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+157,0,"rd_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+158,0,"w_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+159,0,"r_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+160,0,"w_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+161,0,"r_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->popPrefix();
    tracep->pushPrefix("sync_fifo_screen_x_dut", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+249,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+278,0,"DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+268,0,"PROG_FULL_VALUE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+268,0,"PROG_EMPTY_VALUE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+251,0,"MODE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+279,0,"PTR_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+232,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+233,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+196,0,"r_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+177,0,"w_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+195,0,"data_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBus(c+58,0,"data_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBus(c+162,0,"data_count",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBit(c+248,0,"rst_busy",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+59,0,"full",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+60,0,"empty",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+163,0,"half_full",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+164,0,"half_empty",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+165,0,"almost_full",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+166,0,"almost_empty",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+167,0,"prog_full",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+168,0,"prog_empty",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+169,0,"overflow",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+170,0,"underflow",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+171,0,"wr_ack",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+172,0,"rd_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+173,0,"w_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+174,0,"r_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+175,0,"w_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+176,0,"r_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vstarting_position___024root__trace_init_top(Vstarting_position___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vstarting_position__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstarting_position___024root__trace_init_top\n"); );
    // Body
    Vstarting_position___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vstarting_position___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vstarting_position___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vstarting_position___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vstarting_position___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vstarting_position___024root__trace_register(Vstarting_position___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vstarting_position__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstarting_position___024root__trace_register\n"); );
    // Body
    tracep->addConstCb(&Vstarting_position___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vstarting_position___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vstarting_position___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vstarting_position___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vstarting_position___024root__trace_const_0_sub_0(Vstarting_position___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vstarting_position___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstarting_position___024root__trace_const_0\n"); );
    // Init
    Vstarting_position___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vstarting_position___024root*>(voidSelf);
    Vstarting_position__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vstarting_position___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vstarting_position___024root__trace_const_0_sub_0(Vstarting_position___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vstarting_position__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstarting_position___024root__trace_const_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+249,(0x14U),32);
    bufp->fullIData(oldp+250,(0x780U),32);
    bufp->fullIData(oldp+251,(1U),32);
    bufp->fullIData(oldp+252,(0x438U),32);
    bufp->fullIData(oldp+253,(4U),32);
    bufp->fullIData(oldp+254,(0xffU),32);
    bufp->fullIData(oldp+255,(0x16U),32);
    bufp->fullBit(oldp+256,(vlSelf->starting_position__DOT__top_dut__DOT__data_out_valid));
    bufp->fullBit(oldp+257,(vlSelf->starting_position__DOT__top_dut__DOT__hit_side));
    bufp->fullQData(oldp+258,(vlSelf->starting_position__DOT__top_dut__DOT__wall_top),61);
    bufp->fullQData(oldp+260,(vlSelf->starting_position__DOT__top_dut__DOT__wall_bottom),61);
    bufp->fullQData(oldp+262,(vlSelf->starting_position__DOT__top_dut__DOT__wall_height),61);
    bufp->fullBit(oldp+264,(vlSelf->starting_position__DOT__top_dut__DOT__data_out_valid_perp));
    bufp->fullIData(oldp+265,(vlSelf->starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__dir_x_i),20);
    bufp->fullIData(oldp+266,(vlSelf->starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__dir_y_i),20);
    bufp->fullIData(oldp+267,(0U),32);
    bufp->fullIData(oldp+268,(2U),32);
    bufp->fullIData(oldp+269,(3U),32);
    bufp->fullIData(oldp+270,(4U),32);
    bufp->fullIData(oldp+271,(5U),32);
    bufp->fullIData(oldp+272,(6U),32);
    bufp->fullIData(oldp+273,(7U),32);
    bufp->fullBit(oldp+274,(1U));
    bufp->fullBit(oldp+275,(0U));
    bufp->fullIData(oldp+276,(0xcU),32);
    bufp->fullIData(oldp+277,(0U),32);
    bufp->fullIData(oldp+278,(0x800U),32);
    bufp->fullIData(oldp+279,(0xbU),32);
    bufp->fullIData(oldp+280,(0x18U),32);
}

VL_ATTR_COLD void Vstarting_position___024root__trace_full_0_sub_0(Vstarting_position___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vstarting_position___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstarting_position___024root__trace_full_0\n"); );
    // Init
    Vstarting_position___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vstarting_position___024root*>(voidSelf);
    Vstarting_position__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vstarting_position___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vstarting_position___024root__trace_full_0_sub_0(Vstarting_position___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vstarting_position__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstarting_position___024root__trace_full_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullQData(oldp+1,(vlSelf->starting_position__DOT__top_dut__DOT__hit_distance),41);
    bufp->fullIData(oldp+3,(vlSelf->starting_position__DOT__top_dut__DOT__ray_dir_x_dda),24);
    bufp->fullIData(oldp+4,(vlSelf->starting_position__DOT__top_dut__DOT__ray_dir_y_dda),24);
    bufp->fullIData(oldp+5,(vlSelf->starting_position__DOT__top_dut__DOT__dir_x_dda),20);
    bufp->fullIData(oldp+6,(vlSelf->starting_position__DOT__top_dut__DOT__dir_y_dda),20);
    bufp->fullBit(oldp+7,(vlSelf->starting_position__DOT__top_dut__DOT__data_out_valid_dda));
    bufp->fullBit(oldp+8,(vlSelf->starting_position__DOT__top_dut__DOT__dda_done));
    bufp->fullIData(oldp+9,(vlSelf->starting_position__DOT__top_dut__DOT__mapx),20);
    bufp->fullIData(oldp+10,(vlSelf->starting_position__DOT__top_dut__DOT__mapy),20);
    bufp->fullIData(oldp+11,(vlSelf->starting_position__DOT__top_dut__DOT__screen_x_dda),20);
    bufp->fullIData(oldp+12,(vlSelf->starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__map_x),20);
    bufp->fullIData(oldp+13,(vlSelf->starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__map_y),20);
    bufp->fullIData(oldp+14,(vlSelf->starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__abs_ray_x),20);
    bufp->fullIData(oldp+15,(vlSelf->starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__abs_ray_y),20);
    bufp->fullIData(oldp+16,(vlSelf->starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__next_x_boundary),20);
    bufp->fullIData(oldp+17,(vlSelf->starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__next_y_boundary),20);
    bufp->fullQData(oldp+18,(vlSelf->starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__delta_dis_y),41);
    bufp->fullQData(oldp+20,(vlSelf->starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__delta_dis_x),41);
    bufp->fullQData(oldp+22,(vlSelf->starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__side_x),41);
    bufp->fullQData(oldp+24,(vlSelf->starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__side_y),41);
    bufp->fullCData(oldp+26,(vlSelf->starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__state),4);
    bufp->fullBit(oldp+27,(vlSelf->starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__hit_side));
    bufp->fullIData(oldp+28,(vlSelf->starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__ray_dir_x_stage1),24);
    bufp->fullIData(oldp+29,(vlSelf->starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__ray_dir_y_stage1),24);
    bufp->fullIData(oldp+30,(vlSelf->starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__ray_dir_x_stage2),24);
    bufp->fullIData(oldp+31,(vlSelf->starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__ray_dir_y_stage2),24);
    bufp->fullIData(oldp+32,(vlSelf->starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__ray_dir_x_stage3),24);
    bufp->fullIData(oldp+33,(vlSelf->starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__ray_dir_y_stage3),24);
    bufp->fullIData(oldp+34,(vlSelf->starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__ray_dir_x_stage4),24);
    bufp->fullIData(oldp+35,(vlSelf->starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__ray_dir_y_stage4),24);
    bufp->fullIData(oldp+36,(vlSelf->starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__ray_dir_x_stage5),24);
    bufp->fullIData(oldp+37,(vlSelf->starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__ray_dir_y_stage5),24);
    bufp->fullIData(oldp+38,(vlSelf->starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__ray_dir_x_stage6),24);
    bufp->fullIData(oldp+39,(vlSelf->starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__ray_dir_y_stage6),24);
    bufp->fullIData(oldp+40,(vlSelf->starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__dir_x_o_stage1),20);
    bufp->fullIData(oldp+41,(vlSelf->starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__dir_y_o_stage1),20);
    bufp->fullIData(oldp+42,(vlSelf->starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__dir_x_o_stage2),20);
    bufp->fullIData(oldp+43,(vlSelf->starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__dir_y_o_stage2),20);
    bufp->fullIData(oldp+44,(vlSelf->starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__dir_x_o_stage3),20);
    bufp->fullIData(oldp+45,(vlSelf->starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__dir_y_o_stage3),20);
    bufp->fullIData(oldp+46,(vlSelf->starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__dir_x_o_stage4),20);
    bufp->fullIData(oldp+47,(vlSelf->starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__dir_y_o_stage4),20);
    bufp->fullIData(oldp+48,(vlSelf->starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__dir_x_o_stage5),20);
    bufp->fullIData(oldp+49,(vlSelf->starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__dir_y_o_stage5),20);
    bufp->fullIData(oldp+50,(vlSelf->starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__dir_x_o_stage6),20);
    bufp->fullIData(oldp+51,(vlSelf->starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__dir_y_o_stage6),20);
    bufp->fullIData(oldp+52,(vlSelf->starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__screen_x_o_stage1),20);
    bufp->fullIData(oldp+53,(vlSelf->starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__screen_x_o_stage2),20);
    bufp->fullIData(oldp+54,(vlSelf->starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__screen_x_o_stage3),20);
    bufp->fullIData(oldp+55,(vlSelf->starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__screen_x_o_stage4),20);
    bufp->fullIData(oldp+56,(vlSelf->starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__screen_x_o_stage5),20);
    bufp->fullIData(oldp+57,(vlSelf->starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__screen_x_o_stage6),20);
    bufp->fullIData(oldp+58,(vlSelf->starting_position__DOT__top_dut__DOT__screen_x_dut_data_out),20);
    bufp->fullBit(oldp+59,((0x800U == (IData)(vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_screen_x_dut__DOT__data_count))));
    bufp->fullBit(oldp+60,((0U == (IData)(vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_screen_x_dut__DOT__data_count))));
    bufp->fullIData(oldp+61,(vlSelf->starting_position__DOT__top_dut__DOT__dirx_dut_data_out),20);
    bufp->fullIData(oldp+62,(vlSelf->starting_position__DOT__top_dut__DOT__diry_dut_data_out),20);
    bufp->fullBit(oldp+63,((0x800U == (IData)(vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_diry_dut__DOT__data_count))));
    bufp->fullBit(oldp+64,((0U == (IData)(vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_diry_dut__DOT__data_count))));
    bufp->fullIData(oldp+65,(vlSelf->starting_position__DOT__top_dut__DOT__posx_dut_data_out),20);
    bufp->fullBit(oldp+66,((0x800U == (IData)(vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_posx_dut__DOT__data_count))));
    bufp->fullBit(oldp+67,((0U == (IData)(vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_posx_dut__DOT__data_count))));
    bufp->fullIData(oldp+68,(vlSelf->starting_position__DOT__top_dut__DOT__posy_dut_data_out),20);
    bufp->fullBit(oldp+69,((0x800U == (IData)(vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_posy_dut__DOT__data_count))));
    bufp->fullBit(oldp+70,((0U == (IData)(vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_posy_dut__DOT__data_count))));
    bufp->fullIData(oldp+71,(vlSelf->starting_position__DOT__top_dut__DOT__ray_dirx_dut_data_out),24);
    bufp->fullBit(oldp+72,((0x800U == (IData)(vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_ray_dirx_dut__DOT__data_count))));
    bufp->fullBit(oldp+73,((0U == (IData)(vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_ray_dirx_dut__DOT__data_count))));
    bufp->fullIData(oldp+74,(vlSelf->starting_position__DOT__top_dut__DOT__ray_diry_dut_data_out),24);
    bufp->fullBit(oldp+75,((0x800U == (IData)(vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_ray_diry_dut__DOT__data_count))));
    bufp->fullBit(oldp+76,((0U == (IData)(vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_ray_diry_dut__DOT__data_count))));
    bufp->fullIData(oldp+77,((VL_LTS_III(32, 0U, VL_EXTENDS_II(32,24, vlSelf->starting_position__DOT__top_dut__DOT__ray_dirx_dut_data_out))
                               ? 1U : 0xfffffU)),20);
    bufp->fullIData(oldp+78,((VL_LTS_III(32, 0U, VL_EXTENDS_II(32,24, vlSelf->starting_position__DOT__top_dut__DOT__ray_diry_dut_data_out))
                               ? 1U : 0xfffffU)),20);
    bufp->fullBit(oldp+79,(vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_dirx_dut__DOT__overflow));
    bufp->fullBit(oldp+80,(vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_dirx_dut__DOT__underflow));
    bufp->fullBit(oldp+81,(vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_dirx_dut__DOT__wr_ack));
    bufp->fullBit(oldp+82,(vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_dirx_dut__DOT__rd_valid));
    bufp->fullSData(oldp+83,(vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_dirx_dut__DOT__w_ptr),12);
    bufp->fullSData(oldp+84,(vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_dirx_dut__DOT__r_ptr),12);
    bufp->fullSData(oldp+85,((0x7ffU & (IData)(vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_dirx_dut__DOT__w_ptr))),11);
    bufp->fullSData(oldp+86,((0x7ffU & (IData)(vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_dirx_dut__DOT__r_ptr))),11);
    bufp->fullSData(oldp+87,(vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_diry_dut__DOT__data_count),12);
    bufp->fullBit(oldp+88,((0x400U <= (IData)(vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_diry_dut__DOT__data_count))));
    bufp->fullBit(oldp+89,((0x400U >= (IData)(vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_diry_dut__DOT__data_count))));
    bufp->fullBit(oldp+90,((0x7ffU <= (IData)(vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_diry_dut__DOT__data_count))));
    bufp->fullBit(oldp+91,((1U >= (IData)(vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_diry_dut__DOT__data_count))));
    bufp->fullBit(oldp+92,((2U <= (IData)(vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_diry_dut__DOT__data_count))));
    bufp->fullBit(oldp+93,((2U >= (IData)(vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_diry_dut__DOT__data_count))));
    bufp->fullBit(oldp+94,(vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_diry_dut__DOT__overflow));
    bufp->fullBit(oldp+95,(vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_diry_dut__DOT__underflow));
    bufp->fullBit(oldp+96,(vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_diry_dut__DOT__wr_ack));
    bufp->fullBit(oldp+97,(vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_diry_dut__DOT__rd_valid));
    bufp->fullSData(oldp+98,(vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_diry_dut__DOT__w_ptr),12);
    bufp->fullSData(oldp+99,(vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_diry_dut__DOT__r_ptr),12);
    bufp->fullSData(oldp+100,((0x7ffU & (IData)(vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_diry_dut__DOT__w_ptr))),11);
    bufp->fullSData(oldp+101,((0x7ffU & (IData)(vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_diry_dut__DOT__r_ptr))),11);
    bufp->fullSData(oldp+102,(vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_posx_dut__DOT__data_count),12);
    bufp->fullBit(oldp+103,((0x400U <= (IData)(vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_posx_dut__DOT__data_count))));
    bufp->fullBit(oldp+104,((0x400U >= (IData)(vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_posx_dut__DOT__data_count))));
    bufp->fullBit(oldp+105,((0x7ffU <= (IData)(vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_posx_dut__DOT__data_count))));
    bufp->fullBit(oldp+106,((1U >= (IData)(vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_posx_dut__DOT__data_count))));
    bufp->fullBit(oldp+107,((2U <= (IData)(vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_posx_dut__DOT__data_count))));
    bufp->fullBit(oldp+108,((2U >= (IData)(vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_posx_dut__DOT__data_count))));
    bufp->fullBit(oldp+109,(vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_posx_dut__DOT__overflow));
    bufp->fullBit(oldp+110,(vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_posx_dut__DOT__underflow));
    bufp->fullBit(oldp+111,(vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_posx_dut__DOT__wr_ack));
    bufp->fullBit(oldp+112,(vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_posx_dut__DOT__rd_valid));
    bufp->fullSData(oldp+113,(vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_posx_dut__DOT__w_ptr),12);
    bufp->fullSData(oldp+114,(vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_posx_dut__DOT__r_ptr),12);
    bufp->fullSData(oldp+115,((0x7ffU & (IData)(vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_posx_dut__DOT__w_ptr))),11);
    bufp->fullSData(oldp+116,((0x7ffU & (IData)(vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_posx_dut__DOT__r_ptr))),11);
    bufp->fullSData(oldp+117,(vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_posy_dut__DOT__data_count),12);
    bufp->fullBit(oldp+118,((0x400U <= (IData)(vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_posy_dut__DOT__data_count))));
    bufp->fullBit(oldp+119,((0x400U >= (IData)(vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_posy_dut__DOT__data_count))));
    bufp->fullBit(oldp+120,((0x7ffU <= (IData)(vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_posy_dut__DOT__data_count))));
    bufp->fullBit(oldp+121,((1U >= (IData)(vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_posy_dut__DOT__data_count))));
    bufp->fullBit(oldp+122,((2U <= (IData)(vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_posy_dut__DOT__data_count))));
    bufp->fullBit(oldp+123,((2U >= (IData)(vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_posy_dut__DOT__data_count))));
    bufp->fullBit(oldp+124,(vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_posy_dut__DOT__overflow));
    bufp->fullBit(oldp+125,(vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_posy_dut__DOT__underflow));
    bufp->fullBit(oldp+126,(vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_posy_dut__DOT__wr_ack));
    bufp->fullBit(oldp+127,(vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_posy_dut__DOT__rd_valid));
    bufp->fullSData(oldp+128,(vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_posy_dut__DOT__w_ptr),12);
    bufp->fullSData(oldp+129,(vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_posy_dut__DOT__r_ptr),12);
    bufp->fullSData(oldp+130,((0x7ffU & (IData)(vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_posy_dut__DOT__w_ptr))),11);
    bufp->fullSData(oldp+131,((0x7ffU & (IData)(vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_posy_dut__DOT__r_ptr))),11);
    bufp->fullSData(oldp+132,(vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_ray_dirx_dut__DOT__data_count),12);
    bufp->fullBit(oldp+133,((0x400U <= (IData)(vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_ray_dirx_dut__DOT__data_count))));
    bufp->fullBit(oldp+134,((0x400U >= (IData)(vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_ray_dirx_dut__DOT__data_count))));
    bufp->fullBit(oldp+135,((0x7ffU <= (IData)(vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_ray_dirx_dut__DOT__data_count))));
    bufp->fullBit(oldp+136,((1U >= (IData)(vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_ray_dirx_dut__DOT__data_count))));
    bufp->fullBit(oldp+137,((2U <= (IData)(vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_ray_dirx_dut__DOT__data_count))));
    bufp->fullBit(oldp+138,((2U >= (IData)(vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_ray_dirx_dut__DOT__data_count))));
    bufp->fullBit(oldp+139,(vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_ray_dirx_dut__DOT__overflow));
    bufp->fullBit(oldp+140,(vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_ray_dirx_dut__DOT__underflow));
    bufp->fullBit(oldp+141,(vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_ray_dirx_dut__DOT__wr_ack));
    bufp->fullBit(oldp+142,(vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_ray_dirx_dut__DOT__rd_valid));
    bufp->fullSData(oldp+143,(vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_ray_dirx_dut__DOT__w_ptr),12);
    bufp->fullSData(oldp+144,(vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_ray_dirx_dut__DOT__r_ptr),12);
    bufp->fullSData(oldp+145,((0x7ffU & (IData)(vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_ray_dirx_dut__DOT__w_ptr))),11);
    bufp->fullSData(oldp+146,((0x7ffU & (IData)(vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_ray_dirx_dut__DOT__r_ptr))),11);
    bufp->fullSData(oldp+147,(vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_ray_diry_dut__DOT__data_count),12);
    bufp->fullBit(oldp+148,((0x400U <= (IData)(vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_ray_diry_dut__DOT__data_count))));
    bufp->fullBit(oldp+149,((0x400U >= (IData)(vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_ray_diry_dut__DOT__data_count))));
    bufp->fullBit(oldp+150,((0x7ffU <= (IData)(vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_ray_diry_dut__DOT__data_count))));
    bufp->fullBit(oldp+151,((1U >= (IData)(vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_ray_diry_dut__DOT__data_count))));
    bufp->fullBit(oldp+152,((2U <= (IData)(vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_ray_diry_dut__DOT__data_count))));
    bufp->fullBit(oldp+153,((2U >= (IData)(vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_ray_diry_dut__DOT__data_count))));
    bufp->fullBit(oldp+154,(vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_ray_diry_dut__DOT__overflow));
    bufp->fullBit(oldp+155,(vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_ray_diry_dut__DOT__underflow));
    bufp->fullBit(oldp+156,(vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_ray_diry_dut__DOT__wr_ack));
    bufp->fullBit(oldp+157,(vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_ray_diry_dut__DOT__rd_valid));
    bufp->fullSData(oldp+158,(vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_ray_diry_dut__DOT__w_ptr),12);
    bufp->fullSData(oldp+159,(vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_ray_diry_dut__DOT__r_ptr),12);
    bufp->fullSData(oldp+160,((0x7ffU & (IData)(vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_ray_diry_dut__DOT__w_ptr))),11);
    bufp->fullSData(oldp+161,((0x7ffU & (IData)(vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_ray_diry_dut__DOT__r_ptr))),11);
    bufp->fullSData(oldp+162,(vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_screen_x_dut__DOT__data_count),12);
    bufp->fullBit(oldp+163,((0x400U <= (IData)(vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_screen_x_dut__DOT__data_count))));
    bufp->fullBit(oldp+164,((0x400U >= (IData)(vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_screen_x_dut__DOT__data_count))));
    bufp->fullBit(oldp+165,((0x7ffU <= (IData)(vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_screen_x_dut__DOT__data_count))));
    bufp->fullBit(oldp+166,((1U >= (IData)(vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_screen_x_dut__DOT__data_count))));
    bufp->fullBit(oldp+167,((2U <= (IData)(vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_screen_x_dut__DOT__data_count))));
    bufp->fullBit(oldp+168,((2U >= (IData)(vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_screen_x_dut__DOT__data_count))));
    bufp->fullBit(oldp+169,(vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_screen_x_dut__DOT__overflow));
    bufp->fullBit(oldp+170,(vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_screen_x_dut__DOT__underflow));
    bufp->fullBit(oldp+171,(vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_screen_x_dut__DOT__wr_ack));
    bufp->fullBit(oldp+172,(vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_screen_x_dut__DOT__rd_valid));
    bufp->fullSData(oldp+173,(vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_screen_x_dut__DOT__w_ptr),12);
    bufp->fullSData(oldp+174,(vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_screen_x_dut__DOT__r_ptr),12);
    bufp->fullSData(oldp+175,((0x7ffU & (IData)(vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_screen_x_dut__DOT__w_ptr))),11);
    bufp->fullSData(oldp+176,((0x7ffU & (IData)(vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_screen_x_dut__DOT__r_ptr))),11);
    bufp->fullBit(oldp+177,(vlSelf->starting_position__DOT__data_valid));
    bufp->fullIData(oldp+178,(vlSelf->starting_position__DOT__dir_x),20);
    bufp->fullIData(oldp+179,(vlSelf->starting_position__DOT__dir_y),20);
    bufp->fullIData(oldp+180,(vlSelf->starting_position__DOT__pos_x),20);
    bufp->fullIData(oldp+181,(vlSelf->starting_position__DOT__pos_y),20);
    bufp->fullIData(oldp+182,(vlSelf->starting_position__DOT__plane_x),20);
    bufp->fullIData(oldp+183,(vlSelf->starting_position__DOT__plane_y),20);
    bufp->fullSData(oldp+184,(vlSelf->starting_position__DOT__screen_x),11);
    bufp->fullIData(oldp+185,((0xfffffU & VL_SHIFTRS_III(20,32,32, 
                                                         VL_MULS_III(32, (IData)(4U), 
                                                                     VL_EXTENDS_II(32,20, vlSelf->starting_position__DOT__dir_x)), 8U))),20);
    bufp->fullIData(oldp+186,((0xfffffU & VL_SHIFTRS_III(20,32,32, 
                                                         VL_MULS_III(32, (IData)(4U), 
                                                                     VL_EXTENDS_II(32,20, vlSelf->starting_position__DOT__dir_y)), 8U))),20);
    bufp->fullIData(oldp+187,((0xfffffU & VL_SHIFTRS_III(20,32,32, 
                                                         (VL_MULS_III(32, (IData)(0xffU), 
                                                                      VL_EXTENDS_II(32,20, vlSelf->starting_position__DOT__dir_x)) 
                                                          + 
                                                          VL_MULS_III(32, (IData)(0x16U), 
                                                                      VL_EXTENDS_II(32,20, vlSelf->starting_position__DOT__dir_y))), 8U))),20);
    bufp->fullIData(oldp+188,((0xfffffU & VL_SHIFTRS_III(20,32,32, 
                                                         (VL_MULS_III(32, (IData)(0x16U), 
                                                                      (- 
                                                                       VL_EXTENDS_II(32,20, vlSelf->starting_position__DOT__dir_x))) 
                                                          + 
                                                          VL_MULS_III(32, (IData)(0xffU), 
                                                                      VL_EXTENDS_II(32,20, vlSelf->starting_position__DOT__dir_y))), 8U))),20);
    bufp->fullIData(oldp+189,((0xfffffU & VL_SHIFTRS_III(20,32,32, 
                                                         (VL_MULS_III(32, (IData)(0xffU), 
                                                                      VL_EXTENDS_II(32,20, vlSelf->starting_position__DOT__plane_x)) 
                                                          + 
                                                          VL_MULS_III(32, (IData)(0x16U), 
                                                                      VL_EXTENDS_II(32,20, vlSelf->starting_position__DOT__plane_y))), 8U))),20);
    bufp->fullIData(oldp+190,((0xfffffU & VL_SHIFTRS_III(20,32,32, 
                                                         (VL_MULS_III(32, (IData)(0x16U), 
                                                                      (- 
                                                                       VL_EXTENDS_II(32,20, vlSelf->starting_position__DOT__plane_x))) 
                                                          + 
                                                          VL_MULS_III(32, (IData)(0xffU), 
                                                                      VL_EXTENDS_II(32,20, vlSelf->starting_position__DOT__plane_y))), 8U))),20);
    bufp->fullIData(oldp+191,((0xfffffU & VL_SHIFTRS_III(20,32,32, 
                                                         (VL_MULS_III(32, (IData)(0xffU), 
                                                                      VL_EXTENDS_II(32,20, vlSelf->starting_position__DOT__dir_x)) 
                                                          - 
                                                          VL_MULS_III(32, (IData)(0x16U), 
                                                                      VL_EXTENDS_II(32,20, vlSelf->starting_position__DOT__dir_y))), 8U))),20);
    bufp->fullIData(oldp+192,((0xfffffU & VL_SHIFTRS_III(20,32,32, 
                                                         (VL_MULS_III(32, (IData)(0x16U), 
                                                                      VL_EXTENDS_II(32,20, vlSelf->starting_position__DOT__dir_x)) 
                                                          + 
                                                          VL_MULS_III(32, (IData)(0xffU), 
                                                                      VL_EXTENDS_II(32,20, vlSelf->starting_position__DOT__dir_y))), 8U))),20);
    bufp->fullIData(oldp+193,((0xfffffU & VL_SHIFTRS_III(20,32,32, 
                                                         (VL_MULS_III(32, (IData)(0xffU), 
                                                                      VL_EXTENDS_II(32,20, vlSelf->starting_position__DOT__plane_x)) 
                                                          - 
                                                          VL_MULS_III(32, (IData)(0x16U), 
                                                                      VL_EXTENDS_II(32,20, vlSelf->starting_position__DOT__plane_y))), 8U))),20);
    bufp->fullIData(oldp+194,((0xfffffU & VL_SHIFTRS_III(20,32,32, 
                                                         (VL_MULS_III(32, (IData)(0x16U), 
                                                                      VL_EXTENDS_II(32,20, vlSelf->starting_position__DOT__plane_x)) 
                                                          + 
                                                          VL_MULS_III(32, (IData)(0xffU), 
                                                                      VL_EXTENDS_II(32,20, vlSelf->starting_position__DOT__plane_y))), 8U))),20);
    bufp->fullIData(oldp+195,(vlSelf->starting_position__DOT__screen_x),20);
    bufp->fullBit(oldp+196,(vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_read_enable));
    bufp->fullCData(oldp+197,(vlSelf->starting_position__DOT__top_dut__DOT__ren_state),3);
    bufp->fullBit(oldp+198,(vlSelf->starting_position__DOT__top_dut__DOT__dda_start));
    bufp->fullIData(oldp+199,((0xffffffU & ((IData)(
                                                    (0xffffffffffULL 
                                                     & VL_EXTENDS_QI(40,20, vlSelf->starting_position__DOT__dir_x))) 
                                            + (IData)(
                                                      (0xffffffffffULL 
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
                                                                                - (IData)(0x100U))))))), 0x100ULL)))))),24);
    bufp->fullIData(oldp+200,((0xffffffU & ((IData)(
                                                    (0xffffffffffULL 
                                                     & VL_EXTENDS_QI(40,20, vlSelf->starting_position__DOT__dir_y))) 
                                            + (IData)(
                                                      (0xffffffffffULL 
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
                                                                                - (IData)(0x100U))))))), 0x100ULL)))))),24);
    bufp->fullBit(oldp+201,(vlSelf->starting_position__DOT__top_dut__DOT__dda_busy));
    bufp->fullQData(oldp+202,(vlSelf->starting_position__DOT__top_dut__DOT__perpendicular_distance_dut__DOT__perp_result),61);
    bufp->fullQData(oldp+204,(vlSelf->starting_position__DOT__top_dut__DOT__perpendicular_distance_dut__DOT__x_mul_temp),61);
    bufp->fullQData(oldp+206,(vlSelf->starting_position__DOT__top_dut__DOT__perpendicular_distance_dut__DOT__y_mul_temp),61);
    bufp->fullQData(oldp+208,((0x1fffffffffffffffULL 
                               & (VL_MULS_QQQ(61, (0x1fffffffffffffffULL 
                                                   & VL_EXTENDS_QI(61,20, vlSelf->starting_position__DOT__dir_x)), 
                                              (0x1fffffffffffffffULL 
                                               & VL_EXTENDS_QI(61,20, vlSelf->starting_position__DOT__dir_x))) 
                                  + VL_MULS_QQQ(61, 
                                                (0x1fffffffffffffffULL 
                                                 & VL_EXTENDS_QI(61,20, vlSelf->starting_position__DOT__dir_y)), 
                                                (0x1fffffffffffffffULL 
                                                 & VL_EXTENDS_QI(61,20, vlSelf->starting_position__DOT__dir_y)))))),61);
    bufp->fullQData(oldp+210,((0x1fffffffffffffffULL 
                               & (VL_GTS_IQQ(61, 0ULL, vlSelf->starting_position__DOT__top_dut__DOT__perpendicular_distance_dut__DOT__x_mul_temp)
                                   ? (- vlSelf->starting_position__DOT__top_dut__DOT__perpendicular_distance_dut__DOT__x_mul_temp)
                                   : vlSelf->starting_position__DOT__top_dut__DOT__perpendicular_distance_dut__DOT__x_mul_temp))),61);
    bufp->fullQData(oldp+212,((0x1fffffffffffffffULL 
                               & (VL_GTS_IQQ(61, 0ULL, vlSelf->starting_position__DOT__top_dut__DOT__perpendicular_distance_dut__DOT__y_mul_temp)
                                   ? (- vlSelf->starting_position__DOT__top_dut__DOT__perpendicular_distance_dut__DOT__y_mul_temp)
                                   : vlSelf->starting_position__DOT__top_dut__DOT__perpendicular_distance_dut__DOT__y_mul_temp))),61);
    bufp->fullQData(oldp+214,(vlSelf->starting_position__DOT__top_dut__DOT__perpendicular_distance_dut__DOT__dot_temp),61);
    bufp->fullQData(oldp+216,((0x1fffffffffffffffULL 
                               & (VL_GTS_IQQ(61, 0ULL, vlSelf->starting_position__DOT__top_dut__DOT__perpendicular_distance_dut__DOT__dot_temp)
                                   ? (- vlSelf->starting_position__DOT__top_dut__DOT__perpendicular_distance_dut__DOT__dot_temp)
                                   : vlSelf->starting_position__DOT__top_dut__DOT__perpendicular_distance_dut__DOT__dot_temp))),61);
    bufp->fullQData(oldp+218,((0xffffffffffULL & VL_MULS_QQQ(40, 
                                                             (0xffffffffffULL 
                                                              & VL_EXTENDS_QI(40,20, vlSelf->starting_position__DOT__plane_x)), 
                                                             (0xffffffffffULL 
                                                              & VL_EXTENDS_QI(40,20, 
                                                                              (0xfffffU 
                                                                               & (VL_DIV_III(32, 
                                                                                VL_SHIFTL_III(32,32,32, (IData)(vlSelf->starting_position__DOT__screen_x), 9U), (IData)(0x77fU)) 
                                                                                - (IData)(0x100U)))))))),40);
    bufp->fullQData(oldp+220,((0xffffffffffULL & VL_MULS_QQQ(40, 
                                                             (0xffffffffffULL 
                                                              & VL_EXTENDS_QI(40,20, vlSelf->starting_position__DOT__plane_y)), 
                                                             (0xffffffffffULL 
                                                              & VL_EXTENDS_QI(40,20, 
                                                                              (0xfffffU 
                                                                               & (VL_DIV_III(32, 
                                                                                VL_SHIFTL_III(32,32,32, (IData)(vlSelf->starting_position__DOT__screen_x), 9U), (IData)(0x77fU)) 
                                                                                - (IData)(0x100U)))))))),40);
    bufp->fullIData(oldp+222,((0xfffffU & (VL_DIV_III(32, 
                                                      VL_SHIFTL_III(32,32,32, (IData)(vlSelf->starting_position__DOT__screen_x), 9U), (IData)(0x77fU)) 
                                           - (IData)(0x100U)))),20);
    bufp->fullBit(oldp+223,((0x800U == (IData)(vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_dirx_dut__DOT__data_count))));
    bufp->fullBit(oldp+224,((0U == (IData)(vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_dirx_dut__DOT__data_count))));
    bufp->fullSData(oldp+225,(vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_dirx_dut__DOT__data_count),12);
    bufp->fullBit(oldp+226,((0x400U <= (IData)(vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_dirx_dut__DOT__data_count))));
    bufp->fullBit(oldp+227,((0x400U >= (IData)(vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_dirx_dut__DOT__data_count))));
    bufp->fullBit(oldp+228,((0x7ffU <= (IData)(vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_dirx_dut__DOT__data_count))));
    bufp->fullBit(oldp+229,((1U >= (IData)(vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_dirx_dut__DOT__data_count))));
    bufp->fullBit(oldp+230,((2U <= (IData)(vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_dirx_dut__DOT__data_count))));
    bufp->fullBit(oldp+231,((2U >= (IData)(vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_dirx_dut__DOT__data_count))));
    bufp->fullBit(oldp+232,(vlSelf->clk_i));
    bufp->fullBit(oldp+233,(vlSelf->rst_n_i));
    bufp->fullBit(oldp+234,(vlSelf->forward_button_i));
    bufp->fullBit(oldp+235,(vlSelf->back_button_i));
    bufp->fullBit(oldp+236,(vlSelf->left_button_i));
    bufp->fullBit(oldp+237,(vlSelf->right_button_i));
    bufp->fullQData(oldp+238,(vlSelf->wall_top_o),61);
    bufp->fullQData(oldp+240,(vlSelf->wall_bottom_o),61);
    bufp->fullQData(oldp+242,(vlSelf->wall_height_o),61);
    bufp->fullIData(oldp+244,(vlSelf->screen_x_o),20);
    bufp->fullBit(oldp+245,(vlSelf->data_out_valid_o));
    bufp->fullQData(oldp+246,((0x1fffffffffffffffULL 
                               & ((0x1fffffffffffffffULL 
                                   & (VL_GTS_IQQ(61, 0ULL, vlSelf->starting_position__DOT__top_dut__DOT__perpendicular_distance_dut__DOT__dot_temp)
                                       ? (- vlSelf->starting_position__DOT__top_dut__DOT__perpendicular_distance_dut__DOT__dot_temp)
                                       : vlSelf->starting_position__DOT__top_dut__DOT__perpendicular_distance_dut__DOT__dot_temp)) 
                                  * vlSelf->starting_position__DOT__top_dut__DOT__hit_distance))),61);
    bufp->fullBit(oldp+248,((1U & (~ (IData)(vlSelf->rst_n_i)))));
}
