// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vstarting_position__pch.h"

//============================================================
// Constructors

Vstarting_position::Vstarting_position(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vstarting_position__Syms(contextp(), _vcname__, this)}
    , clk_i{vlSymsp->TOP.clk_i}
    , rst_n_i{vlSymsp->TOP.rst_n_i}
    , forward_button_i{vlSymsp->TOP.forward_button_i}
    , back_button_i{vlSymsp->TOP.back_button_i}
    , left_button_i{vlSymsp->TOP.left_button_i}
    , right_button_i{vlSymsp->TOP.right_button_i}
    , data_out_valid_o{vlSymsp->TOP.data_out_valid_o}
    , screen_x_o{vlSymsp->TOP.screen_x_o}
    , wall_top_o{vlSymsp->TOP.wall_top_o}
    , wall_bottom_o{vlSymsp->TOP.wall_bottom_o}
    , wall_height_o{vlSymsp->TOP.wall_height_o}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vstarting_position::Vstarting_position(const char* _vcname__)
    : Vstarting_position(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vstarting_position::~Vstarting_position() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vstarting_position___024root___eval_debug_assertions(Vstarting_position___024root* vlSelf);
#endif  // VL_DEBUG
void Vstarting_position___024root___eval_static(Vstarting_position___024root* vlSelf);
void Vstarting_position___024root___eval_initial(Vstarting_position___024root* vlSelf);
void Vstarting_position___024root___eval_settle(Vstarting_position___024root* vlSelf);
void Vstarting_position___024root___eval(Vstarting_position___024root* vlSelf);

void Vstarting_position::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vstarting_position::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vstarting_position___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vstarting_position___024root___eval_static(&(vlSymsp->TOP));
        Vstarting_position___024root___eval_initial(&(vlSymsp->TOP));
        Vstarting_position___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vstarting_position___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vstarting_position::eventsPending() { return false; }

uint64_t Vstarting_position::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vstarting_position::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vstarting_position___024root___eval_final(Vstarting_position___024root* vlSelf);

VL_ATTR_COLD void Vstarting_position::final() {
    Vstarting_position___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vstarting_position::hierName() const { return vlSymsp->name(); }
const char* Vstarting_position::modelName() const { return "Vstarting_position"; }
unsigned Vstarting_position::threads() const { return 1; }
void Vstarting_position::prepareClone() const { contextp()->prepareClone(); }
void Vstarting_position::atClone() const {
    contextp()->threadPoolpOnClone();
}

//============================================================
// Trace configuration

VL_ATTR_COLD void Vstarting_position::trace(VerilatedVcdC* tfp, int levels, int options) {
    vl_fatal(__FILE__, __LINE__, __FILE__,"'Vstarting_position::trace()' called on model that was Verilated without --trace option");
}
