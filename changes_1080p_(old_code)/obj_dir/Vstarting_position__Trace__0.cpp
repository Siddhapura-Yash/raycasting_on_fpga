// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vstarting_position__Syms.h"


void Vstarting_position___024root__trace_chg_0_sub_0(Vstarting_position___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vstarting_position___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstarting_position___024root__trace_chg_0\n"); );
    // Init
    Vstarting_position___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vstarting_position___024root*>(voidSelf);
    Vstarting_position__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vstarting_position___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vstarting_position___024root__trace_chg_0_sub_0(Vstarting_position___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vstarting_position__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstarting_position___024root__trace_chg_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgQData(oldp+0,(vlSelf->starting_position__DOT__top_dut__DOT__hit_distance),41);
        bufp->chgIData(oldp+2,(vlSelf->starting_position__DOT__top_dut__DOT__ray_dir_x_dda),24);
        bufp->chgIData(oldp+3,(vlSelf->starting_position__DOT__top_dut__DOT__ray_dir_y_dda),24);
        bufp->chgIData(oldp+4,(vlSelf->starting_position__DOT__top_dut__DOT__dir_x_dda),20);
        bufp->chgIData(oldp+5,(vlSelf->starting_position__DOT__top_dut__DOT__dir_y_dda),20);
        bufp->chgBit(oldp+6,(vlSelf->starting_position__DOT__top_dut__DOT__data_out_valid_dda));
        bufp->chgBit(oldp+7,(vlSelf->starting_position__DOT__top_dut__DOT__dda_done));
        bufp->chgIData(oldp+8,(vlSelf->starting_position__DOT__top_dut__DOT__mapx),20);
        bufp->chgIData(oldp+9,(vlSelf->starting_position__DOT__top_dut__DOT__mapy),20);
        bufp->chgIData(oldp+10,(vlSelf->starting_position__DOT__top_dut__DOT__screen_x_dda),20);
        bufp->chgIData(oldp+11,(vlSelf->starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__map_x),20);
        bufp->chgIData(oldp+12,(vlSelf->starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__map_y),20);
        bufp->chgIData(oldp+13,(vlSelf->starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__abs_ray_x),20);
        bufp->chgIData(oldp+14,(vlSelf->starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__abs_ray_y),20);
        bufp->chgIData(oldp+15,(vlSelf->starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__next_x_boundary),20);
        bufp->chgIData(oldp+16,(vlSelf->starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__next_y_boundary),20);
        bufp->chgQData(oldp+17,(vlSelf->starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__delta_dis_y),41);
        bufp->chgQData(oldp+19,(vlSelf->starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__delta_dis_x),41);
        bufp->chgQData(oldp+21,(vlSelf->starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__side_x),41);
        bufp->chgQData(oldp+23,(vlSelf->starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__side_y),41);
        bufp->chgCData(oldp+25,(vlSelf->starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__state),4);
        bufp->chgBit(oldp+26,(vlSelf->starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__hit_side));
        bufp->chgIData(oldp+27,(vlSelf->starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__ray_dir_x_stage1),24);
        bufp->chgIData(oldp+28,(vlSelf->starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__ray_dir_y_stage1),24);
        bufp->chgIData(oldp+29,(vlSelf->starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__ray_dir_x_stage2),24);
        bufp->chgIData(oldp+30,(vlSelf->starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__ray_dir_y_stage2),24);
        bufp->chgIData(oldp+31,(vlSelf->starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__ray_dir_x_stage3),24);
        bufp->chgIData(oldp+32,(vlSelf->starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__ray_dir_y_stage3),24);
        bufp->chgIData(oldp+33,(vlSelf->starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__ray_dir_x_stage4),24);
        bufp->chgIData(oldp+34,(vlSelf->starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__ray_dir_y_stage4),24);
        bufp->chgIData(oldp+35,(vlSelf->starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__ray_dir_x_stage5),24);
        bufp->chgIData(oldp+36,(vlSelf->starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__ray_dir_y_stage5),24);
        bufp->chgIData(oldp+37,(vlSelf->starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__ray_dir_x_stage6),24);
        bufp->chgIData(oldp+38,(vlSelf->starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__ray_dir_y_stage6),24);
        bufp->chgIData(oldp+39,(vlSelf->starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__dir_x_o_stage1),20);
        bufp->chgIData(oldp+40,(vlSelf->starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__dir_y_o_stage1),20);
        bufp->chgIData(oldp+41,(vlSelf->starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__dir_x_o_stage2),20);
        bufp->chgIData(oldp+42,(vlSelf->starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__dir_y_o_stage2),20);
        bufp->chgIData(oldp+43,(vlSelf->starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__dir_x_o_stage3),20);
        bufp->chgIData(oldp+44,(vlSelf->starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__dir_y_o_stage3),20);
        bufp->chgIData(oldp+45,(vlSelf->starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__dir_x_o_stage4),20);
        bufp->chgIData(oldp+46,(vlSelf->starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__dir_y_o_stage4),20);
        bufp->chgIData(oldp+47,(vlSelf->starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__dir_x_o_stage5),20);
        bufp->chgIData(oldp+48,(vlSelf->starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__dir_y_o_stage5),20);
        bufp->chgIData(oldp+49,(vlSelf->starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__dir_x_o_stage6),20);
        bufp->chgIData(oldp+50,(vlSelf->starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__dir_y_o_stage6),20);
        bufp->chgIData(oldp+51,(vlSelf->starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__screen_x_o_stage1),20);
        bufp->chgIData(oldp+52,(vlSelf->starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__screen_x_o_stage2),20);
        bufp->chgIData(oldp+53,(vlSelf->starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__screen_x_o_stage3),20);
        bufp->chgIData(oldp+54,(vlSelf->starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__screen_x_o_stage4),20);
        bufp->chgIData(oldp+55,(vlSelf->starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__screen_x_o_stage5),20);
        bufp->chgIData(oldp+56,(vlSelf->starting_position__DOT__top_dut__DOT__dda_algo_dut__DOT__screen_x_o_stage6),20);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgIData(oldp+57,(vlSelf->starting_position__DOT__top_dut__DOT__screen_x_dut_data_out),20);
        bufp->chgBit(oldp+58,((0x800U == (IData)(vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_screen_x_dut__DOT__data_count))));
        bufp->chgBit(oldp+59,((0U == (IData)(vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_screen_x_dut__DOT__data_count))));
        bufp->chgIData(oldp+60,(vlSelf->starting_position__DOT__top_dut__DOT__dirx_dut_data_out),20);
        bufp->chgIData(oldp+61,(vlSelf->starting_position__DOT__top_dut__DOT__diry_dut_data_out),20);
        bufp->chgBit(oldp+62,((0x800U == (IData)(vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_diry_dut__DOT__data_count))));
        bufp->chgBit(oldp+63,((0U == (IData)(vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_diry_dut__DOT__data_count))));
        bufp->chgIData(oldp+64,(vlSelf->starting_position__DOT__top_dut__DOT__posx_dut_data_out),20);
        bufp->chgBit(oldp+65,((0x800U == (IData)(vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_posx_dut__DOT__data_count))));
        bufp->chgBit(oldp+66,((0U == (IData)(vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_posx_dut__DOT__data_count))));
        bufp->chgIData(oldp+67,(vlSelf->starting_position__DOT__top_dut__DOT__posy_dut_data_out),20);
        bufp->chgBit(oldp+68,((0x800U == (IData)(vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_posy_dut__DOT__data_count))));
        bufp->chgBit(oldp+69,((0U == (IData)(vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_posy_dut__DOT__data_count))));
        bufp->chgIData(oldp+70,(vlSelf->starting_position__DOT__top_dut__DOT__ray_dirx_dut_data_out),24);
        bufp->chgBit(oldp+71,((0x800U == (IData)(vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_ray_dirx_dut__DOT__data_count))));
        bufp->chgBit(oldp+72,((0U == (IData)(vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_ray_dirx_dut__DOT__data_count))));
        bufp->chgIData(oldp+73,(vlSelf->starting_position__DOT__top_dut__DOT__ray_diry_dut_data_out),24);
        bufp->chgBit(oldp+74,((0x800U == (IData)(vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_ray_diry_dut__DOT__data_count))));
        bufp->chgBit(oldp+75,((0U == (IData)(vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_ray_diry_dut__DOT__data_count))));
        bufp->chgIData(oldp+76,((VL_LTS_III(32, 0U, 
                                            VL_EXTENDS_II(32,24, vlSelf->starting_position__DOT__top_dut__DOT__ray_dirx_dut_data_out))
                                  ? 1U : 0xfffffU)),20);
        bufp->chgIData(oldp+77,((VL_LTS_III(32, 0U, 
                                            VL_EXTENDS_II(32,24, vlSelf->starting_position__DOT__top_dut__DOT__ray_diry_dut_data_out))
                                  ? 1U : 0xfffffU)),20);
        bufp->chgBit(oldp+78,(vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_dirx_dut__DOT__overflow));
        bufp->chgBit(oldp+79,(vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_dirx_dut__DOT__underflow));
        bufp->chgBit(oldp+80,(vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_dirx_dut__DOT__wr_ack));
        bufp->chgBit(oldp+81,(vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_dirx_dut__DOT__rd_valid));
        bufp->chgSData(oldp+82,(vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_dirx_dut__DOT__w_ptr),12);
        bufp->chgSData(oldp+83,(vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_dirx_dut__DOT__r_ptr),12);
        bufp->chgSData(oldp+84,((0x7ffU & (IData)(vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_dirx_dut__DOT__w_ptr))),11);
        bufp->chgSData(oldp+85,((0x7ffU & (IData)(vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_dirx_dut__DOT__r_ptr))),11);
        bufp->chgSData(oldp+86,(vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_diry_dut__DOT__data_count),12);
        bufp->chgBit(oldp+87,((0x400U <= (IData)(vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_diry_dut__DOT__data_count))));
        bufp->chgBit(oldp+88,((0x400U >= (IData)(vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_diry_dut__DOT__data_count))));
        bufp->chgBit(oldp+89,((0x7ffU <= (IData)(vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_diry_dut__DOT__data_count))));
        bufp->chgBit(oldp+90,((1U >= (IData)(vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_diry_dut__DOT__data_count))));
        bufp->chgBit(oldp+91,((2U <= (IData)(vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_diry_dut__DOT__data_count))));
        bufp->chgBit(oldp+92,((2U >= (IData)(vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_diry_dut__DOT__data_count))));
        bufp->chgBit(oldp+93,(vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_diry_dut__DOT__overflow));
        bufp->chgBit(oldp+94,(vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_diry_dut__DOT__underflow));
        bufp->chgBit(oldp+95,(vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_diry_dut__DOT__wr_ack));
        bufp->chgBit(oldp+96,(vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_diry_dut__DOT__rd_valid));
        bufp->chgSData(oldp+97,(vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_diry_dut__DOT__w_ptr),12);
        bufp->chgSData(oldp+98,(vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_diry_dut__DOT__r_ptr),12);
        bufp->chgSData(oldp+99,((0x7ffU & (IData)(vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_diry_dut__DOT__w_ptr))),11);
        bufp->chgSData(oldp+100,((0x7ffU & (IData)(vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_diry_dut__DOT__r_ptr))),11);
        bufp->chgSData(oldp+101,(vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_posx_dut__DOT__data_count),12);
        bufp->chgBit(oldp+102,((0x400U <= (IData)(vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_posx_dut__DOT__data_count))));
        bufp->chgBit(oldp+103,((0x400U >= (IData)(vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_posx_dut__DOT__data_count))));
        bufp->chgBit(oldp+104,((0x7ffU <= (IData)(vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_posx_dut__DOT__data_count))));
        bufp->chgBit(oldp+105,((1U >= (IData)(vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_posx_dut__DOT__data_count))));
        bufp->chgBit(oldp+106,((2U <= (IData)(vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_posx_dut__DOT__data_count))));
        bufp->chgBit(oldp+107,((2U >= (IData)(vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_posx_dut__DOT__data_count))));
        bufp->chgBit(oldp+108,(vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_posx_dut__DOT__overflow));
        bufp->chgBit(oldp+109,(vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_posx_dut__DOT__underflow));
        bufp->chgBit(oldp+110,(vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_posx_dut__DOT__wr_ack));
        bufp->chgBit(oldp+111,(vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_posx_dut__DOT__rd_valid));
        bufp->chgSData(oldp+112,(vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_posx_dut__DOT__w_ptr),12);
        bufp->chgSData(oldp+113,(vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_posx_dut__DOT__r_ptr),12);
        bufp->chgSData(oldp+114,((0x7ffU & (IData)(vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_posx_dut__DOT__w_ptr))),11);
        bufp->chgSData(oldp+115,((0x7ffU & (IData)(vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_posx_dut__DOT__r_ptr))),11);
        bufp->chgSData(oldp+116,(vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_posy_dut__DOT__data_count),12);
        bufp->chgBit(oldp+117,((0x400U <= (IData)(vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_posy_dut__DOT__data_count))));
        bufp->chgBit(oldp+118,((0x400U >= (IData)(vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_posy_dut__DOT__data_count))));
        bufp->chgBit(oldp+119,((0x7ffU <= (IData)(vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_posy_dut__DOT__data_count))));
        bufp->chgBit(oldp+120,((1U >= (IData)(vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_posy_dut__DOT__data_count))));
        bufp->chgBit(oldp+121,((2U <= (IData)(vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_posy_dut__DOT__data_count))));
        bufp->chgBit(oldp+122,((2U >= (IData)(vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_posy_dut__DOT__data_count))));
        bufp->chgBit(oldp+123,(vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_posy_dut__DOT__overflow));
        bufp->chgBit(oldp+124,(vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_posy_dut__DOT__underflow));
        bufp->chgBit(oldp+125,(vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_posy_dut__DOT__wr_ack));
        bufp->chgBit(oldp+126,(vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_posy_dut__DOT__rd_valid));
        bufp->chgSData(oldp+127,(vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_posy_dut__DOT__w_ptr),12);
        bufp->chgSData(oldp+128,(vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_posy_dut__DOT__r_ptr),12);
        bufp->chgSData(oldp+129,((0x7ffU & (IData)(vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_posy_dut__DOT__w_ptr))),11);
        bufp->chgSData(oldp+130,((0x7ffU & (IData)(vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_posy_dut__DOT__r_ptr))),11);
        bufp->chgSData(oldp+131,(vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_ray_dirx_dut__DOT__data_count),12);
        bufp->chgBit(oldp+132,((0x400U <= (IData)(vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_ray_dirx_dut__DOT__data_count))));
        bufp->chgBit(oldp+133,((0x400U >= (IData)(vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_ray_dirx_dut__DOT__data_count))));
        bufp->chgBit(oldp+134,((0x7ffU <= (IData)(vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_ray_dirx_dut__DOT__data_count))));
        bufp->chgBit(oldp+135,((1U >= (IData)(vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_ray_dirx_dut__DOT__data_count))));
        bufp->chgBit(oldp+136,((2U <= (IData)(vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_ray_dirx_dut__DOT__data_count))));
        bufp->chgBit(oldp+137,((2U >= (IData)(vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_ray_dirx_dut__DOT__data_count))));
        bufp->chgBit(oldp+138,(vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_ray_dirx_dut__DOT__overflow));
        bufp->chgBit(oldp+139,(vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_ray_dirx_dut__DOT__underflow));
        bufp->chgBit(oldp+140,(vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_ray_dirx_dut__DOT__wr_ack));
        bufp->chgBit(oldp+141,(vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_ray_dirx_dut__DOT__rd_valid));
        bufp->chgSData(oldp+142,(vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_ray_dirx_dut__DOT__w_ptr),12);
        bufp->chgSData(oldp+143,(vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_ray_dirx_dut__DOT__r_ptr),12);
        bufp->chgSData(oldp+144,((0x7ffU & (IData)(vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_ray_dirx_dut__DOT__w_ptr))),11);
        bufp->chgSData(oldp+145,((0x7ffU & (IData)(vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_ray_dirx_dut__DOT__r_ptr))),11);
        bufp->chgSData(oldp+146,(vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_ray_diry_dut__DOT__data_count),12);
        bufp->chgBit(oldp+147,((0x400U <= (IData)(vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_ray_diry_dut__DOT__data_count))));
        bufp->chgBit(oldp+148,((0x400U >= (IData)(vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_ray_diry_dut__DOT__data_count))));
        bufp->chgBit(oldp+149,((0x7ffU <= (IData)(vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_ray_diry_dut__DOT__data_count))));
        bufp->chgBit(oldp+150,((1U >= (IData)(vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_ray_diry_dut__DOT__data_count))));
        bufp->chgBit(oldp+151,((2U <= (IData)(vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_ray_diry_dut__DOT__data_count))));
        bufp->chgBit(oldp+152,((2U >= (IData)(vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_ray_diry_dut__DOT__data_count))));
        bufp->chgBit(oldp+153,(vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_ray_diry_dut__DOT__overflow));
        bufp->chgBit(oldp+154,(vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_ray_diry_dut__DOT__underflow));
        bufp->chgBit(oldp+155,(vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_ray_diry_dut__DOT__wr_ack));
        bufp->chgBit(oldp+156,(vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_ray_diry_dut__DOT__rd_valid));
        bufp->chgSData(oldp+157,(vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_ray_diry_dut__DOT__w_ptr),12);
        bufp->chgSData(oldp+158,(vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_ray_diry_dut__DOT__r_ptr),12);
        bufp->chgSData(oldp+159,((0x7ffU & (IData)(vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_ray_diry_dut__DOT__w_ptr))),11);
        bufp->chgSData(oldp+160,((0x7ffU & (IData)(vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_ray_diry_dut__DOT__r_ptr))),11);
        bufp->chgSData(oldp+161,(vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_screen_x_dut__DOT__data_count),12);
        bufp->chgBit(oldp+162,((0x400U <= (IData)(vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_screen_x_dut__DOT__data_count))));
        bufp->chgBit(oldp+163,((0x400U >= (IData)(vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_screen_x_dut__DOT__data_count))));
        bufp->chgBit(oldp+164,((0x7ffU <= (IData)(vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_screen_x_dut__DOT__data_count))));
        bufp->chgBit(oldp+165,((1U >= (IData)(vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_screen_x_dut__DOT__data_count))));
        bufp->chgBit(oldp+166,((2U <= (IData)(vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_screen_x_dut__DOT__data_count))));
        bufp->chgBit(oldp+167,((2U >= (IData)(vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_screen_x_dut__DOT__data_count))));
        bufp->chgBit(oldp+168,(vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_screen_x_dut__DOT__overflow));
        bufp->chgBit(oldp+169,(vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_screen_x_dut__DOT__underflow));
        bufp->chgBit(oldp+170,(vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_screen_x_dut__DOT__wr_ack));
        bufp->chgBit(oldp+171,(vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_screen_x_dut__DOT__rd_valid));
        bufp->chgSData(oldp+172,(vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_screen_x_dut__DOT__w_ptr),12);
        bufp->chgSData(oldp+173,(vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_screen_x_dut__DOT__r_ptr),12);
        bufp->chgSData(oldp+174,((0x7ffU & (IData)(vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_screen_x_dut__DOT__w_ptr))),11);
        bufp->chgSData(oldp+175,((0x7ffU & (IData)(vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_screen_x_dut__DOT__r_ptr))),11);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[3U])) {
        bufp->chgBit(oldp+176,(vlSelf->starting_position__DOT__data_valid));
        bufp->chgIData(oldp+177,(vlSelf->starting_position__DOT__dir_x),20);
        bufp->chgIData(oldp+178,(vlSelf->starting_position__DOT__dir_y),20);
        bufp->chgIData(oldp+179,(vlSelf->starting_position__DOT__pos_x),20);
        bufp->chgIData(oldp+180,(vlSelf->starting_position__DOT__pos_y),20);
        bufp->chgIData(oldp+181,(vlSelf->starting_position__DOT__plane_x),20);
        bufp->chgIData(oldp+182,(vlSelf->starting_position__DOT__plane_y),20);
        bufp->chgSData(oldp+183,(vlSelf->starting_position__DOT__screen_x),11);
        bufp->chgIData(oldp+184,((0xfffffU & VL_SHIFTRS_III(20,32,32, 
                                                            VL_MULS_III(32, (IData)(4U), 
                                                                        VL_EXTENDS_II(32,20, vlSelf->starting_position__DOT__dir_x)), 8U))),20);
        bufp->chgIData(oldp+185,((0xfffffU & VL_SHIFTRS_III(20,32,32, 
                                                            VL_MULS_III(32, (IData)(4U), 
                                                                        VL_EXTENDS_II(32,20, vlSelf->starting_position__DOT__dir_y)), 8U))),20);
        bufp->chgIData(oldp+186,((0xfffffU & VL_SHIFTRS_III(20,32,32, 
                                                            (VL_MULS_III(32, (IData)(0xffU), 
                                                                         VL_EXTENDS_II(32,20, vlSelf->starting_position__DOT__dir_x)) 
                                                             + 
                                                             VL_MULS_III(32, (IData)(0x16U), 
                                                                         VL_EXTENDS_II(32,20, vlSelf->starting_position__DOT__dir_y))), 8U))),20);
        bufp->chgIData(oldp+187,((0xfffffU & VL_SHIFTRS_III(20,32,32, 
                                                            (VL_MULS_III(32, (IData)(0x16U), 
                                                                         (- 
                                                                          VL_EXTENDS_II(32,20, vlSelf->starting_position__DOT__dir_x))) 
                                                             + 
                                                             VL_MULS_III(32, (IData)(0xffU), 
                                                                         VL_EXTENDS_II(32,20, vlSelf->starting_position__DOT__dir_y))), 8U))),20);
        bufp->chgIData(oldp+188,((0xfffffU & VL_SHIFTRS_III(20,32,32, 
                                                            (VL_MULS_III(32, (IData)(0xffU), 
                                                                         VL_EXTENDS_II(32,20, vlSelf->starting_position__DOT__plane_x)) 
                                                             + 
                                                             VL_MULS_III(32, (IData)(0x16U), 
                                                                         VL_EXTENDS_II(32,20, vlSelf->starting_position__DOT__plane_y))), 8U))),20);
        bufp->chgIData(oldp+189,((0xfffffU & VL_SHIFTRS_III(20,32,32, 
                                                            (VL_MULS_III(32, (IData)(0x16U), 
                                                                         (- 
                                                                          VL_EXTENDS_II(32,20, vlSelf->starting_position__DOT__plane_x))) 
                                                             + 
                                                             VL_MULS_III(32, (IData)(0xffU), 
                                                                         VL_EXTENDS_II(32,20, vlSelf->starting_position__DOT__plane_y))), 8U))),20);
        bufp->chgIData(oldp+190,((0xfffffU & VL_SHIFTRS_III(20,32,32, 
                                                            (VL_MULS_III(32, (IData)(0xffU), 
                                                                         VL_EXTENDS_II(32,20, vlSelf->starting_position__DOT__dir_x)) 
                                                             - 
                                                             VL_MULS_III(32, (IData)(0x16U), 
                                                                         VL_EXTENDS_II(32,20, vlSelf->starting_position__DOT__dir_y))), 8U))),20);
        bufp->chgIData(oldp+191,((0xfffffU & VL_SHIFTRS_III(20,32,32, 
                                                            (VL_MULS_III(32, (IData)(0x16U), 
                                                                         VL_EXTENDS_II(32,20, vlSelf->starting_position__DOT__dir_x)) 
                                                             + 
                                                             VL_MULS_III(32, (IData)(0xffU), 
                                                                         VL_EXTENDS_II(32,20, vlSelf->starting_position__DOT__dir_y))), 8U))),20);
        bufp->chgIData(oldp+192,((0xfffffU & VL_SHIFTRS_III(20,32,32, 
                                                            (VL_MULS_III(32, (IData)(0xffU), 
                                                                         VL_EXTENDS_II(32,20, vlSelf->starting_position__DOT__plane_x)) 
                                                             - 
                                                             VL_MULS_III(32, (IData)(0x16U), 
                                                                         VL_EXTENDS_II(32,20, vlSelf->starting_position__DOT__plane_y))), 8U))),20);
        bufp->chgIData(oldp+193,((0xfffffU & VL_SHIFTRS_III(20,32,32, 
                                                            (VL_MULS_III(32, (IData)(0x16U), 
                                                                         VL_EXTENDS_II(32,20, vlSelf->starting_position__DOT__plane_x)) 
                                                             + 
                                                             VL_MULS_III(32, (IData)(0xffU), 
                                                                         VL_EXTENDS_II(32,20, vlSelf->starting_position__DOT__plane_y))), 8U))),20);
        bufp->chgIData(oldp+194,(vlSelf->starting_position__DOT__screen_x),20);
        bufp->chgBit(oldp+195,(vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_read_enable));
        bufp->chgCData(oldp+196,(vlSelf->starting_position__DOT__top_dut__DOT__ren_state),3);
        bufp->chgBit(oldp+197,(vlSelf->starting_position__DOT__top_dut__DOT__dda_start));
        bufp->chgIData(oldp+198,((0xffffffU & ((IData)(
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
        bufp->chgIData(oldp+199,((0xffffffU & ((IData)(
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
        bufp->chgBit(oldp+200,(vlSelf->starting_position__DOT__top_dut__DOT__dda_busy));
        bufp->chgQData(oldp+201,(vlSelf->starting_position__DOT__top_dut__DOT__perpendicular_distance_dut__DOT__perp_result),61);
        bufp->chgQData(oldp+203,(vlSelf->starting_position__DOT__top_dut__DOT__perpendicular_distance_dut__DOT__x_mul_temp),61);
        bufp->chgQData(oldp+205,(vlSelf->starting_position__DOT__top_dut__DOT__perpendicular_distance_dut__DOT__y_mul_temp),61);
        bufp->chgQData(oldp+207,((0x1fffffffffffffffULL 
                                  & (VL_MULS_QQQ(61, 
                                                 (0x1fffffffffffffffULL 
                                                  & VL_EXTENDS_QI(61,20, vlSelf->starting_position__DOT__dir_x)), 
                                                 (0x1fffffffffffffffULL 
                                                  & VL_EXTENDS_QI(61,20, vlSelf->starting_position__DOT__dir_x))) 
                                     + VL_MULS_QQQ(61, 
                                                   (0x1fffffffffffffffULL 
                                                    & VL_EXTENDS_QI(61,20, vlSelf->starting_position__DOT__dir_y)), 
                                                   (0x1fffffffffffffffULL 
                                                    & VL_EXTENDS_QI(61,20, vlSelf->starting_position__DOT__dir_y)))))),61);
        bufp->chgQData(oldp+209,((0x1fffffffffffffffULL 
                                  & (VL_GTS_IQQ(61, 0ULL, vlSelf->starting_position__DOT__top_dut__DOT__perpendicular_distance_dut__DOT__x_mul_temp)
                                      ? (- vlSelf->starting_position__DOT__top_dut__DOT__perpendicular_distance_dut__DOT__x_mul_temp)
                                      : vlSelf->starting_position__DOT__top_dut__DOT__perpendicular_distance_dut__DOT__x_mul_temp))),61);
        bufp->chgQData(oldp+211,((0x1fffffffffffffffULL 
                                  & (VL_GTS_IQQ(61, 0ULL, vlSelf->starting_position__DOT__top_dut__DOT__perpendicular_distance_dut__DOT__y_mul_temp)
                                      ? (- vlSelf->starting_position__DOT__top_dut__DOT__perpendicular_distance_dut__DOT__y_mul_temp)
                                      : vlSelf->starting_position__DOT__top_dut__DOT__perpendicular_distance_dut__DOT__y_mul_temp))),61);
        bufp->chgQData(oldp+213,(vlSelf->starting_position__DOT__top_dut__DOT__perpendicular_distance_dut__DOT__dot_temp),61);
        bufp->chgQData(oldp+215,((0x1fffffffffffffffULL 
                                  & (VL_GTS_IQQ(61, 0ULL, vlSelf->starting_position__DOT__top_dut__DOT__perpendicular_distance_dut__DOT__dot_temp)
                                      ? (- vlSelf->starting_position__DOT__top_dut__DOT__perpendicular_distance_dut__DOT__dot_temp)
                                      : vlSelf->starting_position__DOT__top_dut__DOT__perpendicular_distance_dut__DOT__dot_temp))),61);
        bufp->chgQData(oldp+217,((0xffffffffffULL & 
                                  VL_MULS_QQQ(40, (0xffffffffffULL 
                                                   & VL_EXTENDS_QI(40,20, vlSelf->starting_position__DOT__plane_x)), 
                                              (0xffffffffffULL 
                                               & VL_EXTENDS_QI(40,20, 
                                                               (0xfffffU 
                                                                & (VL_DIV_III(32, 
                                                                              VL_SHIFTL_III(32,32,32, (IData)(vlSelf->starting_position__DOT__screen_x), 9U), (IData)(0x77fU)) 
                                                                   - (IData)(0x100U)))))))),40);
        bufp->chgQData(oldp+219,((0xffffffffffULL & 
                                  VL_MULS_QQQ(40, (0xffffffffffULL 
                                                   & VL_EXTENDS_QI(40,20, vlSelf->starting_position__DOT__plane_y)), 
                                              (0xffffffffffULL 
                                               & VL_EXTENDS_QI(40,20, 
                                                               (0xfffffU 
                                                                & (VL_DIV_III(32, 
                                                                              VL_SHIFTL_III(32,32,32, (IData)(vlSelf->starting_position__DOT__screen_x), 9U), (IData)(0x77fU)) 
                                                                   - (IData)(0x100U)))))))),40);
        bufp->chgIData(oldp+221,((0xfffffU & (VL_DIV_III(32, 
                                                         VL_SHIFTL_III(32,32,32, (IData)(vlSelf->starting_position__DOT__screen_x), 9U), (IData)(0x77fU)) 
                                              - (IData)(0x100U)))),20);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[4U])) {
        bufp->chgBit(oldp+222,((0x800U == (IData)(vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_dirx_dut__DOT__data_count))));
        bufp->chgBit(oldp+223,((0U == (IData)(vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_dirx_dut__DOT__data_count))));
        bufp->chgSData(oldp+224,(vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_dirx_dut__DOT__data_count),12);
        bufp->chgBit(oldp+225,((0x400U <= (IData)(vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_dirx_dut__DOT__data_count))));
        bufp->chgBit(oldp+226,((0x400U >= (IData)(vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_dirx_dut__DOT__data_count))));
        bufp->chgBit(oldp+227,((0x7ffU <= (IData)(vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_dirx_dut__DOT__data_count))));
        bufp->chgBit(oldp+228,((1U >= (IData)(vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_dirx_dut__DOT__data_count))));
        bufp->chgBit(oldp+229,((2U <= (IData)(vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_dirx_dut__DOT__data_count))));
        bufp->chgBit(oldp+230,((2U >= (IData)(vlSelf->starting_position__DOT__top_dut__DOT__sync_fifo_dirx_dut__DOT__data_count))));
    }
    bufp->chgBit(oldp+231,(vlSelf->clk_i));
    bufp->chgBit(oldp+232,(vlSelf->rst_n_i));
    bufp->chgBit(oldp+233,(vlSelf->forward_button_i));
    bufp->chgBit(oldp+234,(vlSelf->back_button_i));
    bufp->chgBit(oldp+235,(vlSelf->left_button_i));
    bufp->chgBit(oldp+236,(vlSelf->right_button_i));
    bufp->chgQData(oldp+237,(vlSelf->wall_top_o),61);
    bufp->chgQData(oldp+239,(vlSelf->wall_bottom_o),61);
    bufp->chgQData(oldp+241,(vlSelf->wall_height_o),61);
    bufp->chgIData(oldp+243,(vlSelf->screen_x_o),20);
    bufp->chgBit(oldp+244,(vlSelf->data_out_valid_o));
    bufp->chgQData(oldp+245,((0x1fffffffffffffffULL 
                              & ((0x1fffffffffffffffULL 
                                  & (VL_GTS_IQQ(61, 0ULL, vlSelf->starting_position__DOT__top_dut__DOT__perpendicular_distance_dut__DOT__dot_temp)
                                      ? (- vlSelf->starting_position__DOT__top_dut__DOT__perpendicular_distance_dut__DOT__dot_temp)
                                      : vlSelf->starting_position__DOT__top_dut__DOT__perpendicular_distance_dut__DOT__dot_temp)) 
                                 * vlSelf->starting_position__DOT__top_dut__DOT__hit_distance))),61);
    bufp->chgBit(oldp+247,((1U & (~ (IData)(vlSelf->rst_n_i)))));
}

void Vstarting_position___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstarting_position___024root__trace_cleanup\n"); );
    // Init
    Vstarting_position___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vstarting_position___024root*>(voidSelf);
    Vstarting_position__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[4U] = 0U;
}
