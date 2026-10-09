// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vstarting_position.h for the primary calling header

#include "Vstarting_position__pch.h"
#include "Vstarting_position__Syms.h"
#include "Vstarting_position___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vstarting_position___024root___dump_triggers__act(Vstarting_position___024root* vlSelf);
#endif  // VL_DEBUG

void Vstarting_position___024root___eval_triggers__act(Vstarting_position___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vstarting_position__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstarting_position___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, (((IData)(vlSelf->clk_i) 
                                      & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__clk_i__0))) 
                                     | ((~ (IData)(vlSelf->rst_n_i)) 
                                        & (IData)(vlSelf->__Vtrigprevexpr___TOP__rst_n_i__0))));
    vlSelf->__VactTriggered.set(1U, ((IData)(vlSelf->clk_i) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__clk_i__0))));
    vlSelf->__Vtrigprevexpr___TOP__clk_i__0 = vlSelf->clk_i;
    vlSelf->__Vtrigprevexpr___TOP__rst_n_i__0 = vlSelf->rst_n_i;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vstarting_position___024root___dump_triggers__act(vlSelf);
    }
#endif
}
