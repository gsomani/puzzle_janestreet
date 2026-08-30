// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vpuzzle.h for the primary calling header

#include "Vpuzzle.h"
#include "Vpuzzle__Syms.h"

//==========

void Vpuzzle::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vpuzzle::eval\n"); );
    Vpuzzle__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    Vpuzzle* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
#ifdef VL_DEBUG
    // Debug assertions
    _eval_debug_assertions();
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        vlSymsp->__Vm_activity = true;
        _eval(vlSymsp);
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = _change_request(vlSymsp);
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("puzzle.v", 69, "",
                "Verilated model didn't converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

void Vpuzzle::_eval_initial_loop(Vpuzzle__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    _eval_initial(vlSymsp);
    vlSymsp->__Vm_activity = true;
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        _eval_settle(vlSymsp);
        _eval(vlSymsp);
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = _change_request(vlSymsp);
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("puzzle.v", 69, "",
                "Verilated model didn't DC converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

VL_INLINE_OPT void Vpuzzle::_sequent__TOP__1(Vpuzzle__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpuzzle::_sequent__TOP__1\n"); );
    Vpuzzle* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->puzzle__DOT__Xdfrtp_2_40__DOT__base__DOT__buf_Q 
        = ((~ (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_40__DOT__base__DOT__RESET)) 
           & (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_40__DOT__base__DOT__D_delayed));
}

VL_INLINE_OPT void Vpuzzle::_sequent__TOP__2(Vpuzzle__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpuzzle::_sequent__TOP__2\n"); );
    Vpuzzle* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->puzzle__DOT__Xdfrtp_2_30__DOT__base__DOT__buf_Q 
        = ((~ (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_30__DOT__base__DOT__RESET)) 
           & (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_30__DOT__base__DOT__D_delayed));
}

VL_INLINE_OPT void Vpuzzle::_sequent__TOP__3(Vpuzzle__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpuzzle::_sequent__TOP__3\n"); );
    Vpuzzle* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->puzzle__DOT__Xdfrtp_2_41__DOT__base__DOT__buf_Q 
        = ((~ (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_41__DOT__base__DOT__RESET)) 
           & (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_41__DOT__base__DOT__D_delayed));
}

VL_INLINE_OPT void Vpuzzle::_sequent__TOP__4(Vpuzzle__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpuzzle::_sequent__TOP__4\n"); );
    Vpuzzle* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->puzzle__DOT__Xdfrtp_2_42__DOT__base__DOT__buf_Q 
        = ((~ (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_42__DOT__base__DOT__RESET)) 
           & (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_42__DOT__base__DOT__D_delayed));
}

VL_INLINE_OPT void Vpuzzle::_sequent__TOP__5(Vpuzzle__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpuzzle::_sequent__TOP__5\n"); );
    Vpuzzle* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->puzzle__DOT__Xdfrtp_2_31__DOT__base__DOT__buf_Q 
        = ((~ (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_31__DOT__base__DOT__RESET)) 
           & (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_31__DOT__base__DOT__D_delayed));
}

VL_INLINE_OPT void Vpuzzle::_sequent__TOP__6(Vpuzzle__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpuzzle::_sequent__TOP__6\n"); );
    Vpuzzle* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->puzzle__DOT__Xdfrtp_2_32__DOT__base__DOT__buf_Q 
        = ((~ (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_32__DOT__base__DOT__RESET)) 
           & (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_32__DOT__base__DOT__D_delayed));
}

VL_INLINE_OPT void Vpuzzle::_sequent__TOP__7(Vpuzzle__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpuzzle::_sequent__TOP__7\n"); );
    Vpuzzle* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->puzzle__DOT__Xdfrtp_2_33__DOT__base__DOT__buf_Q 
        = ((~ (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_33__DOT__base__DOT__RESET)) 
           & (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_33__DOT__base__DOT__D_delayed));
}

VL_INLINE_OPT void Vpuzzle::_sequent__TOP__8(Vpuzzle__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpuzzle::_sequent__TOP__8\n"); );
    Vpuzzle* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->puzzle__DOT__Xdfrtp_2_34__DOT__base__DOT__buf_Q 
        = ((~ (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_34__DOT__base__DOT__RESET)) 
           & (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_34__DOT__base__DOT__D_delayed));
}

VL_INLINE_OPT void Vpuzzle::_sequent__TOP__9(Vpuzzle__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpuzzle::_sequent__TOP__9\n"); );
    Vpuzzle* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->puzzle__DOT__Xdfrtp_2_35__DOT__base__DOT__buf_Q 
        = ((~ (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_35__DOT__base__DOT__RESET)) 
           & (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_35__DOT__base__DOT__D_delayed));
}

VL_INLINE_OPT void Vpuzzle::_sequent__TOP__10(Vpuzzle__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpuzzle::_sequent__TOP__10\n"); );
    Vpuzzle* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->puzzle__DOT__Xdfrtp_2_36__DOT__base__DOT__buf_Q 
        = ((~ (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_36__DOT__base__DOT__RESET)) 
           & (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_36__DOT__base__DOT__D_delayed));
}

VL_INLINE_OPT void Vpuzzle::_sequent__TOP__11(Vpuzzle__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpuzzle::_sequent__TOP__11\n"); );
    Vpuzzle* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->puzzle__DOT__Xdfrtp_2_37__DOT__base__DOT__buf_Q 
        = ((~ (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_37__DOT__base__DOT__RESET)) 
           & (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_37__DOT__base__DOT__D_delayed));
}

VL_INLINE_OPT void Vpuzzle::_sequent__TOP__12(Vpuzzle__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpuzzle::_sequent__TOP__12\n"); );
    Vpuzzle* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->puzzle__DOT__Xdfrtp_2_27__DOT__base__DOT__buf_Q 
        = ((~ (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_27__DOT__base__DOT__RESET)) 
           & (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_27__DOT__base__DOT__D_delayed));
}

VL_INLINE_OPT void Vpuzzle::_sequent__TOP__13(Vpuzzle__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpuzzle::_sequent__TOP__13\n"); );
    Vpuzzle* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->puzzle__DOT__Xdfrtp_2_38__DOT__base__DOT__buf_Q 
        = ((~ (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_38__DOT__base__DOT__RESET)) 
           & (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_38__DOT__base__DOT__D_delayed));
}

VL_INLINE_OPT void Vpuzzle::_sequent__TOP__14(Vpuzzle__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpuzzle::_sequent__TOP__14\n"); );
    Vpuzzle* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->puzzle__DOT__Xdfrtp_2_39__DOT__base__DOT__buf_Q 
        = ((~ (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_39__DOT__base__DOT__RESET)) 
           & (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_39__DOT__base__DOT__D_delayed));
}

VL_INLINE_OPT void Vpuzzle::_sequent__TOP__15(Vpuzzle__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpuzzle::_sequent__TOP__15\n"); );
    Vpuzzle* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->puzzle__DOT__Xdfrtp_2_29__DOT__base__DOT__buf_Q 
        = ((~ (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_29__DOT__base__DOT__RESET)) 
           & (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_29__DOT__base__DOT__D_delayed));
}

VL_INLINE_OPT void Vpuzzle::_sequent__TOP__16(Vpuzzle__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpuzzle::_sequent__TOP__16\n"); );
    Vpuzzle* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->puzzle__DOT__Xdfrtp_2_28__DOT__base__DOT__buf_Q 
        = ((~ (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_28__DOT__base__DOT__RESET)) 
           & (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_28__DOT__base__DOT__D_delayed));
}

VL_INLINE_OPT void Vpuzzle::_sequent__TOP__17(Vpuzzle__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpuzzle::_sequent__TOP__17\n"); );
    Vpuzzle* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->puzzle__DOT__Xdfstp_2_0__DOT__base__DOT__buf_Q 
        = ((IData)(vlTOPp->puzzle__DOT__Xdfstp_2_0__DOT__base__DOT__SET) 
           | (IData)(vlTOPp->puzzle__DOT__Xdfstp_2_0__DOT__base__DOT__D_delayed));
}

VL_INLINE_OPT void Vpuzzle::_sequent__TOP__18(Vpuzzle__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpuzzle::_sequent__TOP__18\n"); );
    Vpuzzle* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->puzzle__DOT__Xdfstp_2_2__DOT__base__DOT__buf_Q 
        = ((IData)(vlTOPp->puzzle__DOT__Xdfstp_2_2__DOT__base__DOT__SET) 
           | (IData)(vlTOPp->puzzle__DOT__Xdfstp_2_2__DOT__base__DOT__D_delayed));
}

VL_INLINE_OPT void Vpuzzle::_sequent__TOP__19(Vpuzzle__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpuzzle::_sequent__TOP__19\n"); );
    Vpuzzle* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->puzzle__DOT__Xdfstp_2_3__DOT__base__DOT__buf_Q 
        = ((IData)(vlTOPp->puzzle__DOT__Xdfstp_2_3__DOT__base__DOT__SET) 
           | (IData)(vlTOPp->puzzle__DOT__Xdfstp_2_3__DOT__base__DOT__D_delayed));
}

VL_INLINE_OPT void Vpuzzle::_sequent__TOP__20(Vpuzzle__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpuzzle::_sequent__TOP__20\n"); );
    Vpuzzle* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->puzzle__DOT__Xdfrtp_2_49__DOT__base__DOT__buf_Q 
        = ((~ (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_49__DOT__base__DOT__RESET)) 
           & (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_49__DOT__base__DOT__D_delayed));
}

VL_INLINE_OPT void Vpuzzle::_sequent__TOP__21(Vpuzzle__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpuzzle::_sequent__TOP__21\n"); );
    Vpuzzle* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->puzzle__DOT__Xdfrtp_2_80__DOT__base__DOT__buf_Q 
        = ((~ (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_80__DOT__base__DOT__RESET)) 
           & (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_80__DOT__base__DOT__D_delayed));
}

VL_INLINE_OPT void Vpuzzle::_sequent__TOP__22(Vpuzzle__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpuzzle::_sequent__TOP__22\n"); );
    Vpuzzle* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->puzzle__DOT__Xdfrtp_2_70__DOT__base__DOT__buf_Q 
        = ((~ (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_70__DOT__base__DOT__RESET)) 
           & (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_70__DOT__base__DOT__D_delayed));
}

VL_INLINE_OPT void Vpuzzle::_sequent__TOP__23(Vpuzzle__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpuzzle::_sequent__TOP__23\n"); );
    Vpuzzle* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->puzzle__DOT__Xdfrtp_2_60__DOT__base__DOT__buf_Q 
        = ((~ (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_60__DOT__base__DOT__RESET)) 
           & (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_60__DOT__base__DOT__D_delayed));
}

VL_INLINE_OPT void Vpuzzle::_sequent__TOP__24(Vpuzzle__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpuzzle::_sequent__TOP__24\n"); );
    Vpuzzle* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->puzzle__DOT__Xdfrtp_2_71__DOT__base__DOT__buf_Q 
        = ((~ (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_71__DOT__base__DOT__RESET)) 
           & (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_71__DOT__base__DOT__D_delayed));
}

VL_INLINE_OPT void Vpuzzle::_sequent__TOP__25(Vpuzzle__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpuzzle::_sequent__TOP__25\n"); );
    Vpuzzle* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->puzzle__DOT__Xdfrtp_2_61__DOT__base__DOT__buf_Q 
        = ((~ (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_61__DOT__base__DOT__RESET)) 
           & (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_61__DOT__base__DOT__D_delayed));
}

VL_INLINE_OPT void Vpuzzle::_sequent__TOP__26(Vpuzzle__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpuzzle::_sequent__TOP__26\n"); );
    Vpuzzle* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->puzzle__DOT__Xdfrtp_2_72__DOT__base__DOT__buf_Q 
        = ((~ (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_72__DOT__base__DOT__RESET)) 
           & (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_72__DOT__base__DOT__D_delayed));
}

VL_INLINE_OPT void Vpuzzle::_sequent__TOP__27(Vpuzzle__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpuzzle::_sequent__TOP__27\n"); );
    Vpuzzle* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->puzzle__DOT__Xdfrtp_2_62__DOT__base__DOT__buf_Q 
        = ((~ (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_62__DOT__base__DOT__RESET)) 
           & (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_62__DOT__base__DOT__D_delayed));
}

VL_INLINE_OPT void Vpuzzle::_sequent__TOP__28(Vpuzzle__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpuzzle::_sequent__TOP__28\n"); );
    Vpuzzle* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->puzzle__DOT__Xdfrtp_2_52__DOT__base__DOT__buf_Q 
        = ((~ (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_52__DOT__base__DOT__RESET)) 
           & (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_52__DOT__base__DOT__D_delayed));
}

VL_INLINE_OPT void Vpuzzle::_sequent__TOP__29(Vpuzzle__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpuzzle::_sequent__TOP__29\n"); );
    Vpuzzle* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->puzzle__DOT__Xdfrtp_2_63__DOT__base__DOT__buf_Q 
        = ((~ (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_63__DOT__base__DOT__RESET)) 
           & (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_63__DOT__base__DOT__D_delayed));
}

VL_INLINE_OPT void Vpuzzle::_sequent__TOP__30(Vpuzzle__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpuzzle::_sequent__TOP__30\n"); );
    Vpuzzle* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->puzzle__DOT__Xdfrtp_2_75__DOT__base__DOT__buf_Q 
        = ((~ (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_75__DOT__base__DOT__RESET)) 
           & (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_75__DOT__base__DOT__D_delayed));
}

VL_INLINE_OPT void Vpuzzle::_sequent__TOP__31(Vpuzzle__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpuzzle::_sequent__TOP__31\n"); );
    Vpuzzle* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->puzzle__DOT__Xdfrtp_2_64__DOT__base__DOT__buf_Q 
        = ((~ (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_64__DOT__base__DOT__RESET)) 
           & (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_64__DOT__base__DOT__D_delayed));
}

VL_INLINE_OPT void Vpuzzle::_sequent__TOP__32(Vpuzzle__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpuzzle::_sequent__TOP__32\n"); );
    Vpuzzle* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->puzzle__DOT__Xdfrtp_2_53__DOT__base__DOT__buf_Q 
        = ((~ (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_53__DOT__base__DOT__RESET)) 
           & (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_53__DOT__base__DOT__D_delayed));
}

VL_INLINE_OPT void Vpuzzle::_sequent__TOP__33(Vpuzzle__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpuzzle::_sequent__TOP__33\n"); );
    Vpuzzle* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->puzzle__DOT__Xdfrtp_2_10__DOT__base__DOT__buf_Q 
        = ((~ (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_10__DOT__base__DOT__RESET)) 
           & (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_10__DOT__base__DOT__D_delayed));
}

VL_INLINE_OPT void Vpuzzle::_sequent__TOP__34(Vpuzzle__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpuzzle::_sequent__TOP__34\n"); );
    Vpuzzle* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->puzzle__DOT__Xdfrtp_2_65__DOT__base__DOT__buf_Q 
        = ((~ (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_65__DOT__base__DOT__RESET)) 
           & (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_65__DOT__base__DOT__D_delayed));
}

VL_INLINE_OPT void Vpuzzle::_sequent__TOP__35(Vpuzzle__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpuzzle::_sequent__TOP__35\n"); );
    Vpuzzle* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->puzzle__DOT__Xdfrtp_2_76__DOT__base__DOT__buf_Q 
        = ((~ (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_76__DOT__base__DOT__RESET)) 
           & (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_76__DOT__base__DOT__D_delayed));
}

VL_INLINE_OPT void Vpuzzle::_sequent__TOP__36(Vpuzzle__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpuzzle::_sequent__TOP__36\n"); );
    Vpuzzle* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->puzzle__DOT__Xdfrtp_2_54__DOT__base__DOT__buf_Q 
        = ((~ (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_54__DOT__base__DOT__RESET)) 
           & (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_54__DOT__base__DOT__D_delayed));
}

VL_INLINE_OPT void Vpuzzle::_sequent__TOP__37(Vpuzzle__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpuzzle::_sequent__TOP__37\n"); );
    Vpuzzle* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->puzzle__DOT__Xdfrtp_2_11__DOT__base__DOT__buf_Q 
        = ((~ (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_11__DOT__base__DOT__RESET)) 
           & (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_11__DOT__base__DOT__D_delayed));
}

VL_INLINE_OPT void Vpuzzle::_sequent__TOP__38(Vpuzzle__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpuzzle::_sequent__TOP__38\n"); );
    Vpuzzle* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->puzzle__DOT__Xdfrtp_2_66__DOT__base__DOT__buf_Q 
        = ((~ (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_66__DOT__base__DOT__RESET)) 
           & (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_66__DOT__base__DOT__D_delayed));
}

VL_INLINE_OPT void Vpuzzle::_sequent__TOP__39(Vpuzzle__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpuzzle::_sequent__TOP__39\n"); );
    Vpuzzle* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->puzzle__DOT__Xdfrtp_2_77__DOT__base__DOT__buf_Q 
        = ((~ (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_77__DOT__base__DOT__RESET)) 
           & (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_77__DOT__base__DOT__D_delayed));
}

VL_INLINE_OPT void Vpuzzle::_sequent__TOP__40(Vpuzzle__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpuzzle::_sequent__TOP__40\n"); );
    Vpuzzle* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->puzzle__DOT__Xdfrtp_2_55__DOT__base__DOT__buf_Q 
        = ((~ (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_55__DOT__base__DOT__RESET)) 
           & (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_55__DOT__base__DOT__D_delayed));
}

VL_INLINE_OPT void Vpuzzle::_sequent__TOP__41(Vpuzzle__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpuzzle::_sequent__TOP__41\n"); );
    Vpuzzle* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->puzzle__DOT__Xdfrtp_2_12__DOT__base__DOT__buf_Q 
        = ((~ (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_12__DOT__base__DOT__RESET)) 
           & (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_12__DOT__base__DOT__D_delayed));
}

VL_INLINE_OPT void Vpuzzle::_sequent__TOP__42(Vpuzzle__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpuzzle::_sequent__TOP__42\n"); );
    Vpuzzle* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->puzzle__DOT__Xdfrtp_2_67__DOT__base__DOT__buf_Q 
        = ((~ (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_67__DOT__base__DOT__RESET)) 
           & (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_67__DOT__base__DOT__D_delayed));
}

VL_INLINE_OPT void Vpuzzle::_sequent__TOP__43(Vpuzzle__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpuzzle::_sequent__TOP__43\n"); );
    Vpuzzle* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->puzzle__DOT__Xdfrtp_2_56__DOT__base__DOT__buf_Q 
        = ((~ (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_56__DOT__base__DOT__RESET)) 
           & (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_56__DOT__base__DOT__D_delayed));
}

VL_INLINE_OPT void Vpuzzle::_sequent__TOP__44(Vpuzzle__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpuzzle::_sequent__TOP__44\n"); );
    Vpuzzle* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->puzzle__DOT__Xdfrtp_2_78__DOT__base__DOT__buf_Q 
        = ((~ (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_78__DOT__base__DOT__RESET)) 
           & (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_78__DOT__base__DOT__D_delayed));
}

VL_INLINE_OPT void Vpuzzle::_sequent__TOP__45(Vpuzzle__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpuzzle::_sequent__TOP__45\n"); );
    Vpuzzle* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->puzzle__DOT__Xdfrtp_2_13__DOT__base__DOT__buf_Q 
        = ((~ (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_13__DOT__base__DOT__RESET)) 
           & (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_13__DOT__base__DOT__D_delayed));
}

VL_INLINE_OPT void Vpuzzle::_sequent__TOP__46(Vpuzzle__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpuzzle::_sequent__TOP__46\n"); );
    Vpuzzle* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->puzzle__DOT__Xdfrtp_2_68__DOT__base__DOT__buf_Q 
        = ((~ (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_68__DOT__base__DOT__RESET)) 
           & (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_68__DOT__base__DOT__D_delayed));
}

VL_INLINE_OPT void Vpuzzle::_sequent__TOP__47(Vpuzzle__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpuzzle::_sequent__TOP__47\n"); );
    Vpuzzle* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->puzzle__DOT__Xdfrtp_2_57__DOT__base__DOT__buf_Q 
        = ((~ (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_57__DOT__base__DOT__RESET)) 
           & (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_57__DOT__base__DOT__D_delayed));
}

VL_INLINE_OPT void Vpuzzle::_sequent__TOP__48(Vpuzzle__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpuzzle::_sequent__TOP__48\n"); );
    Vpuzzle* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->puzzle__DOT__Xdfrtp_2_79__DOT__base__DOT__buf_Q 
        = ((~ (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_79__DOT__base__DOT__RESET)) 
           & (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_79__DOT__base__DOT__D_delayed));
}

VL_INLINE_OPT void Vpuzzle::_sequent__TOP__49(Vpuzzle__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpuzzle::_sequent__TOP__49\n"); );
    Vpuzzle* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->puzzle__DOT__Xdfrtp_2_14__DOT__base__DOT__buf_Q 
        = ((~ (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_14__DOT__base__DOT__RESET)) 
           & (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_14__DOT__base__DOT__D_delayed));
}

VL_INLINE_OPT void Vpuzzle::_sequent__TOP__50(Vpuzzle__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpuzzle::_sequent__TOP__50\n"); );
    Vpuzzle* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->puzzle__DOT__Xdfrtp_2_58__DOT__base__DOT__buf_Q 
        = ((~ (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_58__DOT__base__DOT__RESET)) 
           & (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_58__DOT__base__DOT__D_delayed));
}

VL_INLINE_OPT void Vpuzzle::_sequent__TOP__51(Vpuzzle__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpuzzle::_sequent__TOP__51\n"); );
    Vpuzzle* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->puzzle__DOT__Xdfrtp_2_69__DOT__base__DOT__buf_Q 
        = ((~ (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_69__DOT__base__DOT__RESET)) 
           & (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_69__DOT__base__DOT__D_delayed));
}

VL_INLINE_OPT void Vpuzzle::_sequent__TOP__52(Vpuzzle__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpuzzle::_sequent__TOP__52\n"); );
    Vpuzzle* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->puzzle__DOT__Xdfrtp_2_59__DOT__base__DOT__buf_Q 
        = ((~ (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_59__DOT__base__DOT__RESET)) 
           & (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_59__DOT__base__DOT__D_delayed));
}

VL_INLINE_OPT void Vpuzzle::_sequent__TOP__53(Vpuzzle__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpuzzle::_sequent__TOP__53\n"); );
    Vpuzzle* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->puzzle__DOT__Xdfrtp_2_0__DOT__base__DOT__buf_Q 
        = ((~ (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_0__DOT__base__DOT__RESET)) 
           & (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_0__DOT__base__DOT__D_delayed));
}

VL_INLINE_OPT void Vpuzzle::_sequent__TOP__54(Vpuzzle__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpuzzle::_sequent__TOP__54\n"); );
    Vpuzzle* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->puzzle__DOT__Xdfrtp_2_1__DOT__base__DOT__buf_Q 
        = ((~ (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_1__DOT__base__DOT__RESET)) 
           & (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_1__DOT__base__DOT__D_delayed));
}

VL_INLINE_OPT void Vpuzzle::_sequent__TOP__55(Vpuzzle__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpuzzle::_sequent__TOP__55\n"); );
    Vpuzzle* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->puzzle__DOT__Xdfrtp_2_2__DOT__base__DOT__buf_Q 
        = ((~ (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_2__DOT__base__DOT__RESET)) 
           & (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_2__DOT__base__DOT__D_delayed));
}

VL_INLINE_OPT void Vpuzzle::_sequent__TOP__56(Vpuzzle__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpuzzle::_sequent__TOP__56\n"); );
    Vpuzzle* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->puzzle__DOT__Xdfrtp_2_3__DOT__base__DOT__buf_Q 
        = ((~ (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_3__DOT__base__DOT__RESET)) 
           & (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_3__DOT__base__DOT__D_delayed));
}

VL_INLINE_OPT void Vpuzzle::_sequent__TOP__57(Vpuzzle__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpuzzle::_sequent__TOP__57\n"); );
    Vpuzzle* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->puzzle__DOT__Xdfrtp_2_4__DOT__base__DOT__buf_Q 
        = ((~ (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_4__DOT__base__DOT__RESET)) 
           & (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_4__DOT__base__DOT__D_delayed));
}

VL_INLINE_OPT void Vpuzzle::_sequent__TOP__58(Vpuzzle__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpuzzle::_sequent__TOP__58\n"); );
    Vpuzzle* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->puzzle__DOT__Xdfrtp_2_5__DOT__base__DOT__buf_Q 
        = ((~ (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_5__DOT__base__DOT__RESET)) 
           & (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_5__DOT__base__DOT__D_delayed));
}

VL_INLINE_OPT void Vpuzzle::_sequent__TOP__59(Vpuzzle__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpuzzle::_sequent__TOP__59\n"); );
    Vpuzzle* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->puzzle__DOT__Xdfrtp_2_6__DOT__base__DOT__buf_Q 
        = ((~ (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_6__DOT__base__DOT__RESET)) 
           & (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_6__DOT__base__DOT__D_delayed));
}

VL_INLINE_OPT void Vpuzzle::_sequent__TOP__60(Vpuzzle__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpuzzle::_sequent__TOP__60\n"); );
    Vpuzzle* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->puzzle__DOT__Xdfrtp_2_7__DOT__base__DOT__buf_Q 
        = ((~ (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_7__DOT__base__DOT__RESET)) 
           & (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_7__DOT__base__DOT__D_delayed));
}

VL_INLINE_OPT void Vpuzzle::_sequent__TOP__61(Vpuzzle__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpuzzle::_sequent__TOP__61\n"); );
    Vpuzzle* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->puzzle__DOT__Xdfrtp_2_8__DOT__base__DOT__buf_Q 
        = ((~ (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_8__DOT__base__DOT__RESET)) 
           & (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_8__DOT__base__DOT__D_delayed));
}

VL_INLINE_OPT void Vpuzzle::_sequent__TOP__62(Vpuzzle__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpuzzle::_sequent__TOP__62\n"); );
    Vpuzzle* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->puzzle__DOT__Xdfrtp_2_9__DOT__base__DOT__buf_Q 
        = ((~ (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_9__DOT__base__DOT__RESET)) 
           & (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_9__DOT__base__DOT__D_delayed));
}

VL_INLINE_OPT void Vpuzzle::_sequent__TOP__63(Vpuzzle__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpuzzle::_sequent__TOP__63\n"); );
    Vpuzzle* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->puzzle__DOT__Xdfrtp_2_73__DOT__base__DOT__buf_Q 
        = ((~ (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_73__DOT__base__DOT__RESET)) 
           & (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_73__DOT__base__DOT__D_delayed));
}

VL_INLINE_OPT void Vpuzzle::_sequent__TOP__64(Vpuzzle__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpuzzle::_sequent__TOP__64\n"); );
    Vpuzzle* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->puzzle__DOT__Xdfrtp_2_74__DOT__base__DOT__buf_Q 
        = ((~ (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_74__DOT__base__DOT__RESET)) 
           & (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_74__DOT__base__DOT__D_delayed));
}

VL_INLINE_OPT void Vpuzzle::_sequent__TOP__65(Vpuzzle__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpuzzle::_sequent__TOP__65\n"); );
    Vpuzzle* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->puzzle__DOT__Xdfstp_2_1__DOT__base__DOT__buf_Q 
        = ((IData)(vlTOPp->puzzle__DOT__Xdfstp_2_1__DOT__base__DOT__SET) 
           | (IData)(vlTOPp->puzzle__DOT__Xdfstp_2_1__DOT__base__DOT__D_delayed));
}

VL_INLINE_OPT void Vpuzzle::_sequent__TOP__66(Vpuzzle__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpuzzle::_sequent__TOP__66\n"); );
    Vpuzzle* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->puzzle__DOT__Xdfrtp_2_51__DOT__base__DOT__buf_Q 
        = ((~ (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_51__DOT__base__DOT__RESET)) 
           & (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_51__DOT__base__DOT__D_delayed));
}

VL_INLINE_OPT void Vpuzzle::_sequent__TOP__67(Vpuzzle__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpuzzle::_sequent__TOP__67\n"); );
    Vpuzzle* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->puzzle__DOT__Xdfrtp_2_48__DOT__base__DOT__buf_Q 
        = ((~ (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_48__DOT__base__DOT__RESET)) 
           & (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_48__DOT__base__DOT__D_delayed));
}

VL_INLINE_OPT void Vpuzzle::_sequent__TOP__68(Vpuzzle__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpuzzle::_sequent__TOP__68\n"); );
    Vpuzzle* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->puzzle__DOT__Xdfrtp_2_50__DOT__base__DOT__buf_Q 
        = ((~ (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_50__DOT__base__DOT__RESET)) 
           & (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_50__DOT__base__DOT__D_delayed));
}

VL_INLINE_OPT void Vpuzzle::_sequent__TOP__69(Vpuzzle__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpuzzle::_sequent__TOP__69\n"); );
    Vpuzzle* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->puzzle__DOT__Xdfrtp_2_47__DOT__base__DOT__buf_Q 
        = ((~ (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_47__DOT__base__DOT__RESET)) 
           & (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_47__DOT__base__DOT__D_delayed));
}

VL_INLINE_OPT void Vpuzzle::_sequent__TOP__70(Vpuzzle__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpuzzle::_sequent__TOP__70\n"); );
    Vpuzzle* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->puzzle__DOT__Xdfrtp_2_83__DOT__base__DOT__buf_Q 
        = ((~ (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_83__DOT__base__DOT__RESET)) 
           & (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_83__DOT__base__DOT__D_delayed));
}

VL_INLINE_OPT void Vpuzzle::_sequent__TOP__71(Vpuzzle__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpuzzle::_sequent__TOP__71\n"); );
    Vpuzzle* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->puzzle__DOT__Xdfxtp_2_0__DOT__base__DOT__buf_Q 
        = vlTOPp->puzzle__DOT__Xdfxtp_2_0__DOT__base__DOT__D_delayed;
}

VL_INLINE_OPT void Vpuzzle::_sequent__TOP__72(Vpuzzle__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpuzzle::_sequent__TOP__72\n"); );
    Vpuzzle* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->puzzle__DOT__Xdfxtp_2_3__DOT__base__DOT__buf_Q 
        = vlTOPp->puzzle__DOT__Xdfxtp_2_3__DOT__base__DOT__D_delayed;
}

VL_INLINE_OPT void Vpuzzle::_sequent__TOP__73(Vpuzzle__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpuzzle::_sequent__TOP__73\n"); );
    Vpuzzle* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->puzzle__DOT__Xdfxtp_2_2__DOT__base__DOT__buf_Q 
        = vlTOPp->puzzle__DOT__Xdfxtp_2_2__DOT__base__DOT__D_delayed;
}

VL_INLINE_OPT void Vpuzzle::_sequent__TOP__74(Vpuzzle__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpuzzle::_sequent__TOP__74\n"); );
    Vpuzzle* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->puzzle__DOT__Xdfxtp_2_1__DOT__base__DOT__buf_Q 
        = vlTOPp->puzzle__DOT__Xdfxtp_2_1__DOT__base__DOT__D_delayed;
}

VL_INLINE_OPT void Vpuzzle::_sequent__TOP__75(Vpuzzle__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpuzzle::_sequent__TOP__75\n"); );
    Vpuzzle* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->puzzle__DOT__Xdfrtp_2_82__DOT__base__DOT__buf_Q 
        = ((~ (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_82__DOT__base__DOT__RESET)) 
           & (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_82__DOT__base__DOT__D_delayed));
}

VL_INLINE_OPT void Vpuzzle::_sequent__TOP__76(Vpuzzle__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpuzzle::_sequent__TOP__76\n"); );
    Vpuzzle* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->puzzle__DOT__Xdfrtp_2_81__DOT__base__DOT__buf_Q 
        = ((~ (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_81__DOT__base__DOT__RESET)) 
           & (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_81__DOT__base__DOT__D_delayed));
    vlTOPp->success = vlTOPp->puzzle__DOT__Xdfrtp_2_81__DOT__base__DOT__buf_Q;
}

VL_INLINE_OPT void Vpuzzle::_sequent__TOP__77(Vpuzzle__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpuzzle::_sequent__TOP__77\n"); );
    Vpuzzle* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->puzzle__DOT__Xdfrtp_2_20__DOT__base__DOT__buf_Q 
        = ((~ (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_20__DOT__base__DOT__RESET)) 
           & (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_20__DOT__base__DOT__D_delayed));
}

VL_INLINE_OPT void Vpuzzle::_sequent__TOP__78(Vpuzzle__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpuzzle::_sequent__TOP__78\n"); );
    Vpuzzle* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->puzzle__DOT__Xdfrtp_2_25__DOT__base__DOT__buf_Q 
        = ((~ (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_25__DOT__base__DOT__RESET)) 
           & (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_25__DOT__base__DOT__D_delayed));
}

VL_INLINE_OPT void Vpuzzle::_sequent__TOP__79(Vpuzzle__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpuzzle::_sequent__TOP__79\n"); );
    Vpuzzle* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->puzzle__DOT__Xdfrtp_2_21__DOT__base__DOT__buf_Q 
        = ((~ (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_21__DOT__base__DOT__RESET)) 
           & (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_21__DOT__base__DOT__D_delayed));
}

VL_INLINE_OPT void Vpuzzle::_sequent__TOP__80(Vpuzzle__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpuzzle::_sequent__TOP__80\n"); );
    Vpuzzle* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->puzzle__DOT__Xdfrtp_2_22__DOT__base__DOT__buf_Q 
        = ((~ (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_22__DOT__base__DOT__RESET)) 
           & (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_22__DOT__base__DOT__D_delayed));
}

VL_INLINE_OPT void Vpuzzle::_sequent__TOP__81(Vpuzzle__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpuzzle::_sequent__TOP__81\n"); );
    Vpuzzle* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->puzzle__DOT__Xdfrtp_2_19__DOT__base__DOT__buf_Q 
        = ((~ (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_19__DOT__base__DOT__RESET)) 
           & (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_19__DOT__base__DOT__D_delayed));
}

VL_INLINE_OPT void Vpuzzle::_sequent__TOP__82(Vpuzzle__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpuzzle::_sequent__TOP__82\n"); );
    Vpuzzle* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->puzzle__DOT__Xdfrtp_2_24__DOT__base__DOT__buf_Q 
        = ((~ (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_24__DOT__base__DOT__RESET)) 
           & (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_24__DOT__base__DOT__D_delayed));
}

VL_INLINE_OPT void Vpuzzle::_sequent__TOP__83(Vpuzzle__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpuzzle::_sequent__TOP__83\n"); );
    Vpuzzle* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->puzzle__DOT__Xdfrtp_1_26__DOT__base__DOT__buf_Q 
        = ((~ (IData)(vlTOPp->puzzle__DOT__Xdfrtp_1_26__DOT__base__DOT__RESET)) 
           & (IData)(vlTOPp->puzzle__DOT__Xdfrtp_1_26__DOT__base__DOT__D_delayed));
}

VL_INLINE_OPT void Vpuzzle::_sequent__TOP__84(Vpuzzle__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpuzzle::_sequent__TOP__84\n"); );
    Vpuzzle* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->puzzle__DOT__Xdfrtp_2_23__DOT__base__DOT__buf_Q 
        = ((~ (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_23__DOT__base__DOT__RESET)) 
           & (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_23__DOT__base__DOT__D_delayed));
}

VL_INLINE_OPT void Vpuzzle::_sequent__TOP__85(Vpuzzle__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpuzzle::_sequent__TOP__85\n"); );
    Vpuzzle* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->puzzle__DOT__Xdfrtp_2_45__DOT__base__DOT__buf_Q 
        = ((~ (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_45__DOT__base__DOT__RESET)) 
           & (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_45__DOT__base__DOT__D_delayed));
}

VL_INLINE_OPT void Vpuzzle::_sequent__TOP__86(Vpuzzle__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpuzzle::_sequent__TOP__86\n"); );
    Vpuzzle* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->puzzle__DOT__Xdfrtp_2_46__DOT__base__DOT__buf_Q 
        = ((~ (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_46__DOT__base__DOT__RESET)) 
           & (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_46__DOT__base__DOT__D_delayed));
}

VL_INLINE_OPT void Vpuzzle::_sequent__TOP__87(Vpuzzle__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpuzzle::_sequent__TOP__87\n"); );
    Vpuzzle* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->puzzle__DOT__Xdfrtp_2_44__DOT__base__DOT__buf_Q 
        = ((~ (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_44__DOT__base__DOT__RESET)) 
           & (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_44__DOT__base__DOT__D_delayed));
}

VL_INLINE_OPT void Vpuzzle::_sequent__TOP__88(Vpuzzle__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpuzzle::_sequent__TOP__88\n"); );
    Vpuzzle* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->puzzle__DOT__Xdfrtp_2_43__DOT__base__DOT__buf_Q 
        = ((~ (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_43__DOT__base__DOT__RESET)) 
           & (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_43__DOT__base__DOT__D_delayed));
}

VL_INLINE_OPT void Vpuzzle::_sequent__TOP__89(Vpuzzle__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpuzzle::_sequent__TOP__89\n"); );
    Vpuzzle* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->puzzle__DOT__Xdfrtp_2_18__DOT__base__DOT__buf_Q 
        = ((~ (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_18__DOT__base__DOT__RESET)) 
           & (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_18__DOT__base__DOT__D_delayed));
}

VL_INLINE_OPT void Vpuzzle::_sequent__TOP__90(Vpuzzle__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpuzzle::_sequent__TOP__90\n"); );
    Vpuzzle* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->puzzle__DOT__Xdfrtp_2_15__DOT__base__DOT__buf_Q 
        = ((~ (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_15__DOT__base__DOT__RESET)) 
           & (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_15__DOT__base__DOT__D_delayed));
}

VL_INLINE_OPT void Vpuzzle::_sequent__TOP__91(Vpuzzle__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpuzzle::_sequent__TOP__91\n"); );
    Vpuzzle* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->puzzle__DOT__Xdfrtp_2_16__DOT__base__DOT__buf_Q 
        = ((~ (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_16__DOT__base__DOT__RESET)) 
           & (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_16__DOT__base__DOT__D_delayed));
}

VL_INLINE_OPT void Vpuzzle::_sequent__TOP__92(Vpuzzle__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpuzzle::_sequent__TOP__92\n"); );
    Vpuzzle* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->puzzle__DOT__Xdfrtp_2_17__DOT__base__DOT__buf_Q 
        = ((~ (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_17__DOT__base__DOT__RESET)) 
           & (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_17__DOT__base__DOT__D_delayed));
}

VL_INLINE_OPT void Vpuzzle::_multiclk__TOP__94(Vpuzzle__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpuzzle::_multiclk__TOP__94\n"); );
    Vpuzzle* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->puzzle__DOT__Xxor2_2_13__DOT__base__DOT__xor0_out_X 
        = ((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_51__DOT__base__DOT__buf_Q) 
           ^ (IData)(vlTOPp->puzzle__DOT__Xdfstp_2_3__DOT__base__DOT__buf_Q));
}

VL_INLINE_OPT void Vpuzzle::_multiclk__TOP__95(Vpuzzle__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpuzzle::_multiclk__TOP__95\n"); );
    Vpuzzle* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->puzzle__DOT__Xxor2_2_14__DOT__base__DOT__xor0_out_X 
        = ((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_48__DOT__base__DOT__buf_Q) 
           ^ (IData)(vlTOPp->puzzle__DOT__Xdfstp_2_1__DOT__base__DOT__buf_Q));
}

VL_INLINE_OPT void Vpuzzle::_multiclk__TOP__96(Vpuzzle__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpuzzle::_multiclk__TOP__96\n"); );
    Vpuzzle* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->puzzle__DOT__Xxor2_2_19__DOT__base__DOT__xor0_out_X 
        = ((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_51__DOT__base__DOT__buf_Q) 
           ^ (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_50__DOT__base__DOT__buf_Q));
}

VL_INLINE_OPT void Vpuzzle::_multiclk__TOP__97(Vpuzzle__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpuzzle::_multiclk__TOP__97\n"); );
    Vpuzzle* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->puzzle__DOT__Xxnor2_2_17__DOT__base__DOT__xnor0_out_Y 
        = (1U & (~ ((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_48__DOT__base__DOT__buf_Q) 
                    ^ (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_50__DOT__base__DOT__buf_Q))));
}

VL_INLINE_OPT void Vpuzzle::_combo__TOP__98(Vpuzzle__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpuzzle::_combo__TOP__98\n"); );
    Vpuzzle* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->puzzle__DOT__Xand2b_2_11__DOT__base__DOT__and0_out_X 
        = ((~ (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_47__DOT__base__DOT__buf_Q)) 
           & (IData)(vlTOPp->enable));
    vlTOPp->puzzle__DOT__Xnand2_2_13__DOT__base__DOT__nand0_out_Y 
        = (1U & (~ ((IData)(vlTOPp->puzzle__DOT__Xand2b_2_11__DOT__base__DOT__and0_out_X) 
                    & (IData)(vlTOPp->I))));
    vlTOPp->puzzle__DOT__Xnand2_2_14__DOT__base__DOT__nand0_out_Y 
        = (1U & (~ ((IData)(vlTOPp->puzzle__DOT__Xand2b_2_11__DOT__base__DOT__and0_out_X) 
                    & (IData)(vlTOPp->I))));
    vlTOPp->puzzle__DOT__Xnand2_2_15__DOT__base__DOT__nand0_out_Y 
        = (1U & (~ ((IData)(vlTOPp->puzzle__DOT__Xand2b_2_11__DOT__base__DOT__and0_out_X) 
                    & (IData)(vlTOPp->I))));
    vlTOPp->puzzle__DOT__Xand4_2_2__DOT__base__DOT__and0_out_X 
        = ((((((~ ((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_44__DOT__base__DOT__buf_Q) 
                   | (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_46__DOT__base__DOT__buf_Q))) 
               & (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_45__DOT__base__DOT__buf_Q)) 
              & (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_43__DOT__base__DOT__buf_Q)) 
             & (IData)(vlTOPp->puzzle__DOT__Xand2b_2_11__DOT__base__DOT__and0_out_X)) 
            & (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_15__DOT__base__DOT__buf_Q)) 
           & (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_16__DOT__base__DOT__buf_Q));
    vlTOPp->puzzle__DOT__Xand3_2_9__DOT__base__DOT__and0_out_X 
        = (((IData)(vlTOPp->puzzle__DOT__Xand2b_2_11__DOT__base__DOT__and0_out_X) 
            & (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_23__DOT__base__DOT__buf_Q)) 
           & (IData)(vlTOPp->I));
    vlTOPp->puzzle__DOT__Xand3_2_11__DOT__base__DOT__and0_out_X 
        = (((IData)(vlTOPp->puzzle__DOT__Xand3_2_9__DOT__base__DOT__and0_out_X) 
            & (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_24__DOT__base__DOT__buf_Q)) 
           & (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_25__DOT__base__DOT__buf_Q));
}

VL_INLINE_OPT void Vpuzzle::_multiclk__TOP__99(Vpuzzle__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpuzzle::_multiclk__TOP__99\n"); );
    Vpuzzle* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->puzzle__DOT__Xand4b_2_3__DOT__base__DOT__and0_out_X 
        = ((((~ (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_83__DOT__base__DOT__buf_Q)) 
             & (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_47__DOT__base__DOT__buf_Q)) 
            & ((((((~ (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_55__DOT__base__DOT__buf_Q)) 
                   & (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_58__DOT__base__DOT__buf_Q)) 
                  & ((~ (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_56__DOT__base__DOT__buf_Q)) 
                     & (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_59__DOT__base__DOT__buf_Q))) 
                 & ((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_52__DOT__base__DOT__buf_Q) 
                    & (~ (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_54__DOT__base__DOT__buf_Q)))) 
                & (((((~ (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_6__DOT__base__DOT__buf_Q)) 
                      & (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_11__DOT__base__DOT__buf_Q)) 
                     & ((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_13__DOT__base__DOT__buf_Q) 
                        & (~ (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_7__DOT__base__DOT__buf_Q)))) 
                    & ((~ (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_53__DOT__base__DOT__buf_Q)) 
                       & (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_10__DOT__base__DOT__buf_Q))) 
                   & ((~ (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_5__DOT__base__DOT__buf_Q)) 
                      & (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_12__DOT__base__DOT__buf_Q)))) 
               & (((((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_2__DOT__base__DOT__buf_Q) 
                     & (~ (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_1__DOT__base__DOT__buf_Q))) 
                    & ((~ (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_0__DOT__base__DOT__buf_Q)) 
                       & (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_14__DOT__base__DOT__buf_Q))) 
                   & ((~ (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_8__DOT__base__DOT__buf_Q)) 
                      & (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_4__DOT__base__DOT__buf_Q))) 
                  & ((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_3__DOT__base__DOT__buf_Q) 
                     & (~ (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_9__DOT__base__DOT__buf_Q)))))) 
           & ((((((~ (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_73__DOT__base__DOT__buf_Q)) 
                  & (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_68__DOT__base__DOT__buf_Q)) 
                 & ((~ (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_74__DOT__base__DOT__buf_Q)) 
                    & (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_70__DOT__base__DOT__buf_Q))) 
                & ((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_69__DOT__base__DOT__buf_Q) 
                   & (~ (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_72__DOT__base__DOT__buf_Q)))) 
               & (((((~ (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_80__DOT__base__DOT__buf_Q)) 
                     & (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_66__DOT__base__DOT__buf_Q)) 
                    & ((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_79__DOT__base__DOT__buf_Q) 
                       & (~ (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_65__DOT__base__DOT__buf_Q)))) 
                   & ((~ (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_75__DOT__base__DOT__buf_Q)) 
                      & (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_67__DOT__base__DOT__buf_Q))) 
                  & ((~ (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_78__DOT__base__DOT__buf_Q)) 
                     & (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_64__DOT__base__DOT__buf_Q)))) 
              & (((((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_61__DOT__base__DOT__buf_Q) 
                    & (~ (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_76__DOT__base__DOT__buf_Q))) 
                   & ((~ (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_60__DOT__base__DOT__buf_Q)) 
                      & (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_57__DOT__base__DOT__buf_Q))) 
                  & ((~ (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_71__DOT__base__DOT__buf_Q)) 
                     & (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_63__DOT__base__DOT__buf_Q))) 
                 & ((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_77__DOT__base__DOT__buf_Q) 
                    & (~ (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_62__DOT__base__DOT__buf_Q))))));
}

VL_INLINE_OPT void Vpuzzle::_multiclk__TOP__100(Vpuzzle__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpuzzle::_multiclk__TOP__100\n"); );
    Vpuzzle* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->puzzle__DOT__Xnand2_2_20__DOT__base__DOT__nand0_out_Y 
        = (1U & (~ ((IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_0__DOT__base__DOT__buf_Q) 
                    & (IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_3__DOT__base__DOT__buf_Q))));
    vlTOPp->puzzle__DOT__Xnor2_2_37__DOT__base__DOT__nor0_out_Y 
        = (1U & (~ ((IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_3__DOT__base__DOT__buf_Q) 
                    | (IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_0__DOT__base__DOT__buf_Q))));
    vlTOPp->puzzle__DOT__Xnand2b_2_8__DOT__base__DOT__or0_out_Y 
        = (1U & ((~ (IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_3__DOT__base__DOT__buf_Q)) 
                 | (IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_0__DOT__base__DOT__buf_Q)));
    vlTOPp->puzzle__DOT__Xnand2b_2_9__DOT__base__DOT__or0_out_Y 
        = (1U & ((~ (IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_0__DOT__base__DOT__buf_Q)) 
                 | (IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_3__DOT__base__DOT__buf_Q)));
    vlTOPp->puzzle__DOT__Xor2_2_8__DOT__base__DOT__or0_out_X 
        = ((IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_0__DOT__base__DOT__buf_Q) 
           | (IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_3__DOT__base__DOT__buf_Q));
}

VL_INLINE_OPT void Vpuzzle::_multiclk__TOP__101(Vpuzzle__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpuzzle::_multiclk__TOP__101\n"); );
    Vpuzzle* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->puzzle__DOT__Xnor2_2_36__DOT__base__DOT__nor0_out_Y 
        = (1U & (~ ((IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_2__DOT__base__DOT__buf_Q) 
                    | (~ (IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_0__DOT__base__DOT__buf_Q)))));
}

VL_INLINE_OPT void Vpuzzle::_multiclk__TOP__102(Vpuzzle__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpuzzle::_multiclk__TOP__102\n"); );
    Vpuzzle* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->puzzle__DOT__Xnand2b_2_10__DOT__base__DOT__or0_out_Y 
        = (1U & ((~ (IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_3__DOT__base__DOT__buf_Q)) 
                 | (IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_2__DOT__base__DOT__buf_Q)));
}

VL_INLINE_OPT void Vpuzzle::_multiclk__TOP__103(Vpuzzle__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpuzzle::_multiclk__TOP__103\n"); );
    Vpuzzle* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->puzzle__DOT__Xnand2b_2_11__DOT__base__DOT__or0_out_Y 
        = (1U & ((~ (IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_2__DOT__base__DOT__buf_Q)) 
                 | (IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_1__DOT__base__DOT__buf_Q)));
    vlTOPp->puzzle__DOT__Xnand2b_2_12__DOT__base__DOT__or0_out_Y 
        = (1U & ((~ (IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_1__DOT__base__DOT__buf_Q)) 
                 | (IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_2__DOT__base__DOT__buf_Q)));
    vlTOPp->puzzle__DOT__Xnand2_2_19__DOT__base__DOT__nand0_out_Y 
        = (1U & (~ ((IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_1__DOT__base__DOT__buf_Q) 
                    & (IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_2__DOT__base__DOT__buf_Q))));
    vlTOPp->puzzle__DOT__Xnand2_2_29__DOT__base__DOT__nand0_out_Y 
        = (1U & (~ ((IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_1__DOT__base__DOT__buf_Q) 
                    & (IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_2__DOT__base__DOT__buf_Q))));
    vlTOPp->puzzle__DOT__Xand2b_2_13__DOT__base__DOT__and0_out_X 
        = ((~ (IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_1__DOT__base__DOT__buf_Q)) 
           & (IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_2__DOT__base__DOT__buf_Q));
    vlTOPp->puzzle__DOT__Xnor2_2_38__DOT__base__DOT__nor0_out_Y 
        = (1U & (~ ((IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_2__DOT__base__DOT__buf_Q) 
                    | (IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_1__DOT__base__DOT__buf_Q))));
    vlTOPp->puzzle__DOT__Xand2_2_6__DOT__base__DOT__and0_out_X 
        = ((IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_2__DOT__base__DOT__buf_Q) 
           & (IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_1__DOT__base__DOT__buf_Q));
    vlTOPp->puzzle__DOT__Xnor2_2_22__DOT__base__DOT__nor0_out_Y 
        = (1U & (~ ((IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_2__DOT__base__DOT__buf_Q) 
                    | (IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_1__DOT__base__DOT__buf_Q))));
    vlTOPp->puzzle__DOT__Xand2b_2_17__DOT__base__DOT__and0_out_X 
        = ((~ (IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_2__DOT__base__DOT__buf_Q)) 
           & (IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_1__DOT__base__DOT__buf_Q));
    vlTOPp->puzzle__DOT__Xand2b_2_15__DOT__base__DOT__and0_out_X 
        = ((~ (IData)(vlTOPp->puzzle__DOT__Xnor2_2_38__DOT__base__DOT__nor0_out_Y)) 
           & (IData)(vlTOPp->puzzle__DOT__Xnand2_2_29__DOT__base__DOT__nand0_out_Y));
}

VL_INLINE_OPT void Vpuzzle::_multiclk__TOP__104(Vpuzzle__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpuzzle::_multiclk__TOP__104\n"); );
    Vpuzzle* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->puzzle__DOT__Xnand2_2_30__DOT__base__DOT__nand0_out_Y 
        = (1U & (~ ((IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_0__DOT__base__DOT__buf_Q) 
                    & (IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_1__DOT__base__DOT__buf_Q))));
    vlTOPp->puzzle__DOT__Xnor2_2_24__DOT__base__DOT__nor0_out_Y 
        = (1U & (~ ((IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_1__DOT__base__DOT__buf_Q) 
                    | (IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_0__DOT__base__DOT__buf_Q))));
}

VL_INLINE_OPT void Vpuzzle::_multiclk__TOP__105(Vpuzzle__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpuzzle::_multiclk__TOP__105\n"); );
    Vpuzzle* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->puzzle__DOT__Xo21ai_2_5__DOT__base__DOT__nand0_out_Y 
        = (1U & (~ ((IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_0__DOT__base__DOT__buf_Q) 
                    & ((IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_3__DOT__base__DOT__buf_Q) 
                       | (IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_1__DOT__base__DOT__buf_Q)))));
}

VL_INLINE_OPT void Vpuzzle::_multiclk__TOP__106(Vpuzzle__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpuzzle::_multiclk__TOP__106\n"); );
    Vpuzzle* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->puzzle__DOT__Xa21oi_2_9__DOT__base__DOT__nor0_out_Y 
        = (1U & (~ ((IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_0__DOT__base__DOT__buf_Q) 
                    | ((IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_2__DOT__base__DOT__buf_Q) 
                       & (IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_1__DOT__base__DOT__buf_Q)))));
    vlTOPp->puzzle__DOT__Xa21oi_2_8__DOT__base__DOT__nor0_out_Y 
        = (1U & (~ ((IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_0__DOT__base__DOT__buf_Q) 
                    | ((IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_2__DOT__base__DOT__buf_Q) 
                       & (IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_1__DOT__base__DOT__buf_Q)))));
}

VL_INLINE_OPT void Vpuzzle::_multiclk__TOP__107(Vpuzzle__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpuzzle::_multiclk__TOP__107\n"); );
    Vpuzzle* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->puzzle__DOT__Xa211oi_2_2__DOT__base__DOT__nor0_out_Y 
        = (1U & (~ ((((IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_2__DOT__base__DOT__buf_Q) 
                      & (IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_1__DOT__base__DOT__buf_Q)) 
                     | (IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_3__DOT__base__DOT__buf_Q)) 
                    | (IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_0__DOT__base__DOT__buf_Q))));
    vlTOPp->puzzle__DOT__Xand4b_2_0__DOT__base__DOT__and0_out_X 
        = ((((~ (IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_0__DOT__base__DOT__buf_Q)) 
             & (IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_3__DOT__base__DOT__buf_Q)) 
            & (IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_1__DOT__base__DOT__buf_Q)) 
           & (IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_2__DOT__base__DOT__buf_Q));
    vlTOPp->puzzle__DOT__Xnor4b_2_0__DOT__base__DOT__nor0_out_Y 
        = (1U & (~ ((((IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_2__DOT__base__DOT__buf_Q) 
                      | (IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_1__DOT__base__DOT__buf_Q)) 
                     | (IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_3__DOT__base__DOT__buf_Q)) 
                    | (~ (IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_0__DOT__base__DOT__buf_Q)))));
    vlTOPp->puzzle__DOT__Xxnor2_2_27__DOT__base__DOT__xnor0_out_Y 
        = (1U & (~ ((IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_0__DOT__base__DOT__buf_Q) 
                    ^ (((IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_3__DOT__base__DOT__buf_Q) 
                        & (IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_2__DOT__base__DOT__buf_Q)) 
                       & (IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_1__DOT__base__DOT__buf_Q)))));
    vlTOPp->puzzle__DOT__Xnand4_2_14__DOT__base__DOT__nand0_out_Y 
        = (1U & (~ ((((IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_2__DOT__base__DOT__buf_Q) 
                      & (IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_1__DOT__base__DOT__buf_Q)) 
                     & (IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_3__DOT__base__DOT__buf_Q)) 
                    & (IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_0__DOT__base__DOT__buf_Q))));
    vlTOPp->puzzle__DOT__Xa31oi_2_0__DOT__base__DOT__nor0_out_Y 
        = (1U & (~ ((IData)(vlTOPp->puzzle__DOT__Xa21oi_2_8__DOT__base__DOT__nor0_out_Y) 
                    | (((IData)(vlTOPp->puzzle__DOT__Xnand2b_2_8__DOT__base__DOT__or0_out_Y) 
                        & (IData)(vlTOPp->puzzle__DOT__Xand2_2_6__DOT__base__DOT__and0_out_X)) 
                       & (IData)(vlTOPp->puzzle__DOT__Xnand2b_2_9__DOT__base__DOT__or0_out_Y)))));
    vlTOPp->puzzle__DOT__Xand3b_2_0__DOT__base__DOT__and0_out_X 
        = (((IData)(vlTOPp->puzzle__DOT__Xa21oi_2_8__DOT__base__DOT__nor0_out_Y) 
            & (~ (IData)(vlTOPp->puzzle__DOT__Xnor2_2_22__DOT__base__DOT__nor0_out_Y))) 
           & (IData)(vlTOPp->puzzle__DOT__Xnand2b_2_10__DOT__base__DOT__or0_out_Y));
}

VL_INLINE_OPT void Vpuzzle::_multiclk__TOP__108(Vpuzzle__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpuzzle::_multiclk__TOP__108\n"); );
    Vpuzzle* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->puzzle__DOT__Xand2b_2_7__DOT__base__DOT__and0_out_X 
        = ((~ (IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_1__DOT__base__DOT__buf_Q)) 
           & (IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_3__DOT__base__DOT__buf_Q));
    vlTOPp->puzzle__DOT__Xand2b_2_12__DOT__base__DOT__and0_out_X 
        = ((~ (IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_3__DOT__base__DOT__buf_Q)) 
           & (IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_1__DOT__base__DOT__buf_Q));
    vlTOPp->puzzle__DOT__Xor2_2_9__DOT__base__DOT__or0_out_X 
        = ((IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_3__DOT__base__DOT__buf_Q) 
           | (IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_1__DOT__base__DOT__buf_Q));
}

VL_INLINE_OPT void Vpuzzle::_multiclk__TOP__109(Vpuzzle__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpuzzle::_multiclk__TOP__109\n"); );
    Vpuzzle* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->puzzle__DOT__Xand3_2_15__DOT__base__DOT__and0_out_X 
        = (((IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_3__DOT__base__DOT__buf_Q) 
            & (IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_2__DOT__base__DOT__buf_Q)) 
           & (IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_1__DOT__base__DOT__buf_Q));
    vlTOPp->puzzle__DOT__Xnand2_2_32__DOT__base__DOT__nand0_out_Y 
        = (1U & (~ ((IData)(vlTOPp->puzzle__DOT__Xand2b_2_17__DOT__base__DOT__and0_out_X) 
                    & (IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_3__DOT__base__DOT__buf_Q))));
}

VL_INLINE_OPT void Vpuzzle::_multiclk__TOP__110(Vpuzzle__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpuzzle::_multiclk__TOP__110\n"); );
    Vpuzzle* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->puzzle__DOT__Xand3_2_8__DOT__base__DOT__and0_out_X 
        = (((IData)(vlTOPp->puzzle__DOT__Xdfrtp_1_26__DOT__base__DOT__buf_Q) 
            & (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_24__DOT__base__DOT__buf_Q)) 
           & (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_25__DOT__base__DOT__buf_Q));
}

VL_INLINE_OPT void Vpuzzle::_multiclk__TOP__111(Vpuzzle__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpuzzle::_multiclk__TOP__111\n"); );
    Vpuzzle* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->puzzle__DOT__Xand2b_2_8__DOT__base__DOT__and0_out_X 
        = ((~ (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_24__DOT__base__DOT__buf_Q)) 
           & (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_23__DOT__base__DOT__buf_Q));
}

VL_INLINE_OPT void Vpuzzle::_multiclk__TOP__112(Vpuzzle__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpuzzle::_multiclk__TOP__112\n"); );
    Vpuzzle* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->puzzle__DOT__Xnor3_2_2__DOT__base__DOT__nor0_out_Y 
        = (1U & (~ (((((IData)(vlTOPp->puzzle__DOT__Xdfrtp_1_26__DOT__base__DOT__buf_Q) 
                       | (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_23__DOT__base__DOT__buf_Q)) 
                      | (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_22__DOT__base__DOT__buf_Q)) 
                     | (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_21__DOT__base__DOT__buf_Q)) 
                    | (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_19__DOT__base__DOT__buf_Q))));
}

VL_INLINE_OPT void Vpuzzle::_multiclk__TOP__113(Vpuzzle__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpuzzle::_multiclk__TOP__113\n"); );
    Vpuzzle* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->puzzle__DOT__Xnor4_2_1__DOT__base__DOT__nor0_out_Y 
        = (1U & (~ ((((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_43__DOT__base__DOT__buf_Q) 
                      | (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_44__DOT__base__DOT__buf_Q)) 
                     | (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_45__DOT__base__DOT__buf_Q)) 
                    | (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_46__DOT__base__DOT__buf_Q))));
    vlTOPp->puzzle__DOT__Xand4bb_2_9__DOT__base__DOT__and0_out_X 
        = (((~ ((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_43__DOT__base__DOT__buf_Q) 
                | (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_45__DOT__base__DOT__buf_Q))) 
            & (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_46__DOT__base__DOT__buf_Q)) 
           & (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_44__DOT__base__DOT__buf_Q));
    vlTOPp->puzzle__DOT__Xor4b_2_4__DOT__base__DOT__or0_out_X 
        = (1U & ((((~ (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_44__DOT__base__DOT__buf_Q)) 
                   | (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_46__DOT__base__DOT__buf_Q)) 
                  | (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_45__DOT__base__DOT__buf_Q)) 
                 | (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_43__DOT__base__DOT__buf_Q)));
    vlTOPp->puzzle__DOT__Xor4b_2_5__DOT__base__DOT__or0_out_X 
        = (1U & ((((~ (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_46__DOT__base__DOT__buf_Q)) 
                   | (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_45__DOT__base__DOT__buf_Q)) 
                  | (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_44__DOT__base__DOT__buf_Q)) 
                 | (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_43__DOT__base__DOT__buf_Q)));
    vlTOPp->puzzle__DOT__Xand4bb_2_10__DOT__base__DOT__and0_out_X 
        = (((~ ((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_45__DOT__base__DOT__buf_Q) 
                | (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_46__DOT__base__DOT__buf_Q))) 
            & (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_44__DOT__base__DOT__buf_Q)) 
           & (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_43__DOT__base__DOT__buf_Q));
    vlTOPp->puzzle__DOT__Xor4b_2_6__DOT__base__DOT__or0_out_X 
        = (1U & ((((~ (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_43__DOT__base__DOT__buf_Q)) 
                   | (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_46__DOT__base__DOT__buf_Q)) 
                  | (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_45__DOT__base__DOT__buf_Q)) 
                 | (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_44__DOT__base__DOT__buf_Q)));
    vlTOPp->puzzle__DOT__Xor4_2_4__DOT__base__DOT__or0_out_X 
        = ((((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_45__DOT__base__DOT__buf_Q) 
             | (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_46__DOT__base__DOT__buf_Q)) 
            | (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_43__DOT__base__DOT__buf_Q)) 
           | (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_44__DOT__base__DOT__buf_Q));
    vlTOPp->puzzle__DOT__Xor4b_2_7__DOT__base__DOT__or0_out_X 
        = (1U & ((((~ (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_45__DOT__base__DOT__buf_Q)) 
                   | (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_46__DOT__base__DOT__buf_Q)) 
                  | (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_44__DOT__base__DOT__buf_Q)) 
                 | (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_43__DOT__base__DOT__buf_Q)));
    vlTOPp->puzzle__DOT__Xand4bb_2_13__DOT__base__DOT__and0_out_X 
        = (((~ ((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_44__DOT__base__DOT__buf_Q) 
                | (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_45__DOT__base__DOT__buf_Q))) 
            & (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_46__DOT__base__DOT__buf_Q)) 
           & (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_43__DOT__base__DOT__buf_Q));
    vlTOPp->puzzle__DOT__Xand4b_2_2__DOT__base__DOT__and0_out_X 
        = ((((~ (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_45__DOT__base__DOT__buf_Q)) 
             & (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_46__DOT__base__DOT__buf_Q)) 
            & (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_44__DOT__base__DOT__buf_Q)) 
           & (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_43__DOT__base__DOT__buf_Q));
    vlTOPp->puzzle__DOT__Xand4bb_2_11__DOT__base__DOT__and0_out_X 
        = (((~ ((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_43__DOT__base__DOT__buf_Q) 
                | (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_46__DOT__base__DOT__buf_Q))) 
            & (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_45__DOT__base__DOT__buf_Q)) 
           & (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_44__DOT__base__DOT__buf_Q));
    vlTOPp->puzzle__DOT__Xand4bb_2_12__DOT__base__DOT__and0_out_X 
        = (((~ ((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_44__DOT__base__DOT__buf_Q) 
                | (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_46__DOT__base__DOT__buf_Q))) 
            & (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_45__DOT__base__DOT__buf_Q)) 
           & (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_43__DOT__base__DOT__buf_Q));
}

VL_INLINE_OPT void Vpuzzle::_multiclk__TOP__114(Vpuzzle__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpuzzle::_multiclk__TOP__114\n"); );
    Vpuzzle* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->puzzle__DOT__Xxnor2_2_3__DOT__base__DOT__xnor0_out_Y 
        = (1U & (~ ((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_15__DOT__base__DOT__buf_Q) 
                    ^ (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_18__DOT__base__DOT__buf_Q))));
}

VL_INLINE_OPT void Vpuzzle::_multiclk__TOP__115(Vpuzzle__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpuzzle::_multiclk__TOP__115\n"); );
    Vpuzzle* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->puzzle__DOT__Xand2_2_1__DOT__base__DOT__and0_out_X 
        = ((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_44__DOT__base__DOT__buf_Q) 
           & (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_16__DOT__base__DOT__buf_Q));
    vlTOPp->puzzle__DOT__Xnor2_2_7__DOT__base__DOT__nor0_out_Y 
        = (1U & (~ ((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_44__DOT__base__DOT__buf_Q) 
                    | (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_16__DOT__base__DOT__buf_Q))));
    vlTOPp->puzzle__DOT__Xnand2_2_4__DOT__base__DOT__nand0_out_Y 
        = (1U & (~ ((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_16__DOT__base__DOT__buf_Q) 
                    & (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_44__DOT__base__DOT__buf_Q))));
    vlTOPp->puzzle__DOT__Xor2_2_1__DOT__base__DOT__or0_out_X 
        = ((IData)(vlTOPp->puzzle__DOT__Xnor2_2_7__DOT__base__DOT__nor0_out_Y) 
           | (IData)(vlTOPp->puzzle__DOT__Xand2_2_1__DOT__base__DOT__and0_out_X));
    vlTOPp->puzzle__DOT__Xnor2_2_4__DOT__base__DOT__nor0_out_Y 
        = (1U & (~ ((IData)(vlTOPp->puzzle__DOT__Xand2_2_1__DOT__base__DOT__and0_out_X) 
                    | (IData)(vlTOPp->puzzle__DOT__Xnor2_2_7__DOT__base__DOT__nor0_out_Y))));
}

VL_INLINE_OPT void Vpuzzle::_multiclk__TOP__116(Vpuzzle__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpuzzle::_multiclk__TOP__116\n"); );
    Vpuzzle* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->puzzle__DOT__Xxor2_2_0__DOT__base__DOT__xor0_out_X 
        = ((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_15__DOT__base__DOT__buf_Q) 
           ^ (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_16__DOT__base__DOT__buf_Q));
}

VL_INLINE_OPT void Vpuzzle::_multiclk__TOP__117(Vpuzzle__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpuzzle::_multiclk__TOP__117\n"); );
    Vpuzzle* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->puzzle__DOT__Xand4bb_2_0__DOT__base__DOT__and0_out_X 
        = (((~ ((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_16__DOT__base__DOT__buf_Q) 
                | (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_15__DOT__base__DOT__buf_Q))) 
            & (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_17__DOT__base__DOT__buf_Q)) 
           & (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_18__DOT__base__DOT__buf_Q));
}

VL_INLINE_OPT void Vpuzzle::_multiclk__TOP__118(Vpuzzle__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpuzzle::_multiclk__TOP__118\n"); );
    Vpuzzle* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->puzzle__DOT__Xnand2_2_21__DOT__base__DOT__nand0_out_Y 
        = (1U & (~ ((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_17__DOT__base__DOT__buf_Q) 
                    & (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_16__DOT__base__DOT__buf_Q))));
    vlTOPp->puzzle__DOT__Xxor2_2_7__DOT__base__DOT__xor0_out_X 
        = ((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_17__DOT__base__DOT__buf_Q) 
           ^ (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_16__DOT__base__DOT__buf_Q));
}

VL_INLINE_OPT void Vpuzzle::_multiclk__TOP__119(Vpuzzle__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpuzzle::_multiclk__TOP__119\n"); );
    Vpuzzle* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->puzzle__DOT__Xnand2_2_17__DOT__base__DOT__nand0_out_Y 
        = (1U & (~ ((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_17__DOT__base__DOT__buf_Q) 
                    & (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_15__DOT__base__DOT__buf_Q))));
}

VL_INLINE_OPT void Vpuzzle::_multiclk__TOP__120(Vpuzzle__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpuzzle::_multiclk__TOP__120\n"); );
    Vpuzzle* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->puzzle__DOT__Xxnor2_2_24__DOT__base__DOT__xnor0_out_Y 
        = (1U & (~ ((IData)(vlTOPp->puzzle__DOT__Xdfstp_2_1__DOT__base__DOT__buf_Q) 
                    ^ (IData)(vlTOPp->puzzle__DOT__Xxor2_2_19__DOT__base__DOT__xor0_out_X))));
}

VL_INLINE_OPT void Vpuzzle::_multiclk__TOP__121(Vpuzzle__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpuzzle::_multiclk__TOP__121\n"); );
    Vpuzzle* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->puzzle__DOT__Xxnor2_2_26__DOT__base__DOT__xnor0_out_Y 
        = (1U & (~ ((IData)(vlTOPp->puzzle__DOT__Xxnor2_2_17__DOT__base__DOT__xnor0_out_Y) 
                    ^ (~ ((IData)(vlTOPp->puzzle__DOT__Xdfstp_2_2__DOT__base__DOT__buf_Q) 
                          ^ (IData)(vlTOPp->puzzle__DOT__Xdfstp_2_0__DOT__base__DOT__buf_Q))))));
}

VL_INLINE_OPT void Vpuzzle::_multiclk__TOP__122(Vpuzzle__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpuzzle::_multiclk__TOP__122\n"); );
    Vpuzzle* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->puzzle__DOT__Xxor2_2_16__DOT__base__DOT__xor0_out_X 
        = (1U & ((~ ((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_49__DOT__base__DOT__buf_Q) 
                     ^ (IData)(vlTOPp->puzzle__DOT__Xxnor2_2_17__DOT__base__DOT__xnor0_out_Y))) 
                 ^ (IData)(vlTOPp->puzzle__DOT__Xdfstp_2_1__DOT__base__DOT__buf_Q)));
}

VL_INLINE_OPT void Vpuzzle::_multiclk__TOP__123(Vpuzzle__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpuzzle::_multiclk__TOP__123\n"); );
    Vpuzzle* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->puzzle__DOT__Xnand2_2_27__DOT__base__DOT__nand0_out_Y 
        = (1U & (~ ((IData)(vlTOPp->puzzle__DOT__Xor2_2_8__DOT__base__DOT__or0_out_X) 
                    & (IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_2__DOT__base__DOT__buf_Q))));
}

VL_INLINE_OPT void Vpuzzle::_multiclk__TOP__124(Vpuzzle__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpuzzle::_multiclk__TOP__124\n"); );
    Vpuzzle* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->puzzle__DOT__Xand2_2_16__DOT__base__DOT__and0_out_X 
        = ((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_83__DOT__base__DOT__buf_Q) 
           & (IData)(vlTOPp->puzzle__DOT__Xnand4_2_14__DOT__base__DOT__nand0_out_Y));
}

VL_INLINE_OPT void Vpuzzle::_multiclk__TOP__125(Vpuzzle__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpuzzle::_multiclk__TOP__125\n"); );
    Vpuzzle* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->puzzle__DOT__Xnand2_2_28__DOT__base__DOT__nand0_out_Y 
        = (1U & (~ ((IData)(vlTOPp->puzzle__DOT__Xxnor2_2_27__DOT__base__DOT__xnor0_out_Y) 
                    & (IData)(vlTOPp->puzzle__DOT__Xor2_2_9__DOT__base__DOT__or0_out_X))));
}

VL_INLINE_OPT void Vpuzzle::_multiclk__TOP__126(Vpuzzle__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpuzzle::_multiclk__TOP__126\n"); );
    Vpuzzle* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->puzzle__DOT__Xand3_2_10__DOT__base__DOT__and0_out_X 
        = ((((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_20__DOT__base__DOT__buf_Q) 
             & (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_21__DOT__base__DOT__buf_Q)) 
            & (((~ ((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_25__DOT__base__DOT__buf_Q) 
                    | (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_22__DOT__base__DOT__buf_Q))) 
                & (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_19__DOT__base__DOT__buf_Q)) 
               & (IData)(vlTOPp->puzzle__DOT__Xdfrtp_1_26__DOT__base__DOT__buf_Q))) 
           & (IData)(vlTOPp->puzzle__DOT__Xand2b_2_8__DOT__base__DOT__and0_out_X));
    vlTOPp->puzzle__DOT__Xnor4b_2_1__DOT__base__DOT__nor0_out_Y 
        = (1U & (~ ((((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_24__DOT__base__DOT__buf_Q) 
                      | (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_25__DOT__base__DOT__buf_Q)) 
                     | (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_20__DOT__base__DOT__buf_Q)) 
                    | (~ (IData)(vlTOPp->puzzle__DOT__Xnor3_2_2__DOT__base__DOT__nor0_out_Y)))));
}

VL_INLINE_OPT void Vpuzzle::_multiclk__TOP__127(Vpuzzle__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpuzzle::_multiclk__TOP__127\n"); );
    Vpuzzle* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->puzzle__DOT__Xand2_2_15__DOT__base__DOT__and0_out_X 
        = ((~ (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_28__DOT__base__DOT__buf_Q)) 
           & ((((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_24__DOT__base__DOT__buf_Q) 
                & (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_25__DOT__base__DOT__buf_Q)) 
               & (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_20__DOT__base__DOT__buf_Q)) 
              & (IData)(vlTOPp->puzzle__DOT__Xnor3_2_2__DOT__base__DOT__nor0_out_Y)));
}

VL_INLINE_OPT void Vpuzzle::_combo__TOP__128(Vpuzzle__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpuzzle::_combo__TOP__128\n"); );
    Vpuzzle* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->puzzle__DOT__Xnand4_2_12__DOT__base__DOT__nand0_out_Y 
        = (1U & (~ ((((IData)(vlTOPp->puzzle__DOT__Xand4bb_2_11__DOT__base__DOT__and0_out_X) 
                      & (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_74__DOT__base__DOT__buf_Q)) 
                     & (IData)(vlTOPp->puzzle__DOT__Xand2b_2_11__DOT__base__DOT__and0_out_X)) 
                    & (IData)(vlTOPp->I))));
    vlTOPp->puzzle__DOT__Xnand4_2_13__DOT__base__DOT__nand0_out_Y 
        = (1U & (~ ((((IData)(vlTOPp->puzzle__DOT__Xand4bb_2_12__DOT__base__DOT__and0_out_X) 
                      & (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_73__DOT__base__DOT__buf_Q)) 
                     & (IData)(vlTOPp->puzzle__DOT__Xand2b_2_11__DOT__base__DOT__and0_out_X)) 
                    & (IData)(vlTOPp->I))));
    vlTOPp->puzzle__DOT__Xor2_2_10__DOT__base__DOT__or0_out_X 
        = ((IData)(vlTOPp->puzzle__DOT__Xand2b_2_11__DOT__base__DOT__and0_out_X) 
           | (IData)(vlTOPp->puzzle__DOT__Xand2_2_16__DOT__base__DOT__and0_out_X));
    vlTOPp->puzzle__DOT__Xand2b_2_16__DOT__base__DOT__and0_out_X 
        = ((~ (IData)(vlTOPp->puzzle__DOT__Xand2b_2_11__DOT__base__DOT__and0_out_X)) 
           & (IData)(vlTOPp->puzzle__DOT__Xand2_2_16__DOT__base__DOT__and0_out_X));
}

VL_INLINE_OPT void Vpuzzle::_multiclk__TOP__129(Vpuzzle__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpuzzle::_multiclk__TOP__129\n"); );
    Vpuzzle* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->puzzle__DOT__Xxnor2_2_1__DOT__base__DOT__xnor0_out_Y 
        = (1U & (~ ((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_43__DOT__base__DOT__buf_Q) 
                    ^ (IData)(vlTOPp->puzzle__DOT__Xxor2_2_0__DOT__base__DOT__xor0_out_X))));
}

VL_INLINE_OPT void Vpuzzle::_multiclk__TOP__130(Vpuzzle__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpuzzle::_multiclk__TOP__130\n"); );
    Vpuzzle* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->puzzle__DOT__Xnor2_2_17__DOT__base__DOT__nor0_out_Y 
        = (1U & (~ ((IData)(vlTOPp->puzzle__DOT__Xnand2_2_21__DOT__base__DOT__nand0_out_Y) 
                    | (IData)(vlTOPp->puzzle__DOT__Xxnor2_2_3__DOT__base__DOT__xnor0_out_Y))));
    vlTOPp->puzzle__DOT__Xa21o_2_4__DOT__base__DOT__or0_out_X 
        = (1U & (((IData)(vlTOPp->puzzle__DOT__Xnand2_2_17__DOT__base__DOT__nand0_out_Y) 
                  & (IData)(vlTOPp->puzzle__DOT__Xnor2_2_17__DOT__base__DOT__nor0_out_Y)) 
                 | (~ ((IData)(vlTOPp->puzzle__DOT__Xnor2_2_17__DOT__base__DOT__nor0_out_Y) 
                       | ((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_18__DOT__base__DOT__buf_Q) 
                          & (IData)(vlTOPp->puzzle__DOT__Xnand2_2_17__DOT__base__DOT__nand0_out_Y))))));
}

VL_INLINE_OPT void Vpuzzle::_multiclk__TOP__131(Vpuzzle__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpuzzle::_multiclk__TOP__131\n"); );
    Vpuzzle* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->puzzle__DOT__Xnand2_2_22__DOT__base__DOT__nand0_out_Y 
        = (1U & (~ ((IData)(vlTOPp->puzzle__DOT__Xxor2_2_7__DOT__base__DOT__xor0_out_X) 
                    & (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_18__DOT__base__DOT__buf_Q))));
    vlTOPp->puzzle__DOT__Xxor2_2_4__DOT__base__DOT__xor0_out_X 
        = ((IData)(vlTOPp->puzzle__DOT__Xxor2_2_7__DOT__base__DOT__xor0_out_X) 
           ^ (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_18__DOT__base__DOT__buf_Q));
}

VL_INLINE_OPT void Vpuzzle::_multiclk__TOP__132(Vpuzzle__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpuzzle::_multiclk__TOP__132\n"); );
    Vpuzzle* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->puzzle__DOT__Xa21oi_2_10__DOT__base__DOT__nor0_out_Y 
        = (1U & (~ ((~ ((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_15__DOT__base__DOT__buf_Q) 
                        | (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_17__DOT__base__DOT__buf_Q))) 
                    | ((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_15__DOT__base__DOT__buf_Q) 
                       & (IData)(vlTOPp->puzzle__DOT__Xxor2_2_7__DOT__base__DOT__xor0_out_X)))));
}

VL_INLINE_OPT void Vpuzzle::_multiclk__TOP__133(Vpuzzle__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpuzzle::_multiclk__TOP__133\n"); );
    Vpuzzle* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->puzzle__DOT__Xa211oi_2_1__DOT__base__DOT__nor0_out_Y 
        = (1U & (~ ((((~ (IData)(vlTOPp->success)) 
                      & (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_82__DOT__base__DOT__buf_Q)) 
                     | (IData)(vlTOPp->puzzle__DOT__Xand3_2_10__DOT__base__DOT__and0_out_X)) 
                    | (IData)(vlTOPp->puzzle__DOT__Xnor4b_2_1__DOT__base__DOT__nor0_out_Y))));
    vlTOPp->puzzle__DOT__Xor4b_2_8__DOT__base__DOT__or0_out_X 
        = (1U & ((((~ (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_82__DOT__base__DOT__buf_Q)) 
                   | (IData)(vlTOPp->puzzle__DOT__Xand3_2_10__DOT__base__DOT__and0_out_X)) 
                  | (IData)(vlTOPp->success)) | (IData)(vlTOPp->puzzle__DOT__Xnor4b_2_1__DOT__base__DOT__nor0_out_Y)));
    vlTOPp->puzzle__DOT__Xnor2_2_48__DOT__base__DOT__nor0_out_Y 
        = (1U & (~ ((IData)(vlTOPp->puzzle__DOT__Xnor4b_2_1__DOT__base__DOT__nor0_out_Y) 
                    | (~ ((IData)(vlTOPp->puzzle__DOT__Xand3_2_10__DOT__base__DOT__and0_out_X) 
                          | (~ ((IData)(vlTOPp->success) 
                                | (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_82__DOT__base__DOT__buf_Q))))))));
    vlTOPp->puzzle__DOT__Xnor3b_2_2__DOT__base__DOT__and0_out_Y 
        = ((IData)(vlTOPp->puzzle__DOT__Xnor2_2_48__DOT__base__DOT__nor0_out_Y) 
           & (~ ((IData)(vlTOPp->puzzle__DOT__Xa211oi_2_1__DOT__base__DOT__nor0_out_Y) 
                 | (~ (IData)(vlTOPp->puzzle__DOT__Xor4b_2_8__DOT__base__DOT__or0_out_X)))));
    vlTOPp->puzzle__DOT__Xnor3b_2_3__DOT__base__DOT__and0_out_Y 
        = (1U & ((~ (IData)(vlTOPp->puzzle__DOT__Xor4b_2_8__DOT__base__DOT__or0_out_X)) 
                 & (~ ((IData)(vlTOPp->puzzle__DOT__Xa211oi_2_1__DOT__base__DOT__nor0_out_Y) 
                       | (IData)(vlTOPp->puzzle__DOT__Xnor2_2_48__DOT__base__DOT__nor0_out_Y)))));
    vlTOPp->puzzle__DOT__Xnor3_2_3__DOT__base__DOT__nor0_out_Y 
        = (1U & (~ (((~ (IData)(vlTOPp->puzzle__DOT__Xor4b_2_8__DOT__base__DOT__or0_out_X)) 
                     | (IData)(vlTOPp->puzzle__DOT__Xa211oi_2_1__DOT__base__DOT__nor0_out_Y)) 
                    | (IData)(vlTOPp->puzzle__DOT__Xnor2_2_48__DOT__base__DOT__nor0_out_Y))));
    vlTOPp->puzzle__DOT__Xnor3b_2_4__DOT__base__DOT__and0_out_Y 
        = ((IData)(vlTOPp->puzzle__DOT__Xa211oi_2_1__DOT__base__DOT__nor0_out_Y) 
           & (~ ((IData)(vlTOPp->puzzle__DOT__Xnor2_2_48__DOT__base__DOT__nor0_out_Y) 
                 | (~ (IData)(vlTOPp->puzzle__DOT__Xor4b_2_8__DOT__base__DOT__or0_out_X)))));
    vlTOPp->puzzle__DOT__Xa21oi_2_18__DOT__base__DOT__nor0_out_Y 
        = (1U & (~ ((IData)(vlTOPp->puzzle__DOT__Xa211oi_2_1__DOT__base__DOT__nor0_out_Y) 
                    | ((IData)(vlTOPp->puzzle__DOT__Xnor2_2_48__DOT__base__DOT__nor0_out_Y) 
                       & (~ (IData)(vlTOPp->puzzle__DOT__Xor4b_2_8__DOT__base__DOT__or0_out_X))))));
    vlTOPp->puzzle__DOT__Xnor2_2_47__DOT__base__DOT__nor0_out_Y 
        = (1U & (~ ((IData)(vlTOPp->puzzle__DOT__Xnor3b_2_4__DOT__base__DOT__and0_out_Y) 
                    | (IData)(vlTOPp->puzzle__DOT__Xa21oi_2_18__DOT__base__DOT__nor0_out_Y))));
}

VL_INLINE_OPT void Vpuzzle::_multiclk__TOP__134(Vpuzzle__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpuzzle::_multiclk__TOP__134\n"); );
    Vpuzzle* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->puzzle__DOT__Xnor2_2_8__DOT__base__DOT__nor0_out_Y 
        = (1U & (~ ((IData)(vlTOPp->puzzle__DOT__Xxnor2_2_1__DOT__base__DOT__xnor0_out_Y) 
                    | (IData)(vlTOPp->puzzle__DOT__Xor2_2_1__DOT__base__DOT__or0_out_X))));
    vlTOPp->puzzle__DOT__Xnand2_2_7__DOT__base__DOT__nand0_out_Y 
        = (1U & (~ ((IData)(vlTOPp->puzzle__DOT__Xnand2_2_4__DOT__base__DOT__nand0_out_Y) 
                    & (IData)(vlTOPp->puzzle__DOT__Xxnor2_2_1__DOT__base__DOT__xnor0_out_Y))));
    vlTOPp->puzzle__DOT__Xnor2_2_0__DOT__base__DOT__nor0_out_Y 
        = (1U & (~ ((IData)(vlTOPp->puzzle__DOT__Xxnor2_2_1__DOT__base__DOT__xnor0_out_Y) 
                    | (IData)(vlTOPp->puzzle__DOT__Xnand2_2_4__DOT__base__DOT__nand0_out_Y))));
    vlTOPp->puzzle__DOT__Xnor2_2_9__DOT__base__DOT__nor0_out_Y 
        = (1U & (~ ((IData)(vlTOPp->puzzle__DOT__Xnor2_2_7__DOT__base__DOT__nor0_out_Y) 
                    | (IData)(vlTOPp->puzzle__DOT__Xnand2_2_7__DOT__base__DOT__nand0_out_Y))));
    vlTOPp->puzzle__DOT__Xand2b_2_0__DOT__base__DOT__and0_out_X 
        = ((~ (IData)(vlTOPp->puzzle__DOT__Xnor2_2_0__DOT__base__DOT__nor0_out_Y)) 
           & (IData)(vlTOPp->puzzle__DOT__Xnand2_2_7__DOT__base__DOT__nand0_out_Y));
    vlTOPp->puzzle__DOT__Xand2_2_0__DOT__base__DOT__and0_out_X 
        = ((IData)(vlTOPp->puzzle__DOT__Xor2_2_1__DOT__base__DOT__or0_out_X) 
           & (IData)(vlTOPp->puzzle__DOT__Xand2b_2_0__DOT__base__DOT__and0_out_X));
    vlTOPp->puzzle__DOT__Xnor2_2_1__DOT__base__DOT__nor0_out_Y 
        = (1U & (~ ((IData)(vlTOPp->puzzle__DOT__Xnor2_2_4__DOT__base__DOT__nor0_out_Y) 
                    | (IData)(vlTOPp->puzzle__DOT__Xand2b_2_0__DOT__base__DOT__and0_out_X))));
}

VL_INLINE_OPT void Vpuzzle::_multiclk__TOP__135(Vpuzzle__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpuzzle::_multiclk__TOP__135\n"); );
    Vpuzzle* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->puzzle__DOT__Xo22ai_2_0__DOT__base__DOT__or0_out_Y 
        = (1U & ((~ ((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_15__DOT__base__DOT__buf_Q) 
                     | (IData)(vlTOPp->puzzle__DOT__Xnand2_2_22__DOT__base__DOT__nand0_out_Y))) 
                 | (~ ((~ ((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_17__DOT__base__DOT__buf_Q) 
                           | ((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_15__DOT__base__DOT__buf_Q) 
                              & (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_18__DOT__base__DOT__buf_Q)))) 
                       | ((((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_18__DOT__base__DOT__buf_Q) 
                            & (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_15__DOT__base__DOT__buf_Q)) 
                           & (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_17__DOT__base__DOT__buf_Q)) 
                          | (IData)(vlTOPp->puzzle__DOT__Xnor2_2_17__DOT__base__DOT__nor0_out_Y))))));
    vlTOPp->puzzle__DOT__Xor3_2_5__DOT__base__DOT__or0_out_X 
        = (1U & (((IData)(vlTOPp->puzzle__DOT__Xnor2_2_17__DOT__base__DOT__nor0_out_Y) 
                  | (~ ((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_15__DOT__base__DOT__buf_Q) 
                        | (IData)(vlTOPp->puzzle__DOT__Xnand2_2_22__DOT__base__DOT__nand0_out_Y)))) 
                 | (((IData)(vlTOPp->puzzle__DOT__Xxnor2_2_3__DOT__base__DOT__xnor0_out_Y) 
                     & (IData)(vlTOPp->puzzle__DOT__Xnand2_2_21__DOT__base__DOT__nand0_out_Y)) 
                    & (IData)(vlTOPp->puzzle__DOT__Xnand2_2_22__DOT__base__DOT__nand0_out_Y))));
    vlTOPp->puzzle__DOT__Xnand2b_2_6__DOT__base__DOT__or0_out_Y 
        = (1U & ((~ (IData)(vlTOPp->puzzle__DOT__Xxor2_2_4__DOT__base__DOT__xor0_out_X)) 
                 | (IData)(vlTOPp->puzzle__DOT__Xnand2_2_17__DOT__base__DOT__nand0_out_Y)));
    vlTOPp->puzzle__DOT__Xxnor2_2_4__DOT__base__DOT__xnor0_out_Y 
        = (1U & (~ ((IData)(vlTOPp->puzzle__DOT__Xnand2_2_17__DOT__base__DOT__nand0_out_Y) 
                    ^ (IData)(vlTOPp->puzzle__DOT__Xxor2_2_4__DOT__base__DOT__xor0_out_X))));
    vlTOPp->puzzle__DOT__Xand2b_2_5__DOT__base__DOT__and0_out_X 
        = ((~ (IData)(vlTOPp->puzzle__DOT__Xand4bb_2_0__DOT__base__DOT__and0_out_X)) 
           & (IData)(vlTOPp->puzzle__DOT__Xo22ai_2_0__DOT__base__DOT__or0_out_Y));
}

VL_INLINE_OPT void Vpuzzle::_multiclk__TOP__136(Vpuzzle__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpuzzle::_multiclk__TOP__136\n"); );
    Vpuzzle* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->puzzle__DOT__Xo2bb2a_2_0__DOT__base__DOT__and0_out_X 
        = (1U & ((~ ((IData)(vlTOPp->puzzle__DOT__Xa21oi_2_10__DOT__base__DOT__nor0_out_Y) 
                     & (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_46__DOT__base__DOT__buf_Q))) 
                 & ((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_17__DOT__base__DOT__buf_Q) 
                    | (~ ((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_15__DOT__base__DOT__buf_Q) 
                          & (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_16__DOT__base__DOT__buf_Q))))));
    vlTOPp->puzzle__DOT__Xxor2_2_1__DOT__base__DOT__xor0_out_X 
        = ((IData)(vlTOPp->puzzle__DOT__Xa21oi_2_10__DOT__base__DOT__nor0_out_Y) 
           ^ (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_46__DOT__base__DOT__buf_Q));
}

VL_INLINE_OPT void Vpuzzle::_multiclk__TOP__137(Vpuzzle__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpuzzle::_multiclk__TOP__137\n"); );
    Vpuzzle* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->O[7U] = (((IData)(vlTOPp->puzzle__DOT__Xnand4_2_14__DOT__base__DOT__nand0_out_Y) 
                      & (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_83__DOT__base__DOT__buf_Q)) 
                     & (((IData)(vlTOPp->puzzle__DOT__Xnor2_2_47__DOT__base__DOT__nor0_out_Y) 
                         | ((~ ((IData)(vlTOPp->puzzle__DOT__Xdfstp_2_0__DOT__base__DOT__buf_Q) 
                                ^ ((((IData)(vlTOPp->puzzle__DOT__Xnand2_2_29__DOT__base__DOT__nand0_out_Y) 
                                     & (IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_3__DOT__base__DOT__buf_Q)) 
                                    & (~ (IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_0__DOT__base__DOT__buf_Q))) 
                                   | ((~ ((~ (IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_0__DOT__base__DOT__buf_Q)) 
                                          & (IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_2__DOT__base__DOT__buf_Q))) 
                                      & (~ ((IData)(vlTOPp->puzzle__DOT__Xnand2_2_29__DOT__base__DOT__nand0_out_Y) 
                                            & (IData)(vlTOPp->puzzle__DOT__Xor2_2_9__DOT__base__DOT__or0_out_X))))))) 
                            & (IData)(vlTOPp->puzzle__DOT__Xnor3b_2_4__DOT__base__DOT__and0_out_Y))) 
                        & ((IData)(vlTOPp->puzzle__DOT__Xnor3b_2_4__DOT__base__DOT__and0_out_Y) 
                           | (IData)(vlTOPp->puzzle__DOT__Xa21oi_2_18__DOT__base__DOT__nor0_out_Y))));
}

VL_INLINE_OPT void Vpuzzle::_multiclk__TOP__138(Vpuzzle__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpuzzle::_multiclk__TOP__138\n"); );
    Vpuzzle* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->O[5U] = (((IData)(vlTOPp->puzzle__DOT__Xnand4_2_14__DOT__base__DOT__nand0_out_Y) 
                      & (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_83__DOT__base__DOT__buf_Q)) 
                     & ((((((((IData)(vlTOPp->puzzle__DOT__Xand2b_2_12__DOT__base__DOT__and0_out_X) 
                              & (IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_2__DOT__base__DOT__buf_Q)) 
                             & (~ (IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_0__DOT__base__DOT__buf_Q))) 
                            & (IData)(vlTOPp->puzzle__DOT__Xnor3b_2_2__DOT__base__DOT__and0_out_Y)) 
                           | ((IData)(vlTOPp->puzzle__DOT__Xnor3_2_3__DOT__base__DOT__nor0_out_Y) 
                              & (((IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_3__DOT__base__DOT__buf_Q) 
                                  & (~ (IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_0__DOT__base__DOT__buf_Q))) 
                                 & (IData)(vlTOPp->puzzle__DOT__Xand2b_2_13__DOT__base__DOT__and0_out_X)))) 
                          | (IData)(vlTOPp->puzzle__DOT__Xnor2_2_47__DOT__base__DOT__nor0_out_Y)) 
                         | ((((~ ((((IData)(vlTOPp->puzzle__DOT__Xnor2_2_36__DOT__base__DOT__nor0_out_Y) 
                                    & (IData)(vlTOPp->puzzle__DOT__Xor2_2_9__DOT__base__DOT__or0_out_X)) 
                                   | ((IData)(vlTOPp->puzzle__DOT__Xxnor2_2_27__DOT__base__DOT__xnor0_out_Y) 
                                      & (((IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_3__DOT__base__DOT__buf_Q) 
                                          | (IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_2__DOT__base__DOT__buf_Q)) 
                                         | (~ (IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_1__DOT__base__DOT__buf_Q))))) 
                                  & (IData)(vlTOPp->puzzle__DOT__Xnand2b_2_11__DOT__base__DOT__or0_out_Y))) 
                              ^ (IData)(vlTOPp->puzzle__DOT__Xdfstp_2_2__DOT__base__DOT__buf_Q)) 
                             & (IData)(vlTOPp->puzzle__DOT__Xnor3b_2_4__DOT__base__DOT__and0_out_Y)) 
                            | ((IData)(vlTOPp->puzzle__DOT__Xnor3b_2_3__DOT__base__DOT__and0_out_Y) 
                               & (~ ((IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_0__DOT__base__DOT__buf_Q) 
                                     | (IData)(vlTOPp->puzzle__DOT__Xnand2_2_19__DOT__base__DOT__nand0_out_Y)))))) 
                        & (((IData)(vlTOPp->puzzle__DOT__Xnor3b_2_4__DOT__base__DOT__and0_out_Y) 
                            | (((~ ((IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_3__DOT__base__DOT__buf_Q) 
                                    | (IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_0__DOT__base__DOT__buf_Q))) 
                                & (IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_2__DOT__base__DOT__buf_Q)) 
                               & (IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_1__DOT__base__DOT__buf_Q))) 
                           | (IData)(vlTOPp->puzzle__DOT__Xa21oi_2_18__DOT__base__DOT__nor0_out_Y))));
}

VL_INLINE_OPT void Vpuzzle::_multiclk__TOP__139(Vpuzzle__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpuzzle::_multiclk__TOP__139\n"); );
    Vpuzzle* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->O[2U] = (((IData)(vlTOPp->puzzle__DOT__Xnand4_2_14__DOT__base__DOT__nand0_out_Y) 
                      & (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_83__DOT__base__DOT__buf_Q)) 
                     & (((((((((IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_3__DOT__base__DOT__buf_Q) 
                               | (~ (IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_2__DOT__base__DOT__buf_Q))) 
                              & (~ (IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_0__DOT__base__DOT__buf_Q))) 
                             & (IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_1__DOT__base__DOT__buf_Q)) 
                            & (IData)(vlTOPp->puzzle__DOT__Xnor3b_2_2__DOT__base__DOT__and0_out_Y)) 
                           | ((IData)(vlTOPp->puzzle__DOT__Xnor3_2_3__DOT__base__DOT__nor0_out_Y) 
                              & ((~ (IData)(vlTOPp->puzzle__DOT__Xor2_2_8__DOT__base__DOT__or0_out_X)) 
                                 & (IData)(vlTOPp->puzzle__DOT__Xnand2b_2_12__DOT__base__DOT__or0_out_Y)))) 
                          | (IData)(vlTOPp->puzzle__DOT__Xnor2_2_47__DOT__base__DOT__nor0_out_Y)) 
                         | (((~ ((IData)(vlTOPp->puzzle__DOT__Xdfstp_2_3__DOT__base__DOT__buf_Q) 
                                 ^ (~ (((((IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_2__DOT__base__DOT__buf_Q) 
                                          & (IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_3__DOT__base__DOT__buf_Q)) 
                                         | (IData)(vlTOPp->puzzle__DOT__Xand2b_2_17__DOT__base__DOT__and0_out_X)) 
                                        | (~ (IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_0__DOT__base__DOT__buf_Q))) 
                                       & ((IData)(vlTOPp->puzzle__DOT__Xnand2_2_28__DOT__base__DOT__nand0_out_Y) 
                                          | (~ (IData)(vlTOPp->puzzle__DOT__Xnand2_2_32__DOT__base__DOT__nand0_out_Y))))))) 
                             & (IData)(vlTOPp->puzzle__DOT__Xnor3b_2_4__DOT__base__DOT__and0_out_Y)) 
                            | ((IData)(vlTOPp->puzzle__DOT__Xnor3b_2_3__DOT__base__DOT__and0_out_Y) 
                               & ((IData)(vlTOPp->puzzle__DOT__Xnand2_2_19__DOT__base__DOT__nand0_out_Y) 
                                  & (IData)(vlTOPp->puzzle__DOT__Xnand2_2_20__DOT__base__DOT__nand0_out_Y))))) 
                        & (((IData)(vlTOPp->puzzle__DOT__Xnor3b_2_4__DOT__base__DOT__and0_out_Y) 
                            | ((((IData)(vlTOPp->puzzle__DOT__Xnor2_2_24__DOT__base__DOT__nor0_out_Y) 
                                 & (IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_2__DOT__base__DOT__buf_Q)) 
                                & (IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_3__DOT__base__DOT__buf_Q)) 
                               | (~ (((IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_3__DOT__base__DOT__buf_Q) 
                                      | (IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_2__DOT__base__DOT__buf_Q)) 
                                     | (IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_1__DOT__base__DOT__buf_Q))))) 
                           | (IData)(vlTOPp->puzzle__DOT__Xa21oi_2_18__DOT__base__DOT__nor0_out_Y))));
}

VL_INLINE_OPT void Vpuzzle::_multiclk__TOP__140(Vpuzzle__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpuzzle::_multiclk__TOP__140\n"); );
    Vpuzzle* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->O[4U] = (((IData)(vlTOPp->puzzle__DOT__Xnand4_2_14__DOT__base__DOT__nand0_out_Y) 
                      & (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_83__DOT__base__DOT__buf_Q)) 
                     & (((((IData)(vlTOPp->puzzle__DOT__Xnor3_2_3__DOT__base__DOT__nor0_out_Y) 
                           & ((((IData)(vlTOPp->puzzle__DOT__Xor2_2_8__DOT__base__DOT__or0_out_X) 
                                | (IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_1__DOT__base__DOT__buf_Q)) 
                               & (IData)(vlTOPp->puzzle__DOT__Xnand2_2_27__DOT__base__DOT__nand0_out_Y)) 
                              & (IData)(vlTOPp->puzzle__DOT__Xo21ai_2_5__DOT__base__DOT__nand0_out_Y))) 
                          | (IData)(vlTOPp->puzzle__DOT__Xnor2_2_47__DOT__base__DOT__nor0_out_Y)) 
                         | (((((((IData)(vlTOPp->puzzle__DOT__Xnor2_2_36__DOT__base__DOT__nor0_out_Y) 
                                 | (IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_3__DOT__base__DOT__buf_Q)) 
                                | (IData)(vlTOPp->puzzle__DOT__Xand2b_2_17__DOT__base__DOT__and0_out_X)) 
                               & (IData)(vlTOPp->puzzle__DOT__Xnand2_2_30__DOT__base__DOT__nand0_out_Y)) 
                              ^ (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_48__DOT__base__DOT__buf_Q)) 
                             & (IData)(vlTOPp->puzzle__DOT__Xnor3b_2_4__DOT__base__DOT__and0_out_Y)) 
                            | ((IData)(vlTOPp->puzzle__DOT__Xnor3b_2_3__DOT__base__DOT__and0_out_Y) 
                               & ((~ ((IData)(vlTOPp->puzzle__DOT__Xnand2b_2_9__DOT__base__DOT__or0_out_Y) 
                                      | (IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_2__DOT__base__DOT__buf_Q))) 
                                  | (~ ((((IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_1__DOT__base__DOT__buf_Q) 
                                          & (IData)(vlTOPp->puzzle__DOT__Xnand2b_2_10__DOT__base__DOT__or0_out_Y)) 
                                         | (IData)(vlTOPp->puzzle__DOT__Xand2b_2_7__DOT__base__DOT__and0_out_X)) 
                                        | (IData)(vlTOPp->puzzle__DOT__Xa31oi_2_0__DOT__base__DOT__nor0_out_Y))))))) 
                        & (((IData)(vlTOPp->puzzle__DOT__Xnor3b_2_4__DOT__base__DOT__and0_out_Y) 
                            | (IData)(vlTOPp->puzzle__DOT__Xa211oi_2_2__DOT__base__DOT__nor0_out_Y)) 
                           | (IData)(vlTOPp->puzzle__DOT__Xa21oi_2_18__DOT__base__DOT__nor0_out_Y))));
}

VL_INLINE_OPT void Vpuzzle::_multiclk__TOP__141(Vpuzzle__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpuzzle::_multiclk__TOP__141\n"); );
    Vpuzzle* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->O[0U] = (((IData)(vlTOPp->puzzle__DOT__Xnand4_2_14__DOT__base__DOT__nand0_out_Y) 
                      & (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_83__DOT__base__DOT__buf_Q)) 
                     & ((((((((((~ (IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_1__DOT__base__DOT__buf_Q)) 
                                & (IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_2__DOT__base__DOT__buf_Q)) 
                               | (IData)(vlTOPp->puzzle__DOT__Xand3_2_15__DOT__base__DOT__and0_out_X)) 
                              | ((IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_1__DOT__base__DOT__buf_Q) 
                                 & (~ ((IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_2__DOT__base__DOT__buf_Q) 
                                       | (IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_3__DOT__base__DOT__buf_Q))))) 
                             & (~ (IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_0__DOT__base__DOT__buf_Q))) 
                            & (IData)(vlTOPp->puzzle__DOT__Xnor3b_2_2__DOT__base__DOT__and0_out_Y)) 
                           | ((IData)(vlTOPp->puzzle__DOT__Xnor3_2_3__DOT__base__DOT__nor0_out_Y) 
                              & (~ (((IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_3__DOT__base__DOT__buf_Q)
                                      ? (IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_0__DOT__base__DOT__buf_Q)
                                      : (IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_1__DOT__base__DOT__buf_Q)) 
                                    | ((IData)(vlTOPp->puzzle__DOT__Xor2_2_8__DOT__base__DOT__or0_out_X) 
                                       & (IData)(vlTOPp->puzzle__DOT__Xand2b_2_13__DOT__base__DOT__and0_out_X)))))) 
                          | (IData)(vlTOPp->puzzle__DOT__Xnor2_2_47__DOT__base__DOT__nor0_out_Y)) 
                         | (((~ ((IData)(vlTOPp->puzzle__DOT__Xdfstp_2_1__DOT__base__DOT__buf_Q) 
                                 ^ (~ ((IData)(vlTOPp->puzzle__DOT__Xnor2_2_36__DOT__base__DOT__nor0_out_Y) 
                                       | ((IData)(vlTOPp->puzzle__DOT__Xnand2_2_32__DOT__base__DOT__nand0_out_Y) 
                                          & (IData)(vlTOPp->puzzle__DOT__Xnand2_2_30__DOT__base__DOT__nand0_out_Y)))))) 
                             & (IData)(vlTOPp->puzzle__DOT__Xnor3b_2_4__DOT__base__DOT__and0_out_Y)) 
                            | ((IData)(vlTOPp->puzzle__DOT__Xnor3b_2_3__DOT__base__DOT__and0_out_Y) 
                               & (~ ((~ (IData)(vlTOPp->puzzle__DOT__Xand3b_2_0__DOT__base__DOT__and0_out_X)) 
                                     & ((IData)(vlTOPp->puzzle__DOT__Xnand2b_2_9__DOT__base__DOT__or0_out_Y) 
                                        | (IData)(vlTOPp->puzzle__DOT__Xnor2_2_22__DOT__base__DOT__nor0_out_Y))))))) 
                        & (((IData)(vlTOPp->puzzle__DOT__Xnor3b_2_4__DOT__base__DOT__and0_out_Y) 
                            | (((IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_3__DOT__base__DOT__buf_Q) 
                                | (IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_1__DOT__base__DOT__buf_Q)) 
                               & ((IData)(vlTOPp->puzzle__DOT__Xand4b_2_0__DOT__base__DOT__and0_out_X) 
                                  | (IData)(vlTOPp->puzzle__DOT__Xa21oi_2_9__DOT__base__DOT__nor0_out_Y)))) 
                           | (IData)(vlTOPp->puzzle__DOT__Xa21oi_2_18__DOT__base__DOT__nor0_out_Y))));
}

VL_INLINE_OPT void Vpuzzle::_multiclk__TOP__142(Vpuzzle__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpuzzle::_multiclk__TOP__142\n"); );
    Vpuzzle* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->O[6U] = (((IData)(vlTOPp->puzzle__DOT__Xnand4_2_14__DOT__base__DOT__nand0_out_Y) 
                      & (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_83__DOT__base__DOT__buf_Q)) 
                     & ((((((~ ((IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_0__DOT__base__DOT__buf_Q) 
                                | ((IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_2__DOT__base__DOT__buf_Q) 
                                   & (IData)(vlTOPp->puzzle__DOT__Xand2b_2_12__DOT__base__DOT__and0_out_X)))) 
                            & (IData)(vlTOPp->puzzle__DOT__Xnor3b_2_2__DOT__base__DOT__and0_out_Y)) 
                           | ((IData)(vlTOPp->puzzle__DOT__Xnor3_2_3__DOT__base__DOT__nor0_out_Y) 
                              & (((IData)(vlTOPp->puzzle__DOT__Xnand2_2_27__DOT__base__DOT__nand0_out_Y) 
                                  | (IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_1__DOT__base__DOT__buf_Q)) 
                                 & (IData)(vlTOPp->puzzle__DOT__Xo21ai_2_5__DOT__base__DOT__nand0_out_Y)))) 
                          | (IData)(vlTOPp->puzzle__DOT__Xnor2_2_47__DOT__base__DOT__nor0_out_Y)) 
                         | (((~ ((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_49__DOT__base__DOT__buf_Q) 
                                 ^ (((IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_2__DOT__base__DOT__buf_Q) 
                                     & (IData)(vlTOPp->puzzle__DOT__Xnor2_2_37__DOT__base__DOT__nor0_out_Y)) 
                                    | ((IData)(vlTOPp->puzzle__DOT__Xnand2b_2_11__DOT__base__DOT__or0_out_Y) 
                                       & (IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_3__DOT__base__DOT__buf_Q))))) 
                             & (IData)(vlTOPp->puzzle__DOT__Xnor3b_2_4__DOT__base__DOT__and0_out_Y)) 
                            | ((IData)(vlTOPp->puzzle__DOT__Xnor3b_2_3__DOT__base__DOT__and0_out_Y) 
                               & (((IData)(vlTOPp->puzzle__DOT__Xnand2_2_19__DOT__base__DOT__nand0_out_Y) 
                                   | (IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_0__DOT__base__DOT__buf_Q)) 
                                  & ((IData)(vlTOPp->puzzle__DOT__Xnor2_2_22__DOT__base__DOT__nor0_out_Y) 
                                     | (IData)(vlTOPp->puzzle__DOT__Xnand2_2_20__DOT__base__DOT__nand0_out_Y)))))) 
                        & (((IData)(vlTOPp->puzzle__DOT__Xnor3b_2_4__DOT__base__DOT__and0_out_Y) 
                            | (((IData)(vlTOPp->puzzle__DOT__Xand4b_2_0__DOT__base__DOT__and0_out_X) 
                                | (IData)(vlTOPp->puzzle__DOT__Xa21oi_2_9__DOT__base__DOT__nor0_out_Y)) 
                               | (IData)(vlTOPp->puzzle__DOT__Xnor4b_2_0__DOT__base__DOT__nor0_out_Y))) 
                           | (IData)(vlTOPp->puzzle__DOT__Xa21oi_2_18__DOT__base__DOT__nor0_out_Y))));
}

VL_INLINE_OPT void Vpuzzle::_multiclk__TOP__143(Vpuzzle__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpuzzle::_multiclk__TOP__143\n"); );
    Vpuzzle* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->O[3U] = (((IData)(vlTOPp->puzzle__DOT__Xnand4_2_14__DOT__base__DOT__nand0_out_Y) 
                      & (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_83__DOT__base__DOT__buf_Q)) 
                     & ((((((~ ((((IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_0__DOT__base__DOT__buf_Q) 
                                  | (IData)(vlTOPp->puzzle__DOT__Xand2b_2_12__DOT__base__DOT__and0_out_X)) 
                                 | (~ ((IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_2__DOT__base__DOT__buf_Q) 
                                       | (IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_1__DOT__base__DOT__buf_Q)))) 
                                | ((IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_2__DOT__base__DOT__buf_Q) 
                                   & (IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_3__DOT__base__DOT__buf_Q)))) 
                            & (IData)(vlTOPp->puzzle__DOT__Xnor3b_2_2__DOT__base__DOT__and0_out_Y)) 
                           | ((IData)(vlTOPp->puzzle__DOT__Xnor3_2_3__DOT__base__DOT__nor0_out_Y) 
                              & ((((~ ((IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_3__DOT__base__DOT__buf_Q) 
                                       | ((IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_2__DOT__base__DOT__buf_Q) 
                                          & (IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_0__DOT__base__DOT__buf_Q)))) 
                                   | (~ ((IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_0__DOT__base__DOT__buf_Q) 
                                         | (IData)(vlTOPp->puzzle__DOT__Xand2b_2_13__DOT__base__DOT__and0_out_X)))) 
                                  & ((IData)(vlTOPp->puzzle__DOT__Xand2b_2_13__DOT__base__DOT__and0_out_X) 
                                     | (IData)(vlTOPp->puzzle__DOT__Xor2_2_8__DOT__base__DOT__or0_out_X))) 
                                 & (IData)(vlTOPp->puzzle__DOT__Xnand2b_2_12__DOT__base__DOT__or0_out_Y)))) 
                          | (IData)(vlTOPp->puzzle__DOT__Xnor2_2_47__DOT__base__DOT__nor0_out_Y)) 
                         | (((((((IData)(vlTOPp->puzzle__DOT__Xxnor2_2_27__DOT__base__DOT__xnor0_out_Y) 
                                 | (~ (IData)(vlTOPp->puzzle__DOT__Xnand2_2_32__DOT__base__DOT__nand0_out_Y))) 
                                | (~ ((IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_3__DOT__base__DOT__buf_Q) 
                                      | (IData)(vlTOPp->puzzle__DOT__Xand2b_2_15__DOT__base__DOT__and0_out_X)))) 
                               & ((IData)(vlTOPp->puzzle__DOT__Xnand2_2_28__DOT__base__DOT__nand0_out_Y) 
                                  | (IData)(vlTOPp->puzzle__DOT__Xand2b_2_15__DOT__base__DOT__and0_out_X))) 
                              ^ (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_50__DOT__base__DOT__buf_Q)) 
                             & (IData)(vlTOPp->puzzle__DOT__Xnor3b_2_4__DOT__base__DOT__and0_out_Y)) 
                            | ((IData)(vlTOPp->puzzle__DOT__Xnor3b_2_3__DOT__base__DOT__and0_out_Y) 
                               & (~ ((IData)(vlTOPp->puzzle__DOT__Xand3b_2_0__DOT__base__DOT__and0_out_X) 
                                     ^ (((IData)(vlTOPp->puzzle__DOT__Xnand2b_2_10__DOT__base__DOT__or0_out_Y) 
                                         & ((~ (IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_2__DOT__base__DOT__buf_Q)) 
                                            | (IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_3__DOT__base__DOT__buf_Q))) 
                                        | (IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_1__DOT__base__DOT__buf_Q))))))) 
                        & (((IData)(vlTOPp->puzzle__DOT__Xnor3b_2_4__DOT__base__DOT__and0_out_Y) 
                            | ((((IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_1__DOT__base__DOT__buf_Q) 
                                 & (IData)(vlTOPp->puzzle__DOT__Xa211oi_2_2__DOT__base__DOT__nor0_out_Y)) 
                                | (IData)(vlTOPp->puzzle__DOT__Xand4b_2_0__DOT__base__DOT__and0_out_X)) 
                               | (IData)(vlTOPp->puzzle__DOT__Xnor4b_2_0__DOT__base__DOT__nor0_out_Y))) 
                           | (IData)(vlTOPp->puzzle__DOT__Xa21oi_2_18__DOT__base__DOT__nor0_out_Y))));
}

VL_INLINE_OPT void Vpuzzle::_multiclk__TOP__144(Vpuzzle__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpuzzle::_multiclk__TOP__144\n"); );
    Vpuzzle* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->O[1U] = (((IData)(vlTOPp->puzzle__DOT__Xnand4_2_14__DOT__base__DOT__nand0_out_Y) 
                      & (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_83__DOT__base__DOT__buf_Q)) 
                     & ((((((((IData)(vlTOPp->puzzle__DOT__Xand3_2_15__DOT__base__DOT__and0_out_X) 
                              | (~ (IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_2__DOT__base__DOT__buf_Q))) 
                             & (~ (IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_0__DOT__base__DOT__buf_Q))) 
                            & (IData)(vlTOPp->puzzle__DOT__Xnor3b_2_2__DOT__base__DOT__and0_out_Y)) 
                           | ((IData)(vlTOPp->puzzle__DOT__Xnor3_2_3__DOT__base__DOT__nor0_out_Y) 
                              & (((IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_1__DOT__base__DOT__buf_Q) 
                                  & (~ (IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_0__DOT__base__DOT__buf_Q))) 
                                 & (IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_3__DOT__base__DOT__buf_Q)))) 
                          | (IData)(vlTOPp->puzzle__DOT__Xnor2_2_47__DOT__base__DOT__nor0_out_Y)) 
                         | (((~ ((((IData)(vlTOPp->puzzle__DOT__Xnor2_2_38__DOT__base__DOT__nor0_out_Y) 
                                   | (IData)(vlTOPp->puzzle__DOT__Xnor2_2_36__DOT__base__DOT__nor0_out_Y)) 
                                  | (IData)(vlTOPp->puzzle__DOT__Xnor2_2_37__DOT__base__DOT__nor0_out_Y)) 
                                 ^ ((IData)(vlTOPp->puzzle__DOT__Xor2_2_9__DOT__base__DOT__or0_out_X) 
                                    ^ (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_51__DOT__base__DOT__buf_Q)))) 
                             & (IData)(vlTOPp->puzzle__DOT__Xnor3b_2_4__DOT__base__DOT__and0_out_Y)) 
                            | ((IData)(vlTOPp->puzzle__DOT__Xnor3b_2_3__DOT__base__DOT__and0_out_Y) 
                               & ((((IData)(vlTOPp->puzzle__DOT__Xa31oi_2_0__DOT__base__DOT__nor0_out_Y) 
                                    | (IData)(vlTOPp->puzzle__DOT__Xand2b_2_7__DOT__base__DOT__and0_out_X)) 
                                   | (~ (((IData)(vlTOPp->puzzle__DOT__Xand2_2_6__DOT__base__DOT__and0_out_X) 
                                          | (IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_3__DOT__base__DOT__buf_Q)) 
                                         | (IData)(vlTOPp->puzzle__DOT__Xnor2_2_22__DOT__base__DOT__nor0_out_Y)))) 
                                  & (((((IData)(vlTOPp->puzzle__DOT__Xnand2b_2_8__DOT__base__DOT__or0_out_Y) 
                                        & (IData)(vlTOPp->puzzle__DOT__Xand2_2_6__DOT__base__DOT__and0_out_X)) 
                                       & (IData)(vlTOPp->puzzle__DOT__Xnand2b_2_9__DOT__base__DOT__or0_out_Y)) 
                                      | (IData)(vlTOPp->puzzle__DOT__Xa21oi_2_8__DOT__base__DOT__nor0_out_Y)) 
                                     | ((~ (IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_3__DOT__base__DOT__buf_Q)) 
                                        & (IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_2__DOT__base__DOT__buf_Q))))))) 
                        & (((IData)(vlTOPp->puzzle__DOT__Xnor3b_2_4__DOT__base__DOT__and0_out_Y) 
                            | (((IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_2__DOT__base__DOT__buf_Q) 
                                & (IData)(vlTOPp->puzzle__DOT__Xnor2_2_24__DOT__base__DOT__nor0_out_Y)) 
                               | (IData)(vlTOPp->puzzle__DOT__Xnor4b_2_0__DOT__base__DOT__nor0_out_Y))) 
                           | (IData)(vlTOPp->puzzle__DOT__Xa21oi_2_18__DOT__base__DOT__nor0_out_Y))));
}

VL_INLINE_OPT void Vpuzzle::_multiclk__TOP__145(Vpuzzle__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpuzzle::_multiclk__TOP__145\n"); );
    Vpuzzle* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->puzzle__DOT__Xxnor2_2_5__DOT__base__DOT__xnor0_out_Y 
        = (1U & (~ ((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_45__DOT__base__DOT__buf_Q) 
                    ^ (IData)(vlTOPp->puzzle__DOT__Xxnor2_2_4__DOT__base__DOT__xnor0_out_Y))));
    vlTOPp->puzzle__DOT__Xnand2_2_16__DOT__base__DOT__nand0_out_Y 
        = (1U & (~ ((IData)(vlTOPp->puzzle__DOT__Xxnor2_2_4__DOT__base__DOT__xnor0_out_Y) 
                    & (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_45__DOT__base__DOT__buf_Q))));
    vlTOPp->puzzle__DOT__Xa21oi_2_4__DOT__base__DOT__nor0_out_Y 
        = (1U & (~ ((IData)(vlTOPp->puzzle__DOT__Xor3_2_5__DOT__base__DOT__or0_out_X) 
                    | ((IData)(vlTOPp->puzzle__DOT__Xnand2b_2_6__DOT__base__DOT__or0_out_Y) 
                       & (IData)(vlTOPp->puzzle__DOT__Xnand2_2_16__DOT__base__DOT__nand0_out_Y)))));
    vlTOPp->puzzle__DOT__Xnor2_2_21__DOT__base__DOT__nor0_out_Y 
        = (1U & (~ ((IData)(vlTOPp->puzzle__DOT__Xa21oi_2_4__DOT__base__DOT__nor0_out_Y) 
                    | (((IData)(vlTOPp->puzzle__DOT__Xor3_2_5__DOT__base__DOT__or0_out_X) 
                        & (IData)(vlTOPp->puzzle__DOT__Xnand2b_2_6__DOT__base__DOT__or0_out_Y)) 
                       & (IData)(vlTOPp->puzzle__DOT__Xnand2_2_16__DOT__base__DOT__nand0_out_Y)))));
}

VL_INLINE_OPT void Vpuzzle::_multiclk__TOP__146(Vpuzzle__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpuzzle::_multiclk__TOP__146\n"); );
    Vpuzzle* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->puzzle__DOT__Xxnor2_2_0__DOT__base__DOT__xnor0_out_Y 
        = (1U & (~ ((~ ((IData)(vlTOPp->puzzle__DOT__Xxor2_2_0__DOT__base__DOT__xor0_out_X) 
                        & (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_43__DOT__base__DOT__buf_Q))) 
                    ^ (IData)(vlTOPp->puzzle__DOT__Xxor2_2_1__DOT__base__DOT__xor0_out_X))));
}

VL_INLINE_OPT void Vpuzzle::_multiclk__TOP__147(Vpuzzle__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpuzzle::_multiclk__TOP__147\n"); );
    Vpuzzle* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->puzzle__DOT__Xxnor2_2_8__DOT__base__DOT__xnor0_out_Y 
        = (1U & (~ ((IData)(vlTOPp->puzzle__DOT__Xxnor2_2_5__DOT__base__DOT__xnor0_out_Y) 
                    ^ (IData)(vlTOPp->puzzle__DOT__Xo2bb2a_2_0__DOT__base__DOT__and0_out_X))));
}

VL_INLINE_OPT void Vpuzzle::_multiclk__TOP__148(Vpuzzle__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpuzzle::_multiclk__TOP__148\n"); );
    Vpuzzle* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->puzzle__DOT__Xnand2_2_9__DOT__base__DOT__nand0_out_Y 
        = (1U & (~ ((IData)(vlTOPp->puzzle__DOT__Xnor2_2_9__DOT__base__DOT__nor0_out_Y) 
                    & (IData)(vlTOPp->puzzle__DOT__Xxnor2_2_0__DOT__base__DOT__xnor0_out_Y))));
    vlTOPp->puzzle__DOT__Xnand2_2_6__DOT__base__DOT__nand0_out_Y 
        = (1U & (~ ((IData)(vlTOPp->puzzle__DOT__Xnor2_2_8__DOT__base__DOT__nor0_out_Y) 
                    & (IData)(vlTOPp->puzzle__DOT__Xxnor2_2_0__DOT__base__DOT__xnor0_out_Y))));
    vlTOPp->puzzle__DOT__Xnand2_2_1__DOT__base__DOT__nand0_out_Y 
        = (1U & (~ ((IData)(vlTOPp->puzzle__DOT__Xand2b_2_0__DOT__base__DOT__and0_out_X) 
                    & (IData)(vlTOPp->puzzle__DOT__Xxnor2_2_0__DOT__base__DOT__xnor0_out_Y))));
    vlTOPp->puzzle__DOT__Xxor2_2_3__DOT__base__DOT__xor0_out_X 
        = ((IData)(vlTOPp->puzzle__DOT__Xnor2_2_0__DOT__base__DOT__nor0_out_Y) 
           ^ (IData)(vlTOPp->puzzle__DOT__Xxnor2_2_0__DOT__base__DOT__xnor0_out_Y));
    vlTOPp->puzzle__DOT__Xxnor2_2_2__DOT__base__DOT__xnor0_out_Y 
        = (1U & (~ ((IData)(vlTOPp->puzzle__DOT__Xxnor2_2_0__DOT__base__DOT__xnor0_out_Y) 
                    ^ (IData)(vlTOPp->puzzle__DOT__Xnor2_2_0__DOT__base__DOT__nor0_out_Y))));
    vlTOPp->puzzle__DOT__Xa32o_2_0__DOT__base__DOT__or0_out_X 
        = (((IData)(vlTOPp->puzzle__DOT__Xxnor2_2_0__DOT__base__DOT__xnor0_out_Y) 
            & (IData)(vlTOPp->puzzle__DOT__Xnor2_2_0__DOT__base__DOT__nor0_out_Y)) 
           | (((IData)(vlTOPp->puzzle__DOT__Xxor2_2_1__DOT__base__DOT__xor0_out_X) 
               & (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_43__DOT__base__DOT__buf_Q)) 
              & (IData)(vlTOPp->puzzle__DOT__Xxor2_2_0__DOT__base__DOT__xor0_out_X)));
    vlTOPp->puzzle__DOT__Xor2_2_2__DOT__base__DOT__or0_out_X 
        = ((IData)(vlTOPp->puzzle__DOT__Xnor2_2_1__DOT__base__DOT__nor0_out_Y) 
           | (IData)(vlTOPp->puzzle__DOT__Xxor2_2_3__DOT__base__DOT__xor0_out_X));
    vlTOPp->puzzle__DOT__Xor2_2_0__DOT__base__DOT__or0_out_X 
        = ((IData)(vlTOPp->puzzle__DOT__Xand2b_2_0__DOT__base__DOT__and0_out_X) 
           | (IData)(vlTOPp->puzzle__DOT__Xxor2_2_3__DOT__base__DOT__xor0_out_X));
    vlTOPp->puzzle__DOT__Xor3_2_0__DOT__base__DOT__or0_out_X 
        = (((IData)(vlTOPp->puzzle__DOT__Xxnor2_2_2__DOT__base__DOT__xnor0_out_Y) 
            | (IData)(vlTOPp->puzzle__DOT__Xnor2_2_8__DOT__base__DOT__nor0_out_Y)) 
           | (IData)(vlTOPp->puzzle__DOT__Xnor2_2_1__DOT__base__DOT__nor0_out_Y));
    vlTOPp->puzzle__DOT__Xnand2_2_0__DOT__base__DOT__nand0_out_Y 
        = (1U & (~ ((IData)(vlTOPp->puzzle__DOT__Xxnor2_2_2__DOT__base__DOT__xnor0_out_Y) 
                    & (IData)(vlTOPp->puzzle__DOT__Xor2_2_1__DOT__base__DOT__or0_out_X))));
    vlTOPp->puzzle__DOT__Xnand2_2_5__DOT__base__DOT__nand0_out_Y 
        = (1U & (~ ((IData)(vlTOPp->puzzle__DOT__Xnor2_2_1__DOT__base__DOT__nor0_out_Y) 
                    & (IData)(vlTOPp->puzzle__DOT__Xxnor2_2_2__DOT__base__DOT__xnor0_out_Y))));
    vlTOPp->puzzle__DOT__Xnor2_2_2__DOT__base__DOT__nor0_out_Y 
        = (1U & (~ ((IData)(vlTOPp->puzzle__DOT__Xxnor2_2_2__DOT__base__DOT__xnor0_out_Y) 
                    | (IData)(vlTOPp->puzzle__DOT__Xnor2_2_9__DOT__base__DOT__nor0_out_Y))));
    vlTOPp->puzzle__DOT__Xnor2_2_10__DOT__base__DOT__nor0_out_Y 
        = (1U & (~ ((IData)(vlTOPp->puzzle__DOT__Xxnor2_2_2__DOT__base__DOT__xnor0_out_Y) 
                    | (IData)(vlTOPp->puzzle__DOT__Xnor2_2_1__DOT__base__DOT__nor0_out_Y))));
    vlTOPp->puzzle__DOT__Xnand2b_2_0__DOT__base__DOT__or0_out_Y 
        = (1U & ((~ (IData)(vlTOPp->puzzle__DOT__Xor2_2_0__DOT__base__DOT__or0_out_X)) 
                 | (IData)(vlTOPp->puzzle__DOT__Xand2_2_0__DOT__base__DOT__and0_out_X)));
    vlTOPp->puzzle__DOT__Xor3_2_2__DOT__base__DOT__or0_out_X 
        = (((IData)(vlTOPp->puzzle__DOT__Xnor2_2_1__DOT__base__DOT__nor0_out_Y) 
            | (IData)(vlTOPp->puzzle__DOT__Xnor2_2_8__DOT__base__DOT__nor0_out_Y)) 
           | (IData)(vlTOPp->puzzle__DOT__Xnor2_2_2__DOT__base__DOT__nor0_out_Y));
}

VL_INLINE_OPT void Vpuzzle::_multiclk__TOP__149(Vpuzzle__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpuzzle::_multiclk__TOP__149\n"); );
    Vpuzzle* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->puzzle__DOT__Xxor2_2_2__DOT__base__DOT__xor0_out_X 
        = ((IData)(vlTOPp->puzzle__DOT__Xxnor2_2_8__DOT__base__DOT__xnor0_out_Y) 
           ^ (IData)(vlTOPp->puzzle__DOT__Xa32o_2_0__DOT__base__DOT__or0_out_X));
    vlTOPp->puzzle__DOT__Xxnor2_2_9__DOT__base__DOT__xnor0_out_Y 
        = (1U & (~ ((IData)(vlTOPp->puzzle__DOT__Xa32o_2_0__DOT__base__DOT__or0_out_X) 
                    ^ (IData)(vlTOPp->puzzle__DOT__Xxnor2_2_8__DOT__base__DOT__xnor0_out_Y))));
    vlTOPp->puzzle__DOT__Xa21o_2_8__DOT__base__DOT__or0_out_X 
        = (1U & (((IData)(vlTOPp->puzzle__DOT__Xa32o_2_0__DOT__base__DOT__or0_out_X) 
                  & (~ ((IData)(vlTOPp->puzzle__DOT__Xo2bb2a_2_0__DOT__base__DOT__and0_out_X) 
                        & (IData)(vlTOPp->puzzle__DOT__Xxnor2_2_5__DOT__base__DOT__xnor0_out_Y)))) 
                 | (~ ((IData)(vlTOPp->puzzle__DOT__Xxnor2_2_5__DOT__base__DOT__xnor0_out_Y) 
                       | (IData)(vlTOPp->puzzle__DOT__Xo2bb2a_2_0__DOT__base__DOT__and0_out_X)))));
    vlTOPp->puzzle__DOT__Xnor2_2_11__DOT__base__DOT__nor0_out_Y 
        = (1U & (~ ((IData)(vlTOPp->puzzle__DOT__Xxor2_2_2__DOT__base__DOT__xor0_out_X) 
                    | (IData)(vlTOPp->puzzle__DOT__Xor2_2_0__DOT__base__DOT__or0_out_X))));
    vlTOPp->puzzle__DOT__Xnor2_2_5__DOT__base__DOT__nor0_out_Y 
        = (1U & (~ ((IData)(vlTOPp->puzzle__DOT__Xnand2_2_6__DOT__base__DOT__nand0_out_Y) 
                    | (IData)(vlTOPp->puzzle__DOT__Xxor2_2_2__DOT__base__DOT__xor0_out_X))));
    vlTOPp->puzzle__DOT__Xo21a_2_0__DOT__base__DOT__and0_out_X 
        = (((IData)(vlTOPp->puzzle__DOT__Xor2_2_2__DOT__base__DOT__or0_out_X) 
            | (IData)(vlTOPp->puzzle__DOT__Xnor2_2_8__DOT__base__DOT__nor0_out_Y)) 
           & (IData)(vlTOPp->puzzle__DOT__Xxor2_2_2__DOT__base__DOT__xor0_out_X));
    vlTOPp->puzzle__DOT__Xnor2_2_28__DOT__base__DOT__nor0_out_Y 
        = (1U & (~ ((IData)(vlTOPp->puzzle__DOT__Xxor2_2_2__DOT__base__DOT__xor0_out_X) 
                    | (IData)(vlTOPp->puzzle__DOT__Xnand2_2_1__DOT__base__DOT__nand0_out_Y))));
    vlTOPp->puzzle__DOT__Xand3_2_1__DOT__base__DOT__and0_out_X 
        = (((IData)(vlTOPp->puzzle__DOT__Xnand2_2_0__DOT__base__DOT__nand0_out_Y) 
            & (IData)(vlTOPp->puzzle__DOT__Xxnor2_2_9__DOT__base__DOT__xnor0_out_Y)) 
           & (~ (IData)(vlTOPp->puzzle__DOT__Xnor2_2_9__DOT__base__DOT__nor0_out_Y)));
    vlTOPp->puzzle__DOT__Xor2_2_4__DOT__base__DOT__or0_out_X 
        = ((IData)(vlTOPp->puzzle__DOT__Xor2_2_0__DOT__base__DOT__or0_out_X) 
           | (IData)(vlTOPp->puzzle__DOT__Xxnor2_2_9__DOT__base__DOT__xnor0_out_Y));
    vlTOPp->puzzle__DOT__Xnor2_2_12__DOT__base__DOT__nor0_out_Y 
        = (1U & (~ ((IData)(vlTOPp->puzzle__DOT__Xxnor2_2_9__DOT__base__DOT__xnor0_out_Y) 
                    | (IData)(vlTOPp->puzzle__DOT__Xnor2_2_10__DOT__base__DOT__nor0_out_Y))));
    vlTOPp->puzzle__DOT__Xor2_2_3__DOT__base__DOT__or0_out_X 
        = ((IData)(vlTOPp->puzzle__DOT__Xnor2_2_1__DOT__base__DOT__nor0_out_Y) 
           | (IData)(vlTOPp->puzzle__DOT__Xxnor2_2_9__DOT__base__DOT__xnor0_out_Y));
    vlTOPp->puzzle__DOT__Xand3_2_0__DOT__base__DOT__and0_out_X 
        = (((IData)(vlTOPp->puzzle__DOT__Xand2_2_0__DOT__base__DOT__and0_out_X) 
            & (IData)(vlTOPp->puzzle__DOT__Xxnor2_2_9__DOT__base__DOT__xnor0_out_Y)) 
           & (IData)(vlTOPp->puzzle__DOT__Xxnor2_2_2__DOT__base__DOT__xnor0_out_Y));
    vlTOPp->puzzle__DOT__Xnand2_2_11__DOT__base__DOT__nand0_out_Y 
        = (1U & (~ ((IData)(vlTOPp->puzzle__DOT__Xnand2_2_5__DOT__base__DOT__nand0_out_Y) 
                    & (IData)(vlTOPp->puzzle__DOT__Xxnor2_2_9__DOT__base__DOT__xnor0_out_Y))));
    vlTOPp->puzzle__DOT__Xxor2_2_8__DOT__base__DOT__xor0_out_X 
        = ((IData)(vlTOPp->puzzle__DOT__Xnor2_2_21__DOT__base__DOT__nor0_out_Y) 
           ^ (IData)(vlTOPp->puzzle__DOT__Xa21o_2_8__DOT__base__DOT__or0_out_X));
    vlTOPp->puzzle__DOT__Xa21o_2_5__DOT__base__DOT__or0_out_X 
        = (((IData)(vlTOPp->puzzle__DOT__Xa21o_2_8__DOT__base__DOT__or0_out_X) 
            & (IData)(vlTOPp->puzzle__DOT__Xnor2_2_21__DOT__base__DOT__nor0_out_Y)) 
           | (IData)(vlTOPp->puzzle__DOT__Xa21oi_2_4__DOT__base__DOT__nor0_out_Y));
    vlTOPp->puzzle__DOT__Xnand2_2_3__DOT__base__DOT__nand0_out_Y 
        = (1U & (~ ((IData)(vlTOPp->puzzle__DOT__Xnand2_2_11__DOT__base__DOT__nand0_out_Y) 
                    & (IData)(vlTOPp->puzzle__DOT__Xxor2_2_8__DOT__base__DOT__xor0_out_X))));
    vlTOPp->puzzle__DOT__Xa21oi_2_0__DOT__base__DOT__nor0_out_Y 
        = (1U & (~ ((IData)(vlTOPp->puzzle__DOT__Xxor2_2_8__DOT__base__DOT__xor0_out_X) 
                    | ((IData)(vlTOPp->puzzle__DOT__Xxor2_2_2__DOT__base__DOT__xor0_out_X) 
                       & (IData)(vlTOPp->puzzle__DOT__Xnor2_2_10__DOT__base__DOT__nor0_out_Y)))));
    vlTOPp->puzzle__DOT__Xo31ai_2_0__DOT__base__DOT__nand0_out_Y 
        = (1U & (~ ((IData)(vlTOPp->puzzle__DOT__Xxor2_2_8__DOT__base__DOT__xor0_out_X) 
                    & (((IData)(vlTOPp->puzzle__DOT__Xnor2_2_2__DOT__base__DOT__nor0_out_Y) 
                        | (IData)(vlTOPp->puzzle__DOT__Xxnor2_2_9__DOT__base__DOT__xnor0_out_Y)) 
                       | (~ (IData)(vlTOPp->puzzle__DOT__Xor2_2_2__DOT__base__DOT__or0_out_X))))));
    vlTOPp->puzzle__DOT__Xxor2_2_6__DOT__base__DOT__xor0_out_X 
        = ((IData)(vlTOPp->puzzle__DOT__Xand2b_2_5__DOT__base__DOT__and0_out_X) 
           ^ (IData)(vlTOPp->puzzle__DOT__Xa21o_2_5__DOT__base__DOT__or0_out_X));
    vlTOPp->puzzle__DOT__Xxnor2_2_10__DOT__base__DOT__xnor0_out_Y 
        = (1U & (~ ((IData)(vlTOPp->puzzle__DOT__Xa21o_2_5__DOT__base__DOT__or0_out_X) 
                    ^ (IData)(vlTOPp->puzzle__DOT__Xand2b_2_5__DOT__base__DOT__and0_out_X))));
    vlTOPp->puzzle__DOT__Xa21oi_2_7__DOT__base__DOT__nor0_out_Y 
        = (1U & (~ ((IData)(vlTOPp->puzzle__DOT__Xand4bb_2_0__DOT__base__DOT__and0_out_X) 
                    | ((IData)(vlTOPp->puzzle__DOT__Xa21o_2_5__DOT__base__DOT__or0_out_X) 
                       & (IData)(vlTOPp->puzzle__DOT__Xo22ai_2_0__DOT__base__DOT__or0_out_Y)))));
    vlTOPp->puzzle__DOT__Xxnor2_2_7__DOT__base__DOT__xnor0_out_Y 
        = (1U & (~ ((IData)(vlTOPp->puzzle__DOT__Xa21oi_2_7__DOT__base__DOT__nor0_out_Y) 
                    ^ (IData)(vlTOPp->puzzle__DOT__Xa21o_2_4__DOT__base__DOT__or0_out_X))));
    vlTOPp->puzzle__DOT__Xxor2_2_5__DOT__base__DOT__xor0_out_X 
        = ((IData)(vlTOPp->puzzle__DOT__Xa21o_2_4__DOT__base__DOT__or0_out_X) 
           ^ (IData)(vlTOPp->puzzle__DOT__Xa21oi_2_7__DOT__base__DOT__nor0_out_Y));
    vlTOPp->puzzle__DOT__Xnor2_2_20__DOT__base__DOT__nor0_out_Y 
        = (1U & (~ ((~ ((IData)(vlTOPp->puzzle__DOT__Xa21oi_2_7__DOT__base__DOT__nor0_out_Y) 
                        | (IData)(vlTOPp->puzzle__DOT__Xa21o_2_4__DOT__base__DOT__or0_out_X))) 
                    | ((((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_15__DOT__base__DOT__buf_Q) 
                         | (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_16__DOT__base__DOT__buf_Q)) 
                        & (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_17__DOT__base__DOT__buf_Q)) 
                       & (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_18__DOT__base__DOT__buf_Q)))));
    vlTOPp->puzzle__DOT__Xo211a_2_3__DOT__base__DOT__and0_out_X 
        = ((((((IData)(vlTOPp->puzzle__DOT__Xxor2_2_6__DOT__base__DOT__xor0_out_X) 
               & (~ (((((IData)(vlTOPp->puzzle__DOT__Xxnor2_2_9__DOT__base__DOT__xnor0_out_Y) 
                        & (IData)(vlTOPp->puzzle__DOT__Xnand2_2_9__DOT__base__DOT__nand0_out_Y)) 
                       | (IData)(vlTOPp->puzzle__DOT__Xxor2_2_8__DOT__base__DOT__xor0_out_X)) 
                      | (IData)(vlTOPp->puzzle__DOT__Xo21a_2_0__DOT__base__DOT__and0_out_X)) 
                     & (~ ((IData)(vlTOPp->puzzle__DOT__Xnor2_2_5__DOT__base__DOT__nor0_out_Y) 
                           & (IData)(vlTOPp->puzzle__DOT__Xxor2_2_8__DOT__base__DOT__xor0_out_X)))))) 
              | (((~ ((IData)(vlTOPp->puzzle__DOT__Xxor2_2_8__DOT__base__DOT__xor0_out_X) 
                      & ((IData)(vlTOPp->puzzle__DOT__Xand3_2_1__DOT__base__DOT__and0_out_X) 
                         | (IData)(vlTOPp->puzzle__DOT__Xnor2_2_12__DOT__base__DOT__nor0_out_Y)))) 
                  & (IData)(vlTOPp->puzzle__DOT__Xxnor2_2_10__DOT__base__DOT__xnor0_out_Y)) 
                 & (((((IData)(vlTOPp->puzzle__DOT__Xand2b_2_0__DOT__base__DOT__and0_out_X) 
                       & (IData)(vlTOPp->puzzle__DOT__Xxnor2_2_0__DOT__base__DOT__xnor0_out_Y)) 
                      & (IData)(vlTOPp->puzzle__DOT__Xxor2_2_8__DOT__base__DOT__xor0_out_X)) 
                     | (IData)(vlTOPp->puzzle__DOT__Xand3_2_1__DOT__base__DOT__and0_out_X)) 
                    | (IData)(vlTOPp->puzzle__DOT__Xnor2_2_12__DOT__base__DOT__nor0_out_Y)))) 
             | (IData)(vlTOPp->puzzle__DOT__Xxor2_2_5__DOT__base__DOT__xor0_out_X)) 
            & (~ (((IData)(vlTOPp->puzzle__DOT__Xxor2_2_5__DOT__base__DOT__xor0_out_X) 
                   & (((IData)(vlTOPp->puzzle__DOT__Xxor2_2_8__DOT__base__DOT__xor0_out_X)
                        ? (((IData)(vlTOPp->puzzle__DOT__Xnand2_2_5__DOT__base__DOT__nand0_out_Y) 
                            & (IData)(vlTOPp->puzzle__DOT__Xnor2_2_12__DOT__base__DOT__nor0_out_Y)) 
                           | ((IData)(vlTOPp->puzzle__DOT__Xor2_2_2__DOT__base__DOT__or0_out_X) 
                              & (IData)(vlTOPp->puzzle__DOT__Xxnor2_2_9__DOT__base__DOT__xnor0_out_Y)))
                        : ((((IData)(vlTOPp->puzzle__DOT__Xnor2_2_9__DOT__base__DOT__nor0_out_Y) 
                             | (IData)(vlTOPp->puzzle__DOT__Xxor2_2_2__DOT__base__DOT__xor0_out_X)) 
                            & (IData)(vlTOPp->puzzle__DOT__Xor2_2_0__DOT__base__DOT__or0_out_X)) 
                           | (IData)(vlTOPp->puzzle__DOT__Xnor2_2_11__DOT__base__DOT__nor0_out_Y))) 
                      | (IData)(vlTOPp->puzzle__DOT__Xxor2_2_6__DOT__base__DOT__xor0_out_X))) 
                  & ((((IData)(vlTOPp->puzzle__DOT__Xxor2_2_8__DOT__base__DOT__xor0_out_X) 
                       & (IData)(vlTOPp->puzzle__DOT__Xor2_2_0__DOT__base__DOT__or0_out_X)) 
                      | (IData)(vlTOPp->puzzle__DOT__Xxnor2_2_10__DOT__base__DOT__xnor0_out_Y)) 
                     | ((IData)(vlTOPp->puzzle__DOT__Xnand2b_2_0__DOT__base__DOT__or0_out_Y)
                         ? (IData)(vlTOPp->puzzle__DOT__Xxnor2_2_9__DOT__base__DOT__xnor0_out_Y)
                         : (IData)(vlTOPp->puzzle__DOT__Xnor2_2_12__DOT__base__DOT__nor0_out_Y)))))) 
           & (IData)(vlTOPp->puzzle__DOT__Xnor2_2_20__DOT__base__DOT__nor0_out_Y));
    vlTOPp->puzzle__DOT__Xo211a_2_2__DOT__base__DOT__and0_out_X 
        = (((((((~ ((~ ((IData)(vlTOPp->puzzle__DOT__Xnand2_2_6__DOT__base__DOT__nand0_out_Y) 
                        & (((IData)(vlTOPp->puzzle__DOT__Xxor2_2_2__DOT__base__DOT__xor0_out_X) 
                            | (IData)(vlTOPp->puzzle__DOT__Xnor2_2_8__DOT__base__DOT__nor0_out_Y)) 
                           | (IData)(vlTOPp->puzzle__DOT__Xxor2_2_3__DOT__base__DOT__xor0_out_X)))) 
                    & (IData)(vlTOPp->puzzle__DOT__Xxor2_2_8__DOT__base__DOT__xor0_out_X))) 
                & (IData)(vlTOPp->puzzle__DOT__Xxor2_2_6__DOT__base__DOT__xor0_out_X)) 
               & (~ ((IData)(vlTOPp->puzzle__DOT__Xa21oi_2_0__DOT__base__DOT__nor0_out_Y) 
                     & (~ ((IData)(vlTOPp->puzzle__DOT__Xor2_2_3__DOT__base__DOT__or0_out_X) 
                           & (IData)(vlTOPp->puzzle__DOT__Xxnor2_2_2__DOT__base__DOT__xnor0_out_Y)))))) 
              | (IData)(vlTOPp->puzzle__DOT__Xxor2_2_5__DOT__base__DOT__xor0_out_X)) 
             | (((((IData)(vlTOPp->puzzle__DOT__Xxor2_2_8__DOT__base__DOT__xor0_out_X) 
                   | (~ ((IData)(vlTOPp->puzzle__DOT__Xnand2_2_6__DOT__base__DOT__nand0_out_Y) 
                         | (IData)(vlTOPp->puzzle__DOT__Xxnor2_2_9__DOT__base__DOT__xnor0_out_Y)))) 
                  | (IData)(vlTOPp->puzzle__DOT__Xand3_2_0__DOT__base__DOT__and0_out_X)) 
                 & (IData)(vlTOPp->puzzle__DOT__Xxnor2_2_10__DOT__base__DOT__xnor0_out_Y)) 
                & (~ (((IData)(vlTOPp->puzzle__DOT__Xxor2_2_2__DOT__base__DOT__xor0_out_X)
                        ? (IData)(vlTOPp->puzzle__DOT__Xor3_2_2__DOT__base__DOT__or0_out_X)
                        : (IData)(vlTOPp->puzzle__DOT__Xor3_2_0__DOT__base__DOT__or0_out_X)) 
                      & (IData)(vlTOPp->puzzle__DOT__Xxor2_2_8__DOT__base__DOT__xor0_out_X))))) 
            & (IData)(vlTOPp->puzzle__DOT__Xnor2_2_20__DOT__base__DOT__nor0_out_Y)) 
           & ((((((IData)(vlTOPp->puzzle__DOT__Xnor2_2_12__DOT__base__DOT__nor0_out_Y) 
                  | (IData)(vlTOPp->puzzle__DOT__Xnand2_2_3__DOT__base__DOT__nand0_out_Y)) 
                 & (IData)(vlTOPp->puzzle__DOT__Xxnor2_2_10__DOT__base__DOT__xnor0_out_Y)) 
                & (((IData)(vlTOPp->puzzle__DOT__Xnor2_2_28__DOT__base__DOT__nor0_out_Y) 
                    | (IData)(vlTOPp->puzzle__DOT__Xxor2_2_8__DOT__base__DOT__xor0_out_X)) 
                   | (IData)(vlTOPp->puzzle__DOT__Xnor2_2_11__DOT__base__DOT__nor0_out_Y))) 
               | (IData)(vlTOPp->puzzle__DOT__Xxnor2_2_7__DOT__base__DOT__xnor0_out_Y)) 
              | (~ ((IData)(vlTOPp->puzzle__DOT__Xxnor2_2_10__DOT__base__DOT__xnor0_out_Y) 
                    | ((IData)(vlTOPp->puzzle__DOT__Xnand2_2_3__DOT__base__DOT__nand0_out_Y) 
                       & (((IData)(vlTOPp->puzzle__DOT__Xnor2_2_12__DOT__base__DOT__nor0_out_Y) 
                           | (IData)(vlTOPp->puzzle__DOT__Xxor2_2_8__DOT__base__DOT__xor0_out_X)) 
                          | ((((IData)(vlTOPp->puzzle__DOT__Xxor2_2_3__DOT__base__DOT__xor0_out_X) 
                               | (IData)(vlTOPp->puzzle__DOT__Xnor2_2_8__DOT__base__DOT__nor0_out_Y)) 
                              & (IData)(vlTOPp->puzzle__DOT__Xxnor2_2_9__DOT__base__DOT__xnor0_out_Y)) 
                             & (IData)(vlTOPp->puzzle__DOT__Xnand2_2_6__DOT__base__DOT__nand0_out_Y))))))));
    vlTOPp->puzzle__DOT__Xo211a_2_4__DOT__base__DOT__and0_out_X 
        = ((((~ (((((IData)(vlTOPp->puzzle__DOT__Xo21a_2_0__DOT__base__DOT__and0_out_X) 
                    | (IData)(vlTOPp->puzzle__DOT__Xor3_2_2__DOT__base__DOT__or0_out_X)) 
                   | (IData)(vlTOPp->puzzle__DOT__Xxnor2_2_10__DOT__base__DOT__xnor0_out_Y)) 
                  | (IData)(vlTOPp->puzzle__DOT__Xxor2_2_8__DOT__base__DOT__xor0_out_X)) 
                 & (((((IData)(vlTOPp->puzzle__DOT__Xand3_2_0__DOT__base__DOT__and0_out_X) 
                       | (IData)(vlTOPp->puzzle__DOT__Xxor2_2_8__DOT__base__DOT__xor0_out_X)) 
                      | (~ ((IData)(vlTOPp->puzzle__DOT__Xor3_2_0__DOT__base__DOT__or0_out_X) 
                            | ((IData)(vlTOPp->puzzle__DOT__Xxnor2_2_9__DOT__base__DOT__xnor0_out_Y) 
                               & (IData)(vlTOPp->puzzle__DOT__Xand2_2_0__DOT__base__DOT__and0_out_X))))) 
                     & ((~ ((IData)(vlTOPp->puzzle__DOT__Xxor2_2_2__DOT__base__DOT__xor0_out_X) 
                            | (IData)(vlTOPp->puzzle__DOT__Xnor2_2_10__DOT__base__DOT__nor0_out_Y))) 
                        | (IData)(vlTOPp->puzzle__DOT__Xo31ai_2_0__DOT__base__DOT__nand0_out_Y))) 
                    | (IData)(vlTOPp->puzzle__DOT__Xxor2_2_6__DOT__base__DOT__xor0_out_X)))) 
             | (IData)(vlTOPp->puzzle__DOT__Xxor2_2_5__DOT__base__DOT__xor0_out_X)) 
            & ((((IData)(vlTOPp->puzzle__DOT__Xxor2_2_8__DOT__base__DOT__xor0_out_X) 
                 & ((~ ((IData)(vlTOPp->puzzle__DOT__Xxnor2_2_9__DOT__base__DOT__xnor0_out_Y) 
                        | (IData)(vlTOPp->puzzle__DOT__Xnand2_2_5__DOT__base__DOT__nand0_out_Y))) 
                    | (~ ((((IData)(vlTOPp->puzzle__DOT__Xxor2_2_2__DOT__base__DOT__xor0_out_X) 
                            | (IData)(vlTOPp->puzzle__DOT__Xnor2_2_8__DOT__base__DOT__nor0_out_Y)) 
                           | (IData)(vlTOPp->puzzle__DOT__Xor2_2_2__DOT__base__DOT__or0_out_X)) 
                          | (IData)(vlTOPp->puzzle__DOT__Xxor2_2_6__DOT__base__DOT__xor0_out_X))))) 
                | (((IData)(vlTOPp->puzzle__DOT__Xnor2_2_28__DOT__base__DOT__nor0_out_Y) 
                    | (IData)(vlTOPp->puzzle__DOT__Xxor2_2_6__DOT__base__DOT__xor0_out_X)) 
                   & (~ ((IData)(vlTOPp->puzzle__DOT__Xxor2_2_8__DOT__base__DOT__xor0_out_X) 
                         | ((IData)(vlTOPp->puzzle__DOT__Xxor2_2_6__DOT__base__DOT__xor0_out_X) 
                            & (~ ((IData)(vlTOPp->puzzle__DOT__Xnor2_2_5__DOT__base__DOT__nor0_out_Y) 
                                  | (~ ((IData)(vlTOPp->puzzle__DOT__Xxnor2_2_9__DOT__base__DOT__xnor0_out_Y) 
                                        | (IData)(vlTOPp->puzzle__DOT__Xnand2_2_9__DOT__base__DOT__nand0_out_Y)))))))))) 
               | (IData)(vlTOPp->puzzle__DOT__Xxnor2_2_7__DOT__base__DOT__xnor0_out_Y))) 
           & (IData)(vlTOPp->puzzle__DOT__Xnor2_2_20__DOT__base__DOT__nor0_out_Y));
    vlTOPp->puzzle__DOT__Xo211a_2_5__DOT__base__DOT__and0_out_X 
        = (((((IData)(vlTOPp->puzzle__DOT__Xxor2_2_6__DOT__base__DOT__xor0_out_X)
               ? ((IData)(vlTOPp->puzzle__DOT__Xxor2_2_8__DOT__base__DOT__xor0_out_X)
                   ? ((((IData)(vlTOPp->puzzle__DOT__Xnand2_2_0__DOT__base__DOT__nand0_out_Y) 
                        & (IData)(vlTOPp->puzzle__DOT__Xxor2_2_2__DOT__base__DOT__xor0_out_X)) 
                       & (IData)(vlTOPp->puzzle__DOT__Xnand2_2_1__DOT__base__DOT__nand0_out_Y)) 
                      | (IData)(vlTOPp->puzzle__DOT__Xand2_2_0__DOT__base__DOT__and0_out_X))
                   : (((IData)(vlTOPp->puzzle__DOT__Xnand2_2_11__DOT__base__DOT__nand0_out_Y) 
                       | (IData)(vlTOPp->puzzle__DOT__Xnor2_2_8__DOT__base__DOT__nor0_out_Y)) 
                      & (IData)(vlTOPp->puzzle__DOT__Xor2_2_3__DOT__base__DOT__or0_out_X)))
               : ((((IData)(vlTOPp->puzzle__DOT__Xand3_2_0__DOT__base__DOT__and0_out_X) 
                    | (IData)(vlTOPp->puzzle__DOT__Xxor2_2_8__DOT__base__DOT__xor0_out_X)) 
                   | (~ ((IData)(vlTOPp->puzzle__DOT__Xxnor2_2_9__DOT__base__DOT__xnor0_out_Y) 
                         | (IData)(vlTOPp->puzzle__DOT__Xor3_2_0__DOT__base__DOT__or0_out_X)))) 
                  & ((IData)(vlTOPp->puzzle__DOT__Xo31ai_2_0__DOT__base__DOT__nand0_out_Y) 
                     | (~ ((IData)(vlTOPp->puzzle__DOT__Xnor2_2_10__DOT__base__DOT__nor0_out_Y) 
                           | (IData)(vlTOPp->puzzle__DOT__Xnand2_2_11__DOT__base__DOT__nand0_out_Y)))))) 
             | (IData)(vlTOPp->puzzle__DOT__Xxor2_2_5__DOT__base__DOT__xor0_out_X)) 
            & ((((IData)(vlTOPp->puzzle__DOT__Xxor2_2_6__DOT__base__DOT__xor0_out_X) 
                 & (((((IData)(vlTOPp->puzzle__DOT__Xnand2b_2_0__DOT__base__DOT__or0_out_Y) 
                       | (IData)(vlTOPp->puzzle__DOT__Xxor2_2_2__DOT__base__DOT__xor0_out_X)) 
                      & ((IData)(vlTOPp->puzzle__DOT__Xnor2_2_4__DOT__base__DOT__nor0_out_Y) 
                         | (IData)(vlTOPp->puzzle__DOT__Xor2_2_4__DOT__base__DOT__or0_out_X))) 
                     & (IData)(vlTOPp->puzzle__DOT__Xa21oi_2_0__DOT__base__DOT__nor0_out_Y)) 
                    | (((IData)(vlTOPp->puzzle__DOT__Xor2_2_4__DOT__base__DOT__or0_out_X) 
                        & (IData)(vlTOPp->puzzle__DOT__Xxor2_2_8__DOT__base__DOT__xor0_out_X)) 
                       & (IData)(vlTOPp->puzzle__DOT__Xnand2_2_11__DOT__base__DOT__nand0_out_Y)))) 
                | (IData)(vlTOPp->puzzle__DOT__Xxnor2_2_7__DOT__base__DOT__xnor0_out_Y)) 
               | ((((IData)(vlTOPp->puzzle__DOT__Xxor2_2_8__DOT__base__DOT__xor0_out_X) 
                    | ((((IData)(vlTOPp->puzzle__DOT__Xnand2_2_1__DOT__base__DOT__nand0_out_Y) 
                         & (IData)(vlTOPp->puzzle__DOT__Xnand2_2_0__DOT__base__DOT__nand0_out_Y)) 
                        | (IData)(vlTOPp->puzzle__DOT__Xxor2_2_2__DOT__base__DOT__xor0_out_X)) 
                       & (IData)(vlTOPp->puzzle__DOT__Xor2_2_4__DOT__base__DOT__or0_out_X))) 
                   & ((~ ((IData)(vlTOPp->puzzle__DOT__Xxor2_2_8__DOT__base__DOT__xor0_out_X) 
                          & ((~ (IData)(vlTOPp->puzzle__DOT__Xor2_2_2__DOT__base__DOT__or0_out_X)) 
                             | (IData)(vlTOPp->puzzle__DOT__Xxor2_2_2__DOT__base__DOT__xor0_out_X)))) 
                      | (IData)(vlTOPp->puzzle__DOT__Xnor2_2_2__DOT__base__DOT__nor0_out_Y))) 
                  & (IData)(vlTOPp->puzzle__DOT__Xxnor2_2_10__DOT__base__DOT__xnor0_out_Y)))) 
           & (IData)(vlTOPp->puzzle__DOT__Xnor2_2_20__DOT__base__DOT__nor0_out_Y));
    vlTOPp->puzzle__DOT__Xnor4_2_0__DOT__base__DOT__nor0_out_Y 
        = (1U & (~ ((((IData)(vlTOPp->puzzle__DOT__Xo211a_2_3__DOT__base__DOT__and0_out_X) 
                      | (IData)(vlTOPp->puzzle__DOT__Xo211a_2_2__DOT__base__DOT__and0_out_X)) 
                     | (IData)(vlTOPp->puzzle__DOT__Xo211a_2_5__DOT__base__DOT__and0_out_X)) 
                    | (IData)(vlTOPp->puzzle__DOT__Xo211a_2_4__DOT__base__DOT__and0_out_X))));
    vlTOPp->puzzle__DOT__Xand4bb_2_7__DOT__base__DOT__and0_out_X 
        = (((~ ((IData)(vlTOPp->puzzle__DOT__Xo211a_2_3__DOT__base__DOT__and0_out_X) 
                | (IData)(vlTOPp->puzzle__DOT__Xo211a_2_4__DOT__base__DOT__and0_out_X))) 
            & (IData)(vlTOPp->puzzle__DOT__Xo211a_2_5__DOT__base__DOT__and0_out_X)) 
           & (IData)(vlTOPp->puzzle__DOT__Xo211a_2_2__DOT__base__DOT__and0_out_X));
    vlTOPp->puzzle__DOT__Xand4bb_2_8__DOT__base__DOT__and0_out_X 
        = (((~ ((IData)(vlTOPp->puzzle__DOT__Xo211a_2_2__DOT__base__DOT__and0_out_X) 
                | (IData)(vlTOPp->puzzle__DOT__Xo211a_2_4__DOT__base__DOT__and0_out_X))) 
            & (IData)(vlTOPp->puzzle__DOT__Xo211a_2_5__DOT__base__DOT__and0_out_X)) 
           & (IData)(vlTOPp->puzzle__DOT__Xo211a_2_3__DOT__base__DOT__and0_out_X));
    vlTOPp->puzzle__DOT__Xor4b_2_0__DOT__base__DOT__or0_out_X 
        = (1U & ((((~ (IData)(vlTOPp->puzzle__DOT__Xo211a_2_2__DOT__base__DOT__and0_out_X)) 
                   | (IData)(vlTOPp->puzzle__DOT__Xo211a_2_4__DOT__base__DOT__and0_out_X)) 
                  | (IData)(vlTOPp->puzzle__DOT__Xo211a_2_5__DOT__base__DOT__and0_out_X)) 
                 | (IData)(vlTOPp->puzzle__DOT__Xo211a_2_3__DOT__base__DOT__and0_out_X)));
    vlTOPp->puzzle__DOT__Xor4b_2_1__DOT__base__DOT__or0_out_X 
        = (1U & ((((~ (IData)(vlTOPp->puzzle__DOT__Xo211a_2_3__DOT__base__DOT__and0_out_X)) 
                   | (IData)(vlTOPp->puzzle__DOT__Xo211a_2_4__DOT__base__DOT__and0_out_X)) 
                  | (IData)(vlTOPp->puzzle__DOT__Xo211a_2_5__DOT__base__DOT__and0_out_X)) 
                 | (IData)(vlTOPp->puzzle__DOT__Xo211a_2_2__DOT__base__DOT__and0_out_X)));
    vlTOPp->puzzle__DOT__Xor4b_2_2__DOT__base__DOT__or0_out_X 
        = (1U & ((((~ (IData)(vlTOPp->puzzle__DOT__Xo211a_2_4__DOT__base__DOT__and0_out_X)) 
                   | (IData)(vlTOPp->puzzle__DOT__Xo211a_2_5__DOT__base__DOT__and0_out_X)) 
                  | (IData)(vlTOPp->puzzle__DOT__Xo211a_2_2__DOT__base__DOT__and0_out_X)) 
                 | (IData)(vlTOPp->puzzle__DOT__Xo211a_2_3__DOT__base__DOT__and0_out_X)));
    vlTOPp->puzzle__DOT__Xor4b_2_3__DOT__base__DOT__or0_out_X 
        = (1U & ((((~ (IData)(vlTOPp->puzzle__DOT__Xo211a_2_5__DOT__base__DOT__and0_out_X)) 
                   | (IData)(vlTOPp->puzzle__DOT__Xo211a_2_4__DOT__base__DOT__and0_out_X)) 
                  | (IData)(vlTOPp->puzzle__DOT__Xo211a_2_2__DOT__base__DOT__and0_out_X)) 
                 | (IData)(vlTOPp->puzzle__DOT__Xo211a_2_3__DOT__base__DOT__and0_out_X)));
    vlTOPp->puzzle__DOT__Xand4b_2_1__DOT__base__DOT__and0_out_X 
        = ((((~ (IData)(vlTOPp->puzzle__DOT__Xo211a_2_5__DOT__base__DOT__and0_out_X)) 
             & (IData)(vlTOPp->puzzle__DOT__Xo211a_2_4__DOT__base__DOT__and0_out_X)) 
            & (IData)(vlTOPp->puzzle__DOT__Xo211a_2_2__DOT__base__DOT__and0_out_X)) 
           & (IData)(vlTOPp->puzzle__DOT__Xo211a_2_3__DOT__base__DOT__and0_out_X));
}

void Vpuzzle::_eval(Vpuzzle__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpuzzle::_eval\n"); );
    Vpuzzle* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if ((((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_40__DOT__base__DOT__CLK_delayed) 
          & (~ (IData)(vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfrtp_2_40__DOT__base__DOT__CLK_delayed))) 
         | ((IData)(vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_40__DOT__base__DOT__RESET) 
            & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfrtp_2_40__DOT__base__DOT__RESET))))) {
        vlTOPp->_sequent__TOP__1(vlSymsp);
    }
    if ((((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_30__DOT__base__DOT__CLK_delayed) 
          & (~ (IData)(vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfrtp_2_30__DOT__base__DOT__CLK_delayed))) 
         | ((IData)(vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_30__DOT__base__DOT__RESET) 
            & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfrtp_2_30__DOT__base__DOT__RESET))))) {
        vlTOPp->_sequent__TOP__2(vlSymsp);
    }
    if ((((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_41__DOT__base__DOT__CLK_delayed) 
          & (~ (IData)(vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfrtp_2_41__DOT__base__DOT__CLK_delayed))) 
         | ((IData)(vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_41__DOT__base__DOT__RESET) 
            & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfrtp_2_41__DOT__base__DOT__RESET))))) {
        vlTOPp->_sequent__TOP__3(vlSymsp);
    }
    if ((((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_42__DOT__base__DOT__CLK_delayed) 
          & (~ (IData)(vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfrtp_2_42__DOT__base__DOT__CLK_delayed))) 
         | ((IData)(vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_42__DOT__base__DOT__RESET) 
            & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfrtp_2_42__DOT__base__DOT__RESET))))) {
        vlTOPp->_sequent__TOP__4(vlSymsp);
    }
    if ((((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_31__DOT__base__DOT__CLK_delayed) 
          & (~ (IData)(vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfrtp_2_31__DOT__base__DOT__CLK_delayed))) 
         | ((IData)(vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_31__DOT__base__DOT__RESET) 
            & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfrtp_2_31__DOT__base__DOT__RESET))))) {
        vlTOPp->_sequent__TOP__5(vlSymsp);
    }
    if ((((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_32__DOT__base__DOT__CLK_delayed) 
          & (~ (IData)(vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfrtp_2_32__DOT__base__DOT__CLK_delayed))) 
         | ((IData)(vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_32__DOT__base__DOT__RESET) 
            & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfrtp_2_32__DOT__base__DOT__RESET))))) {
        vlTOPp->_sequent__TOP__6(vlSymsp);
    }
    if ((((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_33__DOT__base__DOT__CLK_delayed) 
          & (~ (IData)(vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfrtp_2_33__DOT__base__DOT__CLK_delayed))) 
         | ((IData)(vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_33__DOT__base__DOT__RESET) 
            & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfrtp_2_33__DOT__base__DOT__RESET))))) {
        vlTOPp->_sequent__TOP__7(vlSymsp);
    }
    if ((((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_34__DOT__base__DOT__CLK_delayed) 
          & (~ (IData)(vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfrtp_2_34__DOT__base__DOT__CLK_delayed))) 
         | ((IData)(vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_34__DOT__base__DOT__RESET) 
            & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfrtp_2_34__DOT__base__DOT__RESET))))) {
        vlTOPp->_sequent__TOP__8(vlSymsp);
    }
    if ((((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_35__DOT__base__DOT__CLK_delayed) 
          & (~ (IData)(vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfrtp_2_35__DOT__base__DOT__CLK_delayed))) 
         | ((IData)(vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_35__DOT__base__DOT__RESET) 
            & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfrtp_2_35__DOT__base__DOT__RESET))))) {
        vlTOPp->_sequent__TOP__9(vlSymsp);
    }
    if ((((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_36__DOT__base__DOT__CLK_delayed) 
          & (~ (IData)(vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfrtp_2_36__DOT__base__DOT__CLK_delayed))) 
         | ((IData)(vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_36__DOT__base__DOT__RESET) 
            & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfrtp_2_36__DOT__base__DOT__RESET))))) {
        vlTOPp->_sequent__TOP__10(vlSymsp);
    }
    if ((((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_37__DOT__base__DOT__CLK_delayed) 
          & (~ (IData)(vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfrtp_2_37__DOT__base__DOT__CLK_delayed))) 
         | ((IData)(vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_37__DOT__base__DOT__RESET) 
            & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfrtp_2_37__DOT__base__DOT__RESET))))) {
        vlTOPp->_sequent__TOP__11(vlSymsp);
    }
    if ((((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_27__DOT__base__DOT__CLK_delayed) 
          & (~ (IData)(vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfrtp_2_27__DOT__base__DOT__CLK_delayed))) 
         | ((IData)(vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_27__DOT__base__DOT__RESET) 
            & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfrtp_2_27__DOT__base__DOT__RESET))))) {
        vlTOPp->_sequent__TOP__12(vlSymsp);
    }
    if ((((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_38__DOT__base__DOT__CLK_delayed) 
          & (~ (IData)(vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfrtp_2_38__DOT__base__DOT__CLK_delayed))) 
         | ((IData)(vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_38__DOT__base__DOT__RESET) 
            & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfrtp_2_38__DOT__base__DOT__RESET))))) {
        vlTOPp->_sequent__TOP__13(vlSymsp);
    }
    if ((((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_39__DOT__base__DOT__CLK_delayed) 
          & (~ (IData)(vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfrtp_2_39__DOT__base__DOT__CLK_delayed))) 
         | ((IData)(vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_39__DOT__base__DOT__RESET) 
            & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfrtp_2_39__DOT__base__DOT__RESET))))) {
        vlTOPp->_sequent__TOP__14(vlSymsp);
    }
    if ((((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_29__DOT__base__DOT__CLK_delayed) 
          & (~ (IData)(vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfrtp_2_29__DOT__base__DOT__CLK_delayed))) 
         | ((IData)(vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_29__DOT__base__DOT__RESET) 
            & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfrtp_2_29__DOT__base__DOT__RESET))))) {
        vlTOPp->_sequent__TOP__15(vlSymsp);
    }
    if ((((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_28__DOT__base__DOT__CLK_delayed) 
          & (~ (IData)(vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfrtp_2_28__DOT__base__DOT__CLK_delayed))) 
         | ((IData)(vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_28__DOT__base__DOT__RESET) 
            & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfrtp_2_28__DOT__base__DOT__RESET))))) {
        vlTOPp->_sequent__TOP__16(vlSymsp);
    }
    if ((((IData)(vlTOPp->puzzle__DOT__Xdfstp_2_0__DOT__base__DOT__CLK_delayed) 
          & (~ (IData)(vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfstp_2_0__DOT__base__DOT__CLK_delayed))) 
         | ((IData)(vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfstp_2_0__DOT__base__DOT__SET) 
            & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfstp_2_0__DOT__base__DOT__SET))))) {
        vlTOPp->_sequent__TOP__17(vlSymsp);
    }
    if ((((IData)(vlTOPp->puzzle__DOT__Xdfstp_2_2__DOT__base__DOT__CLK_delayed) 
          & (~ (IData)(vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfstp_2_2__DOT__base__DOT__CLK_delayed))) 
         | ((IData)(vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfstp_2_2__DOT__base__DOT__SET) 
            & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfstp_2_2__DOT__base__DOT__SET))))) {
        vlTOPp->_sequent__TOP__18(vlSymsp);
    }
    if ((((IData)(vlTOPp->puzzle__DOT__Xdfstp_2_3__DOT__base__DOT__CLK_delayed) 
          & (~ (IData)(vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfstp_2_3__DOT__base__DOT__CLK_delayed))) 
         | ((IData)(vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfstp_2_3__DOT__base__DOT__SET) 
            & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfstp_2_3__DOT__base__DOT__SET))))) {
        vlTOPp->_sequent__TOP__19(vlSymsp);
    }
    if ((((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_49__DOT__base__DOT__CLK_delayed) 
          & (~ (IData)(vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfrtp_2_49__DOT__base__DOT__CLK_delayed))) 
         | ((IData)(vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_49__DOT__base__DOT__RESET) 
            & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfrtp_2_49__DOT__base__DOT__RESET))))) {
        vlTOPp->_sequent__TOP__20(vlSymsp);
    }
    if ((((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_80__DOT__base__DOT__CLK_delayed) 
          & (~ (IData)(vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfrtp_2_80__DOT__base__DOT__CLK_delayed))) 
         | ((IData)(vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_80__DOT__base__DOT__RESET) 
            & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfrtp_2_80__DOT__base__DOT__RESET))))) {
        vlTOPp->_sequent__TOP__21(vlSymsp);
    }
    if ((((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_70__DOT__base__DOT__CLK_delayed) 
          & (~ (IData)(vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfrtp_2_70__DOT__base__DOT__CLK_delayed))) 
         | ((IData)(vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_70__DOT__base__DOT__RESET) 
            & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfrtp_2_70__DOT__base__DOT__RESET))))) {
        vlTOPp->_sequent__TOP__22(vlSymsp);
    }
    if ((((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_60__DOT__base__DOT__CLK_delayed) 
          & (~ (IData)(vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfrtp_2_60__DOT__base__DOT__CLK_delayed))) 
         | ((IData)(vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_60__DOT__base__DOT__RESET) 
            & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfrtp_2_60__DOT__base__DOT__RESET))))) {
        vlTOPp->_sequent__TOP__23(vlSymsp);
    }
    if ((((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_71__DOT__base__DOT__CLK_delayed) 
          & (~ (IData)(vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfrtp_2_71__DOT__base__DOT__CLK_delayed))) 
         | ((IData)(vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_71__DOT__base__DOT__RESET) 
            & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfrtp_2_71__DOT__base__DOT__RESET))))) {
        vlTOPp->_sequent__TOP__24(vlSymsp);
    }
    if ((((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_61__DOT__base__DOT__CLK_delayed) 
          & (~ (IData)(vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfrtp_2_61__DOT__base__DOT__CLK_delayed))) 
         | ((IData)(vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_61__DOT__base__DOT__RESET) 
            & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfrtp_2_61__DOT__base__DOT__RESET))))) {
        vlTOPp->_sequent__TOP__25(vlSymsp);
    }
    if ((((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_72__DOT__base__DOT__CLK_delayed) 
          & (~ (IData)(vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfrtp_2_72__DOT__base__DOT__CLK_delayed))) 
         | ((IData)(vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_72__DOT__base__DOT__RESET) 
            & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfrtp_2_72__DOT__base__DOT__RESET))))) {
        vlTOPp->_sequent__TOP__26(vlSymsp);
    }
    if ((((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_62__DOT__base__DOT__CLK_delayed) 
          & (~ (IData)(vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfrtp_2_62__DOT__base__DOT__CLK_delayed))) 
         | ((IData)(vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_62__DOT__base__DOT__RESET) 
            & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfrtp_2_62__DOT__base__DOT__RESET))))) {
        vlTOPp->_sequent__TOP__27(vlSymsp);
    }
    if ((((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_52__DOT__base__DOT__CLK_delayed) 
          & (~ (IData)(vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfrtp_2_52__DOT__base__DOT__CLK_delayed))) 
         | ((IData)(vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_52__DOT__base__DOT__RESET) 
            & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfrtp_2_52__DOT__base__DOT__RESET))))) {
        vlTOPp->_sequent__TOP__28(vlSymsp);
    }
    if ((((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_63__DOT__base__DOT__CLK_delayed) 
          & (~ (IData)(vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfrtp_2_63__DOT__base__DOT__CLK_delayed))) 
         | ((IData)(vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_63__DOT__base__DOT__RESET) 
            & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfrtp_2_63__DOT__base__DOT__RESET))))) {
        vlTOPp->_sequent__TOP__29(vlSymsp);
    }
    if ((((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_75__DOT__base__DOT__CLK_delayed) 
          & (~ (IData)(vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfrtp_2_75__DOT__base__DOT__CLK_delayed))) 
         | ((IData)(vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_75__DOT__base__DOT__RESET) 
            & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfrtp_2_75__DOT__base__DOT__RESET))))) {
        vlTOPp->_sequent__TOP__30(vlSymsp);
    }
    if ((((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_64__DOT__base__DOT__CLK_delayed) 
          & (~ (IData)(vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfrtp_2_64__DOT__base__DOT__CLK_delayed))) 
         | ((IData)(vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_64__DOT__base__DOT__RESET) 
            & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfrtp_2_64__DOT__base__DOT__RESET))))) {
        vlTOPp->_sequent__TOP__31(vlSymsp);
    }
    if ((((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_53__DOT__base__DOT__CLK_delayed) 
          & (~ (IData)(vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfrtp_2_53__DOT__base__DOT__CLK_delayed))) 
         | ((IData)(vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_53__DOT__base__DOT__RESET) 
            & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfrtp_2_53__DOT__base__DOT__RESET))))) {
        vlTOPp->_sequent__TOP__32(vlSymsp);
    }
    if ((((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_10__DOT__base__DOT__CLK_delayed) 
          & (~ (IData)(vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfrtp_2_10__DOT__base__DOT__CLK_delayed))) 
         | ((IData)(vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_10__DOT__base__DOT__RESET) 
            & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfrtp_2_10__DOT__base__DOT__RESET))))) {
        vlTOPp->_sequent__TOP__33(vlSymsp);
    }
    if ((((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_65__DOT__base__DOT__CLK_delayed) 
          & (~ (IData)(vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfrtp_2_65__DOT__base__DOT__CLK_delayed))) 
         | ((IData)(vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_65__DOT__base__DOT__RESET) 
            & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfrtp_2_65__DOT__base__DOT__RESET))))) {
        vlTOPp->_sequent__TOP__34(vlSymsp);
    }
    if ((((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_76__DOT__base__DOT__CLK_delayed) 
          & (~ (IData)(vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfrtp_2_76__DOT__base__DOT__CLK_delayed))) 
         | ((IData)(vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_76__DOT__base__DOT__RESET) 
            & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfrtp_2_76__DOT__base__DOT__RESET))))) {
        vlTOPp->_sequent__TOP__35(vlSymsp);
    }
    if ((((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_54__DOT__base__DOT__CLK_delayed) 
          & (~ (IData)(vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfrtp_2_54__DOT__base__DOT__CLK_delayed))) 
         | ((IData)(vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_54__DOT__base__DOT__RESET) 
            & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfrtp_2_54__DOT__base__DOT__RESET))))) {
        vlTOPp->_sequent__TOP__36(vlSymsp);
    }
    if ((((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_11__DOT__base__DOT__CLK_delayed) 
          & (~ (IData)(vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfrtp_2_11__DOT__base__DOT__CLK_delayed))) 
         | ((IData)(vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_11__DOT__base__DOT__RESET) 
            & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfrtp_2_11__DOT__base__DOT__RESET))))) {
        vlTOPp->_sequent__TOP__37(vlSymsp);
    }
    if ((((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_66__DOT__base__DOT__CLK_delayed) 
          & (~ (IData)(vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfrtp_2_66__DOT__base__DOT__CLK_delayed))) 
         | ((IData)(vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_66__DOT__base__DOT__RESET) 
            & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfrtp_2_66__DOT__base__DOT__RESET))))) {
        vlTOPp->_sequent__TOP__38(vlSymsp);
    }
    if ((((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_77__DOT__base__DOT__CLK_delayed) 
          & (~ (IData)(vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfrtp_2_77__DOT__base__DOT__CLK_delayed))) 
         | ((IData)(vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_77__DOT__base__DOT__RESET) 
            & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfrtp_2_77__DOT__base__DOT__RESET))))) {
        vlTOPp->_sequent__TOP__39(vlSymsp);
    }
    if ((((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_55__DOT__base__DOT__CLK_delayed) 
          & (~ (IData)(vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfrtp_2_55__DOT__base__DOT__CLK_delayed))) 
         | ((IData)(vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_55__DOT__base__DOT__RESET) 
            & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfrtp_2_55__DOT__base__DOT__RESET))))) {
        vlTOPp->_sequent__TOP__40(vlSymsp);
    }
    if ((((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_12__DOT__base__DOT__CLK_delayed) 
          & (~ (IData)(vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfrtp_2_12__DOT__base__DOT__CLK_delayed))) 
         | ((IData)(vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_12__DOT__base__DOT__RESET) 
            & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfrtp_2_12__DOT__base__DOT__RESET))))) {
        vlTOPp->_sequent__TOP__41(vlSymsp);
    }
    if ((((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_67__DOT__base__DOT__CLK_delayed) 
          & (~ (IData)(vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfrtp_2_67__DOT__base__DOT__CLK_delayed))) 
         | ((IData)(vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_67__DOT__base__DOT__RESET) 
            & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfrtp_2_67__DOT__base__DOT__RESET))))) {
        vlTOPp->_sequent__TOP__42(vlSymsp);
    }
    if ((((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_56__DOT__base__DOT__CLK_delayed) 
          & (~ (IData)(vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfrtp_2_56__DOT__base__DOT__CLK_delayed))) 
         | ((IData)(vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_56__DOT__base__DOT__RESET) 
            & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfrtp_2_56__DOT__base__DOT__RESET))))) {
        vlTOPp->_sequent__TOP__43(vlSymsp);
    }
    if ((((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_78__DOT__base__DOT__CLK_delayed) 
          & (~ (IData)(vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfrtp_2_78__DOT__base__DOT__CLK_delayed))) 
         | ((IData)(vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_78__DOT__base__DOT__RESET) 
            & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfrtp_2_78__DOT__base__DOT__RESET))))) {
        vlTOPp->_sequent__TOP__44(vlSymsp);
    }
    if ((((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_13__DOT__base__DOT__CLK_delayed) 
          & (~ (IData)(vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfrtp_2_13__DOT__base__DOT__CLK_delayed))) 
         | ((IData)(vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_13__DOT__base__DOT__RESET) 
            & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfrtp_2_13__DOT__base__DOT__RESET))))) {
        vlTOPp->_sequent__TOP__45(vlSymsp);
    }
    if ((((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_68__DOT__base__DOT__CLK_delayed) 
          & (~ (IData)(vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfrtp_2_68__DOT__base__DOT__CLK_delayed))) 
         | ((IData)(vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_68__DOT__base__DOT__RESET) 
            & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfrtp_2_68__DOT__base__DOT__RESET))))) {
        vlTOPp->_sequent__TOP__46(vlSymsp);
    }
    if ((((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_57__DOT__base__DOT__CLK_delayed) 
          & (~ (IData)(vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfrtp_2_57__DOT__base__DOT__CLK_delayed))) 
         | ((IData)(vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_57__DOT__base__DOT__RESET) 
            & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfrtp_2_57__DOT__base__DOT__RESET))))) {
        vlTOPp->_sequent__TOP__47(vlSymsp);
    }
    if ((((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_79__DOT__base__DOT__CLK_delayed) 
          & (~ (IData)(vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfrtp_2_79__DOT__base__DOT__CLK_delayed))) 
         | ((IData)(vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_79__DOT__base__DOT__RESET) 
            & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfrtp_2_79__DOT__base__DOT__RESET))))) {
        vlTOPp->_sequent__TOP__48(vlSymsp);
    }
    if ((((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_14__DOT__base__DOT__CLK_delayed) 
          & (~ (IData)(vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfrtp_2_14__DOT__base__DOT__CLK_delayed))) 
         | ((IData)(vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_14__DOT__base__DOT__RESET) 
            & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfrtp_2_14__DOT__base__DOT__RESET))))) {
        vlTOPp->_sequent__TOP__49(vlSymsp);
    }
    if ((((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_58__DOT__base__DOT__CLK_delayed) 
          & (~ (IData)(vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfrtp_2_58__DOT__base__DOT__CLK_delayed))) 
         | ((IData)(vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_58__DOT__base__DOT__RESET) 
            & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfrtp_2_58__DOT__base__DOT__RESET))))) {
        vlTOPp->_sequent__TOP__50(vlSymsp);
    }
    if ((((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_69__DOT__base__DOT__CLK_delayed) 
          & (~ (IData)(vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfrtp_2_69__DOT__base__DOT__CLK_delayed))) 
         | ((IData)(vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_69__DOT__base__DOT__RESET) 
            & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfrtp_2_69__DOT__base__DOT__RESET))))) {
        vlTOPp->_sequent__TOP__51(vlSymsp);
    }
    if ((((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_59__DOT__base__DOT__CLK_delayed) 
          & (~ (IData)(vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfrtp_2_59__DOT__base__DOT__CLK_delayed))) 
         | ((IData)(vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_59__DOT__base__DOT__RESET) 
            & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfrtp_2_59__DOT__base__DOT__RESET))))) {
        vlTOPp->_sequent__TOP__52(vlSymsp);
    }
    if ((((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_0__DOT__base__DOT__CLK_delayed) 
          & (~ (IData)(vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfrtp_2_0__DOT__base__DOT__CLK_delayed))) 
         | ((IData)(vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_0__DOT__base__DOT__RESET) 
            & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfrtp_2_0__DOT__base__DOT__RESET))))) {
        vlTOPp->_sequent__TOP__53(vlSymsp);
    }
    if ((((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_1__DOT__base__DOT__CLK_delayed) 
          & (~ (IData)(vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfrtp_2_1__DOT__base__DOT__CLK_delayed))) 
         | ((IData)(vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_1__DOT__base__DOT__RESET) 
            & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfrtp_2_1__DOT__base__DOT__RESET))))) {
        vlTOPp->_sequent__TOP__54(vlSymsp);
    }
    if ((((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_2__DOT__base__DOT__CLK_delayed) 
          & (~ (IData)(vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfrtp_2_2__DOT__base__DOT__CLK_delayed))) 
         | ((IData)(vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_2__DOT__base__DOT__RESET) 
            & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfrtp_2_2__DOT__base__DOT__RESET))))) {
        vlTOPp->_sequent__TOP__55(vlSymsp);
    }
    if ((((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_3__DOT__base__DOT__CLK_delayed) 
          & (~ (IData)(vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfrtp_2_3__DOT__base__DOT__CLK_delayed))) 
         | ((IData)(vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_3__DOT__base__DOT__RESET) 
            & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfrtp_2_3__DOT__base__DOT__RESET))))) {
        vlTOPp->_sequent__TOP__56(vlSymsp);
    }
    if ((((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_4__DOT__base__DOT__CLK_delayed) 
          & (~ (IData)(vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfrtp_2_4__DOT__base__DOT__CLK_delayed))) 
         | ((IData)(vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_4__DOT__base__DOT__RESET) 
            & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfrtp_2_4__DOT__base__DOT__RESET))))) {
        vlTOPp->_sequent__TOP__57(vlSymsp);
    }
    if ((((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_5__DOT__base__DOT__CLK_delayed) 
          & (~ (IData)(vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfrtp_2_5__DOT__base__DOT__CLK_delayed))) 
         | ((IData)(vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_5__DOT__base__DOT__RESET) 
            & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfrtp_2_5__DOT__base__DOT__RESET))))) {
        vlTOPp->_sequent__TOP__58(vlSymsp);
    }
    if ((((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_6__DOT__base__DOT__CLK_delayed) 
          & (~ (IData)(vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfrtp_2_6__DOT__base__DOT__CLK_delayed))) 
         | ((IData)(vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_6__DOT__base__DOT__RESET) 
            & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfrtp_2_6__DOT__base__DOT__RESET))))) {
        vlTOPp->_sequent__TOP__59(vlSymsp);
    }
    if ((((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_7__DOT__base__DOT__CLK_delayed) 
          & (~ (IData)(vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfrtp_2_7__DOT__base__DOT__CLK_delayed))) 
         | ((IData)(vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_7__DOT__base__DOT__RESET) 
            & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfrtp_2_7__DOT__base__DOT__RESET))))) {
        vlTOPp->_sequent__TOP__60(vlSymsp);
    }
    if ((((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_8__DOT__base__DOT__CLK_delayed) 
          & (~ (IData)(vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfrtp_2_8__DOT__base__DOT__CLK_delayed))) 
         | ((IData)(vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_8__DOT__base__DOT__RESET) 
            & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfrtp_2_8__DOT__base__DOT__RESET))))) {
        vlTOPp->_sequent__TOP__61(vlSymsp);
    }
    if ((((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_9__DOT__base__DOT__CLK_delayed) 
          & (~ (IData)(vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfrtp_2_9__DOT__base__DOT__CLK_delayed))) 
         | ((IData)(vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_9__DOT__base__DOT__RESET) 
            & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfrtp_2_9__DOT__base__DOT__RESET))))) {
        vlTOPp->_sequent__TOP__62(vlSymsp);
    }
    if ((((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_73__DOT__base__DOT__CLK_delayed) 
          & (~ (IData)(vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfrtp_2_73__DOT__base__DOT__CLK_delayed))) 
         | ((IData)(vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_73__DOT__base__DOT__RESET) 
            & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfrtp_2_73__DOT__base__DOT__RESET))))) {
        vlTOPp->_sequent__TOP__63(vlSymsp);
    }
    if ((((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_74__DOT__base__DOT__CLK_delayed) 
          & (~ (IData)(vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfrtp_2_74__DOT__base__DOT__CLK_delayed))) 
         | ((IData)(vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_74__DOT__base__DOT__RESET) 
            & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfrtp_2_74__DOT__base__DOT__RESET))))) {
        vlTOPp->_sequent__TOP__64(vlSymsp);
    }
    if ((((IData)(vlTOPp->puzzle__DOT__Xdfstp_2_1__DOT__base__DOT__CLK_delayed) 
          & (~ (IData)(vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfstp_2_1__DOT__base__DOT__CLK_delayed))) 
         | ((IData)(vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfstp_2_1__DOT__base__DOT__SET) 
            & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfstp_2_1__DOT__base__DOT__SET))))) {
        vlTOPp->_sequent__TOP__65(vlSymsp);
    }
    if ((((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_51__DOT__base__DOT__CLK_delayed) 
          & (~ (IData)(vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfrtp_2_51__DOT__base__DOT__CLK_delayed))) 
         | ((IData)(vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_51__DOT__base__DOT__RESET) 
            & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfrtp_2_51__DOT__base__DOT__RESET))))) {
        vlTOPp->_sequent__TOP__66(vlSymsp);
    }
    if ((((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_48__DOT__base__DOT__CLK_delayed) 
          & (~ (IData)(vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfrtp_2_48__DOT__base__DOT__CLK_delayed))) 
         | ((IData)(vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_48__DOT__base__DOT__RESET) 
            & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfrtp_2_48__DOT__base__DOT__RESET))))) {
        vlTOPp->_sequent__TOP__67(vlSymsp);
    }
    if ((((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_50__DOT__base__DOT__CLK_delayed) 
          & (~ (IData)(vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfrtp_2_50__DOT__base__DOT__CLK_delayed))) 
         | ((IData)(vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_50__DOT__base__DOT__RESET) 
            & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfrtp_2_50__DOT__base__DOT__RESET))))) {
        vlTOPp->_sequent__TOP__68(vlSymsp);
    }
    if ((((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_47__DOT__base__DOT__CLK_delayed) 
          & (~ (IData)(vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfrtp_2_47__DOT__base__DOT__CLK_delayed))) 
         | ((IData)(vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_47__DOT__base__DOT__RESET) 
            & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfrtp_2_47__DOT__base__DOT__RESET))))) {
        vlTOPp->_sequent__TOP__69(vlSymsp);
    }
    if ((((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_83__DOT__base__DOT__CLK_delayed) 
          & (~ (IData)(vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfrtp_2_83__DOT__base__DOT__CLK_delayed))) 
         | ((IData)(vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_83__DOT__base__DOT__RESET) 
            & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfrtp_2_83__DOT__base__DOT__RESET))))) {
        vlTOPp->_sequent__TOP__70(vlSymsp);
    }
    if (((IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_0__DOT__base__DOT__CLK_delayed) 
         & (~ (IData)(vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfxtp_2_0__DOT__base__DOT__CLK_delayed)))) {
        vlTOPp->_sequent__TOP__71(vlSymsp);
    }
    if (((IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_3__DOT__base__DOT__CLK_delayed) 
         & (~ (IData)(vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfxtp_2_3__DOT__base__DOT__CLK_delayed)))) {
        vlTOPp->_sequent__TOP__72(vlSymsp);
        vlTOPp->__Vm_traceActivity[1U] = 1U;
    }
    if (((IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_2__DOT__base__DOT__CLK_delayed) 
         & (~ (IData)(vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfxtp_2_2__DOT__base__DOT__CLK_delayed)))) {
        vlTOPp->_sequent__TOP__73(vlSymsp);
        vlTOPp->__Vm_traceActivity[2U] = 1U;
    }
    if (((IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_1__DOT__base__DOT__CLK_delayed) 
         & (~ (IData)(vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfxtp_2_1__DOT__base__DOT__CLK_delayed)))) {
        vlTOPp->_sequent__TOP__74(vlSymsp);
        vlTOPp->__Vm_traceActivity[3U] = 1U;
    }
    if ((((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_82__DOT__base__DOT__CLK_delayed) 
          & (~ (IData)(vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfrtp_2_82__DOT__base__DOT__CLK_delayed))) 
         | ((IData)(vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_82__DOT__base__DOT__RESET) 
            & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfrtp_2_82__DOT__base__DOT__RESET))))) {
        vlTOPp->_sequent__TOP__75(vlSymsp);
    }
    if ((((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_81__DOT__base__DOT__CLK_delayed) 
          & (~ (IData)(vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfrtp_2_81__DOT__base__DOT__CLK_delayed))) 
         | ((IData)(vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_81__DOT__base__DOT__RESET) 
            & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfrtp_2_81__DOT__base__DOT__RESET))))) {
        vlTOPp->_sequent__TOP__76(vlSymsp);
    }
    if ((((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_20__DOT__base__DOT__CLK_delayed) 
          & (~ (IData)(vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfrtp_2_20__DOT__base__DOT__CLK_delayed))) 
         | ((IData)(vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_20__DOT__base__DOT__RESET) 
            & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfrtp_2_20__DOT__base__DOT__RESET))))) {
        vlTOPp->_sequent__TOP__77(vlSymsp);
    }
    if ((((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_25__DOT__base__DOT__CLK_delayed) 
          & (~ (IData)(vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfrtp_2_25__DOT__base__DOT__CLK_delayed))) 
         | ((IData)(vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_25__DOT__base__DOT__RESET) 
            & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfrtp_2_25__DOT__base__DOT__RESET))))) {
        vlTOPp->_sequent__TOP__78(vlSymsp);
    }
    if ((((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_21__DOT__base__DOT__CLK_delayed) 
          & (~ (IData)(vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfrtp_2_21__DOT__base__DOT__CLK_delayed))) 
         | ((IData)(vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_21__DOT__base__DOT__RESET) 
            & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfrtp_2_21__DOT__base__DOT__RESET))))) {
        vlTOPp->_sequent__TOP__79(vlSymsp);
    }
    if ((((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_22__DOT__base__DOT__CLK_delayed) 
          & (~ (IData)(vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfrtp_2_22__DOT__base__DOT__CLK_delayed))) 
         | ((IData)(vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_22__DOT__base__DOT__RESET) 
            & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfrtp_2_22__DOT__base__DOT__RESET))))) {
        vlTOPp->_sequent__TOP__80(vlSymsp);
    }
    if ((((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_19__DOT__base__DOT__CLK_delayed) 
          & (~ (IData)(vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfrtp_2_19__DOT__base__DOT__CLK_delayed))) 
         | ((IData)(vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_19__DOT__base__DOT__RESET) 
            & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfrtp_2_19__DOT__base__DOT__RESET))))) {
        vlTOPp->_sequent__TOP__81(vlSymsp);
    }
    if ((((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_24__DOT__base__DOT__CLK_delayed) 
          & (~ (IData)(vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfrtp_2_24__DOT__base__DOT__CLK_delayed))) 
         | ((IData)(vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_24__DOT__base__DOT__RESET) 
            & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfrtp_2_24__DOT__base__DOT__RESET))))) {
        vlTOPp->_sequent__TOP__82(vlSymsp);
    }
    if ((((IData)(vlTOPp->puzzle__DOT__Xdfrtp_1_26__DOT__base__DOT__CLK_delayed) 
          & (~ (IData)(vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfrtp_1_26__DOT__base__DOT__CLK_delayed))) 
         | ((IData)(vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_1_26__DOT__base__DOT__RESET) 
            & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfrtp_1_26__DOT__base__DOT__RESET))))) {
        vlTOPp->_sequent__TOP__83(vlSymsp);
    }
    if ((((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_23__DOT__base__DOT__CLK_delayed) 
          & (~ (IData)(vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfrtp_2_23__DOT__base__DOT__CLK_delayed))) 
         | ((IData)(vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_23__DOT__base__DOT__RESET) 
            & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfrtp_2_23__DOT__base__DOT__RESET))))) {
        vlTOPp->_sequent__TOP__84(vlSymsp);
    }
    if ((((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_45__DOT__base__DOT__CLK_delayed) 
          & (~ (IData)(vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfrtp_2_45__DOT__base__DOT__CLK_delayed))) 
         | ((IData)(vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_45__DOT__base__DOT__RESET) 
            & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfrtp_2_45__DOT__base__DOT__RESET))))) {
        vlTOPp->_sequent__TOP__85(vlSymsp);
    }
    if ((((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_46__DOT__base__DOT__CLK_delayed) 
          & (~ (IData)(vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfrtp_2_46__DOT__base__DOT__CLK_delayed))) 
         | ((IData)(vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_46__DOT__base__DOT__RESET) 
            & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfrtp_2_46__DOT__base__DOT__RESET))))) {
        vlTOPp->_sequent__TOP__86(vlSymsp);
    }
    if ((((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_44__DOT__base__DOT__CLK_delayed) 
          & (~ (IData)(vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfrtp_2_44__DOT__base__DOT__CLK_delayed))) 
         | ((IData)(vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_44__DOT__base__DOT__RESET) 
            & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfrtp_2_44__DOT__base__DOT__RESET))))) {
        vlTOPp->_sequent__TOP__87(vlSymsp);
    }
    if ((((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_43__DOT__base__DOT__CLK_delayed) 
          & (~ (IData)(vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfrtp_2_43__DOT__base__DOT__CLK_delayed))) 
         | ((IData)(vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_43__DOT__base__DOT__RESET) 
            & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfrtp_2_43__DOT__base__DOT__RESET))))) {
        vlTOPp->_sequent__TOP__88(vlSymsp);
    }
    if ((((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_18__DOT__base__DOT__CLK_delayed) 
          & (~ (IData)(vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfrtp_2_18__DOT__base__DOT__CLK_delayed))) 
         | ((IData)(vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_18__DOT__base__DOT__RESET) 
            & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfrtp_2_18__DOT__base__DOT__RESET))))) {
        vlTOPp->_sequent__TOP__89(vlSymsp);
    }
    if ((((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_15__DOT__base__DOT__CLK_delayed) 
          & (~ (IData)(vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfrtp_2_15__DOT__base__DOT__CLK_delayed))) 
         | ((IData)(vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_15__DOT__base__DOT__RESET) 
            & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfrtp_2_15__DOT__base__DOT__RESET))))) {
        vlTOPp->_sequent__TOP__90(vlSymsp);
    }
    if ((((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_16__DOT__base__DOT__CLK_delayed) 
          & (~ (IData)(vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfrtp_2_16__DOT__base__DOT__CLK_delayed))) 
         | ((IData)(vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_16__DOT__base__DOT__RESET) 
            & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfrtp_2_16__DOT__base__DOT__RESET))))) {
        vlTOPp->_sequent__TOP__91(vlSymsp);
    }
    if ((((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_17__DOT__base__DOT__CLK_delayed) 
          & (~ (IData)(vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfrtp_2_17__DOT__base__DOT__CLK_delayed))) 
         | ((IData)(vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_17__DOT__base__DOT__RESET) 
            & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfrtp_2_17__DOT__base__DOT__RESET))))) {
        vlTOPp->_sequent__TOP__92(vlSymsp);
    }
    if ((((((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_51__DOT__base__DOT__CLK_delayed) 
            & (~ (IData)(vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfrtp_2_51__DOT__base__DOT__CLK_delayed))) 
           | ((IData)(vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_51__DOT__base__DOT__RESET) 
              & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfrtp_2_51__DOT__base__DOT__RESET)))) 
          | ((IData)(vlTOPp->puzzle__DOT__Xdfstp_2_3__DOT__base__DOT__CLK_delayed) 
             & (~ (IData)(vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfstp_2_3__DOT__base__DOT__CLK_delayed)))) 
         | ((IData)(vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfstp_2_3__DOT__base__DOT__SET) 
            & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfstp_2_3__DOT__base__DOT__SET))))) {
        vlTOPp->_multiclk__TOP__94(vlSymsp);
    }
    if ((((((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_48__DOT__base__DOT__CLK_delayed) 
            & (~ (IData)(vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfrtp_2_48__DOT__base__DOT__CLK_delayed))) 
           | ((IData)(vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_48__DOT__base__DOT__RESET) 
              & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfrtp_2_48__DOT__base__DOT__RESET)))) 
          | ((IData)(vlTOPp->puzzle__DOT__Xdfstp_2_1__DOT__base__DOT__CLK_delayed) 
             & (~ (IData)(vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfstp_2_1__DOT__base__DOT__CLK_delayed)))) 
         | ((IData)(vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfstp_2_1__DOT__base__DOT__SET) 
            & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfstp_2_1__DOT__base__DOT__SET))))) {
        vlTOPp->_multiclk__TOP__95(vlSymsp);
    }
    if ((((((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_50__DOT__base__DOT__CLK_delayed) 
            & (~ (IData)(vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfrtp_2_50__DOT__base__DOT__CLK_delayed))) 
           | ((IData)(vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_50__DOT__base__DOT__RESET) 
              & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfrtp_2_50__DOT__base__DOT__RESET)))) 
          | ((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_51__DOT__base__DOT__CLK_delayed) 
             & (~ (IData)(vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfrtp_2_51__DOT__base__DOT__CLK_delayed)))) 
         | ((IData)(vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_51__DOT__base__DOT__RESET) 
            & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfrtp_2_51__DOT__base__DOT__RESET))))) {
        vlTOPp->_multiclk__TOP__96(vlSymsp);
    }
    if ((((((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_48__DOT__base__DOT__CLK_delayed) 
            & (~ (IData)(vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfrtp_2_48__DOT__base__DOT__CLK_delayed))) 
           | ((IData)(vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_48__DOT__base__DOT__RESET) 
              & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfrtp_2_48__DOT__base__DOT__RESET)))) 
          | ((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_50__DOT__base__DOT__CLK_delayed) 
             & (~ (IData)(vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfrtp_2_50__DOT__base__DOT__CLK_delayed)))) 
         | ((IData)(vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_50__DOT__base__DOT__RESET) 
            & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfrtp_2_50__DOT__base__DOT__RESET))))) {
        vlTOPp->_multiclk__TOP__97(vlSymsp);
    }
    vlTOPp->_combo__TOP__98(vlSymsp);
    vlTOPp->__Vm_traceActivity[4U] = 1U;
    if ((((((((((((((((((((((((((((((((((((((((((((
                                                   ((((((((((((((((((((((((((((((((((((((((((((((((((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_0__DOT__base__DOT__CLK_delayed) 
                                                                                & (~ (IData)(vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfrtp_2_0__DOT__base__DOT__CLK_delayed))) 
                                                                                | ((IData)(vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_0__DOT__base__DOT__RESET) 
                                                                                & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfrtp_2_0__DOT__base__DOT__RESET)))) 
                                                                                | ((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_10__DOT__base__DOT__CLK_delayed) 
                                                                                & (~ (IData)(vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfrtp_2_10__DOT__base__DOT__CLK_delayed)))) 
                                                                                | ((IData)(vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_10__DOT__base__DOT__RESET) 
                                                                                & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfrtp_2_10__DOT__base__DOT__RESET)))) 
                                                                                | ((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_11__DOT__base__DOT__CLK_delayed) 
                                                                                & (~ (IData)(vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfrtp_2_11__DOT__base__DOT__CLK_delayed)))) 
                                                                                | ((IData)(vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_11__DOT__base__DOT__RESET) 
                                                                                & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfrtp_2_11__DOT__base__DOT__RESET)))) 
                                                                                | ((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_12__DOT__base__DOT__CLK_delayed) 
                                                                                & (~ (IData)(vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfrtp_2_12__DOT__base__DOT__CLK_delayed)))) 
                                                                                | ((IData)(vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_12__DOT__base__DOT__RESET) 
                                                                                & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfrtp_2_12__DOT__base__DOT__RESET)))) 
                                                                                | ((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_13__DOT__base__DOT__CLK_delayed) 
                                                                                & (~ (IData)(vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfrtp_2_13__DOT__base__DOT__CLK_delayed)))) 
                                                                                | ((IData)(vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_13__DOT__base__DOT__RESET) 
                                                                                & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfrtp_2_13__DOT__base__DOT__RESET)))) 
                                                                                | ((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_14__DOT__base__DOT__CLK_delayed) 
                                                                                & (~ (IData)(vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfrtp_2_14__DOT__base__DOT__CLK_delayed)))) 
                                                                                | ((IData)(vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_14__DOT__base__DOT__RESET) 
                                                                                & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfrtp_2_14__DOT__base__DOT__RESET)))) 
                                                                                | ((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_1__DOT__base__DOT__CLK_delayed) 
                                                                                & (~ (IData)(vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfrtp_2_1__DOT__base__DOT__CLK_delayed)))) 
                                                                                | ((IData)(vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_1__DOT__base__DOT__RESET) 
                                                                                & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfrtp_2_1__DOT__base__DOT__RESET)))) 
                                                                                | ((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_2__DOT__base__DOT__CLK_delayed) 
                                                                                & (~ (IData)(vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfrtp_2_2__DOT__base__DOT__CLK_delayed)))) 
                                                                                | ((IData)(vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_2__DOT__base__DOT__RESET) 
                                                                                & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfrtp_2_2__DOT__base__DOT__RESET)))) 
                                                                                | ((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_3__DOT__base__DOT__CLK_delayed) 
                                                                                & (~ (IData)(vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfrtp_2_3__DOT__base__DOT__CLK_delayed)))) 
                                                                                | ((IData)(vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_3__DOT__base__DOT__RESET) 
                                                                                & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfrtp_2_3__DOT__base__DOT__RESET)))) 
                                                                                | ((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_47__DOT__base__DOT__CLK_delayed) 
                                                                                & (~ (IData)(vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfrtp_2_47__DOT__base__DOT__CLK_delayed)))) 
                                                                                | ((IData)(vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_47__DOT__base__DOT__RESET) 
                                                                                & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfrtp_2_47__DOT__base__DOT__RESET)))) 
                                                                                | ((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_4__DOT__base__DOT__CLK_delayed) 
                                                                                & (~ (IData)(vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfrtp_2_4__DOT__base__DOT__CLK_delayed)))) 
                                                                               | ((IData)(vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_4__DOT__base__DOT__RESET) 
                                                                                & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfrtp_2_4__DOT__base__DOT__RESET)))) 
                                                                              | ((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_52__DOT__base__DOT__CLK_delayed) 
                                                                                & (~ (IData)(vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfrtp_2_52__DOT__base__DOT__CLK_delayed)))) 
                                                                             | ((IData)(vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_52__DOT__base__DOT__RESET) 
                                                                                & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfrtp_2_52__DOT__base__DOT__RESET)))) 
                                                                            | ((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_53__DOT__base__DOT__CLK_delayed) 
                                                                               & (~ (IData)(vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfrtp_2_53__DOT__base__DOT__CLK_delayed)))) 
                                                                           | ((IData)(vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_53__DOT__base__DOT__RESET) 
                                                                              & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfrtp_2_53__DOT__base__DOT__RESET)))) 
                                                                          | ((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_54__DOT__base__DOT__CLK_delayed) 
                                                                             & (~ (IData)(vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfrtp_2_54__DOT__base__DOT__CLK_delayed)))) 
                                                                         | ((IData)(vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_54__DOT__base__DOT__RESET) 
                                                                            & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfrtp_2_54__DOT__base__DOT__RESET)))) 
                                                                        | ((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_55__DOT__base__DOT__CLK_delayed) 
                                                                           & (~ (IData)(vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfrtp_2_55__DOT__base__DOT__CLK_delayed)))) 
                                                                       | ((IData)(vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_55__DOT__base__DOT__RESET) 
                                                                          & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfrtp_2_55__DOT__base__DOT__RESET)))) 
                                                                      | ((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_56__DOT__base__DOT__CLK_delayed) 
                                                                         & (~ (IData)(vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfrtp_2_56__DOT__base__DOT__CLK_delayed)))) 
                                                                     | ((IData)(vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_56__DOT__base__DOT__RESET) 
                                                                        & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfrtp_2_56__DOT__base__DOT__RESET)))) 
                                                                    | ((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_57__DOT__base__DOT__CLK_delayed) 
                                                                       & (~ (IData)(vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfrtp_2_57__DOT__base__DOT__CLK_delayed)))) 
                                                                   | ((IData)(vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_57__DOT__base__DOT__RESET) 
                                                                      & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfrtp_2_57__DOT__base__DOT__RESET)))) 
                                                                  | ((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_58__DOT__base__DOT__CLK_delayed) 
                                                                     & (~ (IData)(vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfrtp_2_58__DOT__base__DOT__CLK_delayed)))) 
                                                                 | ((IData)(vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_58__DOT__base__DOT__RESET) 
                                                                    & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfrtp_2_58__DOT__base__DOT__RESET)))) 
                                                                | ((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_59__DOT__base__DOT__CLK_delayed) 
                                                                   & (~ (IData)(vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfrtp_2_59__DOT__base__DOT__CLK_delayed)))) 
                                                               | ((IData)(vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_59__DOT__base__DOT__RESET) 
                                                                  & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfrtp_2_59__DOT__base__DOT__RESET)))) 
                                                              | ((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_5__DOT__base__DOT__CLK_delayed) 
                                                                 & (~ (IData)(vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfrtp_2_5__DOT__base__DOT__CLK_delayed)))) 
                                                             | ((IData)(vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_5__DOT__base__DOT__RESET) 
                                                                & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfrtp_2_5__DOT__base__DOT__RESET)))) 
                                                            | ((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_60__DOT__base__DOT__CLK_delayed) 
                                                               & (~ (IData)(vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfrtp_2_60__DOT__base__DOT__CLK_delayed)))) 
                                                           | ((IData)(vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_60__DOT__base__DOT__RESET) 
                                                              & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfrtp_2_60__DOT__base__DOT__RESET)))) 
                                                          | ((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_61__DOT__base__DOT__CLK_delayed) 
                                                             & (~ (IData)(vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfrtp_2_61__DOT__base__DOT__CLK_delayed)))) 
                                                         | ((IData)(vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_61__DOT__base__DOT__RESET) 
                                                            & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfrtp_2_61__DOT__base__DOT__RESET)))) 
                                                        | ((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_62__DOT__base__DOT__CLK_delayed) 
                                                           & (~ (IData)(vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfrtp_2_62__DOT__base__DOT__CLK_delayed)))) 
                                                       | ((IData)(vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_62__DOT__base__DOT__RESET) 
                                                          & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfrtp_2_62__DOT__base__DOT__RESET)))) 
                                                      | ((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_63__DOT__base__DOT__CLK_delayed) 
                                                         & (~ (IData)(vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfrtp_2_63__DOT__base__DOT__CLK_delayed)))) 
                                                     | ((IData)(vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_63__DOT__base__DOT__RESET) 
                                                        & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfrtp_2_63__DOT__base__DOT__RESET)))) 
                                                    | ((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_64__DOT__base__DOT__CLK_delayed) 
                                                       & (~ (IData)(vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfrtp_2_64__DOT__base__DOT__CLK_delayed)))) 
                                                   | ((IData)(vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_64__DOT__base__DOT__RESET) 
                                                      & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfrtp_2_64__DOT__base__DOT__RESET)))) 
                                                  | ((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_65__DOT__base__DOT__CLK_delayed) 
                                                     & (~ (IData)(vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfrtp_2_65__DOT__base__DOT__CLK_delayed)))) 
                                                 | ((IData)(vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_65__DOT__base__DOT__RESET) 
                                                    & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfrtp_2_65__DOT__base__DOT__RESET)))) 
                                                | ((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_66__DOT__base__DOT__CLK_delayed) 
                                                   & (~ (IData)(vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfrtp_2_66__DOT__base__DOT__CLK_delayed)))) 
                                               | ((IData)(vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_66__DOT__base__DOT__RESET) 
                                                  & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfrtp_2_66__DOT__base__DOT__RESET)))) 
                                              | ((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_67__DOT__base__DOT__CLK_delayed) 
                                                 & (~ (IData)(vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfrtp_2_67__DOT__base__DOT__CLK_delayed)))) 
                                             | ((IData)(vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_67__DOT__base__DOT__RESET) 
                                                & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfrtp_2_67__DOT__base__DOT__RESET)))) 
                                            | ((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_68__DOT__base__DOT__CLK_delayed) 
                                               & (~ (IData)(vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfrtp_2_68__DOT__base__DOT__CLK_delayed)))) 
                                           | ((IData)(vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_68__DOT__base__DOT__RESET) 
                                              & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfrtp_2_68__DOT__base__DOT__RESET)))) 
                                          | ((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_69__DOT__base__DOT__CLK_delayed) 
                                             & (~ (IData)(vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfrtp_2_69__DOT__base__DOT__CLK_delayed)))) 
                                         | ((IData)(vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_69__DOT__base__DOT__RESET) 
                                            & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfrtp_2_69__DOT__base__DOT__RESET)))) 
                                        | ((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_6__DOT__base__DOT__CLK_delayed) 
                                           & (~ (IData)(vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfrtp_2_6__DOT__base__DOT__CLK_delayed)))) 
                                       | ((IData)(vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_6__DOT__base__DOT__RESET) 
                                          & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfrtp_2_6__DOT__base__DOT__RESET)))) 
                                      | ((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_70__DOT__base__DOT__CLK_delayed) 
                                         & (~ (IData)(vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfrtp_2_70__DOT__base__DOT__CLK_delayed)))) 
                                     | ((IData)(vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_70__DOT__base__DOT__RESET) 
                                        & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfrtp_2_70__DOT__base__DOT__RESET)))) 
                                    | ((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_71__DOT__base__DOT__CLK_delayed) 
                                       & (~ (IData)(vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfrtp_2_71__DOT__base__DOT__CLK_delayed)))) 
                                   | ((IData)(vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_71__DOT__base__DOT__RESET) 
                                      & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfrtp_2_71__DOT__base__DOT__RESET)))) 
                                  | ((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_72__DOT__base__DOT__CLK_delayed) 
                                     & (~ (IData)(vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfrtp_2_72__DOT__base__DOT__CLK_delayed)))) 
                                 | ((IData)(vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_72__DOT__base__DOT__RESET) 
                                    & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfrtp_2_72__DOT__base__DOT__RESET)))) 
                                | ((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_73__DOT__base__DOT__CLK_delayed) 
                                   & (~ (IData)(vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfrtp_2_73__DOT__base__DOT__CLK_delayed)))) 
                               | ((IData)(vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_73__DOT__base__DOT__RESET) 
                                  & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfrtp_2_73__DOT__base__DOT__RESET)))) 
                              | ((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_74__DOT__base__DOT__CLK_delayed) 
                                 & (~ (IData)(vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfrtp_2_74__DOT__base__DOT__CLK_delayed)))) 
                             | ((IData)(vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_74__DOT__base__DOT__RESET) 
                                & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfrtp_2_74__DOT__base__DOT__RESET)))) 
                            | ((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_75__DOT__base__DOT__CLK_delayed) 
                               & (~ (IData)(vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfrtp_2_75__DOT__base__DOT__CLK_delayed)))) 
                           | ((IData)(vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_75__DOT__base__DOT__RESET) 
                              & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfrtp_2_75__DOT__base__DOT__RESET)))) 
                          | ((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_76__DOT__base__DOT__CLK_delayed) 
                             & (~ (IData)(vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfrtp_2_76__DOT__base__DOT__CLK_delayed)))) 
                         | ((IData)(vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_76__DOT__base__DOT__RESET) 
                            & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfrtp_2_76__DOT__base__DOT__RESET)))) 
                        | ((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_77__DOT__base__DOT__CLK_delayed) 
                           & (~ (IData)(vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfrtp_2_77__DOT__base__DOT__CLK_delayed)))) 
                       | ((IData)(vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_77__DOT__base__DOT__RESET) 
                          & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfrtp_2_77__DOT__base__DOT__RESET)))) 
                      | ((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_78__DOT__base__DOT__CLK_delayed) 
                         & (~ (IData)(vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfrtp_2_78__DOT__base__DOT__CLK_delayed)))) 
                     | ((IData)(vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_78__DOT__base__DOT__RESET) 
                        & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfrtp_2_78__DOT__base__DOT__RESET)))) 
                    | ((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_79__DOT__base__DOT__CLK_delayed) 
                       & (~ (IData)(vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfrtp_2_79__DOT__base__DOT__CLK_delayed)))) 
                   | ((IData)(vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_79__DOT__base__DOT__RESET) 
                      & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfrtp_2_79__DOT__base__DOT__RESET)))) 
                  | ((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_7__DOT__base__DOT__CLK_delayed) 
                     & (~ (IData)(vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfrtp_2_7__DOT__base__DOT__CLK_delayed)))) 
                 | ((IData)(vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_7__DOT__base__DOT__RESET) 
                    & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfrtp_2_7__DOT__base__DOT__RESET)))) 
                | ((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_80__DOT__base__DOT__CLK_delayed) 
                   & (~ (IData)(vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfrtp_2_80__DOT__base__DOT__CLK_delayed)))) 
               | ((IData)(vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_80__DOT__base__DOT__RESET) 
                  & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfrtp_2_80__DOT__base__DOT__RESET)))) 
              | ((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_83__DOT__base__DOT__CLK_delayed) 
                 & (~ (IData)(vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfrtp_2_83__DOT__base__DOT__CLK_delayed)))) 
             | ((IData)(vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_83__DOT__base__DOT__RESET) 
                & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfrtp_2_83__DOT__base__DOT__RESET)))) 
            | ((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_8__DOT__base__DOT__CLK_delayed) 
               & (~ (IData)(vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfrtp_2_8__DOT__base__DOT__CLK_delayed)))) 
           | ((IData)(vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_8__DOT__base__DOT__RESET) 
              & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfrtp_2_8__DOT__base__DOT__RESET)))) 
          | ((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_9__DOT__base__DOT__CLK_delayed) 
             & (~ (IData)(vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfrtp_2_9__DOT__base__DOT__CLK_delayed)))) 
         | ((IData)(vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_9__DOT__base__DOT__RESET) 
            & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfrtp_2_9__DOT__base__DOT__RESET))))) {
        vlTOPp->_multiclk__TOP__99(vlSymsp);
    }
    if ((((IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_0__DOT__base__DOT__CLK_delayed) 
          & (~ (IData)(vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfxtp_2_0__DOT__base__DOT__CLK_delayed))) 
         | ((IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_3__DOT__base__DOT__CLK_delayed) 
            & (~ (IData)(vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfxtp_2_3__DOT__base__DOT__CLK_delayed))))) {
        vlTOPp->_multiclk__TOP__100(vlSymsp);
        vlTOPp->__Vm_traceActivity[5U] = 1U;
    }
    if ((((IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_0__DOT__base__DOT__CLK_delayed) 
          & (~ (IData)(vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfxtp_2_0__DOT__base__DOT__CLK_delayed))) 
         | ((IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_2__DOT__base__DOT__CLK_delayed) 
            & (~ (IData)(vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfxtp_2_2__DOT__base__DOT__CLK_delayed))))) {
        vlTOPp->_multiclk__TOP__101(vlSymsp);
    }
    if ((((IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_2__DOT__base__DOT__CLK_delayed) 
          & (~ (IData)(vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfxtp_2_2__DOT__base__DOT__CLK_delayed))) 
         | ((IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_3__DOT__base__DOT__CLK_delayed) 
            & (~ (IData)(vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfxtp_2_3__DOT__base__DOT__CLK_delayed))))) {
        vlTOPp->_multiclk__TOP__102(vlSymsp);
    }
    if ((((IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_1__DOT__base__DOT__CLK_delayed) 
          & (~ (IData)(vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfxtp_2_1__DOT__base__DOT__CLK_delayed))) 
         | ((IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_2__DOT__base__DOT__CLK_delayed) 
            & (~ (IData)(vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfxtp_2_2__DOT__base__DOT__CLK_delayed))))) {
        vlTOPp->_multiclk__TOP__103(vlSymsp);
        vlTOPp->__Vm_traceActivity[6U] = 1U;
    }
    if ((((IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_0__DOT__base__DOT__CLK_delayed) 
          & (~ (IData)(vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfxtp_2_0__DOT__base__DOT__CLK_delayed))) 
         | ((IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_1__DOT__base__DOT__CLK_delayed) 
            & (~ (IData)(vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfxtp_2_1__DOT__base__DOT__CLK_delayed))))) {
        vlTOPp->_multiclk__TOP__104(vlSymsp);
    }
    if (((((IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_0__DOT__base__DOT__CLK_delayed) 
           & (~ (IData)(vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfxtp_2_0__DOT__base__DOT__CLK_delayed))) 
          | ((IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_1__DOT__base__DOT__CLK_delayed) 
             & (~ (IData)(vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfxtp_2_1__DOT__base__DOT__CLK_delayed)))) 
         | ((IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_3__DOT__base__DOT__CLK_delayed) 
            & (~ (IData)(vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfxtp_2_3__DOT__base__DOT__CLK_delayed))))) {
        vlTOPp->_multiclk__TOP__105(vlSymsp);
    }
    if (((((IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_0__DOT__base__DOT__CLK_delayed) 
           & (~ (IData)(vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfxtp_2_0__DOT__base__DOT__CLK_delayed))) 
          | ((IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_1__DOT__base__DOT__CLK_delayed) 
             & (~ (IData)(vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfxtp_2_1__DOT__base__DOT__CLK_delayed)))) 
         | ((IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_2__DOT__base__DOT__CLK_delayed) 
            & (~ (IData)(vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfxtp_2_2__DOT__base__DOT__CLK_delayed))))) {
        vlTOPp->_multiclk__TOP__106(vlSymsp);
    }
    if ((((((IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_0__DOT__base__DOT__CLK_delayed) 
            & (~ (IData)(vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfxtp_2_0__DOT__base__DOT__CLK_delayed))) 
           | ((IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_1__DOT__base__DOT__CLK_delayed) 
              & (~ (IData)(vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfxtp_2_1__DOT__base__DOT__CLK_delayed)))) 
          | ((IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_2__DOT__base__DOT__CLK_delayed) 
             & (~ (IData)(vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfxtp_2_2__DOT__base__DOT__CLK_delayed)))) 
         | ((IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_3__DOT__base__DOT__CLK_delayed) 
            & (~ (IData)(vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfxtp_2_3__DOT__base__DOT__CLK_delayed))))) {
        vlTOPp->_multiclk__TOP__107(vlSymsp);
        vlTOPp->__Vm_traceActivity[7U] = 1U;
    }
    if ((((IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_1__DOT__base__DOT__CLK_delayed) 
          & (~ (IData)(vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfxtp_2_1__DOT__base__DOT__CLK_delayed))) 
         | ((IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_3__DOT__base__DOT__CLK_delayed) 
            & (~ (IData)(vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfxtp_2_3__DOT__base__DOT__CLK_delayed))))) {
        vlTOPp->_multiclk__TOP__108(vlSymsp);
        vlTOPp->__Vm_traceActivity[8U] = 1U;
    }
    if (((((IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_1__DOT__base__DOT__CLK_delayed) 
           & (~ (IData)(vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfxtp_2_1__DOT__base__DOT__CLK_delayed))) 
          | ((IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_2__DOT__base__DOT__CLK_delayed) 
             & (~ (IData)(vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfxtp_2_2__DOT__base__DOT__CLK_delayed)))) 
         | ((IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_3__DOT__base__DOT__CLK_delayed) 
            & (~ (IData)(vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfxtp_2_3__DOT__base__DOT__CLK_delayed))))) {
        vlTOPp->_multiclk__TOP__109(vlSymsp);
        vlTOPp->__Vm_traceActivity[9U] = 1U;
    }
    if ((((((((IData)(vlTOPp->puzzle__DOT__Xdfrtp_1_26__DOT__base__DOT__CLK_delayed) 
              & (~ (IData)(vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfrtp_1_26__DOT__base__DOT__CLK_delayed))) 
             | ((IData)(vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_1_26__DOT__base__DOT__RESET) 
                & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfrtp_1_26__DOT__base__DOT__RESET)))) 
            | ((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_24__DOT__base__DOT__CLK_delayed) 
               & (~ (IData)(vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfrtp_2_24__DOT__base__DOT__CLK_delayed)))) 
           | ((IData)(vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_24__DOT__base__DOT__RESET) 
              & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfrtp_2_24__DOT__base__DOT__RESET)))) 
          | ((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_25__DOT__base__DOT__CLK_delayed) 
             & (~ (IData)(vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfrtp_2_25__DOT__base__DOT__CLK_delayed)))) 
         | ((IData)(vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_25__DOT__base__DOT__RESET) 
            & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfrtp_2_25__DOT__base__DOT__RESET))))) {
        vlTOPp->_multiclk__TOP__110(vlSymsp);
    }
    if ((((((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_23__DOT__base__DOT__CLK_delayed) 
            & (~ (IData)(vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfrtp_2_23__DOT__base__DOT__CLK_delayed))) 
           | ((IData)(vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_23__DOT__base__DOT__RESET) 
              & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfrtp_2_23__DOT__base__DOT__RESET)))) 
          | ((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_24__DOT__base__DOT__CLK_delayed) 
             & (~ (IData)(vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfrtp_2_24__DOT__base__DOT__CLK_delayed)))) 
         | ((IData)(vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_24__DOT__base__DOT__RESET) 
            & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfrtp_2_24__DOT__base__DOT__RESET))))) {
        vlTOPp->_multiclk__TOP__111(vlSymsp);
    }
    if ((((((((((((IData)(vlTOPp->puzzle__DOT__Xdfrtp_1_26__DOT__base__DOT__CLK_delayed) 
                  & (~ (IData)(vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfrtp_1_26__DOT__base__DOT__CLK_delayed))) 
                 | ((IData)(vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_1_26__DOT__base__DOT__RESET) 
                    & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfrtp_1_26__DOT__base__DOT__RESET)))) 
                | ((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_19__DOT__base__DOT__CLK_delayed) 
                   & (~ (IData)(vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfrtp_2_19__DOT__base__DOT__CLK_delayed)))) 
               | ((IData)(vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_19__DOT__base__DOT__RESET) 
                  & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfrtp_2_19__DOT__base__DOT__RESET)))) 
              | ((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_21__DOT__base__DOT__CLK_delayed) 
                 & (~ (IData)(vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfrtp_2_21__DOT__base__DOT__CLK_delayed)))) 
             | ((IData)(vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_21__DOT__base__DOT__RESET) 
                & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfrtp_2_21__DOT__base__DOT__RESET)))) 
            | ((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_22__DOT__base__DOT__CLK_delayed) 
               & (~ (IData)(vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfrtp_2_22__DOT__base__DOT__CLK_delayed)))) 
           | ((IData)(vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_22__DOT__base__DOT__RESET) 
              & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfrtp_2_22__DOT__base__DOT__RESET)))) 
          | ((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_23__DOT__base__DOT__CLK_delayed) 
             & (~ (IData)(vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfrtp_2_23__DOT__base__DOT__CLK_delayed)))) 
         | ((IData)(vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_23__DOT__base__DOT__RESET) 
            & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfrtp_2_23__DOT__base__DOT__RESET))))) {
        vlTOPp->_multiclk__TOP__112(vlSymsp);
    }
    if ((((((((((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_43__DOT__base__DOT__CLK_delayed) 
                & (~ (IData)(vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfrtp_2_43__DOT__base__DOT__CLK_delayed))) 
               | ((IData)(vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_43__DOT__base__DOT__RESET) 
                  & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfrtp_2_43__DOT__base__DOT__RESET)))) 
              | ((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_44__DOT__base__DOT__CLK_delayed) 
                 & (~ (IData)(vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfrtp_2_44__DOT__base__DOT__CLK_delayed)))) 
             | ((IData)(vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_44__DOT__base__DOT__RESET) 
                & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfrtp_2_44__DOT__base__DOT__RESET)))) 
            | ((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_45__DOT__base__DOT__CLK_delayed) 
               & (~ (IData)(vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfrtp_2_45__DOT__base__DOT__CLK_delayed)))) 
           | ((IData)(vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_45__DOT__base__DOT__RESET) 
              & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfrtp_2_45__DOT__base__DOT__RESET)))) 
          | ((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_46__DOT__base__DOT__CLK_delayed) 
             & (~ (IData)(vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfrtp_2_46__DOT__base__DOT__CLK_delayed)))) 
         | ((IData)(vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_46__DOT__base__DOT__RESET) 
            & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfrtp_2_46__DOT__base__DOT__RESET))))) {
        vlTOPp->_multiclk__TOP__113(vlSymsp);
        vlTOPp->__Vm_traceActivity[0xaU] = 1U;
    }
    if ((((((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_15__DOT__base__DOT__CLK_delayed) 
            & (~ (IData)(vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfrtp_2_15__DOT__base__DOT__CLK_delayed))) 
           | ((IData)(vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_15__DOT__base__DOT__RESET) 
              & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfrtp_2_15__DOT__base__DOT__RESET)))) 
          | ((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_18__DOT__base__DOT__CLK_delayed) 
             & (~ (IData)(vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfrtp_2_18__DOT__base__DOT__CLK_delayed)))) 
         | ((IData)(vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_18__DOT__base__DOT__RESET) 
            & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfrtp_2_18__DOT__base__DOT__RESET))))) {
        vlTOPp->_multiclk__TOP__114(vlSymsp);
    }
    if ((((((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_16__DOT__base__DOT__CLK_delayed) 
            & (~ (IData)(vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfrtp_2_16__DOT__base__DOT__CLK_delayed))) 
           | ((IData)(vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_16__DOT__base__DOT__RESET) 
              & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfrtp_2_16__DOT__base__DOT__RESET)))) 
          | ((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_44__DOT__base__DOT__CLK_delayed) 
             & (~ (IData)(vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfrtp_2_44__DOT__base__DOT__CLK_delayed)))) 
         | ((IData)(vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_44__DOT__base__DOT__RESET) 
            & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfrtp_2_44__DOT__base__DOT__RESET))))) {
        vlTOPp->_multiclk__TOP__115(vlSymsp);
        vlTOPp->__Vm_traceActivity[0xbU] = 1U;
    }
    if ((((((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_15__DOT__base__DOT__CLK_delayed) 
            & (~ (IData)(vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfrtp_2_15__DOT__base__DOT__CLK_delayed))) 
           | ((IData)(vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_15__DOT__base__DOT__RESET) 
              & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfrtp_2_15__DOT__base__DOT__RESET)))) 
          | ((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_16__DOT__base__DOT__CLK_delayed) 
             & (~ (IData)(vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfrtp_2_16__DOT__base__DOT__CLK_delayed)))) 
         | ((IData)(vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_16__DOT__base__DOT__RESET) 
            & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfrtp_2_16__DOT__base__DOT__RESET))))) {
        vlTOPp->_multiclk__TOP__116(vlSymsp);
    }
    if ((((((((((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_15__DOT__base__DOT__CLK_delayed) 
                & (~ (IData)(vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfrtp_2_15__DOT__base__DOT__CLK_delayed))) 
               | ((IData)(vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_15__DOT__base__DOT__RESET) 
                  & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfrtp_2_15__DOT__base__DOT__RESET)))) 
              | ((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_16__DOT__base__DOT__CLK_delayed) 
                 & (~ (IData)(vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfrtp_2_16__DOT__base__DOT__CLK_delayed)))) 
             | ((IData)(vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_16__DOT__base__DOT__RESET) 
                & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfrtp_2_16__DOT__base__DOT__RESET)))) 
            | ((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_17__DOT__base__DOT__CLK_delayed) 
               & (~ (IData)(vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfrtp_2_17__DOT__base__DOT__CLK_delayed)))) 
           | ((IData)(vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_17__DOT__base__DOT__RESET) 
              & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfrtp_2_17__DOT__base__DOT__RESET)))) 
          | ((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_18__DOT__base__DOT__CLK_delayed) 
             & (~ (IData)(vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfrtp_2_18__DOT__base__DOT__CLK_delayed)))) 
         | ((IData)(vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_18__DOT__base__DOT__RESET) 
            & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfrtp_2_18__DOT__base__DOT__RESET))))) {
        vlTOPp->_multiclk__TOP__117(vlSymsp);
    }
    if ((((((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_16__DOT__base__DOT__CLK_delayed) 
            & (~ (IData)(vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfrtp_2_16__DOT__base__DOT__CLK_delayed))) 
           | ((IData)(vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_16__DOT__base__DOT__RESET) 
              & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfrtp_2_16__DOT__base__DOT__RESET)))) 
          | ((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_17__DOT__base__DOT__CLK_delayed) 
             & (~ (IData)(vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfrtp_2_17__DOT__base__DOT__CLK_delayed)))) 
         | ((IData)(vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_17__DOT__base__DOT__RESET) 
            & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfrtp_2_17__DOT__base__DOT__RESET))))) {
        vlTOPp->_multiclk__TOP__118(vlSymsp);
    }
    if ((((((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_15__DOT__base__DOT__CLK_delayed) 
            & (~ (IData)(vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfrtp_2_15__DOT__base__DOT__CLK_delayed))) 
           | ((IData)(vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_15__DOT__base__DOT__RESET) 
              & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfrtp_2_15__DOT__base__DOT__RESET)))) 
          | ((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_17__DOT__base__DOT__CLK_delayed) 
             & (~ (IData)(vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfrtp_2_17__DOT__base__DOT__CLK_delayed)))) 
         | ((IData)(vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_17__DOT__base__DOT__RESET) 
            & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfrtp_2_17__DOT__base__DOT__RESET))))) {
        vlTOPp->_multiclk__TOP__119(vlSymsp);
    }
    if ((((((((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_50__DOT__base__DOT__CLK_delayed) 
              & (~ (IData)(vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfrtp_2_50__DOT__base__DOT__CLK_delayed))) 
             | ((IData)(vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_50__DOT__base__DOT__RESET) 
                & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfrtp_2_50__DOT__base__DOT__RESET)))) 
            | ((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_51__DOT__base__DOT__CLK_delayed) 
               & (~ (IData)(vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfrtp_2_51__DOT__base__DOT__CLK_delayed)))) 
           | ((IData)(vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_51__DOT__base__DOT__RESET) 
              & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfrtp_2_51__DOT__base__DOT__RESET)))) 
          | ((IData)(vlTOPp->puzzle__DOT__Xdfstp_2_1__DOT__base__DOT__CLK_delayed) 
             & (~ (IData)(vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfstp_2_1__DOT__base__DOT__CLK_delayed)))) 
         | ((IData)(vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfstp_2_1__DOT__base__DOT__SET) 
            & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfstp_2_1__DOT__base__DOT__SET))))) {
        vlTOPp->_multiclk__TOP__120(vlSymsp);
    }
    if ((((((((((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_48__DOT__base__DOT__CLK_delayed) 
                & (~ (IData)(vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfrtp_2_48__DOT__base__DOT__CLK_delayed))) 
               | ((IData)(vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_48__DOT__base__DOT__RESET) 
                  & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfrtp_2_48__DOT__base__DOT__RESET)))) 
              | ((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_50__DOT__base__DOT__CLK_delayed) 
                 & (~ (IData)(vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfrtp_2_50__DOT__base__DOT__CLK_delayed)))) 
             | ((IData)(vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_50__DOT__base__DOT__RESET) 
                & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfrtp_2_50__DOT__base__DOT__RESET)))) 
            | ((IData)(vlTOPp->puzzle__DOT__Xdfstp_2_0__DOT__base__DOT__CLK_delayed) 
               & (~ (IData)(vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfstp_2_0__DOT__base__DOT__CLK_delayed)))) 
           | ((IData)(vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfstp_2_0__DOT__base__DOT__SET) 
              & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfstp_2_0__DOT__base__DOT__SET)))) 
          | ((IData)(vlTOPp->puzzle__DOT__Xdfstp_2_2__DOT__base__DOT__CLK_delayed) 
             & (~ (IData)(vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfstp_2_2__DOT__base__DOT__CLK_delayed)))) 
         | ((IData)(vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfstp_2_2__DOT__base__DOT__SET) 
            & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfstp_2_2__DOT__base__DOT__SET))))) {
        vlTOPp->_multiclk__TOP__121(vlSymsp);
    }
    if ((((((((((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_48__DOT__base__DOT__CLK_delayed) 
                & (~ (IData)(vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfrtp_2_48__DOT__base__DOT__CLK_delayed))) 
               | ((IData)(vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_48__DOT__base__DOT__RESET) 
                  & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfrtp_2_48__DOT__base__DOT__RESET)))) 
              | ((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_49__DOT__base__DOT__CLK_delayed) 
                 & (~ (IData)(vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfrtp_2_49__DOT__base__DOT__CLK_delayed)))) 
             | ((IData)(vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_49__DOT__base__DOT__RESET) 
                & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfrtp_2_49__DOT__base__DOT__RESET)))) 
            | ((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_50__DOT__base__DOT__CLK_delayed) 
               & (~ (IData)(vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfrtp_2_50__DOT__base__DOT__CLK_delayed)))) 
           | ((IData)(vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_50__DOT__base__DOT__RESET) 
              & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfrtp_2_50__DOT__base__DOT__RESET)))) 
          | ((IData)(vlTOPp->puzzle__DOT__Xdfstp_2_1__DOT__base__DOT__CLK_delayed) 
             & (~ (IData)(vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfstp_2_1__DOT__base__DOT__CLK_delayed)))) 
         | ((IData)(vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfstp_2_1__DOT__base__DOT__SET) 
            & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfstp_2_1__DOT__base__DOT__SET))))) {
        vlTOPp->_multiclk__TOP__122(vlSymsp);
    }
    if (((((IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_0__DOT__base__DOT__CLK_delayed) 
           & (~ (IData)(vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfxtp_2_0__DOT__base__DOT__CLK_delayed))) 
          | ((IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_2__DOT__base__DOT__CLK_delayed) 
             & (~ (IData)(vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfxtp_2_2__DOT__base__DOT__CLK_delayed)))) 
         | ((IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_3__DOT__base__DOT__CLK_delayed) 
            & (~ (IData)(vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfxtp_2_3__DOT__base__DOT__CLK_delayed))))) {
        vlTOPp->_multiclk__TOP__123(vlSymsp);
    }
    if ((((((((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_83__DOT__base__DOT__CLK_delayed) 
              & (~ (IData)(vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfrtp_2_83__DOT__base__DOT__CLK_delayed))) 
             | ((IData)(vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_83__DOT__base__DOT__RESET) 
                & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfrtp_2_83__DOT__base__DOT__RESET)))) 
            | ((IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_0__DOT__base__DOT__CLK_delayed) 
               & (~ (IData)(vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfxtp_2_0__DOT__base__DOT__CLK_delayed)))) 
           | ((IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_1__DOT__base__DOT__CLK_delayed) 
              & (~ (IData)(vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfxtp_2_1__DOT__base__DOT__CLK_delayed)))) 
          | ((IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_2__DOT__base__DOT__CLK_delayed) 
             & (~ (IData)(vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfxtp_2_2__DOT__base__DOT__CLK_delayed)))) 
         | ((IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_3__DOT__base__DOT__CLK_delayed) 
            & (~ (IData)(vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfxtp_2_3__DOT__base__DOT__CLK_delayed))))) {
        vlTOPp->_multiclk__TOP__124(vlSymsp);
    }
    if ((((((IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_0__DOT__base__DOT__CLK_delayed) 
            & (~ (IData)(vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfxtp_2_0__DOT__base__DOT__CLK_delayed))) 
           | ((IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_1__DOT__base__DOT__CLK_delayed) 
              & (~ (IData)(vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfxtp_2_1__DOT__base__DOT__CLK_delayed)))) 
          | ((IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_2__DOT__base__DOT__CLK_delayed) 
             & (~ (IData)(vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfxtp_2_2__DOT__base__DOT__CLK_delayed)))) 
         | ((IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_3__DOT__base__DOT__CLK_delayed) 
            & (~ (IData)(vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfxtp_2_3__DOT__base__DOT__CLK_delayed))))) {
        vlTOPp->_multiclk__TOP__125(vlSymsp);
    }
    if ((((((((((((((((((IData)(vlTOPp->puzzle__DOT__Xdfrtp_1_26__DOT__base__DOT__CLK_delayed) 
                        & (~ (IData)(vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfrtp_1_26__DOT__base__DOT__CLK_delayed))) 
                       | ((IData)(vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_1_26__DOT__base__DOT__RESET) 
                          & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfrtp_1_26__DOT__base__DOT__RESET)))) 
                      | ((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_19__DOT__base__DOT__CLK_delayed) 
                         & (~ (IData)(vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfrtp_2_19__DOT__base__DOT__CLK_delayed)))) 
                     | ((IData)(vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_19__DOT__base__DOT__RESET) 
                        & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfrtp_2_19__DOT__base__DOT__RESET)))) 
                    | ((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_20__DOT__base__DOT__CLK_delayed) 
                       & (~ (IData)(vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfrtp_2_20__DOT__base__DOT__CLK_delayed)))) 
                   | ((IData)(vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_20__DOT__base__DOT__RESET) 
                      & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfrtp_2_20__DOT__base__DOT__RESET)))) 
                  | ((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_21__DOT__base__DOT__CLK_delayed) 
                     & (~ (IData)(vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfrtp_2_21__DOT__base__DOT__CLK_delayed)))) 
                 | ((IData)(vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_21__DOT__base__DOT__RESET) 
                    & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfrtp_2_21__DOT__base__DOT__RESET)))) 
                | ((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_22__DOT__base__DOT__CLK_delayed) 
                   & (~ (IData)(vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfrtp_2_22__DOT__base__DOT__CLK_delayed)))) 
               | ((IData)(vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_22__DOT__base__DOT__RESET) 
                  & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfrtp_2_22__DOT__base__DOT__RESET)))) 
              | ((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_23__DOT__base__DOT__CLK_delayed) 
                 & (~ (IData)(vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfrtp_2_23__DOT__base__DOT__CLK_delayed)))) 
             | ((IData)(vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_23__DOT__base__DOT__RESET) 
                & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfrtp_2_23__DOT__base__DOT__RESET)))) 
            | ((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_24__DOT__base__DOT__CLK_delayed) 
               & (~ (IData)(vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfrtp_2_24__DOT__base__DOT__CLK_delayed)))) 
           | ((IData)(vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_24__DOT__base__DOT__RESET) 
              & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfrtp_2_24__DOT__base__DOT__RESET)))) 
          | ((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_25__DOT__base__DOT__CLK_delayed) 
             & (~ (IData)(vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfrtp_2_25__DOT__base__DOT__CLK_delayed)))) 
         | ((IData)(vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_25__DOT__base__DOT__RESET) 
            & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfrtp_2_25__DOT__base__DOT__RESET))))) {
        vlTOPp->_multiclk__TOP__126(vlSymsp);
    }
    if ((((((((((((((((((((IData)(vlTOPp->puzzle__DOT__Xdfrtp_1_26__DOT__base__DOT__CLK_delayed) 
                          & (~ (IData)(vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfrtp_1_26__DOT__base__DOT__CLK_delayed))) 
                         | ((IData)(vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_1_26__DOT__base__DOT__RESET) 
                            & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfrtp_1_26__DOT__base__DOT__RESET)))) 
                        | ((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_19__DOT__base__DOT__CLK_delayed) 
                           & (~ (IData)(vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfrtp_2_19__DOT__base__DOT__CLK_delayed)))) 
                       | ((IData)(vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_19__DOT__base__DOT__RESET) 
                          & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfrtp_2_19__DOT__base__DOT__RESET)))) 
                      | ((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_20__DOT__base__DOT__CLK_delayed) 
                         & (~ (IData)(vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfrtp_2_20__DOT__base__DOT__CLK_delayed)))) 
                     | ((IData)(vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_20__DOT__base__DOT__RESET) 
                        & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfrtp_2_20__DOT__base__DOT__RESET)))) 
                    | ((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_21__DOT__base__DOT__CLK_delayed) 
                       & (~ (IData)(vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfrtp_2_21__DOT__base__DOT__CLK_delayed)))) 
                   | ((IData)(vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_21__DOT__base__DOT__RESET) 
                      & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfrtp_2_21__DOT__base__DOT__RESET)))) 
                  | ((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_22__DOT__base__DOT__CLK_delayed) 
                     & (~ (IData)(vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfrtp_2_22__DOT__base__DOT__CLK_delayed)))) 
                 | ((IData)(vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_22__DOT__base__DOT__RESET) 
                    & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfrtp_2_22__DOT__base__DOT__RESET)))) 
                | ((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_23__DOT__base__DOT__CLK_delayed) 
                   & (~ (IData)(vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfrtp_2_23__DOT__base__DOT__CLK_delayed)))) 
               | ((IData)(vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_23__DOT__base__DOT__RESET) 
                  & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfrtp_2_23__DOT__base__DOT__RESET)))) 
              | ((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_24__DOT__base__DOT__CLK_delayed) 
                 & (~ (IData)(vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfrtp_2_24__DOT__base__DOT__CLK_delayed)))) 
             | ((IData)(vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_24__DOT__base__DOT__RESET) 
                & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfrtp_2_24__DOT__base__DOT__RESET)))) 
            | ((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_25__DOT__base__DOT__CLK_delayed) 
               & (~ (IData)(vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfrtp_2_25__DOT__base__DOT__CLK_delayed)))) 
           | ((IData)(vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_25__DOT__base__DOT__RESET) 
              & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfrtp_2_25__DOT__base__DOT__RESET)))) 
          | ((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_28__DOT__base__DOT__CLK_delayed) 
             & (~ (IData)(vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfrtp_2_28__DOT__base__DOT__CLK_delayed)))) 
         | ((IData)(vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_28__DOT__base__DOT__RESET) 
            & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfrtp_2_28__DOT__base__DOT__RESET))))) {
        vlTOPp->_multiclk__TOP__127(vlSymsp);
    }
    vlTOPp->_combo__TOP__128(vlSymsp);
    if ((((((((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_15__DOT__base__DOT__CLK_delayed) 
              & (~ (IData)(vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfrtp_2_15__DOT__base__DOT__CLK_delayed))) 
             | ((IData)(vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_15__DOT__base__DOT__RESET) 
                & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfrtp_2_15__DOT__base__DOT__RESET)))) 
            | ((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_16__DOT__base__DOT__CLK_delayed) 
               & (~ (IData)(vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfrtp_2_16__DOT__base__DOT__CLK_delayed)))) 
           | ((IData)(vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_16__DOT__base__DOT__RESET) 
              & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfrtp_2_16__DOT__base__DOT__RESET)))) 
          | ((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_43__DOT__base__DOT__CLK_delayed) 
             & (~ (IData)(vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfrtp_2_43__DOT__base__DOT__CLK_delayed)))) 
         | ((IData)(vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_43__DOT__base__DOT__RESET) 
            & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfrtp_2_43__DOT__base__DOT__RESET))))) {
        vlTOPp->_multiclk__TOP__129(vlSymsp);
    }
    if ((((((((((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_15__DOT__base__DOT__CLK_delayed) 
                & (~ (IData)(vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfrtp_2_15__DOT__base__DOT__CLK_delayed))) 
               | ((IData)(vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_15__DOT__base__DOT__RESET) 
                  & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfrtp_2_15__DOT__base__DOT__RESET)))) 
              | ((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_16__DOT__base__DOT__CLK_delayed) 
                 & (~ (IData)(vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfrtp_2_16__DOT__base__DOT__CLK_delayed)))) 
             | ((IData)(vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_16__DOT__base__DOT__RESET) 
                & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfrtp_2_16__DOT__base__DOT__RESET)))) 
            | ((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_17__DOT__base__DOT__CLK_delayed) 
               & (~ (IData)(vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfrtp_2_17__DOT__base__DOT__CLK_delayed)))) 
           | ((IData)(vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_17__DOT__base__DOT__RESET) 
              & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfrtp_2_17__DOT__base__DOT__RESET)))) 
          | ((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_18__DOT__base__DOT__CLK_delayed) 
             & (~ (IData)(vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfrtp_2_18__DOT__base__DOT__CLK_delayed)))) 
         | ((IData)(vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_18__DOT__base__DOT__RESET) 
            & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfrtp_2_18__DOT__base__DOT__RESET))))) {
        vlTOPp->_multiclk__TOP__130(vlSymsp);
    }
    if ((((((((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_16__DOT__base__DOT__CLK_delayed) 
              & (~ (IData)(vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfrtp_2_16__DOT__base__DOT__CLK_delayed))) 
             | ((IData)(vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_16__DOT__base__DOT__RESET) 
                & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfrtp_2_16__DOT__base__DOT__RESET)))) 
            | ((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_17__DOT__base__DOT__CLK_delayed) 
               & (~ (IData)(vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfrtp_2_17__DOT__base__DOT__CLK_delayed)))) 
           | ((IData)(vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_17__DOT__base__DOT__RESET) 
              & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfrtp_2_17__DOT__base__DOT__RESET)))) 
          | ((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_18__DOT__base__DOT__CLK_delayed) 
             & (~ (IData)(vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfrtp_2_18__DOT__base__DOT__CLK_delayed)))) 
         | ((IData)(vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_18__DOT__base__DOT__RESET) 
            & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfrtp_2_18__DOT__base__DOT__RESET))))) {
        vlTOPp->_multiclk__TOP__131(vlSymsp);
        vlTOPp->__Vm_traceActivity[0xcU] = 1U;
    }
    if ((((((((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_15__DOT__base__DOT__CLK_delayed) 
              & (~ (IData)(vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfrtp_2_15__DOT__base__DOT__CLK_delayed))) 
             | ((IData)(vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_15__DOT__base__DOT__RESET) 
                & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfrtp_2_15__DOT__base__DOT__RESET)))) 
            | ((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_16__DOT__base__DOT__CLK_delayed) 
               & (~ (IData)(vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfrtp_2_16__DOT__base__DOT__CLK_delayed)))) 
           | ((IData)(vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_16__DOT__base__DOT__RESET) 
              & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfrtp_2_16__DOT__base__DOT__RESET)))) 
          | ((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_17__DOT__base__DOT__CLK_delayed) 
             & (~ (IData)(vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfrtp_2_17__DOT__base__DOT__CLK_delayed)))) 
         | ((IData)(vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_17__DOT__base__DOT__RESET) 
            & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfrtp_2_17__DOT__base__DOT__RESET))))) {
        vlTOPp->_multiclk__TOP__132(vlSymsp);
    }
    if ((((((((((((((((((((((IData)(vlTOPp->puzzle__DOT__Xdfrtp_1_26__DOT__base__DOT__CLK_delayed) 
                            & (~ (IData)(vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfrtp_1_26__DOT__base__DOT__CLK_delayed))) 
                           | ((IData)(vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_1_26__DOT__base__DOT__RESET) 
                              & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfrtp_1_26__DOT__base__DOT__RESET)))) 
                          | ((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_19__DOT__base__DOT__CLK_delayed) 
                             & (~ (IData)(vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfrtp_2_19__DOT__base__DOT__CLK_delayed)))) 
                         | ((IData)(vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_19__DOT__base__DOT__RESET) 
                            & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfrtp_2_19__DOT__base__DOT__RESET)))) 
                        | ((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_20__DOT__base__DOT__CLK_delayed) 
                           & (~ (IData)(vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfrtp_2_20__DOT__base__DOT__CLK_delayed)))) 
                       | ((IData)(vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_20__DOT__base__DOT__RESET) 
                          & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfrtp_2_20__DOT__base__DOT__RESET)))) 
                      | ((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_21__DOT__base__DOT__CLK_delayed) 
                         & (~ (IData)(vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfrtp_2_21__DOT__base__DOT__CLK_delayed)))) 
                     | ((IData)(vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_21__DOT__base__DOT__RESET) 
                        & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfrtp_2_21__DOT__base__DOT__RESET)))) 
                    | ((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_22__DOT__base__DOT__CLK_delayed) 
                       & (~ (IData)(vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfrtp_2_22__DOT__base__DOT__CLK_delayed)))) 
                   | ((IData)(vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_22__DOT__base__DOT__RESET) 
                      & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfrtp_2_22__DOT__base__DOT__RESET)))) 
                  | ((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_23__DOT__base__DOT__CLK_delayed) 
                     & (~ (IData)(vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfrtp_2_23__DOT__base__DOT__CLK_delayed)))) 
                 | ((IData)(vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_23__DOT__base__DOT__RESET) 
                    & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfrtp_2_23__DOT__base__DOT__RESET)))) 
                | ((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_24__DOT__base__DOT__CLK_delayed) 
                   & (~ (IData)(vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfrtp_2_24__DOT__base__DOT__CLK_delayed)))) 
               | ((IData)(vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_24__DOT__base__DOT__RESET) 
                  & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfrtp_2_24__DOT__base__DOT__RESET)))) 
              | ((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_25__DOT__base__DOT__CLK_delayed) 
                 & (~ (IData)(vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfrtp_2_25__DOT__base__DOT__CLK_delayed)))) 
             | ((IData)(vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_25__DOT__base__DOT__RESET) 
                & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfrtp_2_25__DOT__base__DOT__RESET)))) 
            | ((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_81__DOT__base__DOT__CLK_delayed) 
               & (~ (IData)(vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfrtp_2_81__DOT__base__DOT__CLK_delayed)))) 
           | ((IData)(vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_81__DOT__base__DOT__RESET) 
              & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfrtp_2_81__DOT__base__DOT__RESET)))) 
          | ((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_82__DOT__base__DOT__CLK_delayed) 
             & (~ (IData)(vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfrtp_2_82__DOT__base__DOT__CLK_delayed)))) 
         | ((IData)(vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_82__DOT__base__DOT__RESET) 
            & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfrtp_2_82__DOT__base__DOT__RESET))))) {
        vlTOPp->_multiclk__TOP__133(vlSymsp);
        vlTOPp->__Vm_traceActivity[0xdU] = 1U;
    }
    if ((((((((((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_15__DOT__base__DOT__CLK_delayed) 
                & (~ (IData)(vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfrtp_2_15__DOT__base__DOT__CLK_delayed))) 
               | ((IData)(vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_15__DOT__base__DOT__RESET) 
                  & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfrtp_2_15__DOT__base__DOT__RESET)))) 
              | ((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_16__DOT__base__DOT__CLK_delayed) 
                 & (~ (IData)(vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfrtp_2_16__DOT__base__DOT__CLK_delayed)))) 
             | ((IData)(vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_16__DOT__base__DOT__RESET) 
                & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfrtp_2_16__DOT__base__DOT__RESET)))) 
            | ((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_43__DOT__base__DOT__CLK_delayed) 
               & (~ (IData)(vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfrtp_2_43__DOT__base__DOT__CLK_delayed)))) 
           | ((IData)(vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_43__DOT__base__DOT__RESET) 
              & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfrtp_2_43__DOT__base__DOT__RESET)))) 
          | ((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_44__DOT__base__DOT__CLK_delayed) 
             & (~ (IData)(vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfrtp_2_44__DOT__base__DOT__CLK_delayed)))) 
         | ((IData)(vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_44__DOT__base__DOT__RESET) 
            & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfrtp_2_44__DOT__base__DOT__RESET))))) {
        vlTOPp->_multiclk__TOP__134(vlSymsp);
        vlTOPp->__Vm_traceActivity[0xeU] = 1U;
    }
    if ((((((((((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_15__DOT__base__DOT__CLK_delayed) 
                & (~ (IData)(vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfrtp_2_15__DOT__base__DOT__CLK_delayed))) 
               | ((IData)(vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_15__DOT__base__DOT__RESET) 
                  & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfrtp_2_15__DOT__base__DOT__RESET)))) 
              | ((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_16__DOT__base__DOT__CLK_delayed) 
                 & (~ (IData)(vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfrtp_2_16__DOT__base__DOT__CLK_delayed)))) 
             | ((IData)(vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_16__DOT__base__DOT__RESET) 
                & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfrtp_2_16__DOT__base__DOT__RESET)))) 
            | ((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_17__DOT__base__DOT__CLK_delayed) 
               & (~ (IData)(vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfrtp_2_17__DOT__base__DOT__CLK_delayed)))) 
           | ((IData)(vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_17__DOT__base__DOT__RESET) 
              & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfrtp_2_17__DOT__base__DOT__RESET)))) 
          | ((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_18__DOT__base__DOT__CLK_delayed) 
             & (~ (IData)(vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfrtp_2_18__DOT__base__DOT__CLK_delayed)))) 
         | ((IData)(vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_18__DOT__base__DOT__RESET) 
            & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfrtp_2_18__DOT__base__DOT__RESET))))) {
        vlTOPp->_multiclk__TOP__135(vlSymsp);
        vlTOPp->__Vm_traceActivity[0xfU] = 1U;
    }
    if ((((((((((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_15__DOT__base__DOT__CLK_delayed) 
                & (~ (IData)(vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfrtp_2_15__DOT__base__DOT__CLK_delayed))) 
               | ((IData)(vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_15__DOT__base__DOT__RESET) 
                  & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfrtp_2_15__DOT__base__DOT__RESET)))) 
              | ((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_16__DOT__base__DOT__CLK_delayed) 
                 & (~ (IData)(vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfrtp_2_16__DOT__base__DOT__CLK_delayed)))) 
             | ((IData)(vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_16__DOT__base__DOT__RESET) 
                & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfrtp_2_16__DOT__base__DOT__RESET)))) 
            | ((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_17__DOT__base__DOT__CLK_delayed) 
               & (~ (IData)(vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfrtp_2_17__DOT__base__DOT__CLK_delayed)))) 
           | ((IData)(vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_17__DOT__base__DOT__RESET) 
              & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfrtp_2_17__DOT__base__DOT__RESET)))) 
          | ((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_46__DOT__base__DOT__CLK_delayed) 
             & (~ (IData)(vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfrtp_2_46__DOT__base__DOT__CLK_delayed)))) 
         | ((IData)(vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_46__DOT__base__DOT__RESET) 
            & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfrtp_2_46__DOT__base__DOT__RESET))))) {
        vlTOPp->_multiclk__TOP__136(vlSymsp);
    }
    if ((((((((((((((((((((((((((((((IData)(vlTOPp->puzzle__DOT__Xdfrtp_1_26__DOT__base__DOT__CLK_delayed) 
                                    & (~ (IData)(vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfrtp_1_26__DOT__base__DOT__CLK_delayed))) 
                                   | ((IData)(vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_1_26__DOT__base__DOT__RESET) 
                                      & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfrtp_1_26__DOT__base__DOT__RESET)))) 
                                  | ((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_19__DOT__base__DOT__CLK_delayed) 
                                     & (~ (IData)(vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfrtp_2_19__DOT__base__DOT__CLK_delayed)))) 
                                 | ((IData)(vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_19__DOT__base__DOT__RESET) 
                                    & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfrtp_2_19__DOT__base__DOT__RESET)))) 
                                | ((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_20__DOT__base__DOT__CLK_delayed) 
                                   & (~ (IData)(vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfrtp_2_20__DOT__base__DOT__CLK_delayed)))) 
                               | ((IData)(vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_20__DOT__base__DOT__RESET) 
                                  & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfrtp_2_20__DOT__base__DOT__RESET)))) 
                              | ((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_21__DOT__base__DOT__CLK_delayed) 
                                 & (~ (IData)(vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfrtp_2_21__DOT__base__DOT__CLK_delayed)))) 
                             | ((IData)(vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_21__DOT__base__DOT__RESET) 
                                & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfrtp_2_21__DOT__base__DOT__RESET)))) 
                            | ((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_22__DOT__base__DOT__CLK_delayed) 
                               & (~ (IData)(vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfrtp_2_22__DOT__base__DOT__CLK_delayed)))) 
                           | ((IData)(vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_22__DOT__base__DOT__RESET) 
                              & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfrtp_2_22__DOT__base__DOT__RESET)))) 
                          | ((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_23__DOT__base__DOT__CLK_delayed) 
                             & (~ (IData)(vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfrtp_2_23__DOT__base__DOT__CLK_delayed)))) 
                         | ((IData)(vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_23__DOT__base__DOT__RESET) 
                            & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfrtp_2_23__DOT__base__DOT__RESET)))) 
                        | ((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_24__DOT__base__DOT__CLK_delayed) 
                           & (~ (IData)(vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfrtp_2_24__DOT__base__DOT__CLK_delayed)))) 
                       | ((IData)(vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_24__DOT__base__DOT__RESET) 
                          & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfrtp_2_24__DOT__base__DOT__RESET)))) 
                      | ((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_25__DOT__base__DOT__CLK_delayed) 
                         & (~ (IData)(vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfrtp_2_25__DOT__base__DOT__CLK_delayed)))) 
                     | ((IData)(vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_25__DOT__base__DOT__RESET) 
                        & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfrtp_2_25__DOT__base__DOT__RESET)))) 
                    | ((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_81__DOT__base__DOT__CLK_delayed) 
                       & (~ (IData)(vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfrtp_2_81__DOT__base__DOT__CLK_delayed)))) 
                   | ((IData)(vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_81__DOT__base__DOT__RESET) 
                      & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfrtp_2_81__DOT__base__DOT__RESET)))) 
                  | ((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_82__DOT__base__DOT__CLK_delayed) 
                     & (~ (IData)(vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfrtp_2_82__DOT__base__DOT__CLK_delayed)))) 
                 | ((IData)(vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_82__DOT__base__DOT__RESET) 
                    & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfrtp_2_82__DOT__base__DOT__RESET)))) 
                | ((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_83__DOT__base__DOT__CLK_delayed) 
                   & (~ (IData)(vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfrtp_2_83__DOT__base__DOT__CLK_delayed)))) 
               | ((IData)(vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_83__DOT__base__DOT__RESET) 
                  & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfrtp_2_83__DOT__base__DOT__RESET)))) 
              | ((IData)(vlTOPp->puzzle__DOT__Xdfstp_2_0__DOT__base__DOT__CLK_delayed) 
                 & (~ (IData)(vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfstp_2_0__DOT__base__DOT__CLK_delayed)))) 
             | ((IData)(vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfstp_2_0__DOT__base__DOT__SET) 
                & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfstp_2_0__DOT__base__DOT__SET)))) 
            | ((IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_0__DOT__base__DOT__CLK_delayed) 
               & (~ (IData)(vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfxtp_2_0__DOT__base__DOT__CLK_delayed)))) 
           | ((IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_1__DOT__base__DOT__CLK_delayed) 
              & (~ (IData)(vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfxtp_2_1__DOT__base__DOT__CLK_delayed)))) 
          | ((IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_2__DOT__base__DOT__CLK_delayed) 
             & (~ (IData)(vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfxtp_2_2__DOT__base__DOT__CLK_delayed)))) 
         | ((IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_3__DOT__base__DOT__CLK_delayed) 
            & (~ (IData)(vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfxtp_2_3__DOT__base__DOT__CLK_delayed))))) {
        vlTOPp->_multiclk__TOP__137(vlSymsp);
    }
    if ((((((((((((((((((((((((((((((IData)(vlTOPp->puzzle__DOT__Xdfrtp_1_26__DOT__base__DOT__CLK_delayed) 
                                    & (~ (IData)(vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfrtp_1_26__DOT__base__DOT__CLK_delayed))) 
                                   | ((IData)(vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_1_26__DOT__base__DOT__RESET) 
                                      & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfrtp_1_26__DOT__base__DOT__RESET)))) 
                                  | ((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_19__DOT__base__DOT__CLK_delayed) 
                                     & (~ (IData)(vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfrtp_2_19__DOT__base__DOT__CLK_delayed)))) 
                                 | ((IData)(vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_19__DOT__base__DOT__RESET) 
                                    & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfrtp_2_19__DOT__base__DOT__RESET)))) 
                                | ((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_20__DOT__base__DOT__CLK_delayed) 
                                   & (~ (IData)(vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfrtp_2_20__DOT__base__DOT__CLK_delayed)))) 
                               | ((IData)(vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_20__DOT__base__DOT__RESET) 
                                  & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfrtp_2_20__DOT__base__DOT__RESET)))) 
                              | ((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_21__DOT__base__DOT__CLK_delayed) 
                                 & (~ (IData)(vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfrtp_2_21__DOT__base__DOT__CLK_delayed)))) 
                             | ((IData)(vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_21__DOT__base__DOT__RESET) 
                                & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfrtp_2_21__DOT__base__DOT__RESET)))) 
                            | ((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_22__DOT__base__DOT__CLK_delayed) 
                               & (~ (IData)(vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfrtp_2_22__DOT__base__DOT__CLK_delayed)))) 
                           | ((IData)(vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_22__DOT__base__DOT__RESET) 
                              & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfrtp_2_22__DOT__base__DOT__RESET)))) 
                          | ((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_23__DOT__base__DOT__CLK_delayed) 
                             & (~ (IData)(vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfrtp_2_23__DOT__base__DOT__CLK_delayed)))) 
                         | ((IData)(vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_23__DOT__base__DOT__RESET) 
                            & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfrtp_2_23__DOT__base__DOT__RESET)))) 
                        | ((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_24__DOT__base__DOT__CLK_delayed) 
                           & (~ (IData)(vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfrtp_2_24__DOT__base__DOT__CLK_delayed)))) 
                       | ((IData)(vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_24__DOT__base__DOT__RESET) 
                          & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfrtp_2_24__DOT__base__DOT__RESET)))) 
                      | ((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_25__DOT__base__DOT__CLK_delayed) 
                         & (~ (IData)(vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfrtp_2_25__DOT__base__DOT__CLK_delayed)))) 
                     | ((IData)(vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_25__DOT__base__DOT__RESET) 
                        & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfrtp_2_25__DOT__base__DOT__RESET)))) 
                    | ((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_81__DOT__base__DOT__CLK_delayed) 
                       & (~ (IData)(vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfrtp_2_81__DOT__base__DOT__CLK_delayed)))) 
                   | ((IData)(vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_81__DOT__base__DOT__RESET) 
                      & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfrtp_2_81__DOT__base__DOT__RESET)))) 
                  | ((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_82__DOT__base__DOT__CLK_delayed) 
                     & (~ (IData)(vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfrtp_2_82__DOT__base__DOT__CLK_delayed)))) 
                 | ((IData)(vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_82__DOT__base__DOT__RESET) 
                    & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfrtp_2_82__DOT__base__DOT__RESET)))) 
                | ((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_83__DOT__base__DOT__CLK_delayed) 
                   & (~ (IData)(vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfrtp_2_83__DOT__base__DOT__CLK_delayed)))) 
               | ((IData)(vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_83__DOT__base__DOT__RESET) 
                  & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfrtp_2_83__DOT__base__DOT__RESET)))) 
              | ((IData)(vlTOPp->puzzle__DOT__Xdfstp_2_2__DOT__base__DOT__CLK_delayed) 
                 & (~ (IData)(vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfstp_2_2__DOT__base__DOT__CLK_delayed)))) 
             | ((IData)(vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfstp_2_2__DOT__base__DOT__SET) 
                & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfstp_2_2__DOT__base__DOT__SET)))) 
            | ((IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_0__DOT__base__DOT__CLK_delayed) 
               & (~ (IData)(vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfxtp_2_0__DOT__base__DOT__CLK_delayed)))) 
           | ((IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_1__DOT__base__DOT__CLK_delayed) 
              & (~ (IData)(vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfxtp_2_1__DOT__base__DOT__CLK_delayed)))) 
          | ((IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_2__DOT__base__DOT__CLK_delayed) 
             & (~ (IData)(vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfxtp_2_2__DOT__base__DOT__CLK_delayed)))) 
         | ((IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_3__DOT__base__DOT__CLK_delayed) 
            & (~ (IData)(vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfxtp_2_3__DOT__base__DOT__CLK_delayed))))) {
        vlTOPp->_multiclk__TOP__138(vlSymsp);
    }
    if ((((((((((((((((((((((((((((((IData)(vlTOPp->puzzle__DOT__Xdfrtp_1_26__DOT__base__DOT__CLK_delayed) 
                                    & (~ (IData)(vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfrtp_1_26__DOT__base__DOT__CLK_delayed))) 
                                   | ((IData)(vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_1_26__DOT__base__DOT__RESET) 
                                      & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfrtp_1_26__DOT__base__DOT__RESET)))) 
                                  | ((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_19__DOT__base__DOT__CLK_delayed) 
                                     & (~ (IData)(vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfrtp_2_19__DOT__base__DOT__CLK_delayed)))) 
                                 | ((IData)(vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_19__DOT__base__DOT__RESET) 
                                    & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfrtp_2_19__DOT__base__DOT__RESET)))) 
                                | ((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_20__DOT__base__DOT__CLK_delayed) 
                                   & (~ (IData)(vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfrtp_2_20__DOT__base__DOT__CLK_delayed)))) 
                               | ((IData)(vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_20__DOT__base__DOT__RESET) 
                                  & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfrtp_2_20__DOT__base__DOT__RESET)))) 
                              | ((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_21__DOT__base__DOT__CLK_delayed) 
                                 & (~ (IData)(vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfrtp_2_21__DOT__base__DOT__CLK_delayed)))) 
                             | ((IData)(vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_21__DOT__base__DOT__RESET) 
                                & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfrtp_2_21__DOT__base__DOT__RESET)))) 
                            | ((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_22__DOT__base__DOT__CLK_delayed) 
                               & (~ (IData)(vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfrtp_2_22__DOT__base__DOT__CLK_delayed)))) 
                           | ((IData)(vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_22__DOT__base__DOT__RESET) 
                              & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfrtp_2_22__DOT__base__DOT__RESET)))) 
                          | ((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_23__DOT__base__DOT__CLK_delayed) 
                             & (~ (IData)(vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfrtp_2_23__DOT__base__DOT__CLK_delayed)))) 
                         | ((IData)(vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_23__DOT__base__DOT__RESET) 
                            & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfrtp_2_23__DOT__base__DOT__RESET)))) 
                        | ((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_24__DOT__base__DOT__CLK_delayed) 
                           & (~ (IData)(vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfrtp_2_24__DOT__base__DOT__CLK_delayed)))) 
                       | ((IData)(vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_24__DOT__base__DOT__RESET) 
                          & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfrtp_2_24__DOT__base__DOT__RESET)))) 
                      | ((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_25__DOT__base__DOT__CLK_delayed) 
                         & (~ (IData)(vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfrtp_2_25__DOT__base__DOT__CLK_delayed)))) 
                     | ((IData)(vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_25__DOT__base__DOT__RESET) 
                        & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfrtp_2_25__DOT__base__DOT__RESET)))) 
                    | ((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_81__DOT__base__DOT__CLK_delayed) 
                       & (~ (IData)(vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfrtp_2_81__DOT__base__DOT__CLK_delayed)))) 
                   | ((IData)(vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_81__DOT__base__DOT__RESET) 
                      & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfrtp_2_81__DOT__base__DOT__RESET)))) 
                  | ((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_82__DOT__base__DOT__CLK_delayed) 
                     & (~ (IData)(vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfrtp_2_82__DOT__base__DOT__CLK_delayed)))) 
                 | ((IData)(vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_82__DOT__base__DOT__RESET) 
                    & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfrtp_2_82__DOT__base__DOT__RESET)))) 
                | ((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_83__DOT__base__DOT__CLK_delayed) 
                   & (~ (IData)(vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfrtp_2_83__DOT__base__DOT__CLK_delayed)))) 
               | ((IData)(vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_83__DOT__base__DOT__RESET) 
                  & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfrtp_2_83__DOT__base__DOT__RESET)))) 
              | ((IData)(vlTOPp->puzzle__DOT__Xdfstp_2_3__DOT__base__DOT__CLK_delayed) 
                 & (~ (IData)(vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfstp_2_3__DOT__base__DOT__CLK_delayed)))) 
             | ((IData)(vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfstp_2_3__DOT__base__DOT__SET) 
                & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfstp_2_3__DOT__base__DOT__SET)))) 
            | ((IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_0__DOT__base__DOT__CLK_delayed) 
               & (~ (IData)(vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfxtp_2_0__DOT__base__DOT__CLK_delayed)))) 
           | ((IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_1__DOT__base__DOT__CLK_delayed) 
              & (~ (IData)(vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfxtp_2_1__DOT__base__DOT__CLK_delayed)))) 
          | ((IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_2__DOT__base__DOT__CLK_delayed) 
             & (~ (IData)(vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfxtp_2_2__DOT__base__DOT__CLK_delayed)))) 
         | ((IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_3__DOT__base__DOT__CLK_delayed) 
            & (~ (IData)(vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfxtp_2_3__DOT__base__DOT__CLK_delayed))))) {
        vlTOPp->_multiclk__TOP__139(vlSymsp);
    }
    if ((((((((((((((((((((((((((((((IData)(vlTOPp->puzzle__DOT__Xdfrtp_1_26__DOT__base__DOT__CLK_delayed) 
                                    & (~ (IData)(vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfrtp_1_26__DOT__base__DOT__CLK_delayed))) 
                                   | ((IData)(vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_1_26__DOT__base__DOT__RESET) 
                                      & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfrtp_1_26__DOT__base__DOT__RESET)))) 
                                  | ((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_19__DOT__base__DOT__CLK_delayed) 
                                     & (~ (IData)(vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfrtp_2_19__DOT__base__DOT__CLK_delayed)))) 
                                 | ((IData)(vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_19__DOT__base__DOT__RESET) 
                                    & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfrtp_2_19__DOT__base__DOT__RESET)))) 
                                | ((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_20__DOT__base__DOT__CLK_delayed) 
                                   & (~ (IData)(vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfrtp_2_20__DOT__base__DOT__CLK_delayed)))) 
                               | ((IData)(vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_20__DOT__base__DOT__RESET) 
                                  & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfrtp_2_20__DOT__base__DOT__RESET)))) 
                              | ((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_21__DOT__base__DOT__CLK_delayed) 
                                 & (~ (IData)(vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfrtp_2_21__DOT__base__DOT__CLK_delayed)))) 
                             | ((IData)(vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_21__DOT__base__DOT__RESET) 
                                & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfrtp_2_21__DOT__base__DOT__RESET)))) 
                            | ((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_22__DOT__base__DOT__CLK_delayed) 
                               & (~ (IData)(vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfrtp_2_22__DOT__base__DOT__CLK_delayed)))) 
                           | ((IData)(vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_22__DOT__base__DOT__RESET) 
                              & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfrtp_2_22__DOT__base__DOT__RESET)))) 
                          | ((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_23__DOT__base__DOT__CLK_delayed) 
                             & (~ (IData)(vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfrtp_2_23__DOT__base__DOT__CLK_delayed)))) 
                         | ((IData)(vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_23__DOT__base__DOT__RESET) 
                            & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfrtp_2_23__DOT__base__DOT__RESET)))) 
                        | ((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_24__DOT__base__DOT__CLK_delayed) 
                           & (~ (IData)(vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfrtp_2_24__DOT__base__DOT__CLK_delayed)))) 
                       | ((IData)(vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_24__DOT__base__DOT__RESET) 
                          & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfrtp_2_24__DOT__base__DOT__RESET)))) 
                      | ((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_25__DOT__base__DOT__CLK_delayed) 
                         & (~ (IData)(vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfrtp_2_25__DOT__base__DOT__CLK_delayed)))) 
                     | ((IData)(vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_25__DOT__base__DOT__RESET) 
                        & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfrtp_2_25__DOT__base__DOT__RESET)))) 
                    | ((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_48__DOT__base__DOT__CLK_delayed) 
                       & (~ (IData)(vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfrtp_2_48__DOT__base__DOT__CLK_delayed)))) 
                   | ((IData)(vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_48__DOT__base__DOT__RESET) 
                      & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfrtp_2_48__DOT__base__DOT__RESET)))) 
                  | ((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_81__DOT__base__DOT__CLK_delayed) 
                     & (~ (IData)(vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfrtp_2_81__DOT__base__DOT__CLK_delayed)))) 
                 | ((IData)(vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_81__DOT__base__DOT__RESET) 
                    & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfrtp_2_81__DOT__base__DOT__RESET)))) 
                | ((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_82__DOT__base__DOT__CLK_delayed) 
                   & (~ (IData)(vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfrtp_2_82__DOT__base__DOT__CLK_delayed)))) 
               | ((IData)(vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_82__DOT__base__DOT__RESET) 
                  & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfrtp_2_82__DOT__base__DOT__RESET)))) 
              | ((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_83__DOT__base__DOT__CLK_delayed) 
                 & (~ (IData)(vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfrtp_2_83__DOT__base__DOT__CLK_delayed)))) 
             | ((IData)(vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_83__DOT__base__DOT__RESET) 
                & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfrtp_2_83__DOT__base__DOT__RESET)))) 
            | ((IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_0__DOT__base__DOT__CLK_delayed) 
               & (~ (IData)(vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfxtp_2_0__DOT__base__DOT__CLK_delayed)))) 
           | ((IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_1__DOT__base__DOT__CLK_delayed) 
              & (~ (IData)(vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfxtp_2_1__DOT__base__DOT__CLK_delayed)))) 
          | ((IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_2__DOT__base__DOT__CLK_delayed) 
             & (~ (IData)(vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfxtp_2_2__DOT__base__DOT__CLK_delayed)))) 
         | ((IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_3__DOT__base__DOT__CLK_delayed) 
            & (~ (IData)(vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfxtp_2_3__DOT__base__DOT__CLK_delayed))))) {
        vlTOPp->_multiclk__TOP__140(vlSymsp);
    }
    if ((((((((((((((((((((((((((((((IData)(vlTOPp->puzzle__DOT__Xdfrtp_1_26__DOT__base__DOT__CLK_delayed) 
                                    & (~ (IData)(vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfrtp_1_26__DOT__base__DOT__CLK_delayed))) 
                                   | ((IData)(vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_1_26__DOT__base__DOT__RESET) 
                                      & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfrtp_1_26__DOT__base__DOT__RESET)))) 
                                  | ((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_19__DOT__base__DOT__CLK_delayed) 
                                     & (~ (IData)(vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfrtp_2_19__DOT__base__DOT__CLK_delayed)))) 
                                 | ((IData)(vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_19__DOT__base__DOT__RESET) 
                                    & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfrtp_2_19__DOT__base__DOT__RESET)))) 
                                | ((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_20__DOT__base__DOT__CLK_delayed) 
                                   & (~ (IData)(vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfrtp_2_20__DOT__base__DOT__CLK_delayed)))) 
                               | ((IData)(vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_20__DOT__base__DOT__RESET) 
                                  & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfrtp_2_20__DOT__base__DOT__RESET)))) 
                              | ((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_21__DOT__base__DOT__CLK_delayed) 
                                 & (~ (IData)(vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfrtp_2_21__DOT__base__DOT__CLK_delayed)))) 
                             | ((IData)(vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_21__DOT__base__DOT__RESET) 
                                & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfrtp_2_21__DOT__base__DOT__RESET)))) 
                            | ((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_22__DOT__base__DOT__CLK_delayed) 
                               & (~ (IData)(vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfrtp_2_22__DOT__base__DOT__CLK_delayed)))) 
                           | ((IData)(vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_22__DOT__base__DOT__RESET) 
                              & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfrtp_2_22__DOT__base__DOT__RESET)))) 
                          | ((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_23__DOT__base__DOT__CLK_delayed) 
                             & (~ (IData)(vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfrtp_2_23__DOT__base__DOT__CLK_delayed)))) 
                         | ((IData)(vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_23__DOT__base__DOT__RESET) 
                            & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfrtp_2_23__DOT__base__DOT__RESET)))) 
                        | ((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_24__DOT__base__DOT__CLK_delayed) 
                           & (~ (IData)(vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfrtp_2_24__DOT__base__DOT__CLK_delayed)))) 
                       | ((IData)(vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_24__DOT__base__DOT__RESET) 
                          & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfrtp_2_24__DOT__base__DOT__RESET)))) 
                      | ((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_25__DOT__base__DOT__CLK_delayed) 
                         & (~ (IData)(vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfrtp_2_25__DOT__base__DOT__CLK_delayed)))) 
                     | ((IData)(vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_25__DOT__base__DOT__RESET) 
                        & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfrtp_2_25__DOT__base__DOT__RESET)))) 
                    | ((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_81__DOT__base__DOT__CLK_delayed) 
                       & (~ (IData)(vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfrtp_2_81__DOT__base__DOT__CLK_delayed)))) 
                   | ((IData)(vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_81__DOT__base__DOT__RESET) 
                      & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfrtp_2_81__DOT__base__DOT__RESET)))) 
                  | ((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_82__DOT__base__DOT__CLK_delayed) 
                     & (~ (IData)(vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfrtp_2_82__DOT__base__DOT__CLK_delayed)))) 
                 | ((IData)(vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_82__DOT__base__DOT__RESET) 
                    & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfrtp_2_82__DOT__base__DOT__RESET)))) 
                | ((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_83__DOT__base__DOT__CLK_delayed) 
                   & (~ (IData)(vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfrtp_2_83__DOT__base__DOT__CLK_delayed)))) 
               | ((IData)(vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_83__DOT__base__DOT__RESET) 
                  & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfrtp_2_83__DOT__base__DOT__RESET)))) 
              | ((IData)(vlTOPp->puzzle__DOT__Xdfstp_2_1__DOT__base__DOT__CLK_delayed) 
                 & (~ (IData)(vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfstp_2_1__DOT__base__DOT__CLK_delayed)))) 
             | ((IData)(vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfstp_2_1__DOT__base__DOT__SET) 
                & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfstp_2_1__DOT__base__DOT__SET)))) 
            | ((IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_0__DOT__base__DOT__CLK_delayed) 
               & (~ (IData)(vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfxtp_2_0__DOT__base__DOT__CLK_delayed)))) 
           | ((IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_1__DOT__base__DOT__CLK_delayed) 
              & (~ (IData)(vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfxtp_2_1__DOT__base__DOT__CLK_delayed)))) 
          | ((IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_2__DOT__base__DOT__CLK_delayed) 
             & (~ (IData)(vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfxtp_2_2__DOT__base__DOT__CLK_delayed)))) 
         | ((IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_3__DOT__base__DOT__CLK_delayed) 
            & (~ (IData)(vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfxtp_2_3__DOT__base__DOT__CLK_delayed))))) {
        vlTOPp->_multiclk__TOP__141(vlSymsp);
    }
    if ((((((((((((((((((((((((((((((IData)(vlTOPp->puzzle__DOT__Xdfrtp_1_26__DOT__base__DOT__CLK_delayed) 
                                    & (~ (IData)(vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfrtp_1_26__DOT__base__DOT__CLK_delayed))) 
                                   | ((IData)(vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_1_26__DOT__base__DOT__RESET) 
                                      & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfrtp_1_26__DOT__base__DOT__RESET)))) 
                                  | ((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_19__DOT__base__DOT__CLK_delayed) 
                                     & (~ (IData)(vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfrtp_2_19__DOT__base__DOT__CLK_delayed)))) 
                                 | ((IData)(vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_19__DOT__base__DOT__RESET) 
                                    & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfrtp_2_19__DOT__base__DOT__RESET)))) 
                                | ((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_20__DOT__base__DOT__CLK_delayed) 
                                   & (~ (IData)(vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfrtp_2_20__DOT__base__DOT__CLK_delayed)))) 
                               | ((IData)(vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_20__DOT__base__DOT__RESET) 
                                  & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfrtp_2_20__DOT__base__DOT__RESET)))) 
                              | ((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_21__DOT__base__DOT__CLK_delayed) 
                                 & (~ (IData)(vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfrtp_2_21__DOT__base__DOT__CLK_delayed)))) 
                             | ((IData)(vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_21__DOT__base__DOT__RESET) 
                                & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfrtp_2_21__DOT__base__DOT__RESET)))) 
                            | ((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_22__DOT__base__DOT__CLK_delayed) 
                               & (~ (IData)(vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfrtp_2_22__DOT__base__DOT__CLK_delayed)))) 
                           | ((IData)(vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_22__DOT__base__DOT__RESET) 
                              & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfrtp_2_22__DOT__base__DOT__RESET)))) 
                          | ((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_23__DOT__base__DOT__CLK_delayed) 
                             & (~ (IData)(vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfrtp_2_23__DOT__base__DOT__CLK_delayed)))) 
                         | ((IData)(vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_23__DOT__base__DOT__RESET) 
                            & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfrtp_2_23__DOT__base__DOT__RESET)))) 
                        | ((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_24__DOT__base__DOT__CLK_delayed) 
                           & (~ (IData)(vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfrtp_2_24__DOT__base__DOT__CLK_delayed)))) 
                       | ((IData)(vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_24__DOT__base__DOT__RESET) 
                          & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfrtp_2_24__DOT__base__DOT__RESET)))) 
                      | ((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_25__DOT__base__DOT__CLK_delayed) 
                         & (~ (IData)(vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfrtp_2_25__DOT__base__DOT__CLK_delayed)))) 
                     | ((IData)(vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_25__DOT__base__DOT__RESET) 
                        & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfrtp_2_25__DOT__base__DOT__RESET)))) 
                    | ((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_49__DOT__base__DOT__CLK_delayed) 
                       & (~ (IData)(vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfrtp_2_49__DOT__base__DOT__CLK_delayed)))) 
                   | ((IData)(vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_49__DOT__base__DOT__RESET) 
                      & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfrtp_2_49__DOT__base__DOT__RESET)))) 
                  | ((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_81__DOT__base__DOT__CLK_delayed) 
                     & (~ (IData)(vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfrtp_2_81__DOT__base__DOT__CLK_delayed)))) 
                 | ((IData)(vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_81__DOT__base__DOT__RESET) 
                    & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfrtp_2_81__DOT__base__DOT__RESET)))) 
                | ((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_82__DOT__base__DOT__CLK_delayed) 
                   & (~ (IData)(vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfrtp_2_82__DOT__base__DOT__CLK_delayed)))) 
               | ((IData)(vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_82__DOT__base__DOT__RESET) 
                  & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfrtp_2_82__DOT__base__DOT__RESET)))) 
              | ((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_83__DOT__base__DOT__CLK_delayed) 
                 & (~ (IData)(vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfrtp_2_83__DOT__base__DOT__CLK_delayed)))) 
             | ((IData)(vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_83__DOT__base__DOT__RESET) 
                & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfrtp_2_83__DOT__base__DOT__RESET)))) 
            | ((IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_0__DOT__base__DOT__CLK_delayed) 
               & (~ (IData)(vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfxtp_2_0__DOT__base__DOT__CLK_delayed)))) 
           | ((IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_1__DOT__base__DOT__CLK_delayed) 
              & (~ (IData)(vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfxtp_2_1__DOT__base__DOT__CLK_delayed)))) 
          | ((IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_2__DOT__base__DOT__CLK_delayed) 
             & (~ (IData)(vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfxtp_2_2__DOT__base__DOT__CLK_delayed)))) 
         | ((IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_3__DOT__base__DOT__CLK_delayed) 
            & (~ (IData)(vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfxtp_2_3__DOT__base__DOT__CLK_delayed))))) {
        vlTOPp->_multiclk__TOP__142(vlSymsp);
    }
    if ((((((((((((((((((((((((((((((IData)(vlTOPp->puzzle__DOT__Xdfrtp_1_26__DOT__base__DOT__CLK_delayed) 
                                    & (~ (IData)(vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfrtp_1_26__DOT__base__DOT__CLK_delayed))) 
                                   | ((IData)(vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_1_26__DOT__base__DOT__RESET) 
                                      & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfrtp_1_26__DOT__base__DOT__RESET)))) 
                                  | ((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_19__DOT__base__DOT__CLK_delayed) 
                                     & (~ (IData)(vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfrtp_2_19__DOT__base__DOT__CLK_delayed)))) 
                                 | ((IData)(vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_19__DOT__base__DOT__RESET) 
                                    & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfrtp_2_19__DOT__base__DOT__RESET)))) 
                                | ((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_20__DOT__base__DOT__CLK_delayed) 
                                   & (~ (IData)(vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfrtp_2_20__DOT__base__DOT__CLK_delayed)))) 
                               | ((IData)(vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_20__DOT__base__DOT__RESET) 
                                  & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfrtp_2_20__DOT__base__DOT__RESET)))) 
                              | ((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_21__DOT__base__DOT__CLK_delayed) 
                                 & (~ (IData)(vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfrtp_2_21__DOT__base__DOT__CLK_delayed)))) 
                             | ((IData)(vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_21__DOT__base__DOT__RESET) 
                                & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfrtp_2_21__DOT__base__DOT__RESET)))) 
                            | ((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_22__DOT__base__DOT__CLK_delayed) 
                               & (~ (IData)(vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfrtp_2_22__DOT__base__DOT__CLK_delayed)))) 
                           | ((IData)(vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_22__DOT__base__DOT__RESET) 
                              & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfrtp_2_22__DOT__base__DOT__RESET)))) 
                          | ((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_23__DOT__base__DOT__CLK_delayed) 
                             & (~ (IData)(vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfrtp_2_23__DOT__base__DOT__CLK_delayed)))) 
                         | ((IData)(vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_23__DOT__base__DOT__RESET) 
                            & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfrtp_2_23__DOT__base__DOT__RESET)))) 
                        | ((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_24__DOT__base__DOT__CLK_delayed) 
                           & (~ (IData)(vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfrtp_2_24__DOT__base__DOT__CLK_delayed)))) 
                       | ((IData)(vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_24__DOT__base__DOT__RESET) 
                          & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfrtp_2_24__DOT__base__DOT__RESET)))) 
                      | ((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_25__DOT__base__DOT__CLK_delayed) 
                         & (~ (IData)(vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfrtp_2_25__DOT__base__DOT__CLK_delayed)))) 
                     | ((IData)(vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_25__DOT__base__DOT__RESET) 
                        & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfrtp_2_25__DOT__base__DOT__RESET)))) 
                    | ((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_50__DOT__base__DOT__CLK_delayed) 
                       & (~ (IData)(vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfrtp_2_50__DOT__base__DOT__CLK_delayed)))) 
                   | ((IData)(vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_50__DOT__base__DOT__RESET) 
                      & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfrtp_2_50__DOT__base__DOT__RESET)))) 
                  | ((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_81__DOT__base__DOT__CLK_delayed) 
                     & (~ (IData)(vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfrtp_2_81__DOT__base__DOT__CLK_delayed)))) 
                 | ((IData)(vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_81__DOT__base__DOT__RESET) 
                    & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfrtp_2_81__DOT__base__DOT__RESET)))) 
                | ((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_82__DOT__base__DOT__CLK_delayed) 
                   & (~ (IData)(vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfrtp_2_82__DOT__base__DOT__CLK_delayed)))) 
               | ((IData)(vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_82__DOT__base__DOT__RESET) 
                  & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfrtp_2_82__DOT__base__DOT__RESET)))) 
              | ((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_83__DOT__base__DOT__CLK_delayed) 
                 & (~ (IData)(vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfrtp_2_83__DOT__base__DOT__CLK_delayed)))) 
             | ((IData)(vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_83__DOT__base__DOT__RESET) 
                & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfrtp_2_83__DOT__base__DOT__RESET)))) 
            | ((IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_0__DOT__base__DOT__CLK_delayed) 
               & (~ (IData)(vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfxtp_2_0__DOT__base__DOT__CLK_delayed)))) 
           | ((IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_1__DOT__base__DOT__CLK_delayed) 
              & (~ (IData)(vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfxtp_2_1__DOT__base__DOT__CLK_delayed)))) 
          | ((IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_2__DOT__base__DOT__CLK_delayed) 
             & (~ (IData)(vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfxtp_2_2__DOT__base__DOT__CLK_delayed)))) 
         | ((IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_3__DOT__base__DOT__CLK_delayed) 
            & (~ (IData)(vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfxtp_2_3__DOT__base__DOT__CLK_delayed))))) {
        vlTOPp->_multiclk__TOP__143(vlSymsp);
    }
    if ((((((((((((((((((((((((((((((IData)(vlTOPp->puzzle__DOT__Xdfrtp_1_26__DOT__base__DOT__CLK_delayed) 
                                    & (~ (IData)(vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfrtp_1_26__DOT__base__DOT__CLK_delayed))) 
                                   | ((IData)(vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_1_26__DOT__base__DOT__RESET) 
                                      & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfrtp_1_26__DOT__base__DOT__RESET)))) 
                                  | ((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_19__DOT__base__DOT__CLK_delayed) 
                                     & (~ (IData)(vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfrtp_2_19__DOT__base__DOT__CLK_delayed)))) 
                                 | ((IData)(vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_19__DOT__base__DOT__RESET) 
                                    & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfrtp_2_19__DOT__base__DOT__RESET)))) 
                                | ((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_20__DOT__base__DOT__CLK_delayed) 
                                   & (~ (IData)(vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfrtp_2_20__DOT__base__DOT__CLK_delayed)))) 
                               | ((IData)(vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_20__DOT__base__DOT__RESET) 
                                  & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfrtp_2_20__DOT__base__DOT__RESET)))) 
                              | ((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_21__DOT__base__DOT__CLK_delayed) 
                                 & (~ (IData)(vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfrtp_2_21__DOT__base__DOT__CLK_delayed)))) 
                             | ((IData)(vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_21__DOT__base__DOT__RESET) 
                                & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfrtp_2_21__DOT__base__DOT__RESET)))) 
                            | ((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_22__DOT__base__DOT__CLK_delayed) 
                               & (~ (IData)(vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfrtp_2_22__DOT__base__DOT__CLK_delayed)))) 
                           | ((IData)(vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_22__DOT__base__DOT__RESET) 
                              & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfrtp_2_22__DOT__base__DOT__RESET)))) 
                          | ((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_23__DOT__base__DOT__CLK_delayed) 
                             & (~ (IData)(vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfrtp_2_23__DOT__base__DOT__CLK_delayed)))) 
                         | ((IData)(vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_23__DOT__base__DOT__RESET) 
                            & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfrtp_2_23__DOT__base__DOT__RESET)))) 
                        | ((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_24__DOT__base__DOT__CLK_delayed) 
                           & (~ (IData)(vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfrtp_2_24__DOT__base__DOT__CLK_delayed)))) 
                       | ((IData)(vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_24__DOT__base__DOT__RESET) 
                          & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfrtp_2_24__DOT__base__DOT__RESET)))) 
                      | ((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_25__DOT__base__DOT__CLK_delayed) 
                         & (~ (IData)(vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfrtp_2_25__DOT__base__DOT__CLK_delayed)))) 
                     | ((IData)(vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_25__DOT__base__DOT__RESET) 
                        & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfrtp_2_25__DOT__base__DOT__RESET)))) 
                    | ((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_51__DOT__base__DOT__CLK_delayed) 
                       & (~ (IData)(vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfrtp_2_51__DOT__base__DOT__CLK_delayed)))) 
                   | ((IData)(vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_51__DOT__base__DOT__RESET) 
                      & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfrtp_2_51__DOT__base__DOT__RESET)))) 
                  | ((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_81__DOT__base__DOT__CLK_delayed) 
                     & (~ (IData)(vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfrtp_2_81__DOT__base__DOT__CLK_delayed)))) 
                 | ((IData)(vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_81__DOT__base__DOT__RESET) 
                    & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfrtp_2_81__DOT__base__DOT__RESET)))) 
                | ((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_82__DOT__base__DOT__CLK_delayed) 
                   & (~ (IData)(vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfrtp_2_82__DOT__base__DOT__CLK_delayed)))) 
               | ((IData)(vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_82__DOT__base__DOT__RESET) 
                  & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfrtp_2_82__DOT__base__DOT__RESET)))) 
              | ((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_83__DOT__base__DOT__CLK_delayed) 
                 & (~ (IData)(vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfrtp_2_83__DOT__base__DOT__CLK_delayed)))) 
             | ((IData)(vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_83__DOT__base__DOT__RESET) 
                & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfrtp_2_83__DOT__base__DOT__RESET)))) 
            | ((IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_0__DOT__base__DOT__CLK_delayed) 
               & (~ (IData)(vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfxtp_2_0__DOT__base__DOT__CLK_delayed)))) 
           | ((IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_1__DOT__base__DOT__CLK_delayed) 
              & (~ (IData)(vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfxtp_2_1__DOT__base__DOT__CLK_delayed)))) 
          | ((IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_2__DOT__base__DOT__CLK_delayed) 
             & (~ (IData)(vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfxtp_2_2__DOT__base__DOT__CLK_delayed)))) 
         | ((IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_3__DOT__base__DOT__CLK_delayed) 
            & (~ (IData)(vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfxtp_2_3__DOT__base__DOT__CLK_delayed))))) {
        vlTOPp->_multiclk__TOP__144(vlSymsp);
    }
    if ((((((((((((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_15__DOT__base__DOT__CLK_delayed) 
                  & (~ (IData)(vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfrtp_2_15__DOT__base__DOT__CLK_delayed))) 
                 | ((IData)(vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_15__DOT__base__DOT__RESET) 
                    & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfrtp_2_15__DOT__base__DOT__RESET)))) 
                | ((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_16__DOT__base__DOT__CLK_delayed) 
                   & (~ (IData)(vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfrtp_2_16__DOT__base__DOT__CLK_delayed)))) 
               | ((IData)(vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_16__DOT__base__DOT__RESET) 
                  & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfrtp_2_16__DOT__base__DOT__RESET)))) 
              | ((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_17__DOT__base__DOT__CLK_delayed) 
                 & (~ (IData)(vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfrtp_2_17__DOT__base__DOT__CLK_delayed)))) 
             | ((IData)(vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_17__DOT__base__DOT__RESET) 
                & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfrtp_2_17__DOT__base__DOT__RESET)))) 
            | ((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_18__DOT__base__DOT__CLK_delayed) 
               & (~ (IData)(vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfrtp_2_18__DOT__base__DOT__CLK_delayed)))) 
           | ((IData)(vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_18__DOT__base__DOT__RESET) 
              & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfrtp_2_18__DOT__base__DOT__RESET)))) 
          | ((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_45__DOT__base__DOT__CLK_delayed) 
             & (~ (IData)(vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfrtp_2_45__DOT__base__DOT__CLK_delayed)))) 
         | ((IData)(vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_45__DOT__base__DOT__RESET) 
            & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfrtp_2_45__DOT__base__DOT__RESET))))) {
        vlTOPp->_multiclk__TOP__145(vlSymsp);
        vlTOPp->__Vm_traceActivity[0x10U] = 1U;
    }
    if ((((((((((((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_15__DOT__base__DOT__CLK_delayed) 
                  & (~ (IData)(vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfrtp_2_15__DOT__base__DOT__CLK_delayed))) 
                 | ((IData)(vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_15__DOT__base__DOT__RESET) 
                    & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfrtp_2_15__DOT__base__DOT__RESET)))) 
                | ((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_16__DOT__base__DOT__CLK_delayed) 
                   & (~ (IData)(vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfrtp_2_16__DOT__base__DOT__CLK_delayed)))) 
               | ((IData)(vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_16__DOT__base__DOT__RESET) 
                  & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfrtp_2_16__DOT__base__DOT__RESET)))) 
              | ((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_17__DOT__base__DOT__CLK_delayed) 
                 & (~ (IData)(vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfrtp_2_17__DOT__base__DOT__CLK_delayed)))) 
             | ((IData)(vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_17__DOT__base__DOT__RESET) 
                & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfrtp_2_17__DOT__base__DOT__RESET)))) 
            | ((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_43__DOT__base__DOT__CLK_delayed) 
               & (~ (IData)(vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfrtp_2_43__DOT__base__DOT__CLK_delayed)))) 
           | ((IData)(vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_43__DOT__base__DOT__RESET) 
              & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfrtp_2_43__DOT__base__DOT__RESET)))) 
          | ((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_46__DOT__base__DOT__CLK_delayed) 
             & (~ (IData)(vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfrtp_2_46__DOT__base__DOT__CLK_delayed)))) 
         | ((IData)(vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_46__DOT__base__DOT__RESET) 
            & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfrtp_2_46__DOT__base__DOT__RESET))))) {
        vlTOPp->_multiclk__TOP__146(vlSymsp);
    }
    if ((((((((((((((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_15__DOT__base__DOT__CLK_delayed) 
                    & (~ (IData)(vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfrtp_2_15__DOT__base__DOT__CLK_delayed))) 
                   | ((IData)(vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_15__DOT__base__DOT__RESET) 
                      & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfrtp_2_15__DOT__base__DOT__RESET)))) 
                  | ((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_16__DOT__base__DOT__CLK_delayed) 
                     & (~ (IData)(vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfrtp_2_16__DOT__base__DOT__CLK_delayed)))) 
                 | ((IData)(vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_16__DOT__base__DOT__RESET) 
                    & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfrtp_2_16__DOT__base__DOT__RESET)))) 
                | ((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_17__DOT__base__DOT__CLK_delayed) 
                   & (~ (IData)(vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfrtp_2_17__DOT__base__DOT__CLK_delayed)))) 
               | ((IData)(vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_17__DOT__base__DOT__RESET) 
                  & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfrtp_2_17__DOT__base__DOT__RESET)))) 
              | ((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_18__DOT__base__DOT__CLK_delayed) 
                 & (~ (IData)(vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfrtp_2_18__DOT__base__DOT__CLK_delayed)))) 
             | ((IData)(vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_18__DOT__base__DOT__RESET) 
                & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfrtp_2_18__DOT__base__DOT__RESET)))) 
            | ((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_45__DOT__base__DOT__CLK_delayed) 
               & (~ (IData)(vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfrtp_2_45__DOT__base__DOT__CLK_delayed)))) 
           | ((IData)(vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_45__DOT__base__DOT__RESET) 
              & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfrtp_2_45__DOT__base__DOT__RESET)))) 
          | ((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_46__DOT__base__DOT__CLK_delayed) 
             & (~ (IData)(vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfrtp_2_46__DOT__base__DOT__CLK_delayed)))) 
         | ((IData)(vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_46__DOT__base__DOT__RESET) 
            & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfrtp_2_46__DOT__base__DOT__RESET))))) {
        vlTOPp->_multiclk__TOP__147(vlSymsp);
    }
    if ((((((((((((((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_15__DOT__base__DOT__CLK_delayed) 
                    & (~ (IData)(vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfrtp_2_15__DOT__base__DOT__CLK_delayed))) 
                   | ((IData)(vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_15__DOT__base__DOT__RESET) 
                      & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfrtp_2_15__DOT__base__DOT__RESET)))) 
                  | ((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_16__DOT__base__DOT__CLK_delayed) 
                     & (~ (IData)(vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfrtp_2_16__DOT__base__DOT__CLK_delayed)))) 
                 | ((IData)(vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_16__DOT__base__DOT__RESET) 
                    & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfrtp_2_16__DOT__base__DOT__RESET)))) 
                | ((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_17__DOT__base__DOT__CLK_delayed) 
                   & (~ (IData)(vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfrtp_2_17__DOT__base__DOT__CLK_delayed)))) 
               | ((IData)(vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_17__DOT__base__DOT__RESET) 
                  & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfrtp_2_17__DOT__base__DOT__RESET)))) 
              | ((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_43__DOT__base__DOT__CLK_delayed) 
                 & (~ (IData)(vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfrtp_2_43__DOT__base__DOT__CLK_delayed)))) 
             | ((IData)(vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_43__DOT__base__DOT__RESET) 
                & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfrtp_2_43__DOT__base__DOT__RESET)))) 
            | ((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_44__DOT__base__DOT__CLK_delayed) 
               & (~ (IData)(vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfrtp_2_44__DOT__base__DOT__CLK_delayed)))) 
           | ((IData)(vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_44__DOT__base__DOT__RESET) 
              & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfrtp_2_44__DOT__base__DOT__RESET)))) 
          | ((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_46__DOT__base__DOT__CLK_delayed) 
             & (~ (IData)(vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfrtp_2_46__DOT__base__DOT__CLK_delayed)))) 
         | ((IData)(vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_46__DOT__base__DOT__RESET) 
            & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfrtp_2_46__DOT__base__DOT__RESET))))) {
        vlTOPp->_multiclk__TOP__148(vlSymsp);
        vlTOPp->__Vm_traceActivity[0x11U] = 1U;
    }
    if ((((((((((((((((((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_15__DOT__base__DOT__CLK_delayed) 
                        & (~ (IData)(vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfrtp_2_15__DOT__base__DOT__CLK_delayed))) 
                       | ((IData)(vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_15__DOT__base__DOT__RESET) 
                          & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfrtp_2_15__DOT__base__DOT__RESET)))) 
                      | ((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_16__DOT__base__DOT__CLK_delayed) 
                         & (~ (IData)(vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfrtp_2_16__DOT__base__DOT__CLK_delayed)))) 
                     | ((IData)(vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_16__DOT__base__DOT__RESET) 
                        & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfrtp_2_16__DOT__base__DOT__RESET)))) 
                    | ((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_17__DOT__base__DOT__CLK_delayed) 
                       & (~ (IData)(vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfrtp_2_17__DOT__base__DOT__CLK_delayed)))) 
                   | ((IData)(vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_17__DOT__base__DOT__RESET) 
                      & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfrtp_2_17__DOT__base__DOT__RESET)))) 
                  | ((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_18__DOT__base__DOT__CLK_delayed) 
                     & (~ (IData)(vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfrtp_2_18__DOT__base__DOT__CLK_delayed)))) 
                 | ((IData)(vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_18__DOT__base__DOT__RESET) 
                    & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfrtp_2_18__DOT__base__DOT__RESET)))) 
                | ((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_43__DOT__base__DOT__CLK_delayed) 
                   & (~ (IData)(vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfrtp_2_43__DOT__base__DOT__CLK_delayed)))) 
               | ((IData)(vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_43__DOT__base__DOT__RESET) 
                  & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfrtp_2_43__DOT__base__DOT__RESET)))) 
              | ((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_44__DOT__base__DOT__CLK_delayed) 
                 & (~ (IData)(vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfrtp_2_44__DOT__base__DOT__CLK_delayed)))) 
             | ((IData)(vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_44__DOT__base__DOT__RESET) 
                & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfrtp_2_44__DOT__base__DOT__RESET)))) 
            | ((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_45__DOT__base__DOT__CLK_delayed) 
               & (~ (IData)(vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfrtp_2_45__DOT__base__DOT__CLK_delayed)))) 
           | ((IData)(vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_45__DOT__base__DOT__RESET) 
              & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfrtp_2_45__DOT__base__DOT__RESET)))) 
          | ((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_46__DOT__base__DOT__CLK_delayed) 
             & (~ (IData)(vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfrtp_2_46__DOT__base__DOT__CLK_delayed)))) 
         | ((IData)(vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_46__DOT__base__DOT__RESET) 
            & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfrtp_2_46__DOT__base__DOT__RESET))))) {
        vlTOPp->_multiclk__TOP__149(vlSymsp);
        vlTOPp->__Vm_traceActivity[0x12U] = 1U;
    }
    // Final
    vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfrtp_2_40__DOT__base__DOT__CLK_delayed 
        = vlTOPp->puzzle__DOT__Xdfrtp_2_40__DOT__base__DOT__CLK_delayed;
    vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfrtp_2_40__DOT__base__DOT__RESET 
        = vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_40__DOT__base__DOT__RESET;
    vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfrtp_2_30__DOT__base__DOT__CLK_delayed 
        = vlTOPp->puzzle__DOT__Xdfrtp_2_30__DOT__base__DOT__CLK_delayed;
    vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfrtp_2_30__DOT__base__DOT__RESET 
        = vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_30__DOT__base__DOT__RESET;
    vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfrtp_2_41__DOT__base__DOT__CLK_delayed 
        = vlTOPp->puzzle__DOT__Xdfrtp_2_41__DOT__base__DOT__CLK_delayed;
    vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfrtp_2_41__DOT__base__DOT__RESET 
        = vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_41__DOT__base__DOT__RESET;
    vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfrtp_2_42__DOT__base__DOT__CLK_delayed 
        = vlTOPp->puzzle__DOT__Xdfrtp_2_42__DOT__base__DOT__CLK_delayed;
    vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfrtp_2_42__DOT__base__DOT__RESET 
        = vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_42__DOT__base__DOT__RESET;
    vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfrtp_2_31__DOT__base__DOT__CLK_delayed 
        = vlTOPp->puzzle__DOT__Xdfrtp_2_31__DOT__base__DOT__CLK_delayed;
    vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfrtp_2_31__DOT__base__DOT__RESET 
        = vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_31__DOT__base__DOT__RESET;
    vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfrtp_2_32__DOT__base__DOT__CLK_delayed 
        = vlTOPp->puzzle__DOT__Xdfrtp_2_32__DOT__base__DOT__CLK_delayed;
    vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfrtp_2_32__DOT__base__DOT__RESET 
        = vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_32__DOT__base__DOT__RESET;
    vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfrtp_2_33__DOT__base__DOT__CLK_delayed 
        = vlTOPp->puzzle__DOT__Xdfrtp_2_33__DOT__base__DOT__CLK_delayed;
    vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfrtp_2_33__DOT__base__DOT__RESET 
        = vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_33__DOT__base__DOT__RESET;
    vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfrtp_2_34__DOT__base__DOT__CLK_delayed 
        = vlTOPp->puzzle__DOT__Xdfrtp_2_34__DOT__base__DOT__CLK_delayed;
    vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfrtp_2_34__DOT__base__DOT__RESET 
        = vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_34__DOT__base__DOT__RESET;
    vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfrtp_2_35__DOT__base__DOT__CLK_delayed 
        = vlTOPp->puzzle__DOT__Xdfrtp_2_35__DOT__base__DOT__CLK_delayed;
    vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfrtp_2_35__DOT__base__DOT__RESET 
        = vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_35__DOT__base__DOT__RESET;
    vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfrtp_2_36__DOT__base__DOT__CLK_delayed 
        = vlTOPp->puzzle__DOT__Xdfrtp_2_36__DOT__base__DOT__CLK_delayed;
    vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfrtp_2_36__DOT__base__DOT__RESET 
        = vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_36__DOT__base__DOT__RESET;
    vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfrtp_2_37__DOT__base__DOT__CLK_delayed 
        = vlTOPp->puzzle__DOT__Xdfrtp_2_37__DOT__base__DOT__CLK_delayed;
    vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfrtp_2_37__DOT__base__DOT__RESET 
        = vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_37__DOT__base__DOT__RESET;
    vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfrtp_2_27__DOT__base__DOT__CLK_delayed 
        = vlTOPp->puzzle__DOT__Xdfrtp_2_27__DOT__base__DOT__CLK_delayed;
    vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfrtp_2_27__DOT__base__DOT__RESET 
        = vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_27__DOT__base__DOT__RESET;
    vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfrtp_2_38__DOT__base__DOT__CLK_delayed 
        = vlTOPp->puzzle__DOT__Xdfrtp_2_38__DOT__base__DOT__CLK_delayed;
    vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfrtp_2_38__DOT__base__DOT__RESET 
        = vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_38__DOT__base__DOT__RESET;
    vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfrtp_2_39__DOT__base__DOT__CLK_delayed 
        = vlTOPp->puzzle__DOT__Xdfrtp_2_39__DOT__base__DOT__CLK_delayed;
    vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfrtp_2_39__DOT__base__DOT__RESET 
        = vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_39__DOT__base__DOT__RESET;
    vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfrtp_2_29__DOT__base__DOT__CLK_delayed 
        = vlTOPp->puzzle__DOT__Xdfrtp_2_29__DOT__base__DOT__CLK_delayed;
    vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfrtp_2_29__DOT__base__DOT__RESET 
        = vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_29__DOT__base__DOT__RESET;
    vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfrtp_2_28__DOT__base__DOT__CLK_delayed 
        = vlTOPp->puzzle__DOT__Xdfrtp_2_28__DOT__base__DOT__CLK_delayed;
    vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfrtp_2_28__DOT__base__DOT__RESET 
        = vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_28__DOT__base__DOT__RESET;
    vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfstp_2_0__DOT__base__DOT__CLK_delayed 
        = vlTOPp->puzzle__DOT__Xdfstp_2_0__DOT__base__DOT__CLK_delayed;
    vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfstp_2_0__DOT__base__DOT__SET 
        = vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfstp_2_0__DOT__base__DOT__SET;
    vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfstp_2_2__DOT__base__DOT__CLK_delayed 
        = vlTOPp->puzzle__DOT__Xdfstp_2_2__DOT__base__DOT__CLK_delayed;
    vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfstp_2_2__DOT__base__DOT__SET 
        = vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfstp_2_2__DOT__base__DOT__SET;
    vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfstp_2_3__DOT__base__DOT__CLK_delayed 
        = vlTOPp->puzzle__DOT__Xdfstp_2_3__DOT__base__DOT__CLK_delayed;
    vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfstp_2_3__DOT__base__DOT__SET 
        = vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfstp_2_3__DOT__base__DOT__SET;
    vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfrtp_2_49__DOT__base__DOT__CLK_delayed 
        = vlTOPp->puzzle__DOT__Xdfrtp_2_49__DOT__base__DOT__CLK_delayed;
    vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfrtp_2_49__DOT__base__DOT__RESET 
        = vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_49__DOT__base__DOT__RESET;
    vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfrtp_2_80__DOT__base__DOT__CLK_delayed 
        = vlTOPp->puzzle__DOT__Xdfrtp_2_80__DOT__base__DOT__CLK_delayed;
    vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfrtp_2_80__DOT__base__DOT__RESET 
        = vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_80__DOT__base__DOT__RESET;
    vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfrtp_2_70__DOT__base__DOT__CLK_delayed 
        = vlTOPp->puzzle__DOT__Xdfrtp_2_70__DOT__base__DOT__CLK_delayed;
    vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfrtp_2_70__DOT__base__DOT__RESET 
        = vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_70__DOT__base__DOT__RESET;
    vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfrtp_2_60__DOT__base__DOT__CLK_delayed 
        = vlTOPp->puzzle__DOT__Xdfrtp_2_60__DOT__base__DOT__CLK_delayed;
    vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfrtp_2_60__DOT__base__DOT__RESET 
        = vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_60__DOT__base__DOT__RESET;
    vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfrtp_2_71__DOT__base__DOT__CLK_delayed 
        = vlTOPp->puzzle__DOT__Xdfrtp_2_71__DOT__base__DOT__CLK_delayed;
    vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfrtp_2_71__DOT__base__DOT__RESET 
        = vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_71__DOT__base__DOT__RESET;
    vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfrtp_2_61__DOT__base__DOT__CLK_delayed 
        = vlTOPp->puzzle__DOT__Xdfrtp_2_61__DOT__base__DOT__CLK_delayed;
    vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfrtp_2_61__DOT__base__DOT__RESET 
        = vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_61__DOT__base__DOT__RESET;
    vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfrtp_2_72__DOT__base__DOT__CLK_delayed 
        = vlTOPp->puzzle__DOT__Xdfrtp_2_72__DOT__base__DOT__CLK_delayed;
    vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfrtp_2_72__DOT__base__DOT__RESET 
        = vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_72__DOT__base__DOT__RESET;
    vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfrtp_2_62__DOT__base__DOT__CLK_delayed 
        = vlTOPp->puzzle__DOT__Xdfrtp_2_62__DOT__base__DOT__CLK_delayed;
    vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfrtp_2_62__DOT__base__DOT__RESET 
        = vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_62__DOT__base__DOT__RESET;
    vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfrtp_2_52__DOT__base__DOT__CLK_delayed 
        = vlTOPp->puzzle__DOT__Xdfrtp_2_52__DOT__base__DOT__CLK_delayed;
    vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfrtp_2_52__DOT__base__DOT__RESET 
        = vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_52__DOT__base__DOT__RESET;
    vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfrtp_2_63__DOT__base__DOT__CLK_delayed 
        = vlTOPp->puzzle__DOT__Xdfrtp_2_63__DOT__base__DOT__CLK_delayed;
    vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfrtp_2_63__DOT__base__DOT__RESET 
        = vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_63__DOT__base__DOT__RESET;
    vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfrtp_2_75__DOT__base__DOT__CLK_delayed 
        = vlTOPp->puzzle__DOT__Xdfrtp_2_75__DOT__base__DOT__CLK_delayed;
    vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfrtp_2_75__DOT__base__DOT__RESET 
        = vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_75__DOT__base__DOT__RESET;
    vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfrtp_2_64__DOT__base__DOT__CLK_delayed 
        = vlTOPp->puzzle__DOT__Xdfrtp_2_64__DOT__base__DOT__CLK_delayed;
    vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfrtp_2_64__DOT__base__DOT__RESET 
        = vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_64__DOT__base__DOT__RESET;
    vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfrtp_2_53__DOT__base__DOT__CLK_delayed 
        = vlTOPp->puzzle__DOT__Xdfrtp_2_53__DOT__base__DOT__CLK_delayed;
    vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfrtp_2_53__DOT__base__DOT__RESET 
        = vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_53__DOT__base__DOT__RESET;
    vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfrtp_2_10__DOT__base__DOT__CLK_delayed 
        = vlTOPp->puzzle__DOT__Xdfrtp_2_10__DOT__base__DOT__CLK_delayed;
    vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfrtp_2_10__DOT__base__DOT__RESET 
        = vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_10__DOT__base__DOT__RESET;
    vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfrtp_2_65__DOT__base__DOT__CLK_delayed 
        = vlTOPp->puzzle__DOT__Xdfrtp_2_65__DOT__base__DOT__CLK_delayed;
    vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfrtp_2_65__DOT__base__DOT__RESET 
        = vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_65__DOT__base__DOT__RESET;
    vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfrtp_2_76__DOT__base__DOT__CLK_delayed 
        = vlTOPp->puzzle__DOT__Xdfrtp_2_76__DOT__base__DOT__CLK_delayed;
    vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfrtp_2_76__DOT__base__DOT__RESET 
        = vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_76__DOT__base__DOT__RESET;
    vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfrtp_2_54__DOT__base__DOT__CLK_delayed 
        = vlTOPp->puzzle__DOT__Xdfrtp_2_54__DOT__base__DOT__CLK_delayed;
    vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfrtp_2_54__DOT__base__DOT__RESET 
        = vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_54__DOT__base__DOT__RESET;
    vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfrtp_2_11__DOT__base__DOT__CLK_delayed 
        = vlTOPp->puzzle__DOT__Xdfrtp_2_11__DOT__base__DOT__CLK_delayed;
    vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfrtp_2_11__DOT__base__DOT__RESET 
        = vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_11__DOT__base__DOT__RESET;
    vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfrtp_2_66__DOT__base__DOT__CLK_delayed 
        = vlTOPp->puzzle__DOT__Xdfrtp_2_66__DOT__base__DOT__CLK_delayed;
    vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfrtp_2_66__DOT__base__DOT__RESET 
        = vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_66__DOT__base__DOT__RESET;
    vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfrtp_2_77__DOT__base__DOT__CLK_delayed 
        = vlTOPp->puzzle__DOT__Xdfrtp_2_77__DOT__base__DOT__CLK_delayed;
    vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfrtp_2_77__DOT__base__DOT__RESET 
        = vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_77__DOT__base__DOT__RESET;
    vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfrtp_2_55__DOT__base__DOT__CLK_delayed 
        = vlTOPp->puzzle__DOT__Xdfrtp_2_55__DOT__base__DOT__CLK_delayed;
    vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfrtp_2_55__DOT__base__DOT__RESET 
        = vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_55__DOT__base__DOT__RESET;
    vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfrtp_2_12__DOT__base__DOT__CLK_delayed 
        = vlTOPp->puzzle__DOT__Xdfrtp_2_12__DOT__base__DOT__CLK_delayed;
    vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfrtp_2_12__DOT__base__DOT__RESET 
        = vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_12__DOT__base__DOT__RESET;
    vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfrtp_2_67__DOT__base__DOT__CLK_delayed 
        = vlTOPp->puzzle__DOT__Xdfrtp_2_67__DOT__base__DOT__CLK_delayed;
    vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfrtp_2_67__DOT__base__DOT__RESET 
        = vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_67__DOT__base__DOT__RESET;
    vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfrtp_2_56__DOT__base__DOT__CLK_delayed 
        = vlTOPp->puzzle__DOT__Xdfrtp_2_56__DOT__base__DOT__CLK_delayed;
    vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfrtp_2_56__DOT__base__DOT__RESET 
        = vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_56__DOT__base__DOT__RESET;
    vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfrtp_2_78__DOT__base__DOT__CLK_delayed 
        = vlTOPp->puzzle__DOT__Xdfrtp_2_78__DOT__base__DOT__CLK_delayed;
    vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfrtp_2_78__DOT__base__DOT__RESET 
        = vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_78__DOT__base__DOT__RESET;
    vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfrtp_2_13__DOT__base__DOT__CLK_delayed 
        = vlTOPp->puzzle__DOT__Xdfrtp_2_13__DOT__base__DOT__CLK_delayed;
    vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfrtp_2_13__DOT__base__DOT__RESET 
        = vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_13__DOT__base__DOT__RESET;
    vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfrtp_2_68__DOT__base__DOT__CLK_delayed 
        = vlTOPp->puzzle__DOT__Xdfrtp_2_68__DOT__base__DOT__CLK_delayed;
    vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfrtp_2_68__DOT__base__DOT__RESET 
        = vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_68__DOT__base__DOT__RESET;
    vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfrtp_2_57__DOT__base__DOT__CLK_delayed 
        = vlTOPp->puzzle__DOT__Xdfrtp_2_57__DOT__base__DOT__CLK_delayed;
    vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfrtp_2_57__DOT__base__DOT__RESET 
        = vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_57__DOT__base__DOT__RESET;
    vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfrtp_2_79__DOT__base__DOT__CLK_delayed 
        = vlTOPp->puzzle__DOT__Xdfrtp_2_79__DOT__base__DOT__CLK_delayed;
    vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfrtp_2_79__DOT__base__DOT__RESET 
        = vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_79__DOT__base__DOT__RESET;
    vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfrtp_2_14__DOT__base__DOT__CLK_delayed 
        = vlTOPp->puzzle__DOT__Xdfrtp_2_14__DOT__base__DOT__CLK_delayed;
    vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfrtp_2_14__DOT__base__DOT__RESET 
        = vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_14__DOT__base__DOT__RESET;
    vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfrtp_2_58__DOT__base__DOT__CLK_delayed 
        = vlTOPp->puzzle__DOT__Xdfrtp_2_58__DOT__base__DOT__CLK_delayed;
    vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfrtp_2_58__DOT__base__DOT__RESET 
        = vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_58__DOT__base__DOT__RESET;
    vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfrtp_2_69__DOT__base__DOT__CLK_delayed 
        = vlTOPp->puzzle__DOT__Xdfrtp_2_69__DOT__base__DOT__CLK_delayed;
    vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfrtp_2_69__DOT__base__DOT__RESET 
        = vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_69__DOT__base__DOT__RESET;
    vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfrtp_2_59__DOT__base__DOT__CLK_delayed 
        = vlTOPp->puzzle__DOT__Xdfrtp_2_59__DOT__base__DOT__CLK_delayed;
    vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfrtp_2_59__DOT__base__DOT__RESET 
        = vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_59__DOT__base__DOT__RESET;
    vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfrtp_2_0__DOT__base__DOT__CLK_delayed 
        = vlTOPp->puzzle__DOT__Xdfrtp_2_0__DOT__base__DOT__CLK_delayed;
    vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfrtp_2_0__DOT__base__DOT__RESET 
        = vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_0__DOT__base__DOT__RESET;
    vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfrtp_2_1__DOT__base__DOT__CLK_delayed 
        = vlTOPp->puzzle__DOT__Xdfrtp_2_1__DOT__base__DOT__CLK_delayed;
    vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfrtp_2_1__DOT__base__DOT__RESET 
        = vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_1__DOT__base__DOT__RESET;
    vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfrtp_2_2__DOT__base__DOT__CLK_delayed 
        = vlTOPp->puzzle__DOT__Xdfrtp_2_2__DOT__base__DOT__CLK_delayed;
    vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfrtp_2_2__DOT__base__DOT__RESET 
        = vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_2__DOT__base__DOT__RESET;
    vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfrtp_2_3__DOT__base__DOT__CLK_delayed 
        = vlTOPp->puzzle__DOT__Xdfrtp_2_3__DOT__base__DOT__CLK_delayed;
    vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfrtp_2_3__DOT__base__DOT__RESET 
        = vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_3__DOT__base__DOT__RESET;
    vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfrtp_2_4__DOT__base__DOT__CLK_delayed 
        = vlTOPp->puzzle__DOT__Xdfrtp_2_4__DOT__base__DOT__CLK_delayed;
    vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfrtp_2_4__DOT__base__DOT__RESET 
        = vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_4__DOT__base__DOT__RESET;
    vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfrtp_2_5__DOT__base__DOT__CLK_delayed 
        = vlTOPp->puzzle__DOT__Xdfrtp_2_5__DOT__base__DOT__CLK_delayed;
    vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfrtp_2_5__DOT__base__DOT__RESET 
        = vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_5__DOT__base__DOT__RESET;
    vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfrtp_2_6__DOT__base__DOT__CLK_delayed 
        = vlTOPp->puzzle__DOT__Xdfrtp_2_6__DOT__base__DOT__CLK_delayed;
    vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfrtp_2_6__DOT__base__DOT__RESET 
        = vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_6__DOT__base__DOT__RESET;
    vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfrtp_2_7__DOT__base__DOT__CLK_delayed 
        = vlTOPp->puzzle__DOT__Xdfrtp_2_7__DOT__base__DOT__CLK_delayed;
    vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfrtp_2_7__DOT__base__DOT__RESET 
        = vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_7__DOT__base__DOT__RESET;
    vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfrtp_2_8__DOT__base__DOT__CLK_delayed 
        = vlTOPp->puzzle__DOT__Xdfrtp_2_8__DOT__base__DOT__CLK_delayed;
    vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfrtp_2_8__DOT__base__DOT__RESET 
        = vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_8__DOT__base__DOT__RESET;
    vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfrtp_2_9__DOT__base__DOT__CLK_delayed 
        = vlTOPp->puzzle__DOT__Xdfrtp_2_9__DOT__base__DOT__CLK_delayed;
    vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfrtp_2_9__DOT__base__DOT__RESET 
        = vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_9__DOT__base__DOT__RESET;
    vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfrtp_2_73__DOT__base__DOT__CLK_delayed 
        = vlTOPp->puzzle__DOT__Xdfrtp_2_73__DOT__base__DOT__CLK_delayed;
    vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfrtp_2_73__DOT__base__DOT__RESET 
        = vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_73__DOT__base__DOT__RESET;
    vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfrtp_2_74__DOT__base__DOT__CLK_delayed 
        = vlTOPp->puzzle__DOT__Xdfrtp_2_74__DOT__base__DOT__CLK_delayed;
    vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfrtp_2_74__DOT__base__DOT__RESET 
        = vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_74__DOT__base__DOT__RESET;
    vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfstp_2_1__DOT__base__DOT__CLK_delayed 
        = vlTOPp->puzzle__DOT__Xdfstp_2_1__DOT__base__DOT__CLK_delayed;
    vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfstp_2_1__DOT__base__DOT__SET 
        = vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfstp_2_1__DOT__base__DOT__SET;
    vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfrtp_2_51__DOT__base__DOT__CLK_delayed 
        = vlTOPp->puzzle__DOT__Xdfrtp_2_51__DOT__base__DOT__CLK_delayed;
    vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfrtp_2_51__DOT__base__DOT__RESET 
        = vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_51__DOT__base__DOT__RESET;
    vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfrtp_2_48__DOT__base__DOT__CLK_delayed 
        = vlTOPp->puzzle__DOT__Xdfrtp_2_48__DOT__base__DOT__CLK_delayed;
    vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfrtp_2_48__DOT__base__DOT__RESET 
        = vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_48__DOT__base__DOT__RESET;
    vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfrtp_2_50__DOT__base__DOT__CLK_delayed 
        = vlTOPp->puzzle__DOT__Xdfrtp_2_50__DOT__base__DOT__CLK_delayed;
    vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfrtp_2_50__DOT__base__DOT__RESET 
        = vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_50__DOT__base__DOT__RESET;
    vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfrtp_2_47__DOT__base__DOT__CLK_delayed 
        = vlTOPp->puzzle__DOT__Xdfrtp_2_47__DOT__base__DOT__CLK_delayed;
    vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfrtp_2_47__DOT__base__DOT__RESET 
        = vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_47__DOT__base__DOT__RESET;
    vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfrtp_2_83__DOT__base__DOT__CLK_delayed 
        = vlTOPp->puzzle__DOT__Xdfrtp_2_83__DOT__base__DOT__CLK_delayed;
    vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfrtp_2_83__DOT__base__DOT__RESET 
        = vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_83__DOT__base__DOT__RESET;
    vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfxtp_2_0__DOT__base__DOT__CLK_delayed 
        = vlTOPp->puzzle__DOT__Xdfxtp_2_0__DOT__base__DOT__CLK_delayed;
    vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfxtp_2_3__DOT__base__DOT__CLK_delayed 
        = vlTOPp->puzzle__DOT__Xdfxtp_2_3__DOT__base__DOT__CLK_delayed;
    vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfxtp_2_2__DOT__base__DOT__CLK_delayed 
        = vlTOPp->puzzle__DOT__Xdfxtp_2_2__DOT__base__DOT__CLK_delayed;
    vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfxtp_2_1__DOT__base__DOT__CLK_delayed 
        = vlTOPp->puzzle__DOT__Xdfxtp_2_1__DOT__base__DOT__CLK_delayed;
    vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfrtp_2_82__DOT__base__DOT__CLK_delayed 
        = vlTOPp->puzzle__DOT__Xdfrtp_2_82__DOT__base__DOT__CLK_delayed;
    vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfrtp_2_82__DOT__base__DOT__RESET 
        = vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_82__DOT__base__DOT__RESET;
    vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfrtp_2_81__DOT__base__DOT__CLK_delayed 
        = vlTOPp->puzzle__DOT__Xdfrtp_2_81__DOT__base__DOT__CLK_delayed;
    vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfrtp_2_81__DOT__base__DOT__RESET 
        = vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_81__DOT__base__DOT__RESET;
    vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfrtp_2_20__DOT__base__DOT__CLK_delayed 
        = vlTOPp->puzzle__DOT__Xdfrtp_2_20__DOT__base__DOT__CLK_delayed;
    vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfrtp_2_20__DOT__base__DOT__RESET 
        = vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_20__DOT__base__DOT__RESET;
    vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfrtp_2_25__DOT__base__DOT__CLK_delayed 
        = vlTOPp->puzzle__DOT__Xdfrtp_2_25__DOT__base__DOT__CLK_delayed;
    vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfrtp_2_25__DOT__base__DOT__RESET 
        = vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_25__DOT__base__DOT__RESET;
    vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfrtp_2_21__DOT__base__DOT__CLK_delayed 
        = vlTOPp->puzzle__DOT__Xdfrtp_2_21__DOT__base__DOT__CLK_delayed;
    vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfrtp_2_21__DOT__base__DOT__RESET 
        = vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_21__DOT__base__DOT__RESET;
    vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfrtp_2_22__DOT__base__DOT__CLK_delayed 
        = vlTOPp->puzzle__DOT__Xdfrtp_2_22__DOT__base__DOT__CLK_delayed;
    vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfrtp_2_22__DOT__base__DOT__RESET 
        = vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_22__DOT__base__DOT__RESET;
    vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfrtp_2_19__DOT__base__DOT__CLK_delayed 
        = vlTOPp->puzzle__DOT__Xdfrtp_2_19__DOT__base__DOT__CLK_delayed;
    vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfrtp_2_19__DOT__base__DOT__RESET 
        = vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_19__DOT__base__DOT__RESET;
    vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfrtp_2_24__DOT__base__DOT__CLK_delayed 
        = vlTOPp->puzzle__DOT__Xdfrtp_2_24__DOT__base__DOT__CLK_delayed;
    vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfrtp_2_24__DOT__base__DOT__RESET 
        = vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_24__DOT__base__DOT__RESET;
    vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfrtp_1_26__DOT__base__DOT__CLK_delayed 
        = vlTOPp->puzzle__DOT__Xdfrtp_1_26__DOT__base__DOT__CLK_delayed;
    vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfrtp_1_26__DOT__base__DOT__RESET 
        = vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_1_26__DOT__base__DOT__RESET;
    vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfrtp_2_23__DOT__base__DOT__CLK_delayed 
        = vlTOPp->puzzle__DOT__Xdfrtp_2_23__DOT__base__DOT__CLK_delayed;
    vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfrtp_2_23__DOT__base__DOT__RESET 
        = vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_23__DOT__base__DOT__RESET;
    vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfrtp_2_45__DOT__base__DOT__CLK_delayed 
        = vlTOPp->puzzle__DOT__Xdfrtp_2_45__DOT__base__DOT__CLK_delayed;
    vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfrtp_2_45__DOT__base__DOT__RESET 
        = vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_45__DOT__base__DOT__RESET;
    vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfrtp_2_46__DOT__base__DOT__CLK_delayed 
        = vlTOPp->puzzle__DOT__Xdfrtp_2_46__DOT__base__DOT__CLK_delayed;
    vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfrtp_2_46__DOT__base__DOT__RESET 
        = vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_46__DOT__base__DOT__RESET;
    vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfrtp_2_44__DOT__base__DOT__CLK_delayed 
        = vlTOPp->puzzle__DOT__Xdfrtp_2_44__DOT__base__DOT__CLK_delayed;
    vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfrtp_2_44__DOT__base__DOT__RESET 
        = vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_44__DOT__base__DOT__RESET;
    vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfrtp_2_43__DOT__base__DOT__CLK_delayed 
        = vlTOPp->puzzle__DOT__Xdfrtp_2_43__DOT__base__DOT__CLK_delayed;
    vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfrtp_2_43__DOT__base__DOT__RESET 
        = vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_43__DOT__base__DOT__RESET;
    vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfrtp_2_18__DOT__base__DOT__CLK_delayed 
        = vlTOPp->puzzle__DOT__Xdfrtp_2_18__DOT__base__DOT__CLK_delayed;
    vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfrtp_2_18__DOT__base__DOT__RESET 
        = vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_18__DOT__base__DOT__RESET;
    vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfrtp_2_15__DOT__base__DOT__CLK_delayed 
        = vlTOPp->puzzle__DOT__Xdfrtp_2_15__DOT__base__DOT__CLK_delayed;
    vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfrtp_2_15__DOT__base__DOT__RESET 
        = vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_15__DOT__base__DOT__RESET;
    vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfrtp_2_16__DOT__base__DOT__CLK_delayed 
        = vlTOPp->puzzle__DOT__Xdfrtp_2_16__DOT__base__DOT__CLK_delayed;
    vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfrtp_2_16__DOT__base__DOT__RESET 
        = vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_16__DOT__base__DOT__RESET;
    vlTOPp->__Vclklast__TOP__puzzle__DOT__Xdfrtp_2_17__DOT__base__DOT__CLK_delayed 
        = vlTOPp->puzzle__DOT__Xdfrtp_2_17__DOT__base__DOT__CLK_delayed;
    vlTOPp->__Vclklast__TOP____VinpClk__TOP__puzzle__DOT__Xdfrtp_2_17__DOT__base__DOT__RESET 
        = vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_17__DOT__base__DOT__RESET;
    vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_40__DOT__base__DOT__RESET 
        = vlTOPp->puzzle__DOT__Xdfrtp_2_40__DOT__base__DOT__RESET;
    vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_30__DOT__base__DOT__RESET 
        = vlTOPp->puzzle__DOT__Xdfrtp_2_30__DOT__base__DOT__RESET;
    vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_41__DOT__base__DOT__RESET 
        = vlTOPp->puzzle__DOT__Xdfrtp_2_41__DOT__base__DOT__RESET;
    vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_42__DOT__base__DOT__RESET 
        = vlTOPp->puzzle__DOT__Xdfrtp_2_42__DOT__base__DOT__RESET;
    vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_31__DOT__base__DOT__RESET 
        = vlTOPp->puzzle__DOT__Xdfrtp_2_31__DOT__base__DOT__RESET;
    vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_32__DOT__base__DOT__RESET 
        = vlTOPp->puzzle__DOT__Xdfrtp_2_32__DOT__base__DOT__RESET;
    vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_33__DOT__base__DOT__RESET 
        = vlTOPp->puzzle__DOT__Xdfrtp_2_33__DOT__base__DOT__RESET;
    vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_34__DOT__base__DOT__RESET 
        = vlTOPp->puzzle__DOT__Xdfrtp_2_34__DOT__base__DOT__RESET;
    vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_35__DOT__base__DOT__RESET 
        = vlTOPp->puzzle__DOT__Xdfrtp_2_35__DOT__base__DOT__RESET;
    vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_36__DOT__base__DOT__RESET 
        = vlTOPp->puzzle__DOT__Xdfrtp_2_36__DOT__base__DOT__RESET;
    vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_37__DOT__base__DOT__RESET 
        = vlTOPp->puzzle__DOT__Xdfrtp_2_37__DOT__base__DOT__RESET;
    vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_27__DOT__base__DOT__RESET 
        = vlTOPp->puzzle__DOT__Xdfrtp_2_27__DOT__base__DOT__RESET;
    vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_38__DOT__base__DOT__RESET 
        = vlTOPp->puzzle__DOT__Xdfrtp_2_38__DOT__base__DOT__RESET;
    vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_39__DOT__base__DOT__RESET 
        = vlTOPp->puzzle__DOT__Xdfrtp_2_39__DOT__base__DOT__RESET;
    vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_29__DOT__base__DOT__RESET 
        = vlTOPp->puzzle__DOT__Xdfrtp_2_29__DOT__base__DOT__RESET;
    vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_28__DOT__base__DOT__RESET 
        = vlTOPp->puzzle__DOT__Xdfrtp_2_28__DOT__base__DOT__RESET;
    vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfstp_2_0__DOT__base__DOT__SET 
        = vlTOPp->puzzle__DOT__Xdfstp_2_0__DOT__base__DOT__SET;
    vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfstp_2_2__DOT__base__DOT__SET 
        = vlTOPp->puzzle__DOT__Xdfstp_2_2__DOT__base__DOT__SET;
    vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfstp_2_3__DOT__base__DOT__SET 
        = vlTOPp->puzzle__DOT__Xdfstp_2_3__DOT__base__DOT__SET;
    vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_49__DOT__base__DOT__RESET 
        = vlTOPp->puzzle__DOT__Xdfrtp_2_49__DOT__base__DOT__RESET;
    vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_80__DOT__base__DOT__RESET 
        = vlTOPp->puzzle__DOT__Xdfrtp_2_80__DOT__base__DOT__RESET;
    vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_70__DOT__base__DOT__RESET 
        = vlTOPp->puzzle__DOT__Xdfrtp_2_70__DOT__base__DOT__RESET;
    vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_60__DOT__base__DOT__RESET 
        = vlTOPp->puzzle__DOT__Xdfrtp_2_60__DOT__base__DOT__RESET;
    vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_71__DOT__base__DOT__RESET 
        = vlTOPp->puzzle__DOT__Xdfrtp_2_71__DOT__base__DOT__RESET;
    vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_61__DOT__base__DOT__RESET 
        = vlTOPp->puzzle__DOT__Xdfrtp_2_61__DOT__base__DOT__RESET;
    vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_72__DOT__base__DOT__RESET 
        = vlTOPp->puzzle__DOT__Xdfrtp_2_72__DOT__base__DOT__RESET;
    vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_62__DOT__base__DOT__RESET 
        = vlTOPp->puzzle__DOT__Xdfrtp_2_62__DOT__base__DOT__RESET;
    vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_52__DOT__base__DOT__RESET 
        = vlTOPp->puzzle__DOT__Xdfrtp_2_52__DOT__base__DOT__RESET;
    vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_63__DOT__base__DOT__RESET 
        = vlTOPp->puzzle__DOT__Xdfrtp_2_63__DOT__base__DOT__RESET;
    vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_75__DOT__base__DOT__RESET 
        = vlTOPp->puzzle__DOT__Xdfrtp_2_75__DOT__base__DOT__RESET;
    vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_64__DOT__base__DOT__RESET 
        = vlTOPp->puzzle__DOT__Xdfrtp_2_64__DOT__base__DOT__RESET;
    vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_53__DOT__base__DOT__RESET 
        = vlTOPp->puzzle__DOT__Xdfrtp_2_53__DOT__base__DOT__RESET;
    vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_10__DOT__base__DOT__RESET 
        = vlTOPp->puzzle__DOT__Xdfrtp_2_10__DOT__base__DOT__RESET;
    vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_65__DOT__base__DOT__RESET 
        = vlTOPp->puzzle__DOT__Xdfrtp_2_65__DOT__base__DOT__RESET;
    vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_76__DOT__base__DOT__RESET 
        = vlTOPp->puzzle__DOT__Xdfrtp_2_76__DOT__base__DOT__RESET;
    vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_54__DOT__base__DOT__RESET 
        = vlTOPp->puzzle__DOT__Xdfrtp_2_54__DOT__base__DOT__RESET;
    vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_11__DOT__base__DOT__RESET 
        = vlTOPp->puzzle__DOT__Xdfrtp_2_11__DOT__base__DOT__RESET;
    vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_66__DOT__base__DOT__RESET 
        = vlTOPp->puzzle__DOT__Xdfrtp_2_66__DOT__base__DOT__RESET;
    vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_77__DOT__base__DOT__RESET 
        = vlTOPp->puzzle__DOT__Xdfrtp_2_77__DOT__base__DOT__RESET;
    vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_55__DOT__base__DOT__RESET 
        = vlTOPp->puzzle__DOT__Xdfrtp_2_55__DOT__base__DOT__RESET;
    vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_12__DOT__base__DOT__RESET 
        = vlTOPp->puzzle__DOT__Xdfrtp_2_12__DOT__base__DOT__RESET;
    vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_67__DOT__base__DOT__RESET 
        = vlTOPp->puzzle__DOT__Xdfrtp_2_67__DOT__base__DOT__RESET;
    vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_56__DOT__base__DOT__RESET 
        = vlTOPp->puzzle__DOT__Xdfrtp_2_56__DOT__base__DOT__RESET;
    vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_78__DOT__base__DOT__RESET 
        = vlTOPp->puzzle__DOT__Xdfrtp_2_78__DOT__base__DOT__RESET;
    vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_13__DOT__base__DOT__RESET 
        = vlTOPp->puzzle__DOT__Xdfrtp_2_13__DOT__base__DOT__RESET;
    vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_68__DOT__base__DOT__RESET 
        = vlTOPp->puzzle__DOT__Xdfrtp_2_68__DOT__base__DOT__RESET;
    vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_57__DOT__base__DOT__RESET 
        = vlTOPp->puzzle__DOT__Xdfrtp_2_57__DOT__base__DOT__RESET;
    vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_79__DOT__base__DOT__RESET 
        = vlTOPp->puzzle__DOT__Xdfrtp_2_79__DOT__base__DOT__RESET;
    vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_14__DOT__base__DOT__RESET 
        = vlTOPp->puzzle__DOT__Xdfrtp_2_14__DOT__base__DOT__RESET;
    vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_58__DOT__base__DOT__RESET 
        = vlTOPp->puzzle__DOT__Xdfrtp_2_58__DOT__base__DOT__RESET;
    vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_69__DOT__base__DOT__RESET 
        = vlTOPp->puzzle__DOT__Xdfrtp_2_69__DOT__base__DOT__RESET;
    vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_59__DOT__base__DOT__RESET 
        = vlTOPp->puzzle__DOT__Xdfrtp_2_59__DOT__base__DOT__RESET;
    vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_0__DOT__base__DOT__RESET 
        = vlTOPp->puzzle__DOT__Xdfrtp_2_0__DOT__base__DOT__RESET;
    vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_1__DOT__base__DOT__RESET 
        = vlTOPp->puzzle__DOT__Xdfrtp_2_1__DOT__base__DOT__RESET;
    vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_2__DOT__base__DOT__RESET 
        = vlTOPp->puzzle__DOT__Xdfrtp_2_2__DOT__base__DOT__RESET;
    vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_3__DOT__base__DOT__RESET 
        = vlTOPp->puzzle__DOT__Xdfrtp_2_3__DOT__base__DOT__RESET;
    vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_4__DOT__base__DOT__RESET 
        = vlTOPp->puzzle__DOT__Xdfrtp_2_4__DOT__base__DOT__RESET;
    vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_5__DOT__base__DOT__RESET 
        = vlTOPp->puzzle__DOT__Xdfrtp_2_5__DOT__base__DOT__RESET;
    vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_6__DOT__base__DOT__RESET 
        = vlTOPp->puzzle__DOT__Xdfrtp_2_6__DOT__base__DOT__RESET;
    vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_7__DOT__base__DOT__RESET 
        = vlTOPp->puzzle__DOT__Xdfrtp_2_7__DOT__base__DOT__RESET;
    vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_8__DOT__base__DOT__RESET 
        = vlTOPp->puzzle__DOT__Xdfrtp_2_8__DOT__base__DOT__RESET;
    vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_9__DOT__base__DOT__RESET 
        = vlTOPp->puzzle__DOT__Xdfrtp_2_9__DOT__base__DOT__RESET;
    vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_73__DOT__base__DOT__RESET 
        = vlTOPp->puzzle__DOT__Xdfrtp_2_73__DOT__base__DOT__RESET;
    vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_74__DOT__base__DOT__RESET 
        = vlTOPp->puzzle__DOT__Xdfrtp_2_74__DOT__base__DOT__RESET;
    vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfstp_2_1__DOT__base__DOT__SET 
        = vlTOPp->puzzle__DOT__Xdfstp_2_1__DOT__base__DOT__SET;
    vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_51__DOT__base__DOT__RESET 
        = vlTOPp->puzzle__DOT__Xdfrtp_2_51__DOT__base__DOT__RESET;
    vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_48__DOT__base__DOT__RESET 
        = vlTOPp->puzzle__DOT__Xdfrtp_2_48__DOT__base__DOT__RESET;
    vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_50__DOT__base__DOT__RESET 
        = vlTOPp->puzzle__DOT__Xdfrtp_2_50__DOT__base__DOT__RESET;
    vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_47__DOT__base__DOT__RESET 
        = vlTOPp->puzzle__DOT__Xdfrtp_2_47__DOT__base__DOT__RESET;
    vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_83__DOT__base__DOT__RESET 
        = vlTOPp->puzzle__DOT__Xdfrtp_2_83__DOT__base__DOT__RESET;
    vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_82__DOT__base__DOT__RESET 
        = vlTOPp->puzzle__DOT__Xdfrtp_2_82__DOT__base__DOT__RESET;
    vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_81__DOT__base__DOT__RESET 
        = vlTOPp->puzzle__DOT__Xdfrtp_2_81__DOT__base__DOT__RESET;
    vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_20__DOT__base__DOT__RESET 
        = vlTOPp->puzzle__DOT__Xdfrtp_2_20__DOT__base__DOT__RESET;
    vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_25__DOT__base__DOT__RESET 
        = vlTOPp->puzzle__DOT__Xdfrtp_2_25__DOT__base__DOT__RESET;
    vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_21__DOT__base__DOT__RESET 
        = vlTOPp->puzzle__DOT__Xdfrtp_2_21__DOT__base__DOT__RESET;
    vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_22__DOT__base__DOT__RESET 
        = vlTOPp->puzzle__DOT__Xdfrtp_2_22__DOT__base__DOT__RESET;
    vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_19__DOT__base__DOT__RESET 
        = vlTOPp->puzzle__DOT__Xdfrtp_2_19__DOT__base__DOT__RESET;
    vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_24__DOT__base__DOT__RESET 
        = vlTOPp->puzzle__DOT__Xdfrtp_2_24__DOT__base__DOT__RESET;
    vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_1_26__DOT__base__DOT__RESET 
        = vlTOPp->puzzle__DOT__Xdfrtp_1_26__DOT__base__DOT__RESET;
    vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_23__DOT__base__DOT__RESET 
        = vlTOPp->puzzle__DOT__Xdfrtp_2_23__DOT__base__DOT__RESET;
    vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_45__DOT__base__DOT__RESET 
        = vlTOPp->puzzle__DOT__Xdfrtp_2_45__DOT__base__DOT__RESET;
    vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_46__DOT__base__DOT__RESET 
        = vlTOPp->puzzle__DOT__Xdfrtp_2_46__DOT__base__DOT__RESET;
    vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_44__DOT__base__DOT__RESET 
        = vlTOPp->puzzle__DOT__Xdfrtp_2_44__DOT__base__DOT__RESET;
    vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_43__DOT__base__DOT__RESET 
        = vlTOPp->puzzle__DOT__Xdfrtp_2_43__DOT__base__DOT__RESET;
    vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_18__DOT__base__DOT__RESET 
        = vlTOPp->puzzle__DOT__Xdfrtp_2_18__DOT__base__DOT__RESET;
    vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_15__DOT__base__DOT__RESET 
        = vlTOPp->puzzle__DOT__Xdfrtp_2_15__DOT__base__DOT__RESET;
    vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_16__DOT__base__DOT__RESET 
        = vlTOPp->puzzle__DOT__Xdfrtp_2_16__DOT__base__DOT__RESET;
    vlTOPp->__VinpClk__TOP__puzzle__DOT__Xdfrtp_2_17__DOT__base__DOT__RESET 
        = vlTOPp->puzzle__DOT__Xdfrtp_2_17__DOT__base__DOT__RESET;
}

VL_INLINE_OPT QData Vpuzzle::_change_request(Vpuzzle__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpuzzle::_change_request\n"); );
    Vpuzzle* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    return (vlTOPp->_change_request_1(vlSymsp));
}

VL_INLINE_OPT QData Vpuzzle::_change_request_1(Vpuzzle__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpuzzle::_change_request_1\n"); );
    Vpuzzle* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    __req |= ((vlTOPp->puzzle__DOT__Xdfrtp_2_80__DOT__base__DOT__RESET ^ vlTOPp->__Vchglast__TOP__puzzle__DOT__Xdfrtp_2_80__DOT__base__DOT__RESET)
         | (vlTOPp->puzzle__DOT__Xdfrtp_2_70__DOT__base__DOT__RESET ^ vlTOPp->__Vchglast__TOP__puzzle__DOT__Xdfrtp_2_70__DOT__base__DOT__RESET)
         | (vlTOPp->puzzle__DOT__Xdfrtp_2_81__DOT__base__DOT__RESET ^ vlTOPp->__Vchglast__TOP__puzzle__DOT__Xdfrtp_2_81__DOT__base__DOT__RESET)
         | (vlTOPp->puzzle__DOT__Xdfrtp_2_60__DOT__base__DOT__RESET ^ vlTOPp->__Vchglast__TOP__puzzle__DOT__Xdfrtp_2_60__DOT__base__DOT__RESET)
         | (vlTOPp->puzzle__DOT__Xdfrtp_2_82__DOT__base__DOT__RESET ^ vlTOPp->__Vchglast__TOP__puzzle__DOT__Xdfrtp_2_82__DOT__base__DOT__RESET)
         | (vlTOPp->puzzle__DOT__Xdfrtp_2_71__DOT__base__DOT__RESET ^ vlTOPp->__Vchglast__TOP__puzzle__DOT__Xdfrtp_2_71__DOT__base__DOT__RESET)
         | (vlTOPp->puzzle__DOT__Xdfrtp_2_61__DOT__base__DOT__RESET ^ vlTOPp->__Vchglast__TOP__puzzle__DOT__Xdfrtp_2_61__DOT__base__DOT__RESET)
         | (vlTOPp->puzzle__DOT__Xdfrtp_2_50__DOT__base__DOT__RESET ^ vlTOPp->__Vchglast__TOP__puzzle__DOT__Xdfrtp_2_50__DOT__base__DOT__RESET)
         | (vlTOPp->puzzle__DOT__Xdfrtp_2_83__DOT__base__DOT__RESET ^ vlTOPp->__Vchglast__TOP__puzzle__DOT__Xdfrtp_2_83__DOT__base__DOT__RESET)
         | (vlTOPp->puzzle__DOT__Xdfrtp_2_72__DOT__base__DOT__RESET ^ vlTOPp->__Vchglast__TOP__puzzle__DOT__Xdfrtp_2_72__DOT__base__DOT__RESET)
        || (vlTOPp->puzzle__DOT__Xdfrtp_2_51__DOT__base__DOT__RESET ^ vlTOPp->__Vchglast__TOP__puzzle__DOT__Xdfrtp_2_51__DOT__base__DOT__RESET)
         | (vlTOPp->puzzle__DOT__Xdfrtp_2_40__DOT__base__DOT__RESET ^ vlTOPp->__Vchglast__TOP__puzzle__DOT__Xdfrtp_2_40__DOT__base__DOT__RESET)
         | (vlTOPp->puzzle__DOT__Xdfrtp_2_73__DOT__base__DOT__RESET ^ vlTOPp->__Vchglast__TOP__puzzle__DOT__Xdfrtp_2_73__DOT__base__DOT__RESET)
         | (vlTOPp->puzzle__DOT__Xdfrtp_2_62__DOT__base__DOT__RESET ^ vlTOPp->__Vchglast__TOP__puzzle__DOT__Xdfrtp_2_62__DOT__base__DOT__RESET)
         | (vlTOPp->puzzle__DOT__Xdfrtp_2_52__DOT__base__DOT__RESET ^ vlTOPp->__Vchglast__TOP__puzzle__DOT__Xdfrtp_2_52__DOT__base__DOT__RESET)
         | (vlTOPp->puzzle__DOT__Xdfrtp_2_30__DOT__base__DOT__RESET ^ vlTOPp->__Vchglast__TOP__puzzle__DOT__Xdfrtp_2_30__DOT__base__DOT__RESET)
         | (vlTOPp->puzzle__DOT__Xdfrtp_2_41__DOT__base__DOT__RESET ^ vlTOPp->__Vchglast__TOP__puzzle__DOT__Xdfrtp_2_41__DOT__base__DOT__RESET)
         | (vlTOPp->puzzle__DOT__Xdfrtp_2_74__DOT__base__DOT__RESET ^ vlTOPp->__Vchglast__TOP__puzzle__DOT__Xdfrtp_2_74__DOT__base__DOT__RESET)
         | (vlTOPp->puzzle__DOT__Xdfrtp_2_63__DOT__base__DOT__RESET ^ vlTOPp->__Vchglast__TOP__puzzle__DOT__Xdfrtp_2_63__DOT__base__DOT__RESET)
         | (vlTOPp->puzzle__DOT__Xdfrtp_2_20__DOT__base__DOT__RESET ^ vlTOPp->__Vchglast__TOP__puzzle__DOT__Xdfrtp_2_20__DOT__base__DOT__RESET)
        || (vlTOPp->puzzle__DOT__Xdfrtp_2_42__DOT__base__DOT__RESET ^ vlTOPp->__Vchglast__TOP__puzzle__DOT__Xdfrtp_2_42__DOT__base__DOT__RESET)
         | (vlTOPp->puzzle__DOT__Xdfrtp_2_31__DOT__base__DOT__RESET ^ vlTOPp->__Vchglast__TOP__puzzle__DOT__Xdfrtp_2_31__DOT__base__DOT__RESET)
         | (vlTOPp->puzzle__DOT__Xdfrtp_2_75__DOT__base__DOT__RESET ^ vlTOPp->__Vchglast__TOP__puzzle__DOT__Xdfrtp_2_75__DOT__base__DOT__RESET)
         | (vlTOPp->puzzle__DOT__Xdfrtp_2_64__DOT__base__DOT__RESET ^ vlTOPp->__Vchglast__TOP__puzzle__DOT__Xdfrtp_2_64__DOT__base__DOT__RESET)
         | (vlTOPp->puzzle__DOT__Xdfrtp_2_53__DOT__base__DOT__RESET ^ vlTOPp->__Vchglast__TOP__puzzle__DOT__Xdfrtp_2_53__DOT__base__DOT__RESET)
         | (vlTOPp->puzzle__DOT__Xdfrtp_2_10__DOT__base__DOT__RESET ^ vlTOPp->__Vchglast__TOP__puzzle__DOT__Xdfrtp_2_10__DOT__base__DOT__RESET)
         | (vlTOPp->puzzle__DOT__Xdfrtp_2_21__DOT__base__DOT__RESET ^ vlTOPp->__Vchglast__TOP__puzzle__DOT__Xdfrtp_2_21__DOT__base__DOT__RESET)
         | (vlTOPp->puzzle__DOT__Xdfrtp_2_43__DOT__base__DOT__RESET ^ vlTOPp->__Vchglast__TOP__puzzle__DOT__Xdfrtp_2_43__DOT__base__DOT__RESET)
         | (vlTOPp->puzzle__DOT__Xdfrtp_2_32__DOT__base__DOT__RESET ^ vlTOPp->__Vchglast__TOP__puzzle__DOT__Xdfrtp_2_32__DOT__base__DOT__RESET)
         | (vlTOPp->puzzle__DOT__Xdfrtp_2_65__DOT__base__DOT__RESET ^ vlTOPp->__Vchglast__TOP__puzzle__DOT__Xdfrtp_2_65__DOT__base__DOT__RESET)
        || (vlTOPp->puzzle__DOT__Xdfrtp_2_76__DOT__base__DOT__RESET ^ vlTOPp->__Vchglast__TOP__puzzle__DOT__Xdfrtp_2_76__DOT__base__DOT__RESET)
         | (vlTOPp->puzzle__DOT__Xdfrtp_2_54__DOT__base__DOT__RESET ^ vlTOPp->__Vchglast__TOP__puzzle__DOT__Xdfrtp_2_54__DOT__base__DOT__RESET)
         | (vlTOPp->puzzle__DOT__Xdfrtp_2_22__DOT__base__DOT__RESET ^ vlTOPp->__Vchglast__TOP__puzzle__DOT__Xdfrtp_2_22__DOT__base__DOT__RESET)
         | (vlTOPp->puzzle__DOT__Xdfrtp_2_11__DOT__base__DOT__RESET ^ vlTOPp->__Vchglast__TOP__puzzle__DOT__Xdfrtp_2_11__DOT__base__DOT__RESET)
         | (vlTOPp->puzzle__DOT__Xdfrtp_2_33__DOT__base__DOT__RESET ^ vlTOPp->__Vchglast__TOP__puzzle__DOT__Xdfrtp_2_33__DOT__base__DOT__RESET)
         | (vlTOPp->puzzle__DOT__Xdfrtp_2_66__DOT__base__DOT__RESET ^ vlTOPp->__Vchglast__TOP__puzzle__DOT__Xdfrtp_2_66__DOT__base__DOT__RESET)
         | (vlTOPp->puzzle__DOT__Xdfrtp_2_77__DOT__base__DOT__RESET ^ vlTOPp->__Vchglast__TOP__puzzle__DOT__Xdfrtp_2_77__DOT__base__DOT__RESET)
         | (vlTOPp->puzzle__DOT__Xdfrtp_2_55__DOT__base__DOT__RESET ^ vlTOPp->__Vchglast__TOP__puzzle__DOT__Xdfrtp_2_55__DOT__base__DOT__RESET)
         | (vlTOPp->puzzle__DOT__Xdfrtp_2_44__DOT__base__DOT__RESET ^ vlTOPp->__Vchglast__TOP__puzzle__DOT__Xdfrtp_2_44__DOT__base__DOT__RESET)
         | (vlTOPp->puzzle__DOT__Xdfrtp_2_23__DOT__base__DOT__RESET ^ vlTOPp->__Vchglast__TOP__puzzle__DOT__Xdfrtp_2_23__DOT__base__DOT__RESET)
        || (vlTOPp->puzzle__DOT__Xdfrtp_2_12__DOT__base__DOT__RESET ^ vlTOPp->__Vchglast__TOP__puzzle__DOT__Xdfrtp_2_12__DOT__base__DOT__RESET)
         | (vlTOPp->puzzle__DOT__Xdfrtp_2_34__DOT__base__DOT__RESET ^ vlTOPp->__Vchglast__TOP__puzzle__DOT__Xdfrtp_2_34__DOT__base__DOT__RESET)
         | (vlTOPp->puzzle__DOT__Xdfrtp_2_67__DOT__base__DOT__RESET ^ vlTOPp->__Vchglast__TOP__puzzle__DOT__Xdfrtp_2_67__DOT__base__DOT__RESET)
         | (vlTOPp->puzzle__DOT__Xdfrtp_2_56__DOT__base__DOT__RESET ^ vlTOPp->__Vchglast__TOP__puzzle__DOT__Xdfrtp_2_56__DOT__base__DOT__RESET)
         | (vlTOPp->puzzle__DOT__Xdfrtp_2_45__DOT__base__DOT__RESET ^ vlTOPp->__Vchglast__TOP__puzzle__DOT__Xdfrtp_2_45__DOT__base__DOT__RESET)
         | (vlTOPp->puzzle__DOT__Xdfrtp_2_78__DOT__base__DOT__RESET ^ vlTOPp->__Vchglast__TOP__puzzle__DOT__Xdfrtp_2_78__DOT__base__DOT__RESET)
         | (vlTOPp->puzzle__DOT__Xdfrtp_2_24__DOT__base__DOT__RESET ^ vlTOPp->__Vchglast__TOP__puzzle__DOT__Xdfrtp_2_24__DOT__base__DOT__RESET)
         | (vlTOPp->puzzle__DOT__Xdfrtp_2_13__DOT__base__DOT__RESET ^ vlTOPp->__Vchglast__TOP__puzzle__DOT__Xdfrtp_2_13__DOT__base__DOT__RESET)
         | (vlTOPp->puzzle__DOT__Xdfrtp_2_68__DOT__base__DOT__RESET ^ vlTOPp->__Vchglast__TOP__puzzle__DOT__Xdfrtp_2_68__DOT__base__DOT__RESET)
         | (vlTOPp->puzzle__DOT__Xdfrtp_2_57__DOT__base__DOT__RESET ^ vlTOPp->__Vchglast__TOP__puzzle__DOT__Xdfrtp_2_57__DOT__base__DOT__RESET)
        || (vlTOPp->puzzle__DOT__Xdfrtp_2_35__DOT__base__DOT__RESET ^ vlTOPp->__Vchglast__TOP__puzzle__DOT__Xdfrtp_2_35__DOT__base__DOT__RESET)
         | (vlTOPp->puzzle__DOT__Xdfrtp_2_46__DOT__base__DOT__RESET ^ vlTOPp->__Vchglast__TOP__puzzle__DOT__Xdfrtp_2_46__DOT__base__DOT__RESET)
         | (vlTOPp->puzzle__DOT__Xdfrtp_2_79__DOT__base__DOT__RESET ^ vlTOPp->__Vchglast__TOP__puzzle__DOT__Xdfrtp_2_79__DOT__base__DOT__RESET)
         | (vlTOPp->puzzle__DOT__Xdfrtp_2_25__DOT__base__DOT__RESET ^ vlTOPp->__Vchglast__TOP__puzzle__DOT__Xdfrtp_2_25__DOT__base__DOT__RESET)
         | (vlTOPp->puzzle__DOT__Xdfrtp_2_14__DOT__base__DOT__RESET ^ vlTOPp->__Vchglast__TOP__puzzle__DOT__Xdfrtp_2_14__DOT__base__DOT__RESET)
         | (vlTOPp->puzzle__DOT__Xdfrtp_2_47__DOT__base__DOT__RESET ^ vlTOPp->__Vchglast__TOP__puzzle__DOT__Xdfrtp_2_47__DOT__base__DOT__RESET)
         | (vlTOPp->puzzle__DOT__Xdfrtp_2_58__DOT__base__DOT__RESET ^ vlTOPp->__Vchglast__TOP__puzzle__DOT__Xdfrtp_2_58__DOT__base__DOT__RESET)
         | (vlTOPp->puzzle__DOT__Xdfrtp_2_36__DOT__base__DOT__RESET ^ vlTOPp->__Vchglast__TOP__puzzle__DOT__Xdfrtp_2_36__DOT__base__DOT__RESET)
         | (vlTOPp->puzzle__DOT__Xdfrtp_2_69__DOT__base__DOT__RESET ^ vlTOPp->__Vchglast__TOP__puzzle__DOT__Xdfrtp_2_69__DOT__base__DOT__RESET)
         | (vlTOPp->puzzle__DOT__Xdfrtp_2_15__DOT__base__DOT__RESET ^ vlTOPp->__Vchglast__TOP__puzzle__DOT__Xdfrtp_2_15__DOT__base__DOT__RESET)
        || (vlTOPp->puzzle__DOT__Xdfrtp_2_48__DOT__base__DOT__RESET ^ vlTOPp->__Vchglast__TOP__puzzle__DOT__Xdfrtp_2_48__DOT__base__DOT__RESET)
         | (vlTOPp->puzzle__DOT__Xdfrtp_1_26__DOT__base__DOT__RESET ^ vlTOPp->__Vchglast__TOP__puzzle__DOT__Xdfrtp_1_26__DOT__base__DOT__RESET)
         | (vlTOPp->puzzle__DOT__Xdfrtp_2_59__DOT__base__DOT__RESET ^ vlTOPp->__Vchglast__TOP__puzzle__DOT__Xdfrtp_2_59__DOT__base__DOT__RESET)
         | (vlTOPp->puzzle__DOT__Xdfrtp_2_37__DOT__base__DOT__RESET ^ vlTOPp->__Vchglast__TOP__puzzle__DOT__Xdfrtp_2_37__DOT__base__DOT__RESET)
         | (vlTOPp->puzzle__DOT__Xdfrtp_2_16__DOT__base__DOT__RESET ^ vlTOPp->__Vchglast__TOP__puzzle__DOT__Xdfrtp_2_16__DOT__base__DOT__RESET)
         | (vlTOPp->puzzle__DOT__Xdfrtp_2_49__DOT__base__DOT__RESET ^ vlTOPp->__Vchglast__TOP__puzzle__DOT__Xdfrtp_2_49__DOT__base__DOT__RESET)
         | (vlTOPp->puzzle__DOT__Xdfrtp_2_27__DOT__base__DOT__RESET ^ vlTOPp->__Vchglast__TOP__puzzle__DOT__Xdfrtp_2_27__DOT__base__DOT__RESET)
         | (vlTOPp->puzzle__DOT__Xdfrtp_2_38__DOT__base__DOT__RESET ^ vlTOPp->__Vchglast__TOP__puzzle__DOT__Xdfrtp_2_38__DOT__base__DOT__RESET)
         | (vlTOPp->puzzle__DOT__Xdfrtp_2_28__DOT__base__DOT__RESET ^ vlTOPp->__Vchglast__TOP__puzzle__DOT__Xdfrtp_2_28__DOT__base__DOT__RESET)
         | (vlTOPp->puzzle__DOT__Xdfrtp_2_17__DOT__base__DOT__RESET ^ vlTOPp->__Vchglast__TOP__puzzle__DOT__Xdfrtp_2_17__DOT__base__DOT__RESET)
        || (vlTOPp->puzzle__DOT__Xdfrtp_2_39__DOT__base__DOT__RESET ^ vlTOPp->__Vchglast__TOP__puzzle__DOT__Xdfrtp_2_39__DOT__base__DOT__RESET)
         | (vlTOPp->puzzle__DOT__Xdfrtp_2_18__DOT__base__DOT__RESET ^ vlTOPp->__Vchglast__TOP__puzzle__DOT__Xdfrtp_2_18__DOT__base__DOT__RESET)
         | (vlTOPp->puzzle__DOT__Xdfrtp_2_29__DOT__base__DOT__RESET ^ vlTOPp->__Vchglast__TOP__puzzle__DOT__Xdfrtp_2_29__DOT__base__DOT__RESET)
         | (vlTOPp->puzzle__DOT__Xdfstp_2_0__DOT__base__DOT__SET ^ vlTOPp->__Vchglast__TOP__puzzle__DOT__Xdfstp_2_0__DOT__base__DOT__SET)
         | (vlTOPp->puzzle__DOT__Xdfrtp_2_19__DOT__base__DOT__RESET ^ vlTOPp->__Vchglast__TOP__puzzle__DOT__Xdfrtp_2_19__DOT__base__DOT__RESET)
         | (vlTOPp->puzzle__DOT__Xdfstp_2_1__DOT__base__DOT__SET ^ vlTOPp->__Vchglast__TOP__puzzle__DOT__Xdfstp_2_1__DOT__base__DOT__SET)
         | (vlTOPp->puzzle__DOT__Xdfrtp_2_0__DOT__base__DOT__RESET ^ vlTOPp->__Vchglast__TOP__puzzle__DOT__Xdfrtp_2_0__DOT__base__DOT__RESET)
         | (vlTOPp->puzzle__DOT__Xdfstp_2_2__DOT__base__DOT__SET ^ vlTOPp->__Vchglast__TOP__puzzle__DOT__Xdfstp_2_2__DOT__base__DOT__SET)
         | (vlTOPp->puzzle__DOT__Xdfrtp_2_1__DOT__base__DOT__RESET ^ vlTOPp->__Vchglast__TOP__puzzle__DOT__Xdfrtp_2_1__DOT__base__DOT__RESET)
         | (vlTOPp->puzzle__DOT__Xdfstp_2_3__DOT__base__DOT__SET ^ vlTOPp->__Vchglast__TOP__puzzle__DOT__Xdfstp_2_3__DOT__base__DOT__SET)
        || (vlTOPp->puzzle__DOT__Xdfrtp_2_2__DOT__base__DOT__RESET ^ vlTOPp->__Vchglast__TOP__puzzle__DOT__Xdfrtp_2_2__DOT__base__DOT__RESET)
         | (vlTOPp->puzzle__DOT__Xdfrtp_2_3__DOT__base__DOT__RESET ^ vlTOPp->__Vchglast__TOP__puzzle__DOT__Xdfrtp_2_3__DOT__base__DOT__RESET)
         | (vlTOPp->puzzle__DOT__Xdfrtp_2_4__DOT__base__DOT__RESET ^ vlTOPp->__Vchglast__TOP__puzzle__DOT__Xdfrtp_2_4__DOT__base__DOT__RESET)
         | (vlTOPp->puzzle__DOT__Xdfrtp_2_5__DOT__base__DOT__RESET ^ vlTOPp->__Vchglast__TOP__puzzle__DOT__Xdfrtp_2_5__DOT__base__DOT__RESET)
         | (vlTOPp->puzzle__DOT__Xdfrtp_2_6__DOT__base__DOT__RESET ^ vlTOPp->__Vchglast__TOP__puzzle__DOT__Xdfrtp_2_6__DOT__base__DOT__RESET)
         | (vlTOPp->puzzle__DOT__Xdfrtp_2_7__DOT__base__DOT__RESET ^ vlTOPp->__Vchglast__TOP__puzzle__DOT__Xdfrtp_2_7__DOT__base__DOT__RESET)
         | (vlTOPp->puzzle__DOT__Xdfrtp_2_8__DOT__base__DOT__RESET ^ vlTOPp->__Vchglast__TOP__puzzle__DOT__Xdfrtp_2_8__DOT__base__DOT__RESET)
         | (vlTOPp->puzzle__DOT__Xdfrtp_2_9__DOT__base__DOT__RESET ^ vlTOPp->__Vchglast__TOP__puzzle__DOT__Xdfrtp_2_9__DOT__base__DOT__RESET));
    VL_DEBUG_IF( if(__req && ((vlTOPp->puzzle__DOT__Xdfrtp_2_80__DOT__base__DOT__RESET ^ vlTOPp->__Vchglast__TOP__puzzle__DOT__Xdfrtp_2_80__DOT__base__DOT__RESET))) VL_DBG_MSGF("        CHANGE: dfrtp/sky130_fd_sc_hd__dfrtp.behavioral.v:57: puzzle.Xdfrtp_2_80.base.RESET\n"); );
    VL_DEBUG_IF( if(__req && ((vlTOPp->puzzle__DOT__Xdfrtp_2_70__DOT__base__DOT__RESET ^ vlTOPp->__Vchglast__TOP__puzzle__DOT__Xdfrtp_2_70__DOT__base__DOT__RESET))) VL_DBG_MSGF("        CHANGE: dfrtp/sky130_fd_sc_hd__dfrtp.behavioral.v:57: puzzle.Xdfrtp_2_70.base.RESET\n"); );
    VL_DEBUG_IF( if(__req && ((vlTOPp->puzzle__DOT__Xdfrtp_2_81__DOT__base__DOT__RESET ^ vlTOPp->__Vchglast__TOP__puzzle__DOT__Xdfrtp_2_81__DOT__base__DOT__RESET))) VL_DBG_MSGF("        CHANGE: dfrtp/sky130_fd_sc_hd__dfrtp.behavioral.v:57: puzzle.Xdfrtp_2_81.base.RESET\n"); );
    VL_DEBUG_IF( if(__req && ((vlTOPp->puzzle__DOT__Xdfrtp_2_60__DOT__base__DOT__RESET ^ vlTOPp->__Vchglast__TOP__puzzle__DOT__Xdfrtp_2_60__DOT__base__DOT__RESET))) VL_DBG_MSGF("        CHANGE: dfrtp/sky130_fd_sc_hd__dfrtp.behavioral.v:57: puzzle.Xdfrtp_2_60.base.RESET\n"); );
    VL_DEBUG_IF( if(__req && ((vlTOPp->puzzle__DOT__Xdfrtp_2_82__DOT__base__DOT__RESET ^ vlTOPp->__Vchglast__TOP__puzzle__DOT__Xdfrtp_2_82__DOT__base__DOT__RESET))) VL_DBG_MSGF("        CHANGE: dfrtp/sky130_fd_sc_hd__dfrtp.behavioral.v:57: puzzle.Xdfrtp_2_82.base.RESET\n"); );
    VL_DEBUG_IF( if(__req && ((vlTOPp->puzzle__DOT__Xdfrtp_2_71__DOT__base__DOT__RESET ^ vlTOPp->__Vchglast__TOP__puzzle__DOT__Xdfrtp_2_71__DOT__base__DOT__RESET))) VL_DBG_MSGF("        CHANGE: dfrtp/sky130_fd_sc_hd__dfrtp.behavioral.v:57: puzzle.Xdfrtp_2_71.base.RESET\n"); );
    VL_DEBUG_IF( if(__req && ((vlTOPp->puzzle__DOT__Xdfrtp_2_61__DOT__base__DOT__RESET ^ vlTOPp->__Vchglast__TOP__puzzle__DOT__Xdfrtp_2_61__DOT__base__DOT__RESET))) VL_DBG_MSGF("        CHANGE: dfrtp/sky130_fd_sc_hd__dfrtp.behavioral.v:57: puzzle.Xdfrtp_2_61.base.RESET\n"); );
    VL_DEBUG_IF( if(__req && ((vlTOPp->puzzle__DOT__Xdfrtp_2_50__DOT__base__DOT__RESET ^ vlTOPp->__Vchglast__TOP__puzzle__DOT__Xdfrtp_2_50__DOT__base__DOT__RESET))) VL_DBG_MSGF("        CHANGE: dfrtp/sky130_fd_sc_hd__dfrtp.behavioral.v:57: puzzle.Xdfrtp_2_50.base.RESET\n"); );
    VL_DEBUG_IF( if(__req && ((vlTOPp->puzzle__DOT__Xdfrtp_2_83__DOT__base__DOT__RESET ^ vlTOPp->__Vchglast__TOP__puzzle__DOT__Xdfrtp_2_83__DOT__base__DOT__RESET))) VL_DBG_MSGF("        CHANGE: dfrtp/sky130_fd_sc_hd__dfrtp.behavioral.v:57: puzzle.Xdfrtp_2_83.base.RESET\n"); );
    VL_DEBUG_IF( if(__req && ((vlTOPp->puzzle__DOT__Xdfrtp_2_72__DOT__base__DOT__RESET ^ vlTOPp->__Vchglast__TOP__puzzle__DOT__Xdfrtp_2_72__DOT__base__DOT__RESET))) VL_DBG_MSGF("        CHANGE: dfrtp/sky130_fd_sc_hd__dfrtp.behavioral.v:57: puzzle.Xdfrtp_2_72.base.RESET\n"); );
    VL_DEBUG_IF( if(__req && ((vlTOPp->puzzle__DOT__Xdfrtp_2_51__DOT__base__DOT__RESET ^ vlTOPp->__Vchglast__TOP__puzzle__DOT__Xdfrtp_2_51__DOT__base__DOT__RESET))) VL_DBG_MSGF("        CHANGE: dfrtp/sky130_fd_sc_hd__dfrtp.behavioral.v:57: puzzle.Xdfrtp_2_51.base.RESET\n"); );
    VL_DEBUG_IF( if(__req && ((vlTOPp->puzzle__DOT__Xdfrtp_2_40__DOT__base__DOT__RESET ^ vlTOPp->__Vchglast__TOP__puzzle__DOT__Xdfrtp_2_40__DOT__base__DOT__RESET))) VL_DBG_MSGF("        CHANGE: dfrtp/sky130_fd_sc_hd__dfrtp.behavioral.v:57: puzzle.Xdfrtp_2_40.base.RESET\n"); );
    VL_DEBUG_IF( if(__req && ((vlTOPp->puzzle__DOT__Xdfrtp_2_73__DOT__base__DOT__RESET ^ vlTOPp->__Vchglast__TOP__puzzle__DOT__Xdfrtp_2_73__DOT__base__DOT__RESET))) VL_DBG_MSGF("        CHANGE: dfrtp/sky130_fd_sc_hd__dfrtp.behavioral.v:57: puzzle.Xdfrtp_2_73.base.RESET\n"); );
    VL_DEBUG_IF( if(__req && ((vlTOPp->puzzle__DOT__Xdfrtp_2_62__DOT__base__DOT__RESET ^ vlTOPp->__Vchglast__TOP__puzzle__DOT__Xdfrtp_2_62__DOT__base__DOT__RESET))) VL_DBG_MSGF("        CHANGE: dfrtp/sky130_fd_sc_hd__dfrtp.behavioral.v:57: puzzle.Xdfrtp_2_62.base.RESET\n"); );
    VL_DEBUG_IF( if(__req && ((vlTOPp->puzzle__DOT__Xdfrtp_2_52__DOT__base__DOT__RESET ^ vlTOPp->__Vchglast__TOP__puzzle__DOT__Xdfrtp_2_52__DOT__base__DOT__RESET))) VL_DBG_MSGF("        CHANGE: dfrtp/sky130_fd_sc_hd__dfrtp.behavioral.v:57: puzzle.Xdfrtp_2_52.base.RESET\n"); );
    VL_DEBUG_IF( if(__req && ((vlTOPp->puzzle__DOT__Xdfrtp_2_30__DOT__base__DOT__RESET ^ vlTOPp->__Vchglast__TOP__puzzle__DOT__Xdfrtp_2_30__DOT__base__DOT__RESET))) VL_DBG_MSGF("        CHANGE: dfrtp/sky130_fd_sc_hd__dfrtp.behavioral.v:57: puzzle.Xdfrtp_2_30.base.RESET\n"); );
    VL_DEBUG_IF( if(__req && ((vlTOPp->puzzle__DOT__Xdfrtp_2_41__DOT__base__DOT__RESET ^ vlTOPp->__Vchglast__TOP__puzzle__DOT__Xdfrtp_2_41__DOT__base__DOT__RESET))) VL_DBG_MSGF("        CHANGE: dfrtp/sky130_fd_sc_hd__dfrtp.behavioral.v:57: puzzle.Xdfrtp_2_41.base.RESET\n"); );
    VL_DEBUG_IF( if(__req && ((vlTOPp->puzzle__DOT__Xdfrtp_2_74__DOT__base__DOT__RESET ^ vlTOPp->__Vchglast__TOP__puzzle__DOT__Xdfrtp_2_74__DOT__base__DOT__RESET))) VL_DBG_MSGF("        CHANGE: dfrtp/sky130_fd_sc_hd__dfrtp.behavioral.v:57: puzzle.Xdfrtp_2_74.base.RESET\n"); );
    VL_DEBUG_IF( if(__req && ((vlTOPp->puzzle__DOT__Xdfrtp_2_63__DOT__base__DOT__RESET ^ vlTOPp->__Vchglast__TOP__puzzle__DOT__Xdfrtp_2_63__DOT__base__DOT__RESET))) VL_DBG_MSGF("        CHANGE: dfrtp/sky130_fd_sc_hd__dfrtp.behavioral.v:57: puzzle.Xdfrtp_2_63.base.RESET\n"); );
    VL_DEBUG_IF( if(__req && ((vlTOPp->puzzle__DOT__Xdfrtp_2_20__DOT__base__DOT__RESET ^ vlTOPp->__Vchglast__TOP__puzzle__DOT__Xdfrtp_2_20__DOT__base__DOT__RESET))) VL_DBG_MSGF("        CHANGE: dfrtp/sky130_fd_sc_hd__dfrtp.behavioral.v:57: puzzle.Xdfrtp_2_20.base.RESET\n"); );
    VL_DEBUG_IF( if(__req && ((vlTOPp->puzzle__DOT__Xdfrtp_2_42__DOT__base__DOT__RESET ^ vlTOPp->__Vchglast__TOP__puzzle__DOT__Xdfrtp_2_42__DOT__base__DOT__RESET))) VL_DBG_MSGF("        CHANGE: dfrtp/sky130_fd_sc_hd__dfrtp.behavioral.v:57: puzzle.Xdfrtp_2_42.base.RESET\n"); );
    VL_DEBUG_IF( if(__req && ((vlTOPp->puzzle__DOT__Xdfrtp_2_31__DOT__base__DOT__RESET ^ vlTOPp->__Vchglast__TOP__puzzle__DOT__Xdfrtp_2_31__DOT__base__DOT__RESET))) VL_DBG_MSGF("        CHANGE: dfrtp/sky130_fd_sc_hd__dfrtp.behavioral.v:57: puzzle.Xdfrtp_2_31.base.RESET\n"); );
    VL_DEBUG_IF( if(__req && ((vlTOPp->puzzle__DOT__Xdfrtp_2_75__DOT__base__DOT__RESET ^ vlTOPp->__Vchglast__TOP__puzzle__DOT__Xdfrtp_2_75__DOT__base__DOT__RESET))) VL_DBG_MSGF("        CHANGE: dfrtp/sky130_fd_sc_hd__dfrtp.behavioral.v:57: puzzle.Xdfrtp_2_75.base.RESET\n"); );
    VL_DEBUG_IF( if(__req && ((vlTOPp->puzzle__DOT__Xdfrtp_2_64__DOT__base__DOT__RESET ^ vlTOPp->__Vchglast__TOP__puzzle__DOT__Xdfrtp_2_64__DOT__base__DOT__RESET))) VL_DBG_MSGF("        CHANGE: dfrtp/sky130_fd_sc_hd__dfrtp.behavioral.v:57: puzzle.Xdfrtp_2_64.base.RESET\n"); );
    VL_DEBUG_IF( if(__req && ((vlTOPp->puzzle__DOT__Xdfrtp_2_53__DOT__base__DOT__RESET ^ vlTOPp->__Vchglast__TOP__puzzle__DOT__Xdfrtp_2_53__DOT__base__DOT__RESET))) VL_DBG_MSGF("        CHANGE: dfrtp/sky130_fd_sc_hd__dfrtp.behavioral.v:57: puzzle.Xdfrtp_2_53.base.RESET\n"); );
    VL_DEBUG_IF( if(__req && ((vlTOPp->puzzle__DOT__Xdfrtp_2_10__DOT__base__DOT__RESET ^ vlTOPp->__Vchglast__TOP__puzzle__DOT__Xdfrtp_2_10__DOT__base__DOT__RESET))) VL_DBG_MSGF("        CHANGE: dfrtp/sky130_fd_sc_hd__dfrtp.behavioral.v:57: puzzle.Xdfrtp_2_10.base.RESET\n"); );
    VL_DEBUG_IF( if(__req && ((vlTOPp->puzzle__DOT__Xdfrtp_2_21__DOT__base__DOT__RESET ^ vlTOPp->__Vchglast__TOP__puzzle__DOT__Xdfrtp_2_21__DOT__base__DOT__RESET))) VL_DBG_MSGF("        CHANGE: dfrtp/sky130_fd_sc_hd__dfrtp.behavioral.v:57: puzzle.Xdfrtp_2_21.base.RESET\n"); );
    VL_DEBUG_IF( if(__req && ((vlTOPp->puzzle__DOT__Xdfrtp_2_43__DOT__base__DOT__RESET ^ vlTOPp->__Vchglast__TOP__puzzle__DOT__Xdfrtp_2_43__DOT__base__DOT__RESET))) VL_DBG_MSGF("        CHANGE: dfrtp/sky130_fd_sc_hd__dfrtp.behavioral.v:57: puzzle.Xdfrtp_2_43.base.RESET\n"); );
    VL_DEBUG_IF( if(__req && ((vlTOPp->puzzle__DOT__Xdfrtp_2_32__DOT__base__DOT__RESET ^ vlTOPp->__Vchglast__TOP__puzzle__DOT__Xdfrtp_2_32__DOT__base__DOT__RESET))) VL_DBG_MSGF("        CHANGE: dfrtp/sky130_fd_sc_hd__dfrtp.behavioral.v:57: puzzle.Xdfrtp_2_32.base.RESET\n"); );
    VL_DEBUG_IF( if(__req && ((vlTOPp->puzzle__DOT__Xdfrtp_2_65__DOT__base__DOT__RESET ^ vlTOPp->__Vchglast__TOP__puzzle__DOT__Xdfrtp_2_65__DOT__base__DOT__RESET))) VL_DBG_MSGF("        CHANGE: dfrtp/sky130_fd_sc_hd__dfrtp.behavioral.v:57: puzzle.Xdfrtp_2_65.base.RESET\n"); );
    VL_DEBUG_IF( if(__req && ((vlTOPp->puzzle__DOT__Xdfrtp_2_76__DOT__base__DOT__RESET ^ vlTOPp->__Vchglast__TOP__puzzle__DOT__Xdfrtp_2_76__DOT__base__DOT__RESET))) VL_DBG_MSGF("        CHANGE: dfrtp/sky130_fd_sc_hd__dfrtp.behavioral.v:57: puzzle.Xdfrtp_2_76.base.RESET\n"); );
    VL_DEBUG_IF( if(__req && ((vlTOPp->puzzle__DOT__Xdfrtp_2_54__DOT__base__DOT__RESET ^ vlTOPp->__Vchglast__TOP__puzzle__DOT__Xdfrtp_2_54__DOT__base__DOT__RESET))) VL_DBG_MSGF("        CHANGE: dfrtp/sky130_fd_sc_hd__dfrtp.behavioral.v:57: puzzle.Xdfrtp_2_54.base.RESET\n"); );
    VL_DEBUG_IF( if(__req && ((vlTOPp->puzzle__DOT__Xdfrtp_2_22__DOT__base__DOT__RESET ^ vlTOPp->__Vchglast__TOP__puzzle__DOT__Xdfrtp_2_22__DOT__base__DOT__RESET))) VL_DBG_MSGF("        CHANGE: dfrtp/sky130_fd_sc_hd__dfrtp.behavioral.v:57: puzzle.Xdfrtp_2_22.base.RESET\n"); );
    VL_DEBUG_IF( if(__req && ((vlTOPp->puzzle__DOT__Xdfrtp_2_11__DOT__base__DOT__RESET ^ vlTOPp->__Vchglast__TOP__puzzle__DOT__Xdfrtp_2_11__DOT__base__DOT__RESET))) VL_DBG_MSGF("        CHANGE: dfrtp/sky130_fd_sc_hd__dfrtp.behavioral.v:57: puzzle.Xdfrtp_2_11.base.RESET\n"); );
    VL_DEBUG_IF( if(__req && ((vlTOPp->puzzle__DOT__Xdfrtp_2_33__DOT__base__DOT__RESET ^ vlTOPp->__Vchglast__TOP__puzzle__DOT__Xdfrtp_2_33__DOT__base__DOT__RESET))) VL_DBG_MSGF("        CHANGE: dfrtp/sky130_fd_sc_hd__dfrtp.behavioral.v:57: puzzle.Xdfrtp_2_33.base.RESET\n"); );
    VL_DEBUG_IF( if(__req && ((vlTOPp->puzzle__DOT__Xdfrtp_2_66__DOT__base__DOT__RESET ^ vlTOPp->__Vchglast__TOP__puzzle__DOT__Xdfrtp_2_66__DOT__base__DOT__RESET))) VL_DBG_MSGF("        CHANGE: dfrtp/sky130_fd_sc_hd__dfrtp.behavioral.v:57: puzzle.Xdfrtp_2_66.base.RESET\n"); );
    VL_DEBUG_IF( if(__req && ((vlTOPp->puzzle__DOT__Xdfrtp_2_77__DOT__base__DOT__RESET ^ vlTOPp->__Vchglast__TOP__puzzle__DOT__Xdfrtp_2_77__DOT__base__DOT__RESET))) VL_DBG_MSGF("        CHANGE: dfrtp/sky130_fd_sc_hd__dfrtp.behavioral.v:57: puzzle.Xdfrtp_2_77.base.RESET\n"); );
    VL_DEBUG_IF( if(__req && ((vlTOPp->puzzle__DOT__Xdfrtp_2_55__DOT__base__DOT__RESET ^ vlTOPp->__Vchglast__TOP__puzzle__DOT__Xdfrtp_2_55__DOT__base__DOT__RESET))) VL_DBG_MSGF("        CHANGE: dfrtp/sky130_fd_sc_hd__dfrtp.behavioral.v:57: puzzle.Xdfrtp_2_55.base.RESET\n"); );
    VL_DEBUG_IF( if(__req && ((vlTOPp->puzzle__DOT__Xdfrtp_2_44__DOT__base__DOT__RESET ^ vlTOPp->__Vchglast__TOP__puzzle__DOT__Xdfrtp_2_44__DOT__base__DOT__RESET))) VL_DBG_MSGF("        CHANGE: dfrtp/sky130_fd_sc_hd__dfrtp.behavioral.v:57: puzzle.Xdfrtp_2_44.base.RESET\n"); );
    VL_DEBUG_IF( if(__req && ((vlTOPp->puzzle__DOT__Xdfrtp_2_23__DOT__base__DOT__RESET ^ vlTOPp->__Vchglast__TOP__puzzle__DOT__Xdfrtp_2_23__DOT__base__DOT__RESET))) VL_DBG_MSGF("        CHANGE: dfrtp/sky130_fd_sc_hd__dfrtp.behavioral.v:57: puzzle.Xdfrtp_2_23.base.RESET\n"); );
    VL_DEBUG_IF( if(__req && ((vlTOPp->puzzle__DOT__Xdfrtp_2_12__DOT__base__DOT__RESET ^ vlTOPp->__Vchglast__TOP__puzzle__DOT__Xdfrtp_2_12__DOT__base__DOT__RESET))) VL_DBG_MSGF("        CHANGE: dfrtp/sky130_fd_sc_hd__dfrtp.behavioral.v:57: puzzle.Xdfrtp_2_12.base.RESET\n"); );
    VL_DEBUG_IF( if(__req && ((vlTOPp->puzzle__DOT__Xdfrtp_2_34__DOT__base__DOT__RESET ^ vlTOPp->__Vchglast__TOP__puzzle__DOT__Xdfrtp_2_34__DOT__base__DOT__RESET))) VL_DBG_MSGF("        CHANGE: dfrtp/sky130_fd_sc_hd__dfrtp.behavioral.v:57: puzzle.Xdfrtp_2_34.base.RESET\n"); );
    VL_DEBUG_IF( if(__req && ((vlTOPp->puzzle__DOT__Xdfrtp_2_67__DOT__base__DOT__RESET ^ vlTOPp->__Vchglast__TOP__puzzle__DOT__Xdfrtp_2_67__DOT__base__DOT__RESET))) VL_DBG_MSGF("        CHANGE: dfrtp/sky130_fd_sc_hd__dfrtp.behavioral.v:57: puzzle.Xdfrtp_2_67.base.RESET\n"); );
    VL_DEBUG_IF( if(__req && ((vlTOPp->puzzle__DOT__Xdfrtp_2_56__DOT__base__DOT__RESET ^ vlTOPp->__Vchglast__TOP__puzzle__DOT__Xdfrtp_2_56__DOT__base__DOT__RESET))) VL_DBG_MSGF("        CHANGE: dfrtp/sky130_fd_sc_hd__dfrtp.behavioral.v:57: puzzle.Xdfrtp_2_56.base.RESET\n"); );
    VL_DEBUG_IF( if(__req && ((vlTOPp->puzzle__DOT__Xdfrtp_2_45__DOT__base__DOT__RESET ^ vlTOPp->__Vchglast__TOP__puzzle__DOT__Xdfrtp_2_45__DOT__base__DOT__RESET))) VL_DBG_MSGF("        CHANGE: dfrtp/sky130_fd_sc_hd__dfrtp.behavioral.v:57: puzzle.Xdfrtp_2_45.base.RESET\n"); );
    VL_DEBUG_IF( if(__req && ((vlTOPp->puzzle__DOT__Xdfrtp_2_78__DOT__base__DOT__RESET ^ vlTOPp->__Vchglast__TOP__puzzle__DOT__Xdfrtp_2_78__DOT__base__DOT__RESET))) VL_DBG_MSGF("        CHANGE: dfrtp/sky130_fd_sc_hd__dfrtp.behavioral.v:57: puzzle.Xdfrtp_2_78.base.RESET\n"); );
    VL_DEBUG_IF( if(__req && ((vlTOPp->puzzle__DOT__Xdfrtp_2_24__DOT__base__DOT__RESET ^ vlTOPp->__Vchglast__TOP__puzzle__DOT__Xdfrtp_2_24__DOT__base__DOT__RESET))) VL_DBG_MSGF("        CHANGE: dfrtp/sky130_fd_sc_hd__dfrtp.behavioral.v:57: puzzle.Xdfrtp_2_24.base.RESET\n"); );
    VL_DEBUG_IF( if(__req && ((vlTOPp->puzzle__DOT__Xdfrtp_2_13__DOT__base__DOT__RESET ^ vlTOPp->__Vchglast__TOP__puzzle__DOT__Xdfrtp_2_13__DOT__base__DOT__RESET))) VL_DBG_MSGF("        CHANGE: dfrtp/sky130_fd_sc_hd__dfrtp.behavioral.v:57: puzzle.Xdfrtp_2_13.base.RESET\n"); );
    VL_DEBUG_IF( if(__req && ((vlTOPp->puzzle__DOT__Xdfrtp_2_68__DOT__base__DOT__RESET ^ vlTOPp->__Vchglast__TOP__puzzle__DOT__Xdfrtp_2_68__DOT__base__DOT__RESET))) VL_DBG_MSGF("        CHANGE: dfrtp/sky130_fd_sc_hd__dfrtp.behavioral.v:57: puzzle.Xdfrtp_2_68.base.RESET\n"); );
    VL_DEBUG_IF( if(__req && ((vlTOPp->puzzle__DOT__Xdfrtp_2_57__DOT__base__DOT__RESET ^ vlTOPp->__Vchglast__TOP__puzzle__DOT__Xdfrtp_2_57__DOT__base__DOT__RESET))) VL_DBG_MSGF("        CHANGE: dfrtp/sky130_fd_sc_hd__dfrtp.behavioral.v:57: puzzle.Xdfrtp_2_57.base.RESET\n"); );
    VL_DEBUG_IF( if(__req && ((vlTOPp->puzzle__DOT__Xdfrtp_2_35__DOT__base__DOT__RESET ^ vlTOPp->__Vchglast__TOP__puzzle__DOT__Xdfrtp_2_35__DOT__base__DOT__RESET))) VL_DBG_MSGF("        CHANGE: dfrtp/sky130_fd_sc_hd__dfrtp.behavioral.v:57: puzzle.Xdfrtp_2_35.base.RESET\n"); );
    VL_DEBUG_IF( if(__req && ((vlTOPp->puzzle__DOT__Xdfrtp_2_46__DOT__base__DOT__RESET ^ vlTOPp->__Vchglast__TOP__puzzle__DOT__Xdfrtp_2_46__DOT__base__DOT__RESET))) VL_DBG_MSGF("        CHANGE: dfrtp/sky130_fd_sc_hd__dfrtp.behavioral.v:57: puzzle.Xdfrtp_2_46.base.RESET\n"); );
    VL_DEBUG_IF( if(__req && ((vlTOPp->puzzle__DOT__Xdfrtp_2_79__DOT__base__DOT__RESET ^ vlTOPp->__Vchglast__TOP__puzzle__DOT__Xdfrtp_2_79__DOT__base__DOT__RESET))) VL_DBG_MSGF("        CHANGE: dfrtp/sky130_fd_sc_hd__dfrtp.behavioral.v:57: puzzle.Xdfrtp_2_79.base.RESET\n"); );
    VL_DEBUG_IF( if(__req && ((vlTOPp->puzzle__DOT__Xdfrtp_2_25__DOT__base__DOT__RESET ^ vlTOPp->__Vchglast__TOP__puzzle__DOT__Xdfrtp_2_25__DOT__base__DOT__RESET))) VL_DBG_MSGF("        CHANGE: dfrtp/sky130_fd_sc_hd__dfrtp.behavioral.v:57: puzzle.Xdfrtp_2_25.base.RESET\n"); );
    VL_DEBUG_IF( if(__req && ((vlTOPp->puzzle__DOT__Xdfrtp_2_14__DOT__base__DOT__RESET ^ vlTOPp->__Vchglast__TOP__puzzle__DOT__Xdfrtp_2_14__DOT__base__DOT__RESET))) VL_DBG_MSGF("        CHANGE: dfrtp/sky130_fd_sc_hd__dfrtp.behavioral.v:57: puzzle.Xdfrtp_2_14.base.RESET\n"); );
    VL_DEBUG_IF( if(__req && ((vlTOPp->puzzle__DOT__Xdfrtp_2_47__DOT__base__DOT__RESET ^ vlTOPp->__Vchglast__TOP__puzzle__DOT__Xdfrtp_2_47__DOT__base__DOT__RESET))) VL_DBG_MSGF("        CHANGE: dfrtp/sky130_fd_sc_hd__dfrtp.behavioral.v:57: puzzle.Xdfrtp_2_47.base.RESET\n"); );
    VL_DEBUG_IF( if(__req && ((vlTOPp->puzzle__DOT__Xdfrtp_2_58__DOT__base__DOT__RESET ^ vlTOPp->__Vchglast__TOP__puzzle__DOT__Xdfrtp_2_58__DOT__base__DOT__RESET))) VL_DBG_MSGF("        CHANGE: dfrtp/sky130_fd_sc_hd__dfrtp.behavioral.v:57: puzzle.Xdfrtp_2_58.base.RESET\n"); );
    VL_DEBUG_IF( if(__req && ((vlTOPp->puzzle__DOT__Xdfrtp_2_36__DOT__base__DOT__RESET ^ vlTOPp->__Vchglast__TOP__puzzle__DOT__Xdfrtp_2_36__DOT__base__DOT__RESET))) VL_DBG_MSGF("        CHANGE: dfrtp/sky130_fd_sc_hd__dfrtp.behavioral.v:57: puzzle.Xdfrtp_2_36.base.RESET\n"); );
    VL_DEBUG_IF( if(__req && ((vlTOPp->puzzle__DOT__Xdfrtp_2_69__DOT__base__DOT__RESET ^ vlTOPp->__Vchglast__TOP__puzzle__DOT__Xdfrtp_2_69__DOT__base__DOT__RESET))) VL_DBG_MSGF("        CHANGE: dfrtp/sky130_fd_sc_hd__dfrtp.behavioral.v:57: puzzle.Xdfrtp_2_69.base.RESET\n"); );
    VL_DEBUG_IF( if(__req && ((vlTOPp->puzzle__DOT__Xdfrtp_2_15__DOT__base__DOT__RESET ^ vlTOPp->__Vchglast__TOP__puzzle__DOT__Xdfrtp_2_15__DOT__base__DOT__RESET))) VL_DBG_MSGF("        CHANGE: dfrtp/sky130_fd_sc_hd__dfrtp.behavioral.v:57: puzzle.Xdfrtp_2_15.base.RESET\n"); );
    VL_DEBUG_IF( if(__req && ((vlTOPp->puzzle__DOT__Xdfrtp_2_48__DOT__base__DOT__RESET ^ vlTOPp->__Vchglast__TOP__puzzle__DOT__Xdfrtp_2_48__DOT__base__DOT__RESET))) VL_DBG_MSGF("        CHANGE: dfrtp/sky130_fd_sc_hd__dfrtp.behavioral.v:57: puzzle.Xdfrtp_2_48.base.RESET\n"); );
    VL_DEBUG_IF( if(__req && ((vlTOPp->puzzle__DOT__Xdfrtp_1_26__DOT__base__DOT__RESET ^ vlTOPp->__Vchglast__TOP__puzzle__DOT__Xdfrtp_1_26__DOT__base__DOT__RESET))) VL_DBG_MSGF("        CHANGE: dfrtp/sky130_fd_sc_hd__dfrtp.behavioral.v:57: puzzle.Xdfrtp_1_26.base.RESET\n"); );
    VL_DEBUG_IF( if(__req && ((vlTOPp->puzzle__DOT__Xdfrtp_2_59__DOT__base__DOT__RESET ^ vlTOPp->__Vchglast__TOP__puzzle__DOT__Xdfrtp_2_59__DOT__base__DOT__RESET))) VL_DBG_MSGF("        CHANGE: dfrtp/sky130_fd_sc_hd__dfrtp.behavioral.v:57: puzzle.Xdfrtp_2_59.base.RESET\n"); );
    VL_DEBUG_IF( if(__req && ((vlTOPp->puzzle__DOT__Xdfrtp_2_37__DOT__base__DOT__RESET ^ vlTOPp->__Vchglast__TOP__puzzle__DOT__Xdfrtp_2_37__DOT__base__DOT__RESET))) VL_DBG_MSGF("        CHANGE: dfrtp/sky130_fd_sc_hd__dfrtp.behavioral.v:57: puzzle.Xdfrtp_2_37.base.RESET\n"); );
    VL_DEBUG_IF( if(__req && ((vlTOPp->puzzle__DOT__Xdfrtp_2_16__DOT__base__DOT__RESET ^ vlTOPp->__Vchglast__TOP__puzzle__DOT__Xdfrtp_2_16__DOT__base__DOT__RESET))) VL_DBG_MSGF("        CHANGE: dfrtp/sky130_fd_sc_hd__dfrtp.behavioral.v:57: puzzle.Xdfrtp_2_16.base.RESET\n"); );
    VL_DEBUG_IF( if(__req && ((vlTOPp->puzzle__DOT__Xdfrtp_2_49__DOT__base__DOT__RESET ^ vlTOPp->__Vchglast__TOP__puzzle__DOT__Xdfrtp_2_49__DOT__base__DOT__RESET))) VL_DBG_MSGF("        CHANGE: dfrtp/sky130_fd_sc_hd__dfrtp.behavioral.v:57: puzzle.Xdfrtp_2_49.base.RESET\n"); );
    VL_DEBUG_IF( if(__req && ((vlTOPp->puzzle__DOT__Xdfrtp_2_27__DOT__base__DOT__RESET ^ vlTOPp->__Vchglast__TOP__puzzle__DOT__Xdfrtp_2_27__DOT__base__DOT__RESET))) VL_DBG_MSGF("        CHANGE: dfrtp/sky130_fd_sc_hd__dfrtp.behavioral.v:57: puzzle.Xdfrtp_2_27.base.RESET\n"); );
    VL_DEBUG_IF( if(__req && ((vlTOPp->puzzle__DOT__Xdfrtp_2_38__DOT__base__DOT__RESET ^ vlTOPp->__Vchglast__TOP__puzzle__DOT__Xdfrtp_2_38__DOT__base__DOT__RESET))) VL_DBG_MSGF("        CHANGE: dfrtp/sky130_fd_sc_hd__dfrtp.behavioral.v:57: puzzle.Xdfrtp_2_38.base.RESET\n"); );
    VL_DEBUG_IF( if(__req && ((vlTOPp->puzzle__DOT__Xdfrtp_2_28__DOT__base__DOT__RESET ^ vlTOPp->__Vchglast__TOP__puzzle__DOT__Xdfrtp_2_28__DOT__base__DOT__RESET))) VL_DBG_MSGF("        CHANGE: dfrtp/sky130_fd_sc_hd__dfrtp.behavioral.v:57: puzzle.Xdfrtp_2_28.base.RESET\n"); );
    VL_DEBUG_IF( if(__req && ((vlTOPp->puzzle__DOT__Xdfrtp_2_17__DOT__base__DOT__RESET ^ vlTOPp->__Vchglast__TOP__puzzle__DOT__Xdfrtp_2_17__DOT__base__DOT__RESET))) VL_DBG_MSGF("        CHANGE: dfrtp/sky130_fd_sc_hd__dfrtp.behavioral.v:57: puzzle.Xdfrtp_2_17.base.RESET\n"); );
    VL_DEBUG_IF( if(__req && ((vlTOPp->puzzle__DOT__Xdfrtp_2_39__DOT__base__DOT__RESET ^ vlTOPp->__Vchglast__TOP__puzzle__DOT__Xdfrtp_2_39__DOT__base__DOT__RESET))) VL_DBG_MSGF("        CHANGE: dfrtp/sky130_fd_sc_hd__dfrtp.behavioral.v:57: puzzle.Xdfrtp_2_39.base.RESET\n"); );
    VL_DEBUG_IF( if(__req && ((vlTOPp->puzzle__DOT__Xdfrtp_2_18__DOT__base__DOT__RESET ^ vlTOPp->__Vchglast__TOP__puzzle__DOT__Xdfrtp_2_18__DOT__base__DOT__RESET))) VL_DBG_MSGF("        CHANGE: dfrtp/sky130_fd_sc_hd__dfrtp.behavioral.v:57: puzzle.Xdfrtp_2_18.base.RESET\n"); );
    VL_DEBUG_IF( if(__req && ((vlTOPp->puzzle__DOT__Xdfrtp_2_29__DOT__base__DOT__RESET ^ vlTOPp->__Vchglast__TOP__puzzle__DOT__Xdfrtp_2_29__DOT__base__DOT__RESET))) VL_DBG_MSGF("        CHANGE: dfrtp/sky130_fd_sc_hd__dfrtp.behavioral.v:57: puzzle.Xdfrtp_2_29.base.RESET\n"); );
    VL_DEBUG_IF( if(__req && ((vlTOPp->puzzle__DOT__Xdfstp_2_0__DOT__base__DOT__SET ^ vlTOPp->__Vchglast__TOP__puzzle__DOT__Xdfstp_2_0__DOT__base__DOT__SET))) VL_DBG_MSGF("        CHANGE: dfstp/sky130_fd_sc_hd__dfstp.behavioral.v:57: puzzle.Xdfstp_2_0.base.SET\n"); );
    VL_DEBUG_IF( if(__req && ((vlTOPp->puzzle__DOT__Xdfrtp_2_19__DOT__base__DOT__RESET ^ vlTOPp->__Vchglast__TOP__puzzle__DOT__Xdfrtp_2_19__DOT__base__DOT__RESET))) VL_DBG_MSGF("        CHANGE: dfrtp/sky130_fd_sc_hd__dfrtp.behavioral.v:57: puzzle.Xdfrtp_2_19.base.RESET\n"); );
    VL_DEBUG_IF( if(__req && ((vlTOPp->puzzle__DOT__Xdfstp_2_1__DOT__base__DOT__SET ^ vlTOPp->__Vchglast__TOP__puzzle__DOT__Xdfstp_2_1__DOT__base__DOT__SET))) VL_DBG_MSGF("        CHANGE: dfstp/sky130_fd_sc_hd__dfstp.behavioral.v:57: puzzle.Xdfstp_2_1.base.SET\n"); );
    VL_DEBUG_IF( if(__req && ((vlTOPp->puzzle__DOT__Xdfrtp_2_0__DOT__base__DOT__RESET ^ vlTOPp->__Vchglast__TOP__puzzle__DOT__Xdfrtp_2_0__DOT__base__DOT__RESET))) VL_DBG_MSGF("        CHANGE: dfrtp/sky130_fd_sc_hd__dfrtp.behavioral.v:57: puzzle.Xdfrtp_2_0.base.RESET\n"); );
    VL_DEBUG_IF( if(__req && ((vlTOPp->puzzle__DOT__Xdfstp_2_2__DOT__base__DOT__SET ^ vlTOPp->__Vchglast__TOP__puzzle__DOT__Xdfstp_2_2__DOT__base__DOT__SET))) VL_DBG_MSGF("        CHANGE: dfstp/sky130_fd_sc_hd__dfstp.behavioral.v:57: puzzle.Xdfstp_2_2.base.SET\n"); );
    VL_DEBUG_IF( if(__req && ((vlTOPp->puzzle__DOT__Xdfrtp_2_1__DOT__base__DOT__RESET ^ vlTOPp->__Vchglast__TOP__puzzle__DOT__Xdfrtp_2_1__DOT__base__DOT__RESET))) VL_DBG_MSGF("        CHANGE: dfrtp/sky130_fd_sc_hd__dfrtp.behavioral.v:57: puzzle.Xdfrtp_2_1.base.RESET\n"); );
    VL_DEBUG_IF( if(__req && ((vlTOPp->puzzle__DOT__Xdfstp_2_3__DOT__base__DOT__SET ^ vlTOPp->__Vchglast__TOP__puzzle__DOT__Xdfstp_2_3__DOT__base__DOT__SET))) VL_DBG_MSGF("        CHANGE: dfstp/sky130_fd_sc_hd__dfstp.behavioral.v:57: puzzle.Xdfstp_2_3.base.SET\n"); );
    VL_DEBUG_IF( if(__req && ((vlTOPp->puzzle__DOT__Xdfrtp_2_2__DOT__base__DOT__RESET ^ vlTOPp->__Vchglast__TOP__puzzle__DOT__Xdfrtp_2_2__DOT__base__DOT__RESET))) VL_DBG_MSGF("        CHANGE: dfrtp/sky130_fd_sc_hd__dfrtp.behavioral.v:57: puzzle.Xdfrtp_2_2.base.RESET\n"); );
    VL_DEBUG_IF( if(__req && ((vlTOPp->puzzle__DOT__Xdfrtp_2_3__DOT__base__DOT__RESET ^ vlTOPp->__Vchglast__TOP__puzzle__DOT__Xdfrtp_2_3__DOT__base__DOT__RESET))) VL_DBG_MSGF("        CHANGE: dfrtp/sky130_fd_sc_hd__dfrtp.behavioral.v:57: puzzle.Xdfrtp_2_3.base.RESET\n"); );
    VL_DEBUG_IF( if(__req && ((vlTOPp->puzzle__DOT__Xdfrtp_2_4__DOT__base__DOT__RESET ^ vlTOPp->__Vchglast__TOP__puzzle__DOT__Xdfrtp_2_4__DOT__base__DOT__RESET))) VL_DBG_MSGF("        CHANGE: dfrtp/sky130_fd_sc_hd__dfrtp.behavioral.v:57: puzzle.Xdfrtp_2_4.base.RESET\n"); );
    VL_DEBUG_IF( if(__req && ((vlTOPp->puzzle__DOT__Xdfrtp_2_5__DOT__base__DOT__RESET ^ vlTOPp->__Vchglast__TOP__puzzle__DOT__Xdfrtp_2_5__DOT__base__DOT__RESET))) VL_DBG_MSGF("        CHANGE: dfrtp/sky130_fd_sc_hd__dfrtp.behavioral.v:57: puzzle.Xdfrtp_2_5.base.RESET\n"); );
    VL_DEBUG_IF( if(__req && ((vlTOPp->puzzle__DOT__Xdfrtp_2_6__DOT__base__DOT__RESET ^ vlTOPp->__Vchglast__TOP__puzzle__DOT__Xdfrtp_2_6__DOT__base__DOT__RESET))) VL_DBG_MSGF("        CHANGE: dfrtp/sky130_fd_sc_hd__dfrtp.behavioral.v:57: puzzle.Xdfrtp_2_6.base.RESET\n"); );
    VL_DEBUG_IF( if(__req && ((vlTOPp->puzzle__DOT__Xdfrtp_2_7__DOT__base__DOT__RESET ^ vlTOPp->__Vchglast__TOP__puzzle__DOT__Xdfrtp_2_7__DOT__base__DOT__RESET))) VL_DBG_MSGF("        CHANGE: dfrtp/sky130_fd_sc_hd__dfrtp.behavioral.v:57: puzzle.Xdfrtp_2_7.base.RESET\n"); );
    VL_DEBUG_IF( if(__req && ((vlTOPp->puzzle__DOT__Xdfrtp_2_8__DOT__base__DOT__RESET ^ vlTOPp->__Vchglast__TOP__puzzle__DOT__Xdfrtp_2_8__DOT__base__DOT__RESET))) VL_DBG_MSGF("        CHANGE: dfrtp/sky130_fd_sc_hd__dfrtp.behavioral.v:57: puzzle.Xdfrtp_2_8.base.RESET\n"); );
    VL_DEBUG_IF( if(__req && ((vlTOPp->puzzle__DOT__Xdfrtp_2_9__DOT__base__DOT__RESET ^ vlTOPp->__Vchglast__TOP__puzzle__DOT__Xdfrtp_2_9__DOT__base__DOT__RESET))) VL_DBG_MSGF("        CHANGE: dfrtp/sky130_fd_sc_hd__dfrtp.behavioral.v:57: puzzle.Xdfrtp_2_9.base.RESET\n"); );
    // Final
    vlTOPp->__Vchglast__TOP__puzzle__DOT__Xdfrtp_2_80__DOT__base__DOT__RESET 
        = vlTOPp->puzzle__DOT__Xdfrtp_2_80__DOT__base__DOT__RESET;
    vlTOPp->__Vchglast__TOP__puzzle__DOT__Xdfrtp_2_70__DOT__base__DOT__RESET 
        = vlTOPp->puzzle__DOT__Xdfrtp_2_70__DOT__base__DOT__RESET;
    vlTOPp->__Vchglast__TOP__puzzle__DOT__Xdfrtp_2_81__DOT__base__DOT__RESET 
        = vlTOPp->puzzle__DOT__Xdfrtp_2_81__DOT__base__DOT__RESET;
    vlTOPp->__Vchglast__TOP__puzzle__DOT__Xdfrtp_2_60__DOT__base__DOT__RESET 
        = vlTOPp->puzzle__DOT__Xdfrtp_2_60__DOT__base__DOT__RESET;
    vlTOPp->__Vchglast__TOP__puzzle__DOT__Xdfrtp_2_82__DOT__base__DOT__RESET 
        = vlTOPp->puzzle__DOT__Xdfrtp_2_82__DOT__base__DOT__RESET;
    vlTOPp->__Vchglast__TOP__puzzle__DOT__Xdfrtp_2_71__DOT__base__DOT__RESET 
        = vlTOPp->puzzle__DOT__Xdfrtp_2_71__DOT__base__DOT__RESET;
    vlTOPp->__Vchglast__TOP__puzzle__DOT__Xdfrtp_2_61__DOT__base__DOT__RESET 
        = vlTOPp->puzzle__DOT__Xdfrtp_2_61__DOT__base__DOT__RESET;
    vlTOPp->__Vchglast__TOP__puzzle__DOT__Xdfrtp_2_50__DOT__base__DOT__RESET 
        = vlTOPp->puzzle__DOT__Xdfrtp_2_50__DOT__base__DOT__RESET;
    vlTOPp->__Vchglast__TOP__puzzle__DOT__Xdfrtp_2_83__DOT__base__DOT__RESET 
        = vlTOPp->puzzle__DOT__Xdfrtp_2_83__DOT__base__DOT__RESET;
    vlTOPp->__Vchglast__TOP__puzzle__DOT__Xdfrtp_2_72__DOT__base__DOT__RESET 
        = vlTOPp->puzzle__DOT__Xdfrtp_2_72__DOT__base__DOT__RESET;
    vlTOPp->__Vchglast__TOP__puzzle__DOT__Xdfrtp_2_51__DOT__base__DOT__RESET 
        = vlTOPp->puzzle__DOT__Xdfrtp_2_51__DOT__base__DOT__RESET;
    vlTOPp->__Vchglast__TOP__puzzle__DOT__Xdfrtp_2_40__DOT__base__DOT__RESET 
        = vlTOPp->puzzle__DOT__Xdfrtp_2_40__DOT__base__DOT__RESET;
    vlTOPp->__Vchglast__TOP__puzzle__DOT__Xdfrtp_2_73__DOT__base__DOT__RESET 
        = vlTOPp->puzzle__DOT__Xdfrtp_2_73__DOT__base__DOT__RESET;
    vlTOPp->__Vchglast__TOP__puzzle__DOT__Xdfrtp_2_62__DOT__base__DOT__RESET 
        = vlTOPp->puzzle__DOT__Xdfrtp_2_62__DOT__base__DOT__RESET;
    vlTOPp->__Vchglast__TOP__puzzle__DOT__Xdfrtp_2_52__DOT__base__DOT__RESET 
        = vlTOPp->puzzle__DOT__Xdfrtp_2_52__DOT__base__DOT__RESET;
    vlTOPp->__Vchglast__TOP__puzzle__DOT__Xdfrtp_2_30__DOT__base__DOT__RESET 
        = vlTOPp->puzzle__DOT__Xdfrtp_2_30__DOT__base__DOT__RESET;
    vlTOPp->__Vchglast__TOP__puzzle__DOT__Xdfrtp_2_41__DOT__base__DOT__RESET 
        = vlTOPp->puzzle__DOT__Xdfrtp_2_41__DOT__base__DOT__RESET;
    vlTOPp->__Vchglast__TOP__puzzle__DOT__Xdfrtp_2_74__DOT__base__DOT__RESET 
        = vlTOPp->puzzle__DOT__Xdfrtp_2_74__DOT__base__DOT__RESET;
    vlTOPp->__Vchglast__TOP__puzzle__DOT__Xdfrtp_2_63__DOT__base__DOT__RESET 
        = vlTOPp->puzzle__DOT__Xdfrtp_2_63__DOT__base__DOT__RESET;
    vlTOPp->__Vchglast__TOP__puzzle__DOT__Xdfrtp_2_20__DOT__base__DOT__RESET 
        = vlTOPp->puzzle__DOT__Xdfrtp_2_20__DOT__base__DOT__RESET;
    vlTOPp->__Vchglast__TOP__puzzle__DOT__Xdfrtp_2_42__DOT__base__DOT__RESET 
        = vlTOPp->puzzle__DOT__Xdfrtp_2_42__DOT__base__DOT__RESET;
    vlTOPp->__Vchglast__TOP__puzzle__DOT__Xdfrtp_2_31__DOT__base__DOT__RESET 
        = vlTOPp->puzzle__DOT__Xdfrtp_2_31__DOT__base__DOT__RESET;
    vlTOPp->__Vchglast__TOP__puzzle__DOT__Xdfrtp_2_75__DOT__base__DOT__RESET 
        = vlTOPp->puzzle__DOT__Xdfrtp_2_75__DOT__base__DOT__RESET;
    vlTOPp->__Vchglast__TOP__puzzle__DOT__Xdfrtp_2_64__DOT__base__DOT__RESET 
        = vlTOPp->puzzle__DOT__Xdfrtp_2_64__DOT__base__DOT__RESET;
    vlTOPp->__Vchglast__TOP__puzzle__DOT__Xdfrtp_2_53__DOT__base__DOT__RESET 
        = vlTOPp->puzzle__DOT__Xdfrtp_2_53__DOT__base__DOT__RESET;
    vlTOPp->__Vchglast__TOP__puzzle__DOT__Xdfrtp_2_10__DOT__base__DOT__RESET 
        = vlTOPp->puzzle__DOT__Xdfrtp_2_10__DOT__base__DOT__RESET;
    vlTOPp->__Vchglast__TOP__puzzle__DOT__Xdfrtp_2_21__DOT__base__DOT__RESET 
        = vlTOPp->puzzle__DOT__Xdfrtp_2_21__DOT__base__DOT__RESET;
    vlTOPp->__Vchglast__TOP__puzzle__DOT__Xdfrtp_2_43__DOT__base__DOT__RESET 
        = vlTOPp->puzzle__DOT__Xdfrtp_2_43__DOT__base__DOT__RESET;
    vlTOPp->__Vchglast__TOP__puzzle__DOT__Xdfrtp_2_32__DOT__base__DOT__RESET 
        = vlTOPp->puzzle__DOT__Xdfrtp_2_32__DOT__base__DOT__RESET;
    vlTOPp->__Vchglast__TOP__puzzle__DOT__Xdfrtp_2_65__DOT__base__DOT__RESET 
        = vlTOPp->puzzle__DOT__Xdfrtp_2_65__DOT__base__DOT__RESET;
    vlTOPp->__Vchglast__TOP__puzzle__DOT__Xdfrtp_2_76__DOT__base__DOT__RESET 
        = vlTOPp->puzzle__DOT__Xdfrtp_2_76__DOT__base__DOT__RESET;
    vlTOPp->__Vchglast__TOP__puzzle__DOT__Xdfrtp_2_54__DOT__base__DOT__RESET 
        = vlTOPp->puzzle__DOT__Xdfrtp_2_54__DOT__base__DOT__RESET;
    vlTOPp->__Vchglast__TOP__puzzle__DOT__Xdfrtp_2_22__DOT__base__DOT__RESET 
        = vlTOPp->puzzle__DOT__Xdfrtp_2_22__DOT__base__DOT__RESET;
    vlTOPp->__Vchglast__TOP__puzzle__DOT__Xdfrtp_2_11__DOT__base__DOT__RESET 
        = vlTOPp->puzzle__DOT__Xdfrtp_2_11__DOT__base__DOT__RESET;
    vlTOPp->__Vchglast__TOP__puzzle__DOT__Xdfrtp_2_33__DOT__base__DOT__RESET 
        = vlTOPp->puzzle__DOT__Xdfrtp_2_33__DOT__base__DOT__RESET;
    vlTOPp->__Vchglast__TOP__puzzle__DOT__Xdfrtp_2_66__DOT__base__DOT__RESET 
        = vlTOPp->puzzle__DOT__Xdfrtp_2_66__DOT__base__DOT__RESET;
    vlTOPp->__Vchglast__TOP__puzzle__DOT__Xdfrtp_2_77__DOT__base__DOT__RESET 
        = vlTOPp->puzzle__DOT__Xdfrtp_2_77__DOT__base__DOT__RESET;
    vlTOPp->__Vchglast__TOP__puzzle__DOT__Xdfrtp_2_55__DOT__base__DOT__RESET 
        = vlTOPp->puzzle__DOT__Xdfrtp_2_55__DOT__base__DOT__RESET;
    vlTOPp->__Vchglast__TOP__puzzle__DOT__Xdfrtp_2_44__DOT__base__DOT__RESET 
        = vlTOPp->puzzle__DOT__Xdfrtp_2_44__DOT__base__DOT__RESET;
    vlTOPp->__Vchglast__TOP__puzzle__DOT__Xdfrtp_2_23__DOT__base__DOT__RESET 
        = vlTOPp->puzzle__DOT__Xdfrtp_2_23__DOT__base__DOT__RESET;
    vlTOPp->__Vchglast__TOP__puzzle__DOT__Xdfrtp_2_12__DOT__base__DOT__RESET 
        = vlTOPp->puzzle__DOT__Xdfrtp_2_12__DOT__base__DOT__RESET;
    vlTOPp->__Vchglast__TOP__puzzle__DOT__Xdfrtp_2_34__DOT__base__DOT__RESET 
        = vlTOPp->puzzle__DOT__Xdfrtp_2_34__DOT__base__DOT__RESET;
    vlTOPp->__Vchglast__TOP__puzzle__DOT__Xdfrtp_2_67__DOT__base__DOT__RESET 
        = vlTOPp->puzzle__DOT__Xdfrtp_2_67__DOT__base__DOT__RESET;
    vlTOPp->__Vchglast__TOP__puzzle__DOT__Xdfrtp_2_56__DOT__base__DOT__RESET 
        = vlTOPp->puzzle__DOT__Xdfrtp_2_56__DOT__base__DOT__RESET;
    vlTOPp->__Vchglast__TOP__puzzle__DOT__Xdfrtp_2_45__DOT__base__DOT__RESET 
        = vlTOPp->puzzle__DOT__Xdfrtp_2_45__DOT__base__DOT__RESET;
    vlTOPp->__Vchglast__TOP__puzzle__DOT__Xdfrtp_2_78__DOT__base__DOT__RESET 
        = vlTOPp->puzzle__DOT__Xdfrtp_2_78__DOT__base__DOT__RESET;
    vlTOPp->__Vchglast__TOP__puzzle__DOT__Xdfrtp_2_24__DOT__base__DOT__RESET 
        = vlTOPp->puzzle__DOT__Xdfrtp_2_24__DOT__base__DOT__RESET;
    vlTOPp->__Vchglast__TOP__puzzle__DOT__Xdfrtp_2_13__DOT__base__DOT__RESET 
        = vlTOPp->puzzle__DOT__Xdfrtp_2_13__DOT__base__DOT__RESET;
    vlTOPp->__Vchglast__TOP__puzzle__DOT__Xdfrtp_2_68__DOT__base__DOT__RESET 
        = vlTOPp->puzzle__DOT__Xdfrtp_2_68__DOT__base__DOT__RESET;
    vlTOPp->__Vchglast__TOP__puzzle__DOT__Xdfrtp_2_57__DOT__base__DOT__RESET 
        = vlTOPp->puzzle__DOT__Xdfrtp_2_57__DOT__base__DOT__RESET;
    vlTOPp->__Vchglast__TOP__puzzle__DOT__Xdfrtp_2_35__DOT__base__DOT__RESET 
        = vlTOPp->puzzle__DOT__Xdfrtp_2_35__DOT__base__DOT__RESET;
    vlTOPp->__Vchglast__TOP__puzzle__DOT__Xdfrtp_2_46__DOT__base__DOT__RESET 
        = vlTOPp->puzzle__DOT__Xdfrtp_2_46__DOT__base__DOT__RESET;
    vlTOPp->__Vchglast__TOP__puzzle__DOT__Xdfrtp_2_79__DOT__base__DOT__RESET 
        = vlTOPp->puzzle__DOT__Xdfrtp_2_79__DOT__base__DOT__RESET;
    vlTOPp->__Vchglast__TOP__puzzle__DOT__Xdfrtp_2_25__DOT__base__DOT__RESET 
        = vlTOPp->puzzle__DOT__Xdfrtp_2_25__DOT__base__DOT__RESET;
    vlTOPp->__Vchglast__TOP__puzzle__DOT__Xdfrtp_2_14__DOT__base__DOT__RESET 
        = vlTOPp->puzzle__DOT__Xdfrtp_2_14__DOT__base__DOT__RESET;
    vlTOPp->__Vchglast__TOP__puzzle__DOT__Xdfrtp_2_47__DOT__base__DOT__RESET 
        = vlTOPp->puzzle__DOT__Xdfrtp_2_47__DOT__base__DOT__RESET;
    vlTOPp->__Vchglast__TOP__puzzle__DOT__Xdfrtp_2_58__DOT__base__DOT__RESET 
        = vlTOPp->puzzle__DOT__Xdfrtp_2_58__DOT__base__DOT__RESET;
    vlTOPp->__Vchglast__TOP__puzzle__DOT__Xdfrtp_2_36__DOT__base__DOT__RESET 
        = vlTOPp->puzzle__DOT__Xdfrtp_2_36__DOT__base__DOT__RESET;
    vlTOPp->__Vchglast__TOP__puzzle__DOT__Xdfrtp_2_69__DOT__base__DOT__RESET 
        = vlTOPp->puzzle__DOT__Xdfrtp_2_69__DOT__base__DOT__RESET;
    vlTOPp->__Vchglast__TOP__puzzle__DOT__Xdfrtp_2_15__DOT__base__DOT__RESET 
        = vlTOPp->puzzle__DOT__Xdfrtp_2_15__DOT__base__DOT__RESET;
    vlTOPp->__Vchglast__TOP__puzzle__DOT__Xdfrtp_2_48__DOT__base__DOT__RESET 
        = vlTOPp->puzzle__DOT__Xdfrtp_2_48__DOT__base__DOT__RESET;
    vlTOPp->__Vchglast__TOP__puzzle__DOT__Xdfrtp_1_26__DOT__base__DOT__RESET 
        = vlTOPp->puzzle__DOT__Xdfrtp_1_26__DOT__base__DOT__RESET;
    vlTOPp->__Vchglast__TOP__puzzle__DOT__Xdfrtp_2_59__DOT__base__DOT__RESET 
        = vlTOPp->puzzle__DOT__Xdfrtp_2_59__DOT__base__DOT__RESET;
    vlTOPp->__Vchglast__TOP__puzzle__DOT__Xdfrtp_2_37__DOT__base__DOT__RESET 
        = vlTOPp->puzzle__DOT__Xdfrtp_2_37__DOT__base__DOT__RESET;
    vlTOPp->__Vchglast__TOP__puzzle__DOT__Xdfrtp_2_16__DOT__base__DOT__RESET 
        = vlTOPp->puzzle__DOT__Xdfrtp_2_16__DOT__base__DOT__RESET;
    vlTOPp->__Vchglast__TOP__puzzle__DOT__Xdfrtp_2_49__DOT__base__DOT__RESET 
        = vlTOPp->puzzle__DOT__Xdfrtp_2_49__DOT__base__DOT__RESET;
    vlTOPp->__Vchglast__TOP__puzzle__DOT__Xdfrtp_2_27__DOT__base__DOT__RESET 
        = vlTOPp->puzzle__DOT__Xdfrtp_2_27__DOT__base__DOT__RESET;
    vlTOPp->__Vchglast__TOP__puzzle__DOT__Xdfrtp_2_38__DOT__base__DOT__RESET 
        = vlTOPp->puzzle__DOT__Xdfrtp_2_38__DOT__base__DOT__RESET;
    vlTOPp->__Vchglast__TOP__puzzle__DOT__Xdfrtp_2_28__DOT__base__DOT__RESET 
        = vlTOPp->puzzle__DOT__Xdfrtp_2_28__DOT__base__DOT__RESET;
    vlTOPp->__Vchglast__TOP__puzzle__DOT__Xdfrtp_2_17__DOT__base__DOT__RESET 
        = vlTOPp->puzzle__DOT__Xdfrtp_2_17__DOT__base__DOT__RESET;
    vlTOPp->__Vchglast__TOP__puzzle__DOT__Xdfrtp_2_39__DOT__base__DOT__RESET 
        = vlTOPp->puzzle__DOT__Xdfrtp_2_39__DOT__base__DOT__RESET;
    vlTOPp->__Vchglast__TOP__puzzle__DOT__Xdfrtp_2_18__DOT__base__DOT__RESET 
        = vlTOPp->puzzle__DOT__Xdfrtp_2_18__DOT__base__DOT__RESET;
    vlTOPp->__Vchglast__TOP__puzzle__DOT__Xdfrtp_2_29__DOT__base__DOT__RESET 
        = vlTOPp->puzzle__DOT__Xdfrtp_2_29__DOT__base__DOT__RESET;
    vlTOPp->__Vchglast__TOP__puzzle__DOT__Xdfstp_2_0__DOT__base__DOT__SET 
        = vlTOPp->puzzle__DOT__Xdfstp_2_0__DOT__base__DOT__SET;
    vlTOPp->__Vchglast__TOP__puzzle__DOT__Xdfrtp_2_19__DOT__base__DOT__RESET 
        = vlTOPp->puzzle__DOT__Xdfrtp_2_19__DOT__base__DOT__RESET;
    vlTOPp->__Vchglast__TOP__puzzle__DOT__Xdfstp_2_1__DOT__base__DOT__SET 
        = vlTOPp->puzzle__DOT__Xdfstp_2_1__DOT__base__DOT__SET;
    vlTOPp->__Vchglast__TOP__puzzle__DOT__Xdfrtp_2_0__DOT__base__DOT__RESET 
        = vlTOPp->puzzle__DOT__Xdfrtp_2_0__DOT__base__DOT__RESET;
    vlTOPp->__Vchglast__TOP__puzzle__DOT__Xdfstp_2_2__DOT__base__DOT__SET 
        = vlTOPp->puzzle__DOT__Xdfstp_2_2__DOT__base__DOT__SET;
    vlTOPp->__Vchglast__TOP__puzzle__DOT__Xdfrtp_2_1__DOT__base__DOT__RESET 
        = vlTOPp->puzzle__DOT__Xdfrtp_2_1__DOT__base__DOT__RESET;
    vlTOPp->__Vchglast__TOP__puzzle__DOT__Xdfstp_2_3__DOT__base__DOT__SET 
        = vlTOPp->puzzle__DOT__Xdfstp_2_3__DOT__base__DOT__SET;
    vlTOPp->__Vchglast__TOP__puzzle__DOT__Xdfrtp_2_2__DOT__base__DOT__RESET 
        = vlTOPp->puzzle__DOT__Xdfrtp_2_2__DOT__base__DOT__RESET;
    vlTOPp->__Vchglast__TOP__puzzle__DOT__Xdfrtp_2_3__DOT__base__DOT__RESET 
        = vlTOPp->puzzle__DOT__Xdfrtp_2_3__DOT__base__DOT__RESET;
    vlTOPp->__Vchglast__TOP__puzzle__DOT__Xdfrtp_2_4__DOT__base__DOT__RESET 
        = vlTOPp->puzzle__DOT__Xdfrtp_2_4__DOT__base__DOT__RESET;
    vlTOPp->__Vchglast__TOP__puzzle__DOT__Xdfrtp_2_5__DOT__base__DOT__RESET 
        = vlTOPp->puzzle__DOT__Xdfrtp_2_5__DOT__base__DOT__RESET;
    vlTOPp->__Vchglast__TOP__puzzle__DOT__Xdfrtp_2_6__DOT__base__DOT__RESET 
        = vlTOPp->puzzle__DOT__Xdfrtp_2_6__DOT__base__DOT__RESET;
    vlTOPp->__Vchglast__TOP__puzzle__DOT__Xdfrtp_2_7__DOT__base__DOT__RESET 
        = vlTOPp->puzzle__DOT__Xdfrtp_2_7__DOT__base__DOT__RESET;
    vlTOPp->__Vchglast__TOP__puzzle__DOT__Xdfrtp_2_8__DOT__base__DOT__RESET 
        = vlTOPp->puzzle__DOT__Xdfrtp_2_8__DOT__base__DOT__RESET;
    vlTOPp->__Vchglast__TOP__puzzle__DOT__Xdfrtp_2_9__DOT__base__DOT__RESET 
        = vlTOPp->puzzle__DOT__Xdfrtp_2_9__DOT__base__DOT__RESET;
    return __req;
}

#ifdef VL_DEBUG
void Vpuzzle::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpuzzle::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((I & 0xfeU))) {
        Verilated::overWidthError("I");}
    if (VL_UNLIKELY((clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((enable & 0xfeU))) {
        Verilated::overWidthError("enable");}
    if (VL_UNLIKELY((rst_n & 0xfeU))) {
        Verilated::overWidthError("rst_n");}
}
#endif  // VL_DEBUG
