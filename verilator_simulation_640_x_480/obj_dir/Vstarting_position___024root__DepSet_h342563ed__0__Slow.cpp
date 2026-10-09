// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vstarting_position.h for the primary calling header

#include "Vstarting_position__pch.h"
#include "Vstarting_position__Syms.h"
#include "Vstarting_position___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vstarting_position___024root___dump_triggers__stl(Vstarting_position___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vstarting_position___024root___eval_triggers__stl(Vstarting_position___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vstarting_position__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstarting_position___024root___eval_triggers__stl\n"); );
    // Body
    vlSelf->__VstlTriggered.set(0U, (IData)(vlSelf->__VstlFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vstarting_position___024root___dump_triggers__stl(vlSelf);
    }
#endif
}
