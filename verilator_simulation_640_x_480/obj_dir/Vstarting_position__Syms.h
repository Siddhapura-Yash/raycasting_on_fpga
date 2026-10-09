// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VSTARTING_POSITION__SYMS_H_
#define VERILATED_VSTARTING_POSITION__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vstarting_position.h"

// INCLUDE MODULE CLASSES
#include "Vstarting_position___024root.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)Vstarting_position__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vstarting_position* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vstarting_position___024root   TOP;

    // CONSTRUCTORS
    Vstarting_position__Syms(VerilatedContext* contextp, const char* namep, Vstarting_position* modelp);
    ~Vstarting_position__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
