// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vstarting_position__pch.h"
#include "verilated_vcd_c.h"

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
    vlSymsp->__Vm_activity = true;
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
std::unique_ptr<VerilatedTraceConfig> Vstarting_position::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vstarting_position___024root__trace_decl_types(VerilatedVcd* tracep);

void Vstarting_position___024root__trace_init_top(Vstarting_position___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vstarting_position___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vstarting_position___024root*>(voidSelf);
    Vstarting_position__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    Vstarting_position___024root__trace_decl_types(tracep);
    Vstarting_position___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vstarting_position___024root__trace_register(Vstarting_position___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vstarting_position::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (tfp->isOpen()) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vstarting_position::trace()' shall not be called after 'VerilatedVcdC::open()'.");
    }
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addModel(this);
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vstarting_position___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
