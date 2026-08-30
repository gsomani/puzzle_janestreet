// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vpuzzle.h for the primary calling header

#include "Vpuzzle.h"
#include "Vpuzzle__Syms.h"

//==========

VL_CTOR_IMP(Vpuzzle) {
    Vpuzzle__Syms* __restrict vlSymsp = __VlSymsp = new Vpuzzle__Syms(this, name());
    Vpuzzle* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void Vpuzzle::__Vconfigure(Vpuzzle__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
    Verilated::timeunit(-9);
    Verilated::timeprecision(-12);
}

Vpuzzle::~Vpuzzle() {
    VL_DO_CLEAR(delete __VlSymsp, __VlSymsp = NULL);
}

void Vpuzzle::_settle__TOP__93(Vpuzzle__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpuzzle::_settle__TOP__93\n"); );
    Vpuzzle* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->puzzle__DOT__Xdfrtp_2_80__DOT__base__DOT__RESET 
        = (1U & (~ (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_80__DOT__base__DOT__RESET_B_delayed)));
    vlTOPp->puzzle__DOT__Xdfrtp_2_70__DOT__base__DOT__RESET 
        = (1U & (~ (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_70__DOT__base__DOT__RESET_B_delayed)));
    vlTOPp->puzzle__DOT__Xdfrtp_2_81__DOT__base__DOT__RESET 
        = (1U & (~ (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_81__DOT__base__DOT__RESET_B_delayed)));
    vlTOPp->puzzle__DOT__Xdfrtp_2_60__DOT__base__DOT__RESET 
        = (1U & (~ (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_60__DOT__base__DOT__RESET_B_delayed)));
    vlTOPp->puzzle__DOT__Xdfrtp_2_82__DOT__base__DOT__RESET 
        = (1U & (~ (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_82__DOT__base__DOT__RESET_B_delayed)));
    vlTOPp->puzzle__DOT__Xdfrtp_2_71__DOT__base__DOT__RESET 
        = (1U & (~ (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_71__DOT__base__DOT__RESET_B_delayed)));
    vlTOPp->puzzle__DOT__Xdfrtp_2_61__DOT__base__DOT__RESET 
        = (1U & (~ (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_61__DOT__base__DOT__RESET_B_delayed)));
    vlTOPp->puzzle__DOT__Xdfrtp_2_50__DOT__base__DOT__RESET 
        = (1U & (~ (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_50__DOT__base__DOT__RESET_B_delayed)));
    vlTOPp->puzzle__DOT__Xdfrtp_2_83__DOT__base__DOT__RESET 
        = (1U & (~ (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_83__DOT__base__DOT__RESET_B_delayed)));
    vlTOPp->puzzle__DOT__Xdfrtp_2_72__DOT__base__DOT__RESET 
        = (1U & (~ (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_72__DOT__base__DOT__RESET_B_delayed)));
    vlTOPp->puzzle__DOT__Xdfrtp_2_51__DOT__base__DOT__RESET 
        = (1U & (~ (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_51__DOT__base__DOT__RESET_B_delayed)));
    vlTOPp->puzzle__DOT__Xdfrtp_2_40__DOT__base__DOT__RESET 
        = (1U & (~ (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_40__DOT__base__DOT__RESET_B_delayed)));
    vlTOPp->puzzle__DOT__Xdfrtp_2_73__DOT__base__DOT__RESET 
        = (1U & (~ (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_73__DOT__base__DOT__RESET_B_delayed)));
    vlTOPp->puzzle__DOT__Xdfrtp_2_62__DOT__base__DOT__RESET 
        = (1U & (~ (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_62__DOT__base__DOT__RESET_B_delayed)));
    vlTOPp->puzzle__DOT__Xdfrtp_2_52__DOT__base__DOT__RESET 
        = (1U & (~ (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_52__DOT__base__DOT__RESET_B_delayed)));
    vlTOPp->puzzle__DOT__Xdfrtp_2_30__DOT__base__DOT__RESET 
        = (1U & (~ (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_30__DOT__base__DOT__RESET_B_delayed)));
    vlTOPp->puzzle__DOT__Xdfrtp_2_41__DOT__base__DOT__RESET 
        = (1U & (~ (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_41__DOT__base__DOT__RESET_B_delayed)));
    vlTOPp->puzzle__DOT__Xdfrtp_2_74__DOT__base__DOT__RESET 
        = (1U & (~ (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_74__DOT__base__DOT__RESET_B_delayed)));
    vlTOPp->puzzle__DOT__Xdfrtp_2_63__DOT__base__DOT__RESET 
        = (1U & (~ (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_63__DOT__base__DOT__RESET_B_delayed)));
    vlTOPp->puzzle__DOT__Xdfrtp_2_20__DOT__base__DOT__RESET 
        = (1U & (~ (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_20__DOT__base__DOT__RESET_B_delayed)));
    vlTOPp->puzzle__DOT__Xdfrtp_2_42__DOT__base__DOT__RESET 
        = (1U & (~ (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_42__DOT__base__DOT__RESET_B_delayed)));
    vlTOPp->puzzle__DOT__Xdfrtp_2_31__DOT__base__DOT__RESET 
        = (1U & (~ (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_31__DOT__base__DOT__RESET_B_delayed)));
    vlTOPp->puzzle__DOT__Xdfrtp_2_75__DOT__base__DOT__RESET 
        = (1U & (~ (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_75__DOT__base__DOT__RESET_B_delayed)));
    vlTOPp->puzzle__DOT__Xdfrtp_2_64__DOT__base__DOT__RESET 
        = (1U & (~ (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_64__DOT__base__DOT__RESET_B_delayed)));
    vlTOPp->puzzle__DOT__Xdfrtp_2_53__DOT__base__DOT__RESET 
        = (1U & (~ (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_53__DOT__base__DOT__RESET_B_delayed)));
    vlTOPp->puzzle__DOT__Xdfrtp_2_10__DOT__base__DOT__RESET 
        = (1U & (~ (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_10__DOT__base__DOT__RESET_B_delayed)));
    vlTOPp->puzzle__DOT__Xdfrtp_2_21__DOT__base__DOT__RESET 
        = (1U & (~ (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_21__DOT__base__DOT__RESET_B_delayed)));
    vlTOPp->puzzle__DOT__Xdfrtp_2_43__DOT__base__DOT__RESET 
        = (1U & (~ (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_43__DOT__base__DOT__RESET_B_delayed)));
    vlTOPp->puzzle__DOT__Xdfrtp_2_32__DOT__base__DOT__RESET 
        = (1U & (~ (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_32__DOT__base__DOT__RESET_B_delayed)));
    vlTOPp->puzzle__DOT__Xdfrtp_2_65__DOT__base__DOT__RESET 
        = (1U & (~ (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_65__DOT__base__DOT__RESET_B_delayed)));
    vlTOPp->puzzle__DOT__Xdfrtp_2_76__DOT__base__DOT__RESET 
        = (1U & (~ (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_76__DOT__base__DOT__RESET_B_delayed)));
    vlTOPp->puzzle__DOT__Xdfrtp_2_54__DOT__base__DOT__RESET 
        = (1U & (~ (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_54__DOT__base__DOT__RESET_B_delayed)));
    vlTOPp->puzzle__DOT__Xdfrtp_2_22__DOT__base__DOT__RESET 
        = (1U & (~ (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_22__DOT__base__DOT__RESET_B_delayed)));
    vlTOPp->puzzle__DOT__Xdfrtp_2_11__DOT__base__DOT__RESET 
        = (1U & (~ (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_11__DOT__base__DOT__RESET_B_delayed)));
    vlTOPp->puzzle__DOT__Xdfrtp_2_33__DOT__base__DOT__RESET 
        = (1U & (~ (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_33__DOT__base__DOT__RESET_B_delayed)));
    vlTOPp->puzzle__DOT__Xdfrtp_2_66__DOT__base__DOT__RESET 
        = (1U & (~ (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_66__DOT__base__DOT__RESET_B_delayed)));
    vlTOPp->puzzle__DOT__Xdfrtp_2_77__DOT__base__DOT__RESET 
        = (1U & (~ (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_77__DOT__base__DOT__RESET_B_delayed)));
    vlTOPp->puzzle__DOT__Xdfrtp_2_55__DOT__base__DOT__RESET 
        = (1U & (~ (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_55__DOT__base__DOT__RESET_B_delayed)));
    vlTOPp->puzzle__DOT__Xdfrtp_2_44__DOT__base__DOT__RESET 
        = (1U & (~ (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_44__DOT__base__DOT__RESET_B_delayed)));
    vlTOPp->puzzle__DOT__Xdfrtp_2_23__DOT__base__DOT__RESET 
        = (1U & (~ (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_23__DOT__base__DOT__RESET_B_delayed)));
    vlTOPp->puzzle__DOT__Xdfrtp_2_12__DOT__base__DOT__RESET 
        = (1U & (~ (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_12__DOT__base__DOT__RESET_B_delayed)));
    vlTOPp->puzzle__DOT__Xdfrtp_2_34__DOT__base__DOT__RESET 
        = (1U & (~ (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_34__DOT__base__DOT__RESET_B_delayed)));
    vlTOPp->puzzle__DOT__Xdfrtp_2_67__DOT__base__DOT__RESET 
        = (1U & (~ (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_67__DOT__base__DOT__RESET_B_delayed)));
    vlTOPp->puzzle__DOT__Xdfrtp_2_56__DOT__base__DOT__RESET 
        = (1U & (~ (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_56__DOT__base__DOT__RESET_B_delayed)));
    vlTOPp->puzzle__DOT__Xdfrtp_2_45__DOT__base__DOT__RESET 
        = (1U & (~ (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_45__DOT__base__DOT__RESET_B_delayed)));
    vlTOPp->puzzle__DOT__Xdfrtp_2_78__DOT__base__DOT__RESET 
        = (1U & (~ (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_78__DOT__base__DOT__RESET_B_delayed)));
    vlTOPp->puzzle__DOT__Xdfrtp_2_24__DOT__base__DOT__RESET 
        = (1U & (~ (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_24__DOT__base__DOT__RESET_B_delayed)));
    vlTOPp->puzzle__DOT__Xdfrtp_2_13__DOT__base__DOT__RESET 
        = (1U & (~ (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_13__DOT__base__DOT__RESET_B_delayed)));
    vlTOPp->puzzle__DOT__Xdfrtp_2_68__DOT__base__DOT__RESET 
        = (1U & (~ (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_68__DOT__base__DOT__RESET_B_delayed)));
    vlTOPp->puzzle__DOT__Xdfrtp_2_57__DOT__base__DOT__RESET 
        = (1U & (~ (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_57__DOT__base__DOT__RESET_B_delayed)));
    vlTOPp->puzzle__DOT__Xdfrtp_2_35__DOT__base__DOT__RESET 
        = (1U & (~ (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_35__DOT__base__DOT__RESET_B_delayed)));
    vlTOPp->puzzle__DOT__Xdfrtp_2_46__DOT__base__DOT__RESET 
        = (1U & (~ (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_46__DOT__base__DOT__RESET_B_delayed)));
    vlTOPp->puzzle__DOT__Xdfrtp_2_79__DOT__base__DOT__RESET 
        = (1U & (~ (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_79__DOT__base__DOT__RESET_B_delayed)));
    vlTOPp->puzzle__DOT__Xdfrtp_2_25__DOT__base__DOT__RESET 
        = (1U & (~ (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_25__DOT__base__DOT__RESET_B_delayed)));
    vlTOPp->puzzle__DOT__Xdfrtp_2_14__DOT__base__DOT__RESET 
        = (1U & (~ (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_14__DOT__base__DOT__RESET_B_delayed)));
    vlTOPp->puzzle__DOT__Xdfrtp_2_47__DOT__base__DOT__RESET 
        = (1U & (~ (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_47__DOT__base__DOT__RESET_B_delayed)));
    vlTOPp->puzzle__DOT__Xdfrtp_2_58__DOT__base__DOT__RESET 
        = (1U & (~ (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_58__DOT__base__DOT__RESET_B_delayed)));
    vlTOPp->puzzle__DOT__Xdfrtp_2_36__DOT__base__DOT__RESET 
        = (1U & (~ (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_36__DOT__base__DOT__RESET_B_delayed)));
    vlTOPp->puzzle__DOT__Xdfrtp_2_69__DOT__base__DOT__RESET 
        = (1U & (~ (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_69__DOT__base__DOT__RESET_B_delayed)));
    vlTOPp->puzzle__DOT__Xdfrtp_2_15__DOT__base__DOT__RESET 
        = (1U & (~ (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_15__DOT__base__DOT__RESET_B_delayed)));
    vlTOPp->puzzle__DOT__Xdfrtp_2_48__DOT__base__DOT__RESET 
        = (1U & (~ (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_48__DOT__base__DOT__RESET_B_delayed)));
    vlTOPp->puzzle__DOT__Xdfrtp_1_26__DOT__base__DOT__RESET 
        = (1U & (~ (IData)(vlTOPp->puzzle__DOT__Xdfrtp_1_26__DOT__base__DOT__RESET_B_delayed)));
    vlTOPp->puzzle__DOT__Xdfrtp_2_59__DOT__base__DOT__RESET 
        = (1U & (~ (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_59__DOT__base__DOT__RESET_B_delayed)));
    vlTOPp->puzzle__DOT__Xdfrtp_2_37__DOT__base__DOT__RESET 
        = (1U & (~ (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_37__DOT__base__DOT__RESET_B_delayed)));
    vlTOPp->puzzle__DOT__Xdfrtp_2_16__DOT__base__DOT__RESET 
        = (1U & (~ (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_16__DOT__base__DOT__RESET_B_delayed)));
    vlTOPp->puzzle__DOT__Xdfrtp_2_49__DOT__base__DOT__RESET 
        = (1U & (~ (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_49__DOT__base__DOT__RESET_B_delayed)));
    vlTOPp->puzzle__DOT__Xdfrtp_2_27__DOT__base__DOT__RESET 
        = (1U & (~ (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_27__DOT__base__DOT__RESET_B_delayed)));
    vlTOPp->puzzle__DOT__Xdfrtp_2_38__DOT__base__DOT__RESET 
        = (1U & (~ (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_38__DOT__base__DOT__RESET_B_delayed)));
    vlTOPp->puzzle__DOT__Xdfrtp_2_28__DOT__base__DOT__RESET 
        = (1U & (~ (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_28__DOT__base__DOT__RESET_B_delayed)));
    vlTOPp->puzzle__DOT__Xdfrtp_2_17__DOT__base__DOT__RESET 
        = (1U & (~ (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_17__DOT__base__DOT__RESET_B_delayed)));
    vlTOPp->puzzle__DOT__Xdfrtp_2_39__DOT__base__DOT__RESET 
        = (1U & (~ (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_39__DOT__base__DOT__RESET_B_delayed)));
    vlTOPp->puzzle__DOT__Xdfrtp_2_18__DOT__base__DOT__RESET 
        = (1U & (~ (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_18__DOT__base__DOT__RESET_B_delayed)));
    vlTOPp->puzzle__DOT__Xdfrtp_2_29__DOT__base__DOT__RESET 
        = (1U & (~ (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_29__DOT__base__DOT__RESET_B_delayed)));
    vlTOPp->puzzle__DOT__Xdfstp_2_0__DOT__base__DOT__SET 
        = (1U & (~ (IData)(vlTOPp->puzzle__DOT__Xdfstp_2_0__DOT__base__DOT__SET_B_delayed)));
    vlTOPp->puzzle__DOT__Xdfrtp_2_19__DOT__base__DOT__RESET 
        = (1U & (~ (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_19__DOT__base__DOT__RESET_B_delayed)));
    vlTOPp->puzzle__DOT__Xdfstp_2_1__DOT__base__DOT__SET 
        = (1U & (~ (IData)(vlTOPp->puzzle__DOT__Xdfstp_2_1__DOT__base__DOT__SET_B_delayed)));
    vlTOPp->puzzle__DOT__Xdfrtp_2_0__DOT__base__DOT__RESET 
        = (1U & (~ (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_0__DOT__base__DOT__RESET_B_delayed)));
    vlTOPp->puzzle__DOT__Xdfstp_2_2__DOT__base__DOT__SET 
        = (1U & (~ (IData)(vlTOPp->puzzle__DOT__Xdfstp_2_2__DOT__base__DOT__SET_B_delayed)));
    vlTOPp->puzzle__DOT__Xdfrtp_2_1__DOT__base__DOT__RESET 
        = (1U & (~ (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_1__DOT__base__DOT__RESET_B_delayed)));
    vlTOPp->puzzle__DOT__Xdfstp_2_3__DOT__base__DOT__SET 
        = (1U & (~ (IData)(vlTOPp->puzzle__DOT__Xdfstp_2_3__DOT__base__DOT__SET_B_delayed)));
    vlTOPp->puzzle__DOT__Xdfrtp_2_2__DOT__base__DOT__RESET 
        = (1U & (~ (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_2__DOT__base__DOT__RESET_B_delayed)));
    vlTOPp->puzzle__DOT__Xdfrtp_2_3__DOT__base__DOT__RESET 
        = (1U & (~ (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_3__DOT__base__DOT__RESET_B_delayed)));
    vlTOPp->puzzle__DOT__Xdfrtp_2_4__DOT__base__DOT__RESET 
        = (1U & (~ (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_4__DOT__base__DOT__RESET_B_delayed)));
    vlTOPp->puzzle__DOT__Xdfrtp_2_5__DOT__base__DOT__RESET 
        = (1U & (~ (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_5__DOT__base__DOT__RESET_B_delayed)));
    vlTOPp->puzzle__DOT__Xdfrtp_2_6__DOT__base__DOT__RESET 
        = (1U & (~ (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_6__DOT__base__DOT__RESET_B_delayed)));
    vlTOPp->puzzle__DOT__Xdfrtp_2_7__DOT__base__DOT__RESET 
        = (1U & (~ (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_7__DOT__base__DOT__RESET_B_delayed)));
    vlTOPp->puzzle__DOT__Xdfrtp_2_8__DOT__base__DOT__RESET 
        = (1U & (~ (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_8__DOT__base__DOT__RESET_B_delayed)));
    vlTOPp->puzzle__DOT__Xdfrtp_2_9__DOT__base__DOT__RESET 
        = (1U & (~ (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_9__DOT__base__DOT__RESET_B_delayed)));
    vlTOPp->puzzle__DOT__Xxor2_2_13__DOT__base__DOT__xor0_out_X 
        = ((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_51__DOT__base__DOT__buf_Q) 
           ^ (IData)(vlTOPp->puzzle__DOT__Xdfstp_2_3__DOT__base__DOT__buf_Q));
    vlTOPp->puzzle__DOT__Xxor2_2_14__DOT__base__DOT__xor0_out_X 
        = ((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_48__DOT__base__DOT__buf_Q) 
           ^ (IData)(vlTOPp->puzzle__DOT__Xdfstp_2_1__DOT__base__DOT__buf_Q));
    vlTOPp->puzzle__DOT__Xand3_2_8__DOT__base__DOT__and0_out_X 
        = (((IData)(vlTOPp->puzzle__DOT__Xdfrtp_1_26__DOT__base__DOT__buf_Q) 
            & (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_24__DOT__base__DOT__buf_Q)) 
           & (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_25__DOT__base__DOT__buf_Q));
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
    vlTOPp->puzzle__DOT__Xxor2_2_19__DOT__base__DOT__xor0_out_X 
        = ((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_51__DOT__base__DOT__buf_Q) 
           ^ (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_50__DOT__base__DOT__buf_Q));
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
    vlTOPp->puzzle__DOT__Xxnor2_2_17__DOT__base__DOT__xnor0_out_Y 
        = (1U & (~ ((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_48__DOT__base__DOT__buf_Q) 
                    ^ (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_50__DOT__base__DOT__buf_Q))));
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
    vlTOPp->puzzle__DOT__Xand2b_2_11__DOT__base__DOT__and0_out_X 
        = ((~ (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_47__DOT__base__DOT__buf_Q)) 
           & (IData)(vlTOPp->enable));
    vlTOPp->puzzle__DOT__Xnand2b_2_11__DOT__base__DOT__or0_out_Y 
        = (1U & ((~ (IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_2__DOT__base__DOT__buf_Q)) 
                 | (IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_1__DOT__base__DOT__buf_Q)));
    vlTOPp->puzzle__DOT__Xnand2_2_20__DOT__base__DOT__nand0_out_Y 
        = (1U & (~ ((IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_0__DOT__base__DOT__buf_Q) 
                    & (IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_3__DOT__base__DOT__buf_Q))));
    vlTOPp->puzzle__DOT__Xnand2_2_30__DOT__base__DOT__nand0_out_Y 
        = (1U & (~ ((IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_0__DOT__base__DOT__buf_Q) 
                    & (IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_1__DOT__base__DOT__buf_Q))));
    vlTOPp->puzzle__DOT__Xo21ai_2_5__DOT__base__DOT__nand0_out_Y 
        = (1U & (~ ((IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_0__DOT__base__DOT__buf_Q) 
                    & ((IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_3__DOT__base__DOT__buf_Q) 
                       | (IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_1__DOT__base__DOT__buf_Q)))));
    vlTOPp->puzzle__DOT__Xnand2b_2_12__DOT__base__DOT__or0_out_Y 
        = (1U & ((~ (IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_1__DOT__base__DOT__buf_Q)) 
                 | (IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_2__DOT__base__DOT__buf_Q)));
    vlTOPp->puzzle__DOT__Xnor2_2_24__DOT__base__DOT__nor0_out_Y 
        = (1U & (~ ((IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_1__DOT__base__DOT__buf_Q) 
                    | (IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_0__DOT__base__DOT__buf_Q))));
    vlTOPp->puzzle__DOT__Xa21oi_2_9__DOT__base__DOT__nor0_out_Y 
        = (1U & (~ ((IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_0__DOT__base__DOT__buf_Q) 
                    | ((IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_2__DOT__base__DOT__buf_Q) 
                       & (IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_1__DOT__base__DOT__buf_Q)))));
    vlTOPp->puzzle__DOT__Xa211oi_2_2__DOT__base__DOT__nor0_out_Y 
        = (1U & (~ ((((IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_2__DOT__base__DOT__buf_Q) 
                      & (IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_1__DOT__base__DOT__buf_Q)) 
                     | (IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_3__DOT__base__DOT__buf_Q)) 
                    | (IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_0__DOT__base__DOT__buf_Q))));
    vlTOPp->puzzle__DOT__Xand2b_2_7__DOT__base__DOT__and0_out_X 
        = ((~ (IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_1__DOT__base__DOT__buf_Q)) 
           & (IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_3__DOT__base__DOT__buf_Q));
    vlTOPp->puzzle__DOT__Xnor2_2_37__DOT__base__DOT__nor0_out_Y 
        = (1U & (~ ((IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_3__DOT__base__DOT__buf_Q) 
                    | (IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_0__DOT__base__DOT__buf_Q))));
    vlTOPp->puzzle__DOT__Xand3_2_15__DOT__base__DOT__and0_out_X 
        = (((IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_3__DOT__base__DOT__buf_Q) 
            & (IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_2__DOT__base__DOT__buf_Q)) 
           & (IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_1__DOT__base__DOT__buf_Q));
    vlTOPp->puzzle__DOT__Xnand2_2_19__DOT__base__DOT__nand0_out_Y 
        = (1U & (~ ((IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_1__DOT__base__DOT__buf_Q) 
                    & (IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_2__DOT__base__DOT__buf_Q))));
    vlTOPp->puzzle__DOT__Xnand2_2_29__DOT__base__DOT__nand0_out_Y 
        = (1U & (~ ((IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_1__DOT__base__DOT__buf_Q) 
                    & (IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_2__DOT__base__DOT__buf_Q))));
    vlTOPp->puzzle__DOT__Xand2b_2_12__DOT__base__DOT__and0_out_X 
        = ((~ (IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_3__DOT__base__DOT__buf_Q)) 
           & (IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_1__DOT__base__DOT__buf_Q));
    vlTOPp->puzzle__DOT__Xand2b_2_13__DOT__base__DOT__and0_out_X 
        = ((~ (IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_1__DOT__base__DOT__buf_Q)) 
           & (IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_2__DOT__base__DOT__buf_Q));
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
    vlTOPp->puzzle__DOT__Xnor2_2_38__DOT__base__DOT__nor0_out_Y 
        = (1U & (~ ((IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_2__DOT__base__DOT__buf_Q) 
                    | (IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_1__DOT__base__DOT__buf_Q))));
    vlTOPp->puzzle__DOT__Xnor2_2_36__DOT__base__DOT__nor0_out_Y 
        = (1U & (~ ((IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_2__DOT__base__DOT__buf_Q) 
                    | (~ (IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_0__DOT__base__DOT__buf_Q)))));
    vlTOPp->puzzle__DOT__Xnand2b_2_8__DOT__base__DOT__or0_out_Y 
        = (1U & ((~ (IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_3__DOT__base__DOT__buf_Q)) 
                 | (IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_0__DOT__base__DOT__buf_Q)));
    vlTOPp->puzzle__DOT__Xand2_2_6__DOT__base__DOT__and0_out_X 
        = ((IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_2__DOT__base__DOT__buf_Q) 
           & (IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_1__DOT__base__DOT__buf_Q));
    vlTOPp->puzzle__DOT__Xxnor2_2_27__DOT__base__DOT__xnor0_out_Y 
        = (1U & (~ ((IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_0__DOT__base__DOT__buf_Q) 
                    ^ (((IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_3__DOT__base__DOT__buf_Q) 
                        & (IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_2__DOT__base__DOT__buf_Q)) 
                       & (IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_1__DOT__base__DOT__buf_Q)))));
    vlTOPp->puzzle__DOT__Xnand2b_2_10__DOT__base__DOT__or0_out_Y 
        = (1U & ((~ (IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_3__DOT__base__DOT__buf_Q)) 
                 | (IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_2__DOT__base__DOT__buf_Q)));
    vlTOPp->puzzle__DOT__Xor2_2_9__DOT__base__DOT__or0_out_X 
        = ((IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_3__DOT__base__DOT__buf_Q) 
           | (IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_1__DOT__base__DOT__buf_Q));
    vlTOPp->puzzle__DOT__Xnand2b_2_9__DOT__base__DOT__or0_out_Y 
        = (1U & ((~ (IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_0__DOT__base__DOT__buf_Q)) 
                 | (IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_3__DOT__base__DOT__buf_Q)));
    vlTOPp->puzzle__DOT__Xnor2_2_22__DOT__base__DOT__nor0_out_Y 
        = (1U & (~ ((IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_2__DOT__base__DOT__buf_Q) 
                    | (IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_1__DOT__base__DOT__buf_Q))));
    vlTOPp->puzzle__DOT__Xor2_2_8__DOT__base__DOT__or0_out_X 
        = ((IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_0__DOT__base__DOT__buf_Q) 
           | (IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_3__DOT__base__DOT__buf_Q));
    vlTOPp->puzzle__DOT__Xand2b_2_17__DOT__base__DOT__and0_out_X 
        = ((~ (IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_2__DOT__base__DOT__buf_Q)) 
           & (IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_1__DOT__base__DOT__buf_Q));
    vlTOPp->puzzle__DOT__Xnand4_2_14__DOT__base__DOT__nand0_out_Y 
        = (1U & (~ ((((IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_2__DOT__base__DOT__buf_Q) 
                      & (IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_1__DOT__base__DOT__buf_Q)) 
                     & (IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_3__DOT__base__DOT__buf_Q)) 
                    & (IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_0__DOT__base__DOT__buf_Q))));
    vlTOPp->puzzle__DOT__Xa21oi_2_8__DOT__base__DOT__nor0_out_Y 
        = (1U & (~ ((IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_0__DOT__base__DOT__buf_Q) 
                    | ((IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_2__DOT__base__DOT__buf_Q) 
                       & (IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_1__DOT__base__DOT__buf_Q)))));
    vlTOPp->puzzle__DOT__Xand4bb_2_0__DOT__base__DOT__and0_out_X 
        = (((~ ((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_16__DOT__base__DOT__buf_Q) 
                | (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_15__DOT__base__DOT__buf_Q))) 
            & (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_17__DOT__base__DOT__buf_Q)) 
           & (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_18__DOT__base__DOT__buf_Q));
    vlTOPp->success = vlTOPp->puzzle__DOT__Xdfrtp_2_81__DOT__base__DOT__buf_Q;
    vlTOPp->puzzle__DOT__Xand2_2_1__DOT__base__DOT__and0_out_X 
        = ((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_44__DOT__base__DOT__buf_Q) 
           & (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_16__DOT__base__DOT__buf_Q));
    vlTOPp->puzzle__DOT__Xand2b_2_8__DOT__base__DOT__and0_out_X 
        = ((~ (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_24__DOT__base__DOT__buf_Q)) 
           & (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_23__DOT__base__DOT__buf_Q));
    vlTOPp->puzzle__DOT__Xnor3_2_2__DOT__base__DOT__nor0_out_Y 
        = (1U & (~ (((((IData)(vlTOPp->puzzle__DOT__Xdfrtp_1_26__DOT__base__DOT__buf_Q) 
                       | (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_23__DOT__base__DOT__buf_Q)) 
                      | (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_22__DOT__base__DOT__buf_Q)) 
                     | (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_21__DOT__base__DOT__buf_Q)) 
                    | (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_19__DOT__base__DOT__buf_Q))));
    vlTOPp->puzzle__DOT__Xnor2_2_7__DOT__base__DOT__nor0_out_Y 
        = (1U & (~ ((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_44__DOT__base__DOT__buf_Q) 
                    | (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_16__DOT__base__DOT__buf_Q))));
    vlTOPp->puzzle__DOT__Xnand2_2_4__DOT__base__DOT__nand0_out_Y 
        = (1U & (~ ((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_16__DOT__base__DOT__buf_Q) 
                    & (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_44__DOT__base__DOT__buf_Q))));
    vlTOPp->puzzle__DOT__Xnand2_2_21__DOT__base__DOT__nand0_out_Y 
        = (1U & (~ ((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_17__DOT__base__DOT__buf_Q) 
                    & (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_16__DOT__base__DOT__buf_Q))));
    vlTOPp->puzzle__DOT__Xxnor2_2_3__DOT__base__DOT__xnor0_out_Y 
        = (1U & (~ ((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_15__DOT__base__DOT__buf_Q) 
                    ^ (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_18__DOT__base__DOT__buf_Q))));
    vlTOPp->puzzle__DOT__Xnand2_2_17__DOT__base__DOT__nand0_out_Y 
        = (1U & (~ ((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_17__DOT__base__DOT__buf_Q) 
                    & (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_15__DOT__base__DOT__buf_Q))));
    vlTOPp->puzzle__DOT__Xxor2_2_0__DOT__base__DOT__xor0_out_X 
        = ((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_15__DOT__base__DOT__buf_Q) 
           ^ (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_16__DOT__base__DOT__buf_Q));
    vlTOPp->puzzle__DOT__Xxor2_2_7__DOT__base__DOT__xor0_out_X 
        = ((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_17__DOT__base__DOT__buf_Q) 
           ^ (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_16__DOT__base__DOT__buf_Q));
    vlTOPp->puzzle__DOT__Xxnor2_2_24__DOT__base__DOT__xnor0_out_Y 
        = (1U & (~ ((IData)(vlTOPp->puzzle__DOT__Xdfstp_2_1__DOT__base__DOT__buf_Q) 
                    ^ (IData)(vlTOPp->puzzle__DOT__Xxor2_2_19__DOT__base__DOT__xor0_out_X))));
    vlTOPp->puzzle__DOT__Xxnor2_2_26__DOT__base__DOT__xnor0_out_Y 
        = (1U & (~ ((IData)(vlTOPp->puzzle__DOT__Xxnor2_2_17__DOT__base__DOT__xnor0_out_Y) 
                    ^ (~ ((IData)(vlTOPp->puzzle__DOT__Xdfstp_2_2__DOT__base__DOT__buf_Q) 
                          ^ (IData)(vlTOPp->puzzle__DOT__Xdfstp_2_0__DOT__base__DOT__buf_Q))))));
    vlTOPp->puzzle__DOT__Xxor2_2_16__DOT__base__DOT__xor0_out_X 
        = (1U & ((~ ((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_49__DOT__base__DOT__buf_Q) 
                     ^ (IData)(vlTOPp->puzzle__DOT__Xxnor2_2_17__DOT__base__DOT__xnor0_out_Y))) 
                 ^ (IData)(vlTOPp->puzzle__DOT__Xdfstp_2_1__DOT__base__DOT__buf_Q)));
    vlTOPp->puzzle__DOT__Xnand2_2_13__DOT__base__DOT__nand0_out_Y 
        = (1U & (~ ((IData)(vlTOPp->puzzle__DOT__Xand2b_2_11__DOT__base__DOT__and0_out_X) 
                    & (IData)(vlTOPp->I))));
    vlTOPp->puzzle__DOT__Xnand2_2_14__DOT__base__DOT__nand0_out_Y 
        = (1U & (~ ((IData)(vlTOPp->puzzle__DOT__Xand2b_2_11__DOT__base__DOT__and0_out_X) 
                    & (IData)(vlTOPp->I))));
    vlTOPp->puzzle__DOT__Xnand2_2_15__DOT__base__DOT__nand0_out_Y 
        = (1U & (~ ((IData)(vlTOPp->puzzle__DOT__Xand2b_2_11__DOT__base__DOT__and0_out_X) 
                    & (IData)(vlTOPp->I))));
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
    vlTOPp->puzzle__DOT__Xand2b_2_15__DOT__base__DOT__and0_out_X 
        = ((~ (IData)(vlTOPp->puzzle__DOT__Xnor2_2_38__DOT__base__DOT__nor0_out_Y)) 
           & (IData)(vlTOPp->puzzle__DOT__Xnand2_2_29__DOT__base__DOT__nand0_out_Y));
    vlTOPp->puzzle__DOT__Xnand2_2_28__DOT__base__DOT__nand0_out_Y 
        = (1U & (~ ((IData)(vlTOPp->puzzle__DOT__Xxnor2_2_27__DOT__base__DOT__xnor0_out_Y) 
                    & (IData)(vlTOPp->puzzle__DOT__Xor2_2_9__DOT__base__DOT__or0_out_X))));
    vlTOPp->puzzle__DOT__Xnand2_2_27__DOT__base__DOT__nand0_out_Y 
        = (1U & (~ ((IData)(vlTOPp->puzzle__DOT__Xor2_2_8__DOT__base__DOT__or0_out_X) 
                    & (IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_2__DOT__base__DOT__buf_Q))));
    vlTOPp->puzzle__DOT__Xnand2_2_32__DOT__base__DOT__nand0_out_Y 
        = (1U & (~ ((IData)(vlTOPp->puzzle__DOT__Xand2b_2_17__DOT__base__DOT__and0_out_X) 
                    & (IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_3__DOT__base__DOT__buf_Q))));
    vlTOPp->puzzle__DOT__Xand2_2_16__DOT__base__DOT__and0_out_X 
        = ((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_83__DOT__base__DOT__buf_Q) 
           & (IData)(vlTOPp->puzzle__DOT__Xnand4_2_14__DOT__base__DOT__nand0_out_Y));
    vlTOPp->puzzle__DOT__Xa31oi_2_0__DOT__base__DOT__nor0_out_Y 
        = (1U & (~ ((IData)(vlTOPp->puzzle__DOT__Xa21oi_2_8__DOT__base__DOT__nor0_out_Y) 
                    | (((IData)(vlTOPp->puzzle__DOT__Xnand2b_2_8__DOT__base__DOT__or0_out_Y) 
                        & (IData)(vlTOPp->puzzle__DOT__Xand2_2_6__DOT__base__DOT__and0_out_X)) 
                       & (IData)(vlTOPp->puzzle__DOT__Xnand2b_2_9__DOT__base__DOT__or0_out_Y)))));
    vlTOPp->puzzle__DOT__Xand3b_2_0__DOT__base__DOT__and0_out_X 
        = (((IData)(vlTOPp->puzzle__DOT__Xa21oi_2_8__DOT__base__DOT__nor0_out_Y) 
            & (~ (IData)(vlTOPp->puzzle__DOT__Xnor2_2_22__DOT__base__DOT__nor0_out_Y))) 
           & (IData)(vlTOPp->puzzle__DOT__Xnand2b_2_10__DOT__base__DOT__or0_out_Y));
    vlTOPp->puzzle__DOT__Xand3_2_10__DOT__base__DOT__and0_out_X 
        = ((((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_20__DOT__base__DOT__buf_Q) 
             & (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_21__DOT__base__DOT__buf_Q)) 
            & (((~ ((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_25__DOT__base__DOT__buf_Q) 
                    | (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_22__DOT__base__DOT__buf_Q))) 
                & (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_19__DOT__base__DOT__buf_Q)) 
               & (IData)(vlTOPp->puzzle__DOT__Xdfrtp_1_26__DOT__base__DOT__buf_Q))) 
           & (IData)(vlTOPp->puzzle__DOT__Xand2b_2_8__DOT__base__DOT__and0_out_X));
    vlTOPp->puzzle__DOT__Xand2_2_15__DOT__base__DOT__and0_out_X 
        = ((~ (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_28__DOT__base__DOT__buf_Q)) 
           & ((((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_24__DOT__base__DOT__buf_Q) 
                & (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_25__DOT__base__DOT__buf_Q)) 
               & (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_20__DOT__base__DOT__buf_Q)) 
              & (IData)(vlTOPp->puzzle__DOT__Xnor3_2_2__DOT__base__DOT__nor0_out_Y)));
    vlTOPp->puzzle__DOT__Xnor4b_2_1__DOT__base__DOT__nor0_out_Y 
        = (1U & (~ ((((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_24__DOT__base__DOT__buf_Q) 
                      | (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_25__DOT__base__DOT__buf_Q)) 
                     | (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_20__DOT__base__DOT__buf_Q)) 
                    | (~ (IData)(vlTOPp->puzzle__DOT__Xnor3_2_2__DOT__base__DOT__nor0_out_Y)))));
    vlTOPp->puzzle__DOT__Xor2_2_1__DOT__base__DOT__or0_out_X 
        = ((IData)(vlTOPp->puzzle__DOT__Xnor2_2_7__DOT__base__DOT__nor0_out_Y) 
           | (IData)(vlTOPp->puzzle__DOT__Xand2_2_1__DOT__base__DOT__and0_out_X));
    vlTOPp->puzzle__DOT__Xnor2_2_4__DOT__base__DOT__nor0_out_Y 
        = (1U & (~ ((IData)(vlTOPp->puzzle__DOT__Xand2_2_1__DOT__base__DOT__and0_out_X) 
                    | (IData)(vlTOPp->puzzle__DOT__Xnor2_2_7__DOT__base__DOT__nor0_out_Y))));
    vlTOPp->puzzle__DOT__Xnor2_2_17__DOT__base__DOT__nor0_out_Y 
        = (1U & (~ ((IData)(vlTOPp->puzzle__DOT__Xnand2_2_21__DOT__base__DOT__nand0_out_Y) 
                    | (IData)(vlTOPp->puzzle__DOT__Xxnor2_2_3__DOT__base__DOT__xnor0_out_Y))));
    vlTOPp->puzzle__DOT__Xxnor2_2_1__DOT__base__DOT__xnor0_out_Y 
        = (1U & (~ ((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_43__DOT__base__DOT__buf_Q) 
                    ^ (IData)(vlTOPp->puzzle__DOT__Xxor2_2_0__DOT__base__DOT__xor0_out_X))));
    vlTOPp->puzzle__DOT__Xnand2_2_22__DOT__base__DOT__nand0_out_Y 
        = (1U & (~ ((IData)(vlTOPp->puzzle__DOT__Xxor2_2_7__DOT__base__DOT__xor0_out_X) 
                    & (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_18__DOT__base__DOT__buf_Q))));
    vlTOPp->puzzle__DOT__Xa21oi_2_10__DOT__base__DOT__nor0_out_Y 
        = (1U & (~ ((~ ((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_15__DOT__base__DOT__buf_Q) 
                        | (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_17__DOT__base__DOT__buf_Q))) 
                    | ((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_15__DOT__base__DOT__buf_Q) 
                       & (IData)(vlTOPp->puzzle__DOT__Xxor2_2_7__DOT__base__DOT__xor0_out_X)))));
    vlTOPp->puzzle__DOT__Xxor2_2_4__DOT__base__DOT__xor0_out_X 
        = ((IData)(vlTOPp->puzzle__DOT__Xxor2_2_7__DOT__base__DOT__xor0_out_X) 
           ^ (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_18__DOT__base__DOT__buf_Q));
    vlTOPp->puzzle__DOT__Xand3_2_11__DOT__base__DOT__and0_out_X 
        = (((IData)(vlTOPp->puzzle__DOT__Xand3_2_9__DOT__base__DOT__and0_out_X) 
            & (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_24__DOT__base__DOT__buf_Q)) 
           & (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_25__DOT__base__DOT__buf_Q));
    vlTOPp->puzzle__DOT__Xor2_2_10__DOT__base__DOT__or0_out_X 
        = ((IData)(vlTOPp->puzzle__DOT__Xand2b_2_11__DOT__base__DOT__and0_out_X) 
           | (IData)(vlTOPp->puzzle__DOT__Xand2_2_16__DOT__base__DOT__and0_out_X));
    vlTOPp->puzzle__DOT__Xand2b_2_16__DOT__base__DOT__and0_out_X 
        = ((~ (IData)(vlTOPp->puzzle__DOT__Xand2b_2_11__DOT__base__DOT__and0_out_X)) 
           & (IData)(vlTOPp->puzzle__DOT__Xand2_2_16__DOT__base__DOT__and0_out_X));
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
    vlTOPp->puzzle__DOT__Xa21o_2_4__DOT__base__DOT__or0_out_X 
        = (1U & (((IData)(vlTOPp->puzzle__DOT__Xnand2_2_17__DOT__base__DOT__nand0_out_Y) 
                  & (IData)(vlTOPp->puzzle__DOT__Xnor2_2_17__DOT__base__DOT__nor0_out_Y)) 
                 | (~ ((IData)(vlTOPp->puzzle__DOT__Xnor2_2_17__DOT__base__DOT__nor0_out_Y) 
                       | ((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_18__DOT__base__DOT__buf_Q) 
                          & (IData)(vlTOPp->puzzle__DOT__Xnand2_2_17__DOT__base__DOT__nand0_out_Y))))));
    vlTOPp->puzzle__DOT__Xnor2_2_8__DOT__base__DOT__nor0_out_Y 
        = (1U & (~ ((IData)(vlTOPp->puzzle__DOT__Xxnor2_2_1__DOT__base__DOT__xnor0_out_Y) 
                    | (IData)(vlTOPp->puzzle__DOT__Xor2_2_1__DOT__base__DOT__or0_out_X))));
    vlTOPp->puzzle__DOT__Xnand2_2_7__DOT__base__DOT__nand0_out_Y 
        = (1U & (~ ((IData)(vlTOPp->puzzle__DOT__Xnand2_2_4__DOT__base__DOT__nand0_out_Y) 
                    & (IData)(vlTOPp->puzzle__DOT__Xxnor2_2_1__DOT__base__DOT__xnor0_out_Y))));
    vlTOPp->puzzle__DOT__Xnor2_2_0__DOT__base__DOT__nor0_out_Y 
        = (1U & (~ ((IData)(vlTOPp->puzzle__DOT__Xxnor2_2_1__DOT__base__DOT__xnor0_out_Y) 
                    | (IData)(vlTOPp->puzzle__DOT__Xnand2_2_4__DOT__base__DOT__nand0_out_Y))));
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
    vlTOPp->puzzle__DOT__Xo2bb2a_2_0__DOT__base__DOT__and0_out_X 
        = (1U & ((~ ((IData)(vlTOPp->puzzle__DOT__Xa21oi_2_10__DOT__base__DOT__nor0_out_Y) 
                     & (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_46__DOT__base__DOT__buf_Q))) 
                 & ((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_17__DOT__base__DOT__buf_Q) 
                    | (~ ((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_15__DOT__base__DOT__buf_Q) 
                          & (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_16__DOT__base__DOT__buf_Q))))));
    vlTOPp->puzzle__DOT__Xxor2_2_1__DOT__base__DOT__xor0_out_X 
        = ((IData)(vlTOPp->puzzle__DOT__Xa21oi_2_10__DOT__base__DOT__nor0_out_Y) 
           ^ (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_46__DOT__base__DOT__buf_Q));
    vlTOPp->puzzle__DOT__Xnand2b_2_6__DOT__base__DOT__or0_out_Y 
        = (1U & ((~ (IData)(vlTOPp->puzzle__DOT__Xxor2_2_4__DOT__base__DOT__xor0_out_X)) 
                 | (IData)(vlTOPp->puzzle__DOT__Xnand2_2_17__DOT__base__DOT__nand0_out_Y)));
    vlTOPp->puzzle__DOT__Xxnor2_2_4__DOT__base__DOT__xnor0_out_Y 
        = (1U & (~ ((IData)(vlTOPp->puzzle__DOT__Xnand2_2_17__DOT__base__DOT__nand0_out_Y) 
                    ^ (IData)(vlTOPp->puzzle__DOT__Xxor2_2_4__DOT__base__DOT__xor0_out_X))));
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
    vlTOPp->puzzle__DOT__Xnor2_2_9__DOT__base__DOT__nor0_out_Y 
        = (1U & (~ ((IData)(vlTOPp->puzzle__DOT__Xnor2_2_7__DOT__base__DOT__nor0_out_Y) 
                    | (IData)(vlTOPp->puzzle__DOT__Xnand2_2_7__DOT__base__DOT__nand0_out_Y))));
    vlTOPp->puzzle__DOT__Xand2b_2_0__DOT__base__DOT__and0_out_X 
        = ((~ (IData)(vlTOPp->puzzle__DOT__Xnor2_2_0__DOT__base__DOT__nor0_out_Y)) 
           & (IData)(vlTOPp->puzzle__DOT__Xnand2_2_7__DOT__base__DOT__nand0_out_Y));
    vlTOPp->puzzle__DOT__Xand2b_2_5__DOT__base__DOT__and0_out_X 
        = ((~ (IData)(vlTOPp->puzzle__DOT__Xand4bb_2_0__DOT__base__DOT__and0_out_X)) 
           & (IData)(vlTOPp->puzzle__DOT__Xo22ai_2_0__DOT__base__DOT__or0_out_Y));
    vlTOPp->puzzle__DOT__Xxnor2_2_0__DOT__base__DOT__xnor0_out_Y 
        = (1U & (~ ((~ ((IData)(vlTOPp->puzzle__DOT__Xxor2_2_0__DOT__base__DOT__xor0_out_X) 
                        & (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_43__DOT__base__DOT__buf_Q))) 
                    ^ (IData)(vlTOPp->puzzle__DOT__Xxor2_2_1__DOT__base__DOT__xor0_out_X))));
    vlTOPp->puzzle__DOT__Xxnor2_2_5__DOT__base__DOT__xnor0_out_Y 
        = (1U & (~ ((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_45__DOT__base__DOT__buf_Q) 
                    ^ (IData)(vlTOPp->puzzle__DOT__Xxnor2_2_4__DOT__base__DOT__xnor0_out_Y))));
    vlTOPp->puzzle__DOT__Xnand2_2_16__DOT__base__DOT__nand0_out_Y 
        = (1U & (~ ((IData)(vlTOPp->puzzle__DOT__Xxnor2_2_4__DOT__base__DOT__xnor0_out_Y) 
                    & (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_45__DOT__base__DOT__buf_Q))));
    vlTOPp->puzzle__DOT__Xnor2_2_47__DOT__base__DOT__nor0_out_Y 
        = (1U & (~ ((IData)(vlTOPp->puzzle__DOT__Xnor3b_2_4__DOT__base__DOT__and0_out_Y) 
                    | (IData)(vlTOPp->puzzle__DOT__Xa21oi_2_18__DOT__base__DOT__nor0_out_Y))));
    vlTOPp->puzzle__DOT__Xand2_2_0__DOT__base__DOT__and0_out_X 
        = ((IData)(vlTOPp->puzzle__DOT__Xor2_2_1__DOT__base__DOT__or0_out_X) 
           & (IData)(vlTOPp->puzzle__DOT__Xand2b_2_0__DOT__base__DOT__and0_out_X));
    vlTOPp->puzzle__DOT__Xnor2_2_1__DOT__base__DOT__nor0_out_Y 
        = (1U & (~ ((IData)(vlTOPp->puzzle__DOT__Xnor2_2_4__DOT__base__DOT__nor0_out_Y) 
                    | (IData)(vlTOPp->puzzle__DOT__Xand2b_2_0__DOT__base__DOT__and0_out_X))));
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
    vlTOPp->puzzle__DOT__Xxnor2_2_8__DOT__base__DOT__xnor0_out_Y 
        = (1U & (~ ((IData)(vlTOPp->puzzle__DOT__Xxnor2_2_5__DOT__base__DOT__xnor0_out_Y) 
                    ^ (IData)(vlTOPp->puzzle__DOT__Xo2bb2a_2_0__DOT__base__DOT__and0_out_X))));
    vlTOPp->puzzle__DOT__Xa21oi_2_4__DOT__base__DOT__nor0_out_Y 
        = (1U & (~ ((IData)(vlTOPp->puzzle__DOT__Xor3_2_5__DOT__base__DOT__or0_out_X) 
                    | ((IData)(vlTOPp->puzzle__DOT__Xnand2b_2_6__DOT__base__DOT__or0_out_Y) 
                       & (IData)(vlTOPp->puzzle__DOT__Xnand2_2_16__DOT__base__DOT__nand0_out_Y)))));
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
    vlTOPp->puzzle__DOT__Xa21o_2_8__DOT__base__DOT__or0_out_X 
        = (1U & (((IData)(vlTOPp->puzzle__DOT__Xa32o_2_0__DOT__base__DOT__or0_out_X) 
                  & (~ ((IData)(vlTOPp->puzzle__DOT__Xo2bb2a_2_0__DOT__base__DOT__and0_out_X) 
                        & (IData)(vlTOPp->puzzle__DOT__Xxnor2_2_5__DOT__base__DOT__xnor0_out_Y)))) 
                 | (~ ((IData)(vlTOPp->puzzle__DOT__Xxnor2_2_5__DOT__base__DOT__xnor0_out_Y) 
                       | (IData)(vlTOPp->puzzle__DOT__Xo2bb2a_2_0__DOT__base__DOT__and0_out_X)))));
    vlTOPp->puzzle__DOT__Xxor2_2_2__DOT__base__DOT__xor0_out_X 
        = ((IData)(vlTOPp->puzzle__DOT__Xxnor2_2_8__DOT__base__DOT__xnor0_out_Y) 
           ^ (IData)(vlTOPp->puzzle__DOT__Xa32o_2_0__DOT__base__DOT__or0_out_X));
    vlTOPp->puzzle__DOT__Xxnor2_2_9__DOT__base__DOT__xnor0_out_Y 
        = (1U & (~ ((IData)(vlTOPp->puzzle__DOT__Xa32o_2_0__DOT__base__DOT__or0_out_X) 
                    ^ (IData)(vlTOPp->puzzle__DOT__Xxnor2_2_8__DOT__base__DOT__xnor0_out_Y))));
    vlTOPp->puzzle__DOT__Xnor2_2_21__DOT__base__DOT__nor0_out_Y 
        = (1U & (~ ((IData)(vlTOPp->puzzle__DOT__Xa21oi_2_4__DOT__base__DOT__nor0_out_Y) 
                    | (((IData)(vlTOPp->puzzle__DOT__Xor3_2_5__DOT__base__DOT__or0_out_X) 
                        & (IData)(vlTOPp->puzzle__DOT__Xnand2b_2_6__DOT__base__DOT__or0_out_Y)) 
                       & (IData)(vlTOPp->puzzle__DOT__Xnand2_2_16__DOT__base__DOT__nand0_out_Y)))));
    vlTOPp->puzzle__DOT__Xnand2b_2_0__DOT__base__DOT__or0_out_Y 
        = (1U & ((~ (IData)(vlTOPp->puzzle__DOT__Xor2_2_0__DOT__base__DOT__or0_out_X)) 
                 | (IData)(vlTOPp->puzzle__DOT__Xand2_2_0__DOT__base__DOT__and0_out_X)));
    vlTOPp->puzzle__DOT__Xor3_2_2__DOT__base__DOT__or0_out_X 
        = (((IData)(vlTOPp->puzzle__DOT__Xnor2_2_1__DOT__base__DOT__nor0_out_Y) 
            | (IData)(vlTOPp->puzzle__DOT__Xnor2_2_8__DOT__base__DOT__nor0_out_Y)) 
           | (IData)(vlTOPp->puzzle__DOT__Xnor2_2_2__DOT__base__DOT__nor0_out_Y));
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

void Vpuzzle::_eval_initial(Vpuzzle__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpuzzle::_eval_initial\n"); );
    Vpuzzle* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
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
}

void Vpuzzle::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpuzzle::final\n"); );
    // Variables
    Vpuzzle__Syms* __restrict vlSymsp = this->__VlSymsp;
    Vpuzzle* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void Vpuzzle::_eval_settle(Vpuzzle__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpuzzle::_eval_settle\n"); );
    Vpuzzle* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__93(vlSymsp);
    vlTOPp->__Vm_traceActivity[0x12U] = 1U;
    vlTOPp->__Vm_traceActivity[0x11U] = 1U;
    vlTOPp->__Vm_traceActivity[0x10U] = 1U;
    vlTOPp->__Vm_traceActivity[0xfU] = 1U;
    vlTOPp->__Vm_traceActivity[0xeU] = 1U;
    vlTOPp->__Vm_traceActivity[0xdU] = 1U;
    vlTOPp->__Vm_traceActivity[0xcU] = 1U;
    vlTOPp->__Vm_traceActivity[0xbU] = 1U;
    vlTOPp->__Vm_traceActivity[0xaU] = 1U;
    vlTOPp->__Vm_traceActivity[9U] = 1U;
    vlTOPp->__Vm_traceActivity[8U] = 1U;
    vlTOPp->__Vm_traceActivity[7U] = 1U;
    vlTOPp->__Vm_traceActivity[6U] = 1U;
    vlTOPp->__Vm_traceActivity[5U] = 1U;
    vlTOPp->__Vm_traceActivity[4U] = 1U;
    vlTOPp->__Vm_traceActivity[3U] = 1U;
    vlTOPp->__Vm_traceActivity[2U] = 1U;
    vlTOPp->__Vm_traceActivity[1U] = 1U;
    vlTOPp->__Vm_traceActivity[0U] = 1U;
}

void Vpuzzle::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpuzzle::_ctor_var_reset\n"); );
    // Body
    I = VL_RAND_RESET_I(1);
    { int __Vi0=0; for (; __Vi0<8; ++__Vi0) {
            O[__Vi0] = VL_RAND_RESET_I(1);
    }}
    clk = VL_RAND_RESET_I(1);
    enable = VL_RAND_RESET_I(1);
    rst_n = VL_RAND_RESET_I(1);
    success = VL_RAND_RESET_I(1);
    puzzle__DOT__a211o_2 = VL_RAND_RESET_I(1);
    puzzle__DOT__a21o_2 = VL_RAND_RESET_I(1);
    puzzle__DOT__a21oi_2 = VL_RAND_RESET_I(1);
    puzzle__DOT__a221o_2 = VL_RAND_RESET_I(1);
    puzzle__DOT__a22o_2 = VL_RAND_RESET_I(1);
    puzzle__DOT__a22oi_2 = VL_RAND_RESET_I(1);
    puzzle__DOT__a31o_2 = VL_RAND_RESET_I(1);
    puzzle__DOT__a32o_2 = VL_RAND_RESET_I(1);
    puzzle__DOT__a41oi_2 = VL_RAND_RESET_I(1);
    puzzle__DOT__and2_2 = VL_RAND_RESET_I(1);
    puzzle__DOT__and2b_2 = VL_RAND_RESET_I(1);
    puzzle__DOT__and3_2 = VL_RAND_RESET_I(1);
    puzzle__DOT__and3b_2 = VL_RAND_RESET_I(1);
    puzzle__DOT__and4_2 = VL_RAND_RESET_I(1);
    puzzle__DOT__and4b_2 = VL_RAND_RESET_I(1);
    puzzle__DOT__and4bb_2 = VL_RAND_RESET_I(1);
    puzzle__DOT__buf_2 = VL_RAND_RESET_I(1);
    puzzle__DOT__clkbuf_4 = VL_RAND_RESET_I(1);
    puzzle__DOT__clkbuf_8 = VL_RAND_RESET_I(1);
    puzzle__DOT__conb_1 = VL_RAND_RESET_I(1);
    puzzle__DOT__dfrtp_2 = VL_RAND_RESET_I(1);
    puzzle__DOT__dfstp_2 = VL_RAND_RESET_I(1);
    puzzle__DOT__dfxtp_2 = VL_RAND_RESET_I(1);
    puzzle__DOT__inv_2 = VL_RAND_RESET_I(1);
    puzzle__DOT__mux2_1 = VL_RAND_RESET_I(1);
    puzzle__DOT__nand2_2 = VL_RAND_RESET_I(1);
    puzzle__DOT__nand2b_2 = VL_RAND_RESET_I(1);
    puzzle__DOT__nand3_2 = VL_RAND_RESET_I(1);
    puzzle__DOT__nand4_2 = VL_RAND_RESET_I(1);
    puzzle__DOT__nor2_2 = VL_RAND_RESET_I(1);
    puzzle__DOT__nor3_2 = VL_RAND_RESET_I(1);
    puzzle__DOT__nor3b_2 = VL_RAND_RESET_I(1);
    puzzle__DOT__nor4_2 = VL_RAND_RESET_I(1);
    puzzle__DOT__o211a_2 = VL_RAND_RESET_I(1);
    puzzle__DOT__o211ai_2 = VL_RAND_RESET_I(1);
    puzzle__DOT__o21a_2 = VL_RAND_RESET_I(1);
    puzzle__DOT__o21ai_2 = VL_RAND_RESET_I(1);
    puzzle__DOT__o21ba_2 = VL_RAND_RESET_I(1);
    puzzle__DOT__o21bai_2 = VL_RAND_RESET_I(1);
    puzzle__DOT__o221a_2 = VL_RAND_RESET_I(1);
    puzzle__DOT__o22a_2 = VL_RAND_RESET_I(1);
    puzzle__DOT__o22ai_2 = VL_RAND_RESET_I(1);
    puzzle__DOT__o311a_2 = VL_RAND_RESET_I(1);
    puzzle__DOT__o31a_2 = VL_RAND_RESET_I(1);
    puzzle__DOT__o31ai_2 = VL_RAND_RESET_I(1);
    puzzle__DOT__o32a_2 = VL_RAND_RESET_I(1);
    puzzle__DOT__o32ai_2 = VL_RAND_RESET_I(1);
    puzzle__DOT__or2_2 = VL_RAND_RESET_I(1);
    puzzle__DOT__or3_2 = VL_RAND_RESET_I(1);
    puzzle__DOT__or3b_2 = VL_RAND_RESET_I(1);
    puzzle__DOT__or4_2 = VL_RAND_RESET_I(1);
    puzzle__DOT__or4b_2 = VL_RAND_RESET_I(1);
    puzzle__DOT__or4bb_2 = VL_RAND_RESET_I(1);
    puzzle__DOT__rst = VL_RAND_RESET_I(1);
    puzzle__DOT__xnor2_2 = VL_RAND_RESET_I(1);
    puzzle__DOT__xor2_2 = VL_RAND_RESET_I(1);
    puzzle__DOT__Xnor4_2_0__DOT__base__DOT__nor0_out_Y = VL_RAND_RESET_I(1);
    puzzle__DOT__Xor2_2_8__DOT__base__DOT__or0_out_X = VL_RAND_RESET_I(1);
    puzzle__DOT__Xnand4_2_12__DOT__base__DOT__nand0_out_Y = VL_RAND_RESET_I(1);
    puzzle__DOT__Xxnor2_2_24__DOT__base__DOT__xnor0_out_Y = VL_RAND_RESET_I(1);
    puzzle__DOT__Xand4bb_2_7__DOT__base__DOT__and0_out_X = VL_RAND_RESET_I(1);
    puzzle__DOT__Xnor3b_2_2__DOT__base__DOT__and0_out_Y = VL_RAND_RESET_I(1);
    puzzle__DOT__Xa21o_2_8__DOT__base__DOT__or0_out_X = VL_RAND_RESET_I(1);
    puzzle__DOT__Xnor4_2_1__DOT__base__DOT__nor0_out_Y = VL_RAND_RESET_I(1);
    puzzle__DOT__Xor2_2_9__DOT__base__DOT__or0_out_X = VL_RAND_RESET_I(1);
    puzzle__DOT__Xand3_2_10__DOT__base__DOT__and0_out_X = VL_RAND_RESET_I(1);
    puzzle__DOT__Xnand4_2_13__DOT__base__DOT__nand0_out_Y = VL_RAND_RESET_I(1);
    puzzle__DOT__Xand4bb_2_8__DOT__base__DOT__and0_out_X = VL_RAND_RESET_I(1);
    puzzle__DOT__Xnor3b_2_3__DOT__base__DOT__and0_out_Y = VL_RAND_RESET_I(1);
    puzzle__DOT__Xa211oi_2_1__DOT__base__DOT__nor0_out_Y = VL_RAND_RESET_I(1);
    puzzle__DOT__Xand2b_2_5__DOT__base__DOT__and0_out_X = VL_RAND_RESET_I(1);
    puzzle__DOT__Xa21oi_2_0__DOT__base__DOT__nor0_out_Y = VL_RAND_RESET_I(1);
    puzzle__DOT__Xand3_2_11__DOT__base__DOT__and0_out_X = VL_RAND_RESET_I(1);
    puzzle__DOT__Xnand4_2_14__DOT__base__DOT__nand0_out_Y = VL_RAND_RESET_I(1);
    puzzle__DOT__Xand4bb_2_9__DOT__base__DOT__and0_out_X = VL_RAND_RESET_I(1);
    puzzle__DOT__Xxnor2_2_26__DOT__base__DOT__xnor0_out_Y = VL_RAND_RESET_I(1);
    puzzle__DOT__Xnor3b_2_4__DOT__base__DOT__and0_out_Y = VL_RAND_RESET_I(1);
    puzzle__DOT__Xa211oi_2_2__DOT__base__DOT__nor0_out_Y = VL_RAND_RESET_I(1);
    puzzle__DOT__Xor4b_2_0__DOT__base__DOT__or0_out_X = VL_RAND_RESET_I(1);
    puzzle__DOT__Xand4_2_2__DOT__base__DOT__and0_out_X = VL_RAND_RESET_I(1);
    puzzle__DOT__Xxnor2_2_27__DOT__base__DOT__xnor0_out_Y = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_80__DOT__base__DOT__buf_Q = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_80__DOT__base__DOT__RESET = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_80__DOT__base__DOT__notifier = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_80__DOT__base__DOT__D_delayed = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_80__DOT__base__DOT__RESET_B_delayed = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_80__DOT__base__DOT__CLK_delayed = VL_RAND_RESET_I(1);
    puzzle__DOT__Xo2bb2a_2_0__DOT__base__DOT__and0_out_X = VL_RAND_RESET_I(1);
    puzzle__DOT__Xor4b_2_1__DOT__base__DOT__or0_out_X = VL_RAND_RESET_I(1);
    puzzle__DOT__Xand2b_2_7__DOT__base__DOT__and0_out_X = VL_RAND_RESET_I(1);
    puzzle__DOT__Xo211a_2_2__DOT__base__DOT__and0_out_X = VL_RAND_RESET_I(1);
    puzzle__DOT__Xor2_2_10__DOT__base__DOT__or0_out_X = VL_RAND_RESET_I(1);
    puzzle__DOT__Xxnor2_2_17__DOT__base__DOT__xnor0_out_Y = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_70__DOT__base__DOT__buf_Q = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_70__DOT__base__DOT__RESET = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_70__DOT__base__DOT__notifier = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_70__DOT__base__DOT__D_delayed = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_70__DOT__base__DOT__RESET_B_delayed = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_70__DOT__base__DOT__CLK_delayed = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_81__DOT__base__DOT__buf_Q = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_81__DOT__base__DOT__RESET = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_81__DOT__base__DOT__notifier = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_81__DOT__base__DOT__D_delayed = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_81__DOT__base__DOT__RESET_B_delayed = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_81__DOT__base__DOT__CLK_delayed = VL_RAND_RESET_I(1);
    puzzle__DOT__Xor4b_2_2__DOT__base__DOT__or0_out_X = VL_RAND_RESET_I(1);
    puzzle__DOT__Xand2b_2_8__DOT__base__DOT__and0_out_X = VL_RAND_RESET_I(1);
    puzzle__DOT__Xnand2b_2_0__DOT__base__DOT__or0_out_Y = VL_RAND_RESET_I(1);
    puzzle__DOT__Xo211a_2_3__DOT__base__DOT__and0_out_X = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_60__DOT__base__DOT__buf_Q = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_60__DOT__base__DOT__RESET = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_60__DOT__base__DOT__notifier = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_60__DOT__base__DOT__D_delayed = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_60__DOT__base__DOT__RESET_B_delayed = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_60__DOT__base__DOT__CLK_delayed = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_82__DOT__base__DOT__buf_Q = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_82__DOT__base__DOT__RESET = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_82__DOT__base__DOT__notifier = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_82__DOT__base__DOT__D_delayed = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_82__DOT__base__DOT__RESET_B_delayed = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_82__DOT__base__DOT__CLK_delayed = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_71__DOT__base__DOT__buf_Q = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_71__DOT__base__DOT__RESET = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_71__DOT__base__DOT__notifier = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_71__DOT__base__DOT__D_delayed = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_71__DOT__base__DOT__RESET_B_delayed = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_71__DOT__base__DOT__CLK_delayed = VL_RAND_RESET_I(1);
    puzzle__DOT__Xor4b_2_3__DOT__base__DOT__or0_out_X = VL_RAND_RESET_I(1);
    puzzle__DOT__Xa21oi_2_4__DOT__base__DOT__nor0_out_Y = VL_RAND_RESET_I(1);
    puzzle__DOT__Xo211a_2_4__DOT__base__DOT__and0_out_X = VL_RAND_RESET_I(1);
    puzzle__DOT__Xand3_2_15__DOT__base__DOT__and0_out_X = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_61__DOT__base__DOT__buf_Q = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_61__DOT__base__DOT__RESET = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_61__DOT__base__DOT__notifier = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_61__DOT__base__DOT__D_delayed = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_61__DOT__base__DOT__RESET_B_delayed = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_61__DOT__base__DOT__CLK_delayed = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_50__DOT__base__DOT__buf_Q = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_50__DOT__base__DOT__RESET = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_50__DOT__base__DOT__notifier = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_50__DOT__base__DOT__D_delayed = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_50__DOT__base__DOT__RESET_B_delayed = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_50__DOT__base__DOT__CLK_delayed = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_83__DOT__base__DOT__buf_Q = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_83__DOT__base__DOT__RESET = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_83__DOT__base__DOT__notifier = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_83__DOT__base__DOT__D_delayed = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_83__DOT__base__DOT__RESET_B_delayed = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_83__DOT__base__DOT__CLK_delayed = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_72__DOT__base__DOT__buf_Q = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_72__DOT__base__DOT__RESET = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_72__DOT__base__DOT__notifier = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_72__DOT__base__DOT__D_delayed = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_72__DOT__base__DOT__RESET_B_delayed = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_72__DOT__base__DOT__CLK_delayed = VL_RAND_RESET_I(1);
    puzzle__DOT__Xor4b_2_4__DOT__base__DOT__or0_out_X = VL_RAND_RESET_I(1);
    puzzle__DOT__Xo211a_2_5__DOT__base__DOT__and0_out_X = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_51__DOT__base__DOT__buf_Q = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_51__DOT__base__DOT__RESET = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_51__DOT__base__DOT__notifier = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_51__DOT__base__DOT__D_delayed = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_51__DOT__base__DOT__RESET_B_delayed = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_51__DOT__base__DOT__CLK_delayed = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_40__DOT__base__DOT__buf_Q = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_40__DOT__base__DOT__RESET = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_40__DOT__base__DOT__notifier = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_40__DOT__base__DOT__D_delayed = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_40__DOT__base__DOT__RESET_B_delayed = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_40__DOT__base__DOT__CLK_delayed = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_73__DOT__base__DOT__buf_Q = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_73__DOT__base__DOT__RESET = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_73__DOT__base__DOT__notifier = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_73__DOT__base__DOT__D_delayed = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_73__DOT__base__DOT__RESET_B_delayed = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_73__DOT__base__DOT__CLK_delayed = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_62__DOT__base__DOT__buf_Q = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_62__DOT__base__DOT__RESET = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_62__DOT__base__DOT__notifier = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_62__DOT__base__DOT__D_delayed = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_62__DOT__base__DOT__RESET_B_delayed = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_62__DOT__base__DOT__CLK_delayed = VL_RAND_RESET_I(1);
    puzzle__DOT__Xnand2_2_0__DOT__base__DOT__nand0_out_Y = VL_RAND_RESET_I(1);
    puzzle__DOT__Xor4b_2_5__DOT__base__DOT__or0_out_X = VL_RAND_RESET_I(1);
    puzzle__DOT__Xxor2_2_13__DOT__base__DOT__xor0_out_X = VL_RAND_RESET_I(1);
    puzzle__DOT__Xand4bb_2_10__DOT__base__DOT__and0_out_X = VL_RAND_RESET_I(1);
    puzzle__DOT__Xa31oi_2_0__DOT__base__DOT__nor0_out_Y = VL_RAND_RESET_I(1);
    puzzle__DOT__Xa21oi_2_10__DOT__base__DOT__nor0_out_Y = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_52__DOT__base__DOT__buf_Q = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_52__DOT__base__DOT__RESET = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_52__DOT__base__DOT__notifier = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_52__DOT__base__DOT__D_delayed = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_52__DOT__base__DOT__RESET_B_delayed = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_52__DOT__base__DOT__CLK_delayed = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_30__DOT__base__DOT__buf_Q = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_30__DOT__base__DOT__RESET = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_30__DOT__base__DOT__notifier = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_30__DOT__base__DOT__D_delayed = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_30__DOT__base__DOT__RESET_B_delayed = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_30__DOT__base__DOT__CLK_delayed = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_41__DOT__base__DOT__buf_Q = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_41__DOT__base__DOT__RESET = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_41__DOT__base__DOT__notifier = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_41__DOT__base__DOT__D_delayed = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_41__DOT__base__DOT__RESET_B_delayed = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_41__DOT__base__DOT__CLK_delayed = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_74__DOT__base__DOT__buf_Q = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_74__DOT__base__DOT__RESET = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_74__DOT__base__DOT__notifier = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_74__DOT__base__DOT__D_delayed = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_74__DOT__base__DOT__RESET_B_delayed = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_74__DOT__base__DOT__CLK_delayed = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_63__DOT__base__DOT__buf_Q = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_63__DOT__base__DOT__RESET = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_63__DOT__base__DOT__notifier = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_63__DOT__base__DOT__D_delayed = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_63__DOT__base__DOT__RESET_B_delayed = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_63__DOT__base__DOT__CLK_delayed = VL_RAND_RESET_I(1);
    puzzle__DOT__Xnand2_2_1__DOT__base__DOT__nand0_out_Y = VL_RAND_RESET_I(1);
    puzzle__DOT__Xor4b_2_6__DOT__base__DOT__or0_out_X = VL_RAND_RESET_I(1);
    puzzle__DOT__Xxor2_2_14__DOT__base__DOT__xor0_out_X = VL_RAND_RESET_I(1);
    puzzle__DOT__Xand4bb_2_11__DOT__base__DOT__and0_out_X = VL_RAND_RESET_I(1);
    puzzle__DOT__Xa21oi_2_7__DOT__base__DOT__nor0_out_Y = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_20__DOT__base__DOT__buf_Q = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_20__DOT__base__DOT__RESET = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_20__DOT__base__DOT__notifier = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_20__DOT__base__DOT__D_delayed = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_20__DOT__base__DOT__RESET_B_delayed = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_20__DOT__base__DOT__CLK_delayed = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_42__DOT__base__DOT__buf_Q = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_42__DOT__base__DOT__RESET = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_42__DOT__base__DOT__notifier = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_42__DOT__base__DOT__D_delayed = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_42__DOT__base__DOT__RESET_B_delayed = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_42__DOT__base__DOT__CLK_delayed = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_31__DOT__base__DOT__buf_Q = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_31__DOT__base__DOT__RESET = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_31__DOT__base__DOT__notifier = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_31__DOT__base__DOT__D_delayed = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_31__DOT__base__DOT__RESET_B_delayed = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_31__DOT__base__DOT__CLK_delayed = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_75__DOT__base__DOT__buf_Q = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_75__DOT__base__DOT__RESET = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_75__DOT__base__DOT__notifier = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_75__DOT__base__DOT__D_delayed = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_75__DOT__base__DOT__RESET_B_delayed = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_75__DOT__base__DOT__CLK_delayed = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_64__DOT__base__DOT__buf_Q = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_64__DOT__base__DOT__RESET = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_64__DOT__base__DOT__notifier = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_64__DOT__base__DOT__D_delayed = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_64__DOT__base__DOT__RESET_B_delayed = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_64__DOT__base__DOT__CLK_delayed = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_53__DOT__base__DOT__buf_Q = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_53__DOT__base__DOT__RESET = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_53__DOT__base__DOT__notifier = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_53__DOT__base__DOT__D_delayed = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_53__DOT__base__DOT__RESET_B_delayed = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_53__DOT__base__DOT__CLK_delayed = VL_RAND_RESET_I(1);
    puzzle__DOT__Xor4_2_4__DOT__base__DOT__or0_out_X = VL_RAND_RESET_I(1);
    puzzle__DOT__Xor4b_2_7__DOT__base__DOT__or0_out_X = VL_RAND_RESET_I(1);
    puzzle__DOT__Xand4bb_2_12__DOT__base__DOT__and0_out_X = VL_RAND_RESET_I(1);
    puzzle__DOT__Xa21oi_2_8__DOT__base__DOT__nor0_out_Y = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_10__DOT__base__DOT__buf_Q = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_10__DOT__base__DOT__RESET = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_10__DOT__base__DOT__notifier = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_10__DOT__base__DOT__D_delayed = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_10__DOT__base__DOT__RESET_B_delayed = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_10__DOT__base__DOT__CLK_delayed = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_21__DOT__base__DOT__buf_Q = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_21__DOT__base__DOT__RESET = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_21__DOT__base__DOT__notifier = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_21__DOT__base__DOT__D_delayed = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_21__DOT__base__DOT__RESET_B_delayed = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_21__DOT__base__DOT__CLK_delayed = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_43__DOT__base__DOT__buf_Q = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_43__DOT__base__DOT__RESET = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_43__DOT__base__DOT__notifier = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_43__DOT__base__DOT__D_delayed = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_43__DOT__base__DOT__RESET_B_delayed = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_43__DOT__base__DOT__CLK_delayed = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_32__DOT__base__DOT__buf_Q = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_32__DOT__base__DOT__RESET = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_32__DOT__base__DOT__notifier = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_32__DOT__base__DOT__D_delayed = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_32__DOT__base__DOT__RESET_B_delayed = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_32__DOT__base__DOT__CLK_delayed = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_65__DOT__base__DOT__buf_Q = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_65__DOT__base__DOT__RESET = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_65__DOT__base__DOT__notifier = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_65__DOT__base__DOT__D_delayed = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_65__DOT__base__DOT__RESET_B_delayed = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_65__DOT__base__DOT__CLK_delayed = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_76__DOT__base__DOT__buf_Q = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_76__DOT__base__DOT__RESET = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_76__DOT__base__DOT__notifier = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_76__DOT__base__DOT__D_delayed = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_76__DOT__base__DOT__RESET_B_delayed = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_76__DOT__base__DOT__CLK_delayed = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_54__DOT__base__DOT__buf_Q = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_54__DOT__base__DOT__RESET = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_54__DOT__base__DOT__notifier = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_54__DOT__base__DOT__D_delayed = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_54__DOT__base__DOT__RESET_B_delayed = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_54__DOT__base__DOT__CLK_delayed = VL_RAND_RESET_I(1);
    puzzle__DOT__Xnand2_2_3__DOT__base__DOT__nand0_out_Y = VL_RAND_RESET_I(1);
    puzzle__DOT__Xand4b_2_0__DOT__base__DOT__and0_out_X = VL_RAND_RESET_I(1);
    puzzle__DOT__Xor4b_2_8__DOT__base__DOT__or0_out_X = VL_RAND_RESET_I(1);
    puzzle__DOT__Xxor2_2_16__DOT__base__DOT__xor0_out_X = VL_RAND_RESET_I(1);
    puzzle__DOT__Xand4bb_2_13__DOT__base__DOT__and0_out_X = VL_RAND_RESET_I(1);
    puzzle__DOT__Xa21oi_2_9__DOT__base__DOT__nor0_out_Y = VL_RAND_RESET_I(1);
    puzzle__DOT__Xnand2b_2_6__DOT__base__DOT__or0_out_Y = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_22__DOT__base__DOT__buf_Q = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_22__DOT__base__DOT__RESET = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_22__DOT__base__DOT__notifier = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_22__DOT__base__DOT__D_delayed = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_22__DOT__base__DOT__RESET_B_delayed = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_22__DOT__base__DOT__CLK_delayed = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_11__DOT__base__DOT__buf_Q = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_11__DOT__base__DOT__RESET = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_11__DOT__base__DOT__notifier = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_11__DOT__base__DOT__D_delayed = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_11__DOT__base__DOT__RESET_B_delayed = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_11__DOT__base__DOT__CLK_delayed = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_33__DOT__base__DOT__buf_Q = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_33__DOT__base__DOT__RESET = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_33__DOT__base__DOT__notifier = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_33__DOT__base__DOT__D_delayed = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_33__DOT__base__DOT__RESET_B_delayed = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_33__DOT__base__DOT__CLK_delayed = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_66__DOT__base__DOT__buf_Q = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_66__DOT__base__DOT__RESET = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_66__DOT__base__DOT__notifier = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_66__DOT__base__DOT__D_delayed = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_66__DOT__base__DOT__RESET_B_delayed = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_66__DOT__base__DOT__CLK_delayed = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_77__DOT__base__DOT__buf_Q = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_77__DOT__base__DOT__RESET = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_77__DOT__base__DOT__notifier = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_77__DOT__base__DOT__D_delayed = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_77__DOT__base__DOT__RESET_B_delayed = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_77__DOT__base__DOT__CLK_delayed = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_55__DOT__base__DOT__buf_Q = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_55__DOT__base__DOT__RESET = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_55__DOT__base__DOT__notifier = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_55__DOT__base__DOT__D_delayed = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_55__DOT__base__DOT__RESET_B_delayed = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_55__DOT__base__DOT__CLK_delayed = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_44__DOT__base__DOT__buf_Q = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_44__DOT__base__DOT__RESET = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_44__DOT__base__DOT__notifier = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_44__DOT__base__DOT__D_delayed = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_44__DOT__base__DOT__RESET_B_delayed = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_44__DOT__base__DOT__CLK_delayed = VL_RAND_RESET_I(1);
    puzzle__DOT__Xnand2_2_4__DOT__base__DOT__nand0_out_Y = VL_RAND_RESET_I(1);
    puzzle__DOT__Xand4b_2_1__DOT__base__DOT__and0_out_X = VL_RAND_RESET_I(1);
    puzzle__DOT__Xand3_2_0__DOT__base__DOT__and0_out_X = VL_RAND_RESET_I(1);
    puzzle__DOT__Xand2b_2_11__DOT__base__DOT__and0_out_X = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfxtp_2_0__DOT__base__DOT__buf_Q = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfxtp_2_0__DOT__base__DOT__notifier = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfxtp_2_0__DOT__base__DOT__D_delayed = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfxtp_2_0__DOT__base__DOT__CLK_delayed = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_23__DOT__base__DOT__buf_Q = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_23__DOT__base__DOT__RESET = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_23__DOT__base__DOT__notifier = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_23__DOT__base__DOT__D_delayed = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_23__DOT__base__DOT__RESET_B_delayed = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_23__DOT__base__DOT__CLK_delayed = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_12__DOT__base__DOT__buf_Q = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_12__DOT__base__DOT__RESET = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_12__DOT__base__DOT__notifier = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_12__DOT__base__DOT__D_delayed = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_12__DOT__base__DOT__RESET_B_delayed = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_12__DOT__base__DOT__CLK_delayed = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_34__DOT__base__DOT__buf_Q = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_34__DOT__base__DOT__RESET = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_34__DOT__base__DOT__notifier = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_34__DOT__base__DOT__D_delayed = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_34__DOT__base__DOT__RESET_B_delayed = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_34__DOT__base__DOT__CLK_delayed = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_67__DOT__base__DOT__buf_Q = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_67__DOT__base__DOT__RESET = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_67__DOT__base__DOT__notifier = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_67__DOT__base__DOT__D_delayed = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_67__DOT__base__DOT__RESET_B_delayed = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_67__DOT__base__DOT__CLK_delayed = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_56__DOT__base__DOT__buf_Q = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_56__DOT__base__DOT__RESET = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_56__DOT__base__DOT__notifier = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_56__DOT__base__DOT__D_delayed = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_56__DOT__base__DOT__RESET_B_delayed = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_56__DOT__base__DOT__CLK_delayed = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_45__DOT__base__DOT__buf_Q = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_45__DOT__base__DOT__RESET = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_45__DOT__base__DOT__notifier = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_45__DOT__base__DOT__D_delayed = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_45__DOT__base__DOT__RESET_B_delayed = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_45__DOT__base__DOT__CLK_delayed = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_78__DOT__base__DOT__buf_Q = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_78__DOT__base__DOT__RESET = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_78__DOT__base__DOT__notifier = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_78__DOT__base__DOT__D_delayed = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_78__DOT__base__DOT__RESET_B_delayed = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_78__DOT__base__DOT__CLK_delayed = VL_RAND_RESET_I(1);
    puzzle__DOT__Xnand2_2_5__DOT__base__DOT__nand0_out_Y = VL_RAND_RESET_I(1);
    puzzle__DOT__Xand4b_2_2__DOT__base__DOT__and0_out_X = VL_RAND_RESET_I(1);
    puzzle__DOT__Xnor3_2_2__DOT__base__DOT__nor0_out_Y = VL_RAND_RESET_I(1);
    puzzle__DOT__Xand3_2_1__DOT__base__DOT__and0_out_X = VL_RAND_RESET_I(1);
    puzzle__DOT__Xnand2b_2_8__DOT__base__DOT__or0_out_Y = VL_RAND_RESET_I(1);
    puzzle__DOT__Xand2b_2_12__DOT__base__DOT__and0_out_X = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfxtp_2_1__DOT__base__DOT__buf_Q = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfxtp_2_1__DOT__base__DOT__notifier = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfxtp_2_1__DOT__base__DOT__D_delayed = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfxtp_2_1__DOT__base__DOT__CLK_delayed = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_24__DOT__base__DOT__buf_Q = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_24__DOT__base__DOT__RESET = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_24__DOT__base__DOT__notifier = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_24__DOT__base__DOT__D_delayed = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_24__DOT__base__DOT__RESET_B_delayed = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_24__DOT__base__DOT__CLK_delayed = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_13__DOT__base__DOT__buf_Q = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_13__DOT__base__DOT__RESET = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_13__DOT__base__DOT__notifier = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_13__DOT__base__DOT__D_delayed = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_13__DOT__base__DOT__RESET_B_delayed = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_13__DOT__base__DOT__CLK_delayed = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_68__DOT__base__DOT__buf_Q = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_68__DOT__base__DOT__RESET = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_68__DOT__base__DOT__notifier = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_68__DOT__base__DOT__D_delayed = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_68__DOT__base__DOT__RESET_B_delayed = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_68__DOT__base__DOT__CLK_delayed = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_57__DOT__base__DOT__buf_Q = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_57__DOT__base__DOT__RESET = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_57__DOT__base__DOT__notifier = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_57__DOT__base__DOT__D_delayed = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_57__DOT__base__DOT__RESET_B_delayed = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_57__DOT__base__DOT__CLK_delayed = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_35__DOT__base__DOT__buf_Q = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_35__DOT__base__DOT__RESET = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_35__DOT__base__DOT__notifier = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_35__DOT__base__DOT__D_delayed = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_35__DOT__base__DOT__RESET_B_delayed = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_35__DOT__base__DOT__CLK_delayed = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_46__DOT__base__DOT__buf_Q = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_46__DOT__base__DOT__RESET = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_46__DOT__base__DOT__notifier = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_46__DOT__base__DOT__D_delayed = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_46__DOT__base__DOT__RESET_B_delayed = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_46__DOT__base__DOT__CLK_delayed = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_79__DOT__base__DOT__buf_Q = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_79__DOT__base__DOT__RESET = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_79__DOT__base__DOT__notifier = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_79__DOT__base__DOT__D_delayed = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_79__DOT__base__DOT__RESET_B_delayed = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_79__DOT__base__DOT__CLK_delayed = VL_RAND_RESET_I(1);
    puzzle__DOT__Xnand2_2_6__DOT__base__DOT__nand0_out_Y = VL_RAND_RESET_I(1);
    puzzle__DOT__Xand4b_2_3__DOT__base__DOT__and0_out_X = VL_RAND_RESET_I(1);
    puzzle__DOT__Xnor3_2_3__DOT__base__DOT__nor0_out_Y = VL_RAND_RESET_I(1);
    puzzle__DOT__Xxor2_2_19__DOT__base__DOT__xor0_out_X = VL_RAND_RESET_I(1);
    puzzle__DOT__Xxor2_2_0__DOT__base__DOT__xor0_out_X = VL_RAND_RESET_I(1);
    puzzle__DOT__Xnand2b_2_9__DOT__base__DOT__or0_out_Y = VL_RAND_RESET_I(1);
    puzzle__DOT__Xand2b_2_13__DOT__base__DOT__and0_out_X = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfxtp_2_2__DOT__base__DOT__buf_Q = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfxtp_2_2__DOT__base__DOT__notifier = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfxtp_2_2__DOT__base__DOT__D_delayed = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfxtp_2_2__DOT__base__DOT__CLK_delayed = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_25__DOT__base__DOT__buf_Q = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_25__DOT__base__DOT__RESET = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_25__DOT__base__DOT__notifier = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_25__DOT__base__DOT__D_delayed = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_25__DOT__base__DOT__RESET_B_delayed = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_25__DOT__base__DOT__CLK_delayed = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_14__DOT__base__DOT__buf_Q = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_14__DOT__base__DOT__RESET = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_14__DOT__base__DOT__notifier = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_14__DOT__base__DOT__D_delayed = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_14__DOT__base__DOT__RESET_B_delayed = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_14__DOT__base__DOT__CLK_delayed = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_47__DOT__base__DOT__buf_Q = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_47__DOT__base__DOT__RESET = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_47__DOT__base__DOT__notifier = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_47__DOT__base__DOT__D_delayed = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_47__DOT__base__DOT__RESET_B_delayed = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_47__DOT__base__DOT__CLK_delayed = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_58__DOT__base__DOT__buf_Q = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_58__DOT__base__DOT__RESET = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_58__DOT__base__DOT__notifier = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_58__DOT__base__DOT__D_delayed = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_58__DOT__base__DOT__RESET_B_delayed = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_58__DOT__base__DOT__CLK_delayed = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_36__DOT__base__DOT__buf_Q = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_36__DOT__base__DOT__RESET = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_36__DOT__base__DOT__notifier = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_36__DOT__base__DOT__D_delayed = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_36__DOT__base__DOT__RESET_B_delayed = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_36__DOT__base__DOT__CLK_delayed = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_69__DOT__base__DOT__buf_Q = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_69__DOT__base__DOT__RESET = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_69__DOT__base__DOT__notifier = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_69__DOT__base__DOT__D_delayed = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_69__DOT__base__DOT__RESET_B_delayed = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_69__DOT__base__DOT__CLK_delayed = VL_RAND_RESET_I(1);
    puzzle__DOT__Xnand2_2_7__DOT__base__DOT__nand0_out_Y = VL_RAND_RESET_I(1);
    puzzle__DOT__Xxor2_2_1__DOT__base__DOT__xor0_out_X = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfxtp_2_3__DOT__base__DOT__buf_Q = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfxtp_2_3__DOT__base__DOT__notifier = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfxtp_2_3__DOT__base__DOT__D_delayed = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfxtp_2_3__DOT__base__DOT__CLK_delayed = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_15__DOT__base__DOT__buf_Q = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_15__DOT__base__DOT__RESET = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_15__DOT__base__DOT__notifier = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_15__DOT__base__DOT__D_delayed = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_15__DOT__base__DOT__RESET_B_delayed = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_15__DOT__base__DOT__CLK_delayed = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_48__DOT__base__DOT__buf_Q = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_48__DOT__base__DOT__RESET = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_48__DOT__base__DOT__notifier = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_48__DOT__base__DOT__D_delayed = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_48__DOT__base__DOT__RESET_B_delayed = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_48__DOT__base__DOT__CLK_delayed = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_1_26__DOT__base__DOT__buf_Q = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_1_26__DOT__base__DOT__RESET = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_1_26__DOT__base__DOT__notifier = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_1_26__DOT__base__DOT__D_delayed = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_1_26__DOT__base__DOT__RESET_B_delayed = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_1_26__DOT__base__DOT__CLK_delayed = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_59__DOT__base__DOT__buf_Q = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_59__DOT__base__DOT__RESET = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_59__DOT__base__DOT__notifier = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_59__DOT__base__DOT__D_delayed = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_59__DOT__base__DOT__RESET_B_delayed = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_59__DOT__base__DOT__CLK_delayed = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_37__DOT__base__DOT__buf_Q = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_37__DOT__base__DOT__RESET = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_37__DOT__base__DOT__notifier = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_37__DOT__base__DOT__D_delayed = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_37__DOT__base__DOT__RESET_B_delayed = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_37__DOT__base__DOT__CLK_delayed = VL_RAND_RESET_I(1);
    puzzle__DOT__Xxor2_2_2__DOT__base__DOT__xor0_out_X = VL_RAND_RESET_I(1);
    puzzle__DOT__Xa32o_2_0__DOT__base__DOT__or0_out_X = VL_RAND_RESET_I(1);
    puzzle__DOT__Xand2b_2_15__DOT__base__DOT__and0_out_X = VL_RAND_RESET_I(1);
    puzzle__DOT__Xa21oi_2_18__DOT__base__DOT__nor0_out_Y = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_16__DOT__base__DOT__buf_Q = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_16__DOT__base__DOT__RESET = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_16__DOT__base__DOT__notifier = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_16__DOT__base__DOT__D_delayed = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_16__DOT__base__DOT__RESET_B_delayed = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_16__DOT__base__DOT__CLK_delayed = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_49__DOT__base__DOT__buf_Q = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_49__DOT__base__DOT__RESET = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_49__DOT__base__DOT__notifier = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_49__DOT__base__DOT__D_delayed = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_49__DOT__base__DOT__RESET_B_delayed = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_49__DOT__base__DOT__CLK_delayed = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_27__DOT__base__DOT__buf_Q = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_27__DOT__base__DOT__RESET = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_27__DOT__base__DOT__notifier = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_27__DOT__base__DOT__D_delayed = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_27__DOT__base__DOT__RESET_B_delayed = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_27__DOT__base__DOT__CLK_delayed = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_38__DOT__base__DOT__buf_Q = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_38__DOT__base__DOT__RESET = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_38__DOT__base__DOT__notifier = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_38__DOT__base__DOT__D_delayed = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_38__DOT__base__DOT__RESET_B_delayed = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_38__DOT__base__DOT__CLK_delayed = VL_RAND_RESET_I(1);
    puzzle__DOT__Xnand2_2_9__DOT__base__DOT__nand0_out_Y = VL_RAND_RESET_I(1);
    puzzle__DOT__Xor3_2_0__DOT__base__DOT__or0_out_X = VL_RAND_RESET_I(1);
    puzzle__DOT__Xxor2_2_3__DOT__base__DOT__xor0_out_X = VL_RAND_RESET_I(1);
    puzzle__DOT__Xand2_2_15__DOT__base__DOT__and0_out_X = VL_RAND_RESET_I(1);
    puzzle__DOT__Xand2b_2_16__DOT__base__DOT__and0_out_X = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_28__DOT__base__DOT__buf_Q = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_28__DOT__base__DOT__RESET = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_28__DOT__base__DOT__notifier = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_28__DOT__base__DOT__D_delayed = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_28__DOT__base__DOT__RESET_B_delayed = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_28__DOT__base__DOT__CLK_delayed = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_17__DOT__base__DOT__buf_Q = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_17__DOT__base__DOT__RESET = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_17__DOT__base__DOT__notifier = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_17__DOT__base__DOT__D_delayed = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_17__DOT__base__DOT__RESET_B_delayed = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_17__DOT__base__DOT__CLK_delayed = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_39__DOT__base__DOT__buf_Q = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_39__DOT__base__DOT__RESET = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_39__DOT__base__DOT__notifier = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_39__DOT__base__DOT__D_delayed = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_39__DOT__base__DOT__RESET_B_delayed = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_39__DOT__base__DOT__CLK_delayed = VL_RAND_RESET_I(1);
    puzzle__DOT__Xxor2_2_4__DOT__base__DOT__xor0_out_X = VL_RAND_RESET_I(1);
    puzzle__DOT__Xand2_2_16__DOT__base__DOT__and0_out_X = VL_RAND_RESET_I(1);
    puzzle__DOT__Xand2b_2_17__DOT__base__DOT__and0_out_X = VL_RAND_RESET_I(1);
    puzzle__DOT__Xnand2_2_30__DOT__base__DOT__nand0_out_Y = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_18__DOT__base__DOT__buf_Q = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_18__DOT__base__DOT__RESET = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_18__DOT__base__DOT__notifier = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_18__DOT__base__DOT__D_delayed = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_18__DOT__base__DOT__RESET_B_delayed = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_18__DOT__base__DOT__CLK_delayed = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_29__DOT__base__DOT__buf_Q = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_29__DOT__base__DOT__RESET = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_29__DOT__base__DOT__notifier = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_29__DOT__base__DOT__D_delayed = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_29__DOT__base__DOT__RESET_B_delayed = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_29__DOT__base__DOT__CLK_delayed = VL_RAND_RESET_I(1);
    puzzle__DOT__Xor3_2_2__DOT__base__DOT__or0_out_X = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfstp_2_0__DOT__base__DOT__buf_Q = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfstp_2_0__DOT__base__DOT__SET = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfstp_2_0__DOT__base__DOT__notifier = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfstp_2_0__DOT__base__DOT__D_delayed = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfstp_2_0__DOT__base__DOT__SET_B_delayed = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfstp_2_0__DOT__base__DOT__CLK_delayed = VL_RAND_RESET_I(1);
    puzzle__DOT__Xxor2_2_5__DOT__base__DOT__xor0_out_X = VL_RAND_RESET_I(1);
    puzzle__DOT__Xnand2_2_20__DOT__base__DOT__nand0_out_Y = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_19__DOT__base__DOT__buf_Q = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_19__DOT__base__DOT__RESET = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_19__DOT__base__DOT__notifier = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_19__DOT__base__DOT__D_delayed = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_19__DOT__base__DOT__RESET_B_delayed = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_19__DOT__base__DOT__CLK_delayed = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfstp_2_1__DOT__base__DOT__buf_Q = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfstp_2_1__DOT__base__DOT__SET = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfstp_2_1__DOT__base__DOT__notifier = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfstp_2_1__DOT__base__DOT__D_delayed = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfstp_2_1__DOT__base__DOT__SET_B_delayed = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfstp_2_1__DOT__base__DOT__CLK_delayed = VL_RAND_RESET_I(1);
    puzzle__DOT__Xxor2_2_6__DOT__base__DOT__xor0_out_X = VL_RAND_RESET_I(1);
    puzzle__DOT__Xand3_2_8__DOT__base__DOT__and0_out_X = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_0__DOT__base__DOT__buf_Q = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_0__DOT__base__DOT__RESET = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_0__DOT__base__DOT__notifier = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_0__DOT__base__DOT__D_delayed = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_0__DOT__base__DOT__RESET_B_delayed = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_0__DOT__base__DOT__CLK_delayed = VL_RAND_RESET_I(1);
    puzzle__DOT__Xnand2_2_21__DOT__base__DOT__nand0_out_Y = VL_RAND_RESET_I(1);
    puzzle__DOT__Xnand2_2_32__DOT__base__DOT__nand0_out_Y = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfstp_2_2__DOT__base__DOT__buf_Q = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfstp_2_2__DOT__base__DOT__SET = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfstp_2_2__DOT__base__DOT__notifier = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfstp_2_2__DOT__base__DOT__D_delayed = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfstp_2_2__DOT__base__DOT__SET_B_delayed = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfstp_2_2__DOT__base__DOT__CLK_delayed = VL_RAND_RESET_I(1);
    puzzle__DOT__Xxor2_2_7__DOT__base__DOT__xor0_out_X = VL_RAND_RESET_I(1);
    puzzle__DOT__Xand3_2_9__DOT__base__DOT__and0_out_X = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_1__DOT__base__DOT__buf_Q = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_1__DOT__base__DOT__RESET = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_1__DOT__base__DOT__notifier = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_1__DOT__base__DOT__D_delayed = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_1__DOT__base__DOT__RESET_B_delayed = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_1__DOT__base__DOT__CLK_delayed = VL_RAND_RESET_I(1);
    puzzle__DOT__Xo21a_2_0__DOT__base__DOT__and0_out_X = VL_RAND_RESET_I(1);
    puzzle__DOT__Xnand2_2_11__DOT__base__DOT__nand0_out_Y = VL_RAND_RESET_I(1);
    puzzle__DOT__Xnand2_2_22__DOT__base__DOT__nand0_out_Y = VL_RAND_RESET_I(1);
    puzzle__DOT__Xor3_2_5__DOT__base__DOT__or0_out_X = VL_RAND_RESET_I(1);
    puzzle__DOT__Xand3b_2_0__DOT__base__DOT__and0_out_X = VL_RAND_RESET_I(1);
    puzzle__DOT__Xnor2_2_0__DOT__base__DOT__nor0_out_Y = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfstp_2_3__DOT__base__DOT__buf_Q = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfstp_2_3__DOT__base__DOT__SET = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfstp_2_3__DOT__base__DOT__notifier = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfstp_2_3__DOT__base__DOT__D_delayed = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfstp_2_3__DOT__base__DOT__SET_B_delayed = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfstp_2_3__DOT__base__DOT__CLK_delayed = VL_RAND_RESET_I(1);
    puzzle__DOT__Xxor2_2_8__DOT__base__DOT__xor0_out_X = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_2__DOT__base__DOT__buf_Q = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_2__DOT__base__DOT__RESET = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_2__DOT__base__DOT__notifier = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_2__DOT__base__DOT__D_delayed = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_2__DOT__base__DOT__RESET_B_delayed = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_2__DOT__base__DOT__CLK_delayed = VL_RAND_RESET_I(1);
    puzzle__DOT__Xxnor2_2_0__DOT__base__DOT__xnor0_out_Y = VL_RAND_RESET_I(1);
    puzzle__DOT__Xnor2_2_1__DOT__base__DOT__nor0_out_Y = VL_RAND_RESET_I(1);
    puzzle__DOT__Xand2_2_0__DOT__base__DOT__and0_out_X = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_3__DOT__base__DOT__buf_Q = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_3__DOT__base__DOT__RESET = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_3__DOT__base__DOT__notifier = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_3__DOT__base__DOT__D_delayed = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_3__DOT__base__DOT__RESET_B_delayed = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_3__DOT__base__DOT__CLK_delayed = VL_RAND_RESET_I(1);
    puzzle__DOT__Xxnor2_2_1__DOT__base__DOT__xnor0_out_Y = VL_RAND_RESET_I(1);
    puzzle__DOT__Xnand2_2_13__DOT__base__DOT__nand0_out_Y = VL_RAND_RESET_I(1);
    puzzle__DOT__Xnor4b_2_0__DOT__base__DOT__nor0_out_Y = VL_RAND_RESET_I(1);
    puzzle__DOT__Xnor2_2_2__DOT__base__DOT__nor0_out_Y = VL_RAND_RESET_I(1);
    puzzle__DOT__Xnand2b_2_10__DOT__base__DOT__or0_out_Y = VL_RAND_RESET_I(1);
    puzzle__DOT__Xnor2_2_20__DOT__base__DOT__nor0_out_Y = VL_RAND_RESET_I(1);
    puzzle__DOT__Xand2_2_1__DOT__base__DOT__and0_out_X = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_4__DOT__base__DOT__buf_Q = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_4__DOT__base__DOT__RESET = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_4__DOT__base__DOT__notifier = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_4__DOT__base__DOT__D_delayed = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_4__DOT__base__DOT__RESET_B_delayed = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_4__DOT__base__DOT__CLK_delayed = VL_RAND_RESET_I(1);
    puzzle__DOT__Xxnor2_2_2__DOT__base__DOT__xnor0_out_Y = VL_RAND_RESET_I(1);
    puzzle__DOT__Xnor4b_2_1__DOT__base__DOT__nor0_out_Y = VL_RAND_RESET_I(1);
    puzzle__DOT__Xnand2_2_14__DOT__base__DOT__nand0_out_Y = VL_RAND_RESET_I(1);
    puzzle__DOT__Xnand2b_2_11__DOT__base__DOT__or0_out_Y = VL_RAND_RESET_I(1);
    puzzle__DOT__Xnor2_2_10__DOT__base__DOT__nor0_out_Y = VL_RAND_RESET_I(1);
    puzzle__DOT__Xnor2_2_21__DOT__base__DOT__nor0_out_Y = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_5__DOT__base__DOT__buf_Q = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_5__DOT__base__DOT__RESET = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_5__DOT__base__DOT__notifier = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_5__DOT__base__DOT__D_delayed = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_5__DOT__base__DOT__RESET_B_delayed = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_5__DOT__base__DOT__CLK_delayed = VL_RAND_RESET_I(1);
    puzzle__DOT__Xxnor2_2_3__DOT__base__DOT__xnor0_out_Y = VL_RAND_RESET_I(1);
    puzzle__DOT__Xnand2_2_15__DOT__base__DOT__nand0_out_Y = VL_RAND_RESET_I(1);
    puzzle__DOT__Xnor2_2_4__DOT__base__DOT__nor0_out_Y = VL_RAND_RESET_I(1);
    puzzle__DOT__Xnand2b_2_12__DOT__base__DOT__or0_out_Y = VL_RAND_RESET_I(1);
    puzzle__DOT__Xnor2_2_11__DOT__base__DOT__nor0_out_Y = VL_RAND_RESET_I(1);
    puzzle__DOT__Xnor2_2_22__DOT__base__DOT__nor0_out_Y = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_6__DOT__base__DOT__buf_Q = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_6__DOT__base__DOT__RESET = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_6__DOT__base__DOT__notifier = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_6__DOT__base__DOT__D_delayed = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_6__DOT__base__DOT__RESET_B_delayed = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_6__DOT__base__DOT__CLK_delayed = VL_RAND_RESET_I(1);
    puzzle__DOT__Xxnor2_2_4__DOT__base__DOT__xnor0_out_Y = VL_RAND_RESET_I(1);
    puzzle__DOT__Xnand2_2_16__DOT__base__DOT__nand0_out_Y = VL_RAND_RESET_I(1);
    puzzle__DOT__Xnand2_2_27__DOT__base__DOT__nand0_out_Y = VL_RAND_RESET_I(1);
    puzzle__DOT__Xnor2_2_5__DOT__base__DOT__nor0_out_Y = VL_RAND_RESET_I(1);
    puzzle__DOT__Xnor2_2_12__DOT__base__DOT__nor0_out_Y = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_7__DOT__base__DOT__buf_Q = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_7__DOT__base__DOT__RESET = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_7__DOT__base__DOT__notifier = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_7__DOT__base__DOT__D_delayed = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_7__DOT__base__DOT__RESET_B_delayed = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_7__DOT__base__DOT__CLK_delayed = VL_RAND_RESET_I(1);
    puzzle__DOT__Xxnor2_2_5__DOT__base__DOT__xnor0_out_Y = VL_RAND_RESET_I(1);
    puzzle__DOT__Xo22ai_2_0__DOT__base__DOT__or0_out_Y = VL_RAND_RESET_I(1);
    puzzle__DOT__Xnand2_2_17__DOT__base__DOT__nand0_out_Y = VL_RAND_RESET_I(1);
    puzzle__DOT__Xnand2_2_28__DOT__base__DOT__nand0_out_Y = VL_RAND_RESET_I(1);
    puzzle__DOT__Xor2_2_0__DOT__base__DOT__or0_out_X = VL_RAND_RESET_I(1);
    puzzle__DOT__Xnor2_2_24__DOT__base__DOT__nor0_out_Y = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_8__DOT__base__DOT__buf_Q = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_8__DOT__base__DOT__RESET = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_8__DOT__base__DOT__notifier = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_8__DOT__base__DOT__D_delayed = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_8__DOT__base__DOT__RESET_B_delayed = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_8__DOT__base__DOT__CLK_delayed = VL_RAND_RESET_I(1);
    puzzle__DOT__Xnand2_2_29__DOT__base__DOT__nand0_out_Y = VL_RAND_RESET_I(1);
    puzzle__DOT__Xor2_2_1__DOT__base__DOT__or0_out_X = VL_RAND_RESET_I(1);
    puzzle__DOT__Xnor2_2_7__DOT__base__DOT__nor0_out_Y = VL_RAND_RESET_I(1);
    puzzle__DOT__Xnor2_2_47__DOT__base__DOT__nor0_out_Y = VL_RAND_RESET_I(1);
    puzzle__DOT__Xnor2_2_36__DOT__base__DOT__nor0_out_Y = VL_RAND_RESET_I(1);
    puzzle__DOT__Xand2_2_6__DOT__base__DOT__and0_out_X = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_9__DOT__base__DOT__buf_Q = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_9__DOT__base__DOT__RESET = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_9__DOT__base__DOT__notifier = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_9__DOT__base__DOT__D_delayed = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_9__DOT__base__DOT__RESET_B_delayed = VL_RAND_RESET_I(1);
    puzzle__DOT__Xdfrtp_2_9__DOT__base__DOT__CLK_delayed = VL_RAND_RESET_I(1);
    puzzle__DOT__Xxnor2_2_7__DOT__base__DOT__xnor0_out_Y = VL_RAND_RESET_I(1);
    puzzle__DOT__Xnand2_2_19__DOT__base__DOT__nand0_out_Y = VL_RAND_RESET_I(1);
    puzzle__DOT__Xand4bb_2_0__DOT__base__DOT__and0_out_X = VL_RAND_RESET_I(1);
    puzzle__DOT__Xor2_2_2__DOT__base__DOT__or0_out_X = VL_RAND_RESET_I(1);
    puzzle__DOT__Xnor2_2_8__DOT__base__DOT__nor0_out_Y = VL_RAND_RESET_I(1);
    puzzle__DOT__Xnor2_2_37__DOT__base__DOT__nor0_out_Y = VL_RAND_RESET_I(1);
    puzzle__DOT__Xnor2_2_48__DOT__base__DOT__nor0_out_Y = VL_RAND_RESET_I(1);
    puzzle__DOT__Xxnor2_2_8__DOT__base__DOT__xnor0_out_Y = VL_RAND_RESET_I(1);
    puzzle__DOT__Xor2_2_3__DOT__base__DOT__or0_out_X = VL_RAND_RESET_I(1);
    puzzle__DOT__Xnor2_2_9__DOT__base__DOT__nor0_out_Y = VL_RAND_RESET_I(1);
    puzzle__DOT__Xnor2_2_38__DOT__base__DOT__nor0_out_Y = VL_RAND_RESET_I(1);
    puzzle__DOT__Xxnor2_2_9__DOT__base__DOT__xnor0_out_Y = VL_RAND_RESET_I(1);
    puzzle__DOT__Xor2_2_4__DOT__base__DOT__or0_out_X = VL_RAND_RESET_I(1);
    puzzle__DOT__Xnor2_2_17__DOT__base__DOT__nor0_out_Y = VL_RAND_RESET_I(1);
    puzzle__DOT__Xnor2_2_28__DOT__base__DOT__nor0_out_Y = VL_RAND_RESET_I(1);
    puzzle__DOT__Xa21o_2_4__DOT__base__DOT__or0_out_X = VL_RAND_RESET_I(1);
    puzzle__DOT__Xand2b_2_0__DOT__base__DOT__and0_out_X = VL_RAND_RESET_I(1);
    puzzle__DOT__Xxnor2_2_10__DOT__base__DOT__xnor0_out_Y = VL_RAND_RESET_I(1);
    puzzle__DOT__Xo21ai_2_5__DOT__base__DOT__nand0_out_Y = VL_RAND_RESET_I(1);
    puzzle__DOT__Xa21o_2_5__DOT__base__DOT__or0_out_X = VL_RAND_RESET_I(1);
    puzzle__DOT__Xo31ai_2_0__DOT__base__DOT__nand0_out_Y = VL_RAND_RESET_I(1);
    __VinpClk__TOP__puzzle__DOT__Xdfrtp_2_40__DOT__base__DOT__RESET = VL_RAND_RESET_I(1);
    __VinpClk__TOP__puzzle__DOT__Xdfrtp_2_30__DOT__base__DOT__RESET = VL_RAND_RESET_I(1);
    __VinpClk__TOP__puzzle__DOT__Xdfrtp_2_41__DOT__base__DOT__RESET = VL_RAND_RESET_I(1);
    __VinpClk__TOP__puzzle__DOT__Xdfrtp_2_42__DOT__base__DOT__RESET = VL_RAND_RESET_I(1);
    __VinpClk__TOP__puzzle__DOT__Xdfrtp_2_31__DOT__base__DOT__RESET = VL_RAND_RESET_I(1);
    __VinpClk__TOP__puzzle__DOT__Xdfrtp_2_32__DOT__base__DOT__RESET = VL_RAND_RESET_I(1);
    __VinpClk__TOP__puzzle__DOT__Xdfrtp_2_33__DOT__base__DOT__RESET = VL_RAND_RESET_I(1);
    __VinpClk__TOP__puzzle__DOT__Xdfrtp_2_34__DOT__base__DOT__RESET = VL_RAND_RESET_I(1);
    __VinpClk__TOP__puzzle__DOT__Xdfrtp_2_35__DOT__base__DOT__RESET = VL_RAND_RESET_I(1);
    __VinpClk__TOP__puzzle__DOT__Xdfrtp_2_36__DOT__base__DOT__RESET = VL_RAND_RESET_I(1);
    __VinpClk__TOP__puzzle__DOT__Xdfrtp_2_37__DOT__base__DOT__RESET = VL_RAND_RESET_I(1);
    __VinpClk__TOP__puzzle__DOT__Xdfrtp_2_27__DOT__base__DOT__RESET = VL_RAND_RESET_I(1);
    __VinpClk__TOP__puzzle__DOT__Xdfrtp_2_38__DOT__base__DOT__RESET = VL_RAND_RESET_I(1);
    __VinpClk__TOP__puzzle__DOT__Xdfrtp_2_39__DOT__base__DOT__RESET = VL_RAND_RESET_I(1);
    __VinpClk__TOP__puzzle__DOT__Xdfrtp_2_29__DOT__base__DOT__RESET = VL_RAND_RESET_I(1);
    __VinpClk__TOP__puzzle__DOT__Xdfrtp_2_28__DOT__base__DOT__RESET = VL_RAND_RESET_I(1);
    __VinpClk__TOP__puzzle__DOT__Xdfstp_2_0__DOT__base__DOT__SET = VL_RAND_RESET_I(1);
    __VinpClk__TOP__puzzle__DOT__Xdfstp_2_2__DOT__base__DOT__SET = VL_RAND_RESET_I(1);
    __VinpClk__TOP__puzzle__DOT__Xdfstp_2_3__DOT__base__DOT__SET = VL_RAND_RESET_I(1);
    __VinpClk__TOP__puzzle__DOT__Xdfrtp_2_49__DOT__base__DOT__RESET = VL_RAND_RESET_I(1);
    __VinpClk__TOP__puzzle__DOT__Xdfrtp_2_80__DOT__base__DOT__RESET = VL_RAND_RESET_I(1);
    __VinpClk__TOP__puzzle__DOT__Xdfrtp_2_70__DOT__base__DOT__RESET = VL_RAND_RESET_I(1);
    __VinpClk__TOP__puzzle__DOT__Xdfrtp_2_60__DOT__base__DOT__RESET = VL_RAND_RESET_I(1);
    __VinpClk__TOP__puzzle__DOT__Xdfrtp_2_71__DOT__base__DOT__RESET = VL_RAND_RESET_I(1);
    __VinpClk__TOP__puzzle__DOT__Xdfrtp_2_61__DOT__base__DOT__RESET = VL_RAND_RESET_I(1);
    __VinpClk__TOP__puzzle__DOT__Xdfrtp_2_72__DOT__base__DOT__RESET = VL_RAND_RESET_I(1);
    __VinpClk__TOP__puzzle__DOT__Xdfrtp_2_62__DOT__base__DOT__RESET = VL_RAND_RESET_I(1);
    __VinpClk__TOP__puzzle__DOT__Xdfrtp_2_52__DOT__base__DOT__RESET = VL_RAND_RESET_I(1);
    __VinpClk__TOP__puzzle__DOT__Xdfrtp_2_63__DOT__base__DOT__RESET = VL_RAND_RESET_I(1);
    __VinpClk__TOP__puzzle__DOT__Xdfrtp_2_75__DOT__base__DOT__RESET = VL_RAND_RESET_I(1);
    __VinpClk__TOP__puzzle__DOT__Xdfrtp_2_64__DOT__base__DOT__RESET = VL_RAND_RESET_I(1);
    __VinpClk__TOP__puzzle__DOT__Xdfrtp_2_53__DOT__base__DOT__RESET = VL_RAND_RESET_I(1);
    __VinpClk__TOP__puzzle__DOT__Xdfrtp_2_10__DOT__base__DOT__RESET = VL_RAND_RESET_I(1);
    __VinpClk__TOP__puzzle__DOT__Xdfrtp_2_65__DOT__base__DOT__RESET = VL_RAND_RESET_I(1);
    __VinpClk__TOP__puzzle__DOT__Xdfrtp_2_76__DOT__base__DOT__RESET = VL_RAND_RESET_I(1);
    __VinpClk__TOP__puzzle__DOT__Xdfrtp_2_54__DOT__base__DOT__RESET = VL_RAND_RESET_I(1);
    __VinpClk__TOP__puzzle__DOT__Xdfrtp_2_11__DOT__base__DOT__RESET = VL_RAND_RESET_I(1);
    __VinpClk__TOP__puzzle__DOT__Xdfrtp_2_66__DOT__base__DOT__RESET = VL_RAND_RESET_I(1);
    __VinpClk__TOP__puzzle__DOT__Xdfrtp_2_77__DOT__base__DOT__RESET = VL_RAND_RESET_I(1);
    __VinpClk__TOP__puzzle__DOT__Xdfrtp_2_55__DOT__base__DOT__RESET = VL_RAND_RESET_I(1);
    __VinpClk__TOP__puzzle__DOT__Xdfrtp_2_12__DOT__base__DOT__RESET = VL_RAND_RESET_I(1);
    __VinpClk__TOP__puzzle__DOT__Xdfrtp_2_67__DOT__base__DOT__RESET = VL_RAND_RESET_I(1);
    __VinpClk__TOP__puzzle__DOT__Xdfrtp_2_56__DOT__base__DOT__RESET = VL_RAND_RESET_I(1);
    __VinpClk__TOP__puzzle__DOT__Xdfrtp_2_78__DOT__base__DOT__RESET = VL_RAND_RESET_I(1);
    __VinpClk__TOP__puzzle__DOT__Xdfrtp_2_13__DOT__base__DOT__RESET = VL_RAND_RESET_I(1);
    __VinpClk__TOP__puzzle__DOT__Xdfrtp_2_68__DOT__base__DOT__RESET = VL_RAND_RESET_I(1);
    __VinpClk__TOP__puzzle__DOT__Xdfrtp_2_57__DOT__base__DOT__RESET = VL_RAND_RESET_I(1);
    __VinpClk__TOP__puzzle__DOT__Xdfrtp_2_79__DOT__base__DOT__RESET = VL_RAND_RESET_I(1);
    __VinpClk__TOP__puzzle__DOT__Xdfrtp_2_14__DOT__base__DOT__RESET = VL_RAND_RESET_I(1);
    __VinpClk__TOP__puzzle__DOT__Xdfrtp_2_58__DOT__base__DOT__RESET = VL_RAND_RESET_I(1);
    __VinpClk__TOP__puzzle__DOT__Xdfrtp_2_69__DOT__base__DOT__RESET = VL_RAND_RESET_I(1);
    __VinpClk__TOP__puzzle__DOT__Xdfrtp_2_59__DOT__base__DOT__RESET = VL_RAND_RESET_I(1);
    __VinpClk__TOP__puzzle__DOT__Xdfrtp_2_0__DOT__base__DOT__RESET = VL_RAND_RESET_I(1);
    __VinpClk__TOP__puzzle__DOT__Xdfrtp_2_1__DOT__base__DOT__RESET = VL_RAND_RESET_I(1);
    __VinpClk__TOP__puzzle__DOT__Xdfrtp_2_2__DOT__base__DOT__RESET = VL_RAND_RESET_I(1);
    __VinpClk__TOP__puzzle__DOT__Xdfrtp_2_3__DOT__base__DOT__RESET = VL_RAND_RESET_I(1);
    __VinpClk__TOP__puzzle__DOT__Xdfrtp_2_4__DOT__base__DOT__RESET = VL_RAND_RESET_I(1);
    __VinpClk__TOP__puzzle__DOT__Xdfrtp_2_5__DOT__base__DOT__RESET = VL_RAND_RESET_I(1);
    __VinpClk__TOP__puzzle__DOT__Xdfrtp_2_6__DOT__base__DOT__RESET = VL_RAND_RESET_I(1);
    __VinpClk__TOP__puzzle__DOT__Xdfrtp_2_7__DOT__base__DOT__RESET = VL_RAND_RESET_I(1);
    __VinpClk__TOP__puzzle__DOT__Xdfrtp_2_8__DOT__base__DOT__RESET = VL_RAND_RESET_I(1);
    __VinpClk__TOP__puzzle__DOT__Xdfrtp_2_9__DOT__base__DOT__RESET = VL_RAND_RESET_I(1);
    __VinpClk__TOP__puzzle__DOT__Xdfrtp_2_73__DOT__base__DOT__RESET = VL_RAND_RESET_I(1);
    __VinpClk__TOP__puzzle__DOT__Xdfrtp_2_74__DOT__base__DOT__RESET = VL_RAND_RESET_I(1);
    __VinpClk__TOP__puzzle__DOT__Xdfstp_2_1__DOT__base__DOT__SET = VL_RAND_RESET_I(1);
    __VinpClk__TOP__puzzle__DOT__Xdfrtp_2_51__DOT__base__DOT__RESET = VL_RAND_RESET_I(1);
    __VinpClk__TOP__puzzle__DOT__Xdfrtp_2_48__DOT__base__DOT__RESET = VL_RAND_RESET_I(1);
    __VinpClk__TOP__puzzle__DOT__Xdfrtp_2_50__DOT__base__DOT__RESET = VL_RAND_RESET_I(1);
    __VinpClk__TOP__puzzle__DOT__Xdfrtp_2_47__DOT__base__DOT__RESET = VL_RAND_RESET_I(1);
    __VinpClk__TOP__puzzle__DOT__Xdfrtp_2_83__DOT__base__DOT__RESET = VL_RAND_RESET_I(1);
    __VinpClk__TOP__puzzle__DOT__Xdfrtp_2_82__DOT__base__DOT__RESET = VL_RAND_RESET_I(1);
    __VinpClk__TOP__puzzle__DOT__Xdfrtp_2_81__DOT__base__DOT__RESET = VL_RAND_RESET_I(1);
    __VinpClk__TOP__puzzle__DOT__Xdfrtp_2_20__DOT__base__DOT__RESET = VL_RAND_RESET_I(1);
    __VinpClk__TOP__puzzle__DOT__Xdfrtp_2_25__DOT__base__DOT__RESET = VL_RAND_RESET_I(1);
    __VinpClk__TOP__puzzle__DOT__Xdfrtp_2_21__DOT__base__DOT__RESET = VL_RAND_RESET_I(1);
    __VinpClk__TOP__puzzle__DOT__Xdfrtp_2_22__DOT__base__DOT__RESET = VL_RAND_RESET_I(1);
    __VinpClk__TOP__puzzle__DOT__Xdfrtp_2_19__DOT__base__DOT__RESET = VL_RAND_RESET_I(1);
    __VinpClk__TOP__puzzle__DOT__Xdfrtp_2_24__DOT__base__DOT__RESET = VL_RAND_RESET_I(1);
    __VinpClk__TOP__puzzle__DOT__Xdfrtp_1_26__DOT__base__DOT__RESET = VL_RAND_RESET_I(1);
    __VinpClk__TOP__puzzle__DOT__Xdfrtp_2_23__DOT__base__DOT__RESET = VL_RAND_RESET_I(1);
    __VinpClk__TOP__puzzle__DOT__Xdfrtp_2_45__DOT__base__DOT__RESET = VL_RAND_RESET_I(1);
    __VinpClk__TOP__puzzle__DOT__Xdfrtp_2_46__DOT__base__DOT__RESET = VL_RAND_RESET_I(1);
    __VinpClk__TOP__puzzle__DOT__Xdfrtp_2_44__DOT__base__DOT__RESET = VL_RAND_RESET_I(1);
    __VinpClk__TOP__puzzle__DOT__Xdfrtp_2_43__DOT__base__DOT__RESET = VL_RAND_RESET_I(1);
    __VinpClk__TOP__puzzle__DOT__Xdfrtp_2_18__DOT__base__DOT__RESET = VL_RAND_RESET_I(1);
    __VinpClk__TOP__puzzle__DOT__Xdfrtp_2_15__DOT__base__DOT__RESET = VL_RAND_RESET_I(1);
    __VinpClk__TOP__puzzle__DOT__Xdfrtp_2_16__DOT__base__DOT__RESET = VL_RAND_RESET_I(1);
    __VinpClk__TOP__puzzle__DOT__Xdfrtp_2_17__DOT__base__DOT__RESET = VL_RAND_RESET_I(1);
    __Vchglast__TOP__puzzle__DOT__Xdfrtp_2_80__DOT__base__DOT__RESET = VL_RAND_RESET_I(1);
    __Vchglast__TOP__puzzle__DOT__Xdfrtp_2_70__DOT__base__DOT__RESET = VL_RAND_RESET_I(1);
    __Vchglast__TOP__puzzle__DOT__Xdfrtp_2_81__DOT__base__DOT__RESET = VL_RAND_RESET_I(1);
    __Vchglast__TOP__puzzle__DOT__Xdfrtp_2_60__DOT__base__DOT__RESET = VL_RAND_RESET_I(1);
    __Vchglast__TOP__puzzle__DOT__Xdfrtp_2_82__DOT__base__DOT__RESET = VL_RAND_RESET_I(1);
    __Vchglast__TOP__puzzle__DOT__Xdfrtp_2_71__DOT__base__DOT__RESET = VL_RAND_RESET_I(1);
    __Vchglast__TOP__puzzle__DOT__Xdfrtp_2_61__DOT__base__DOT__RESET = VL_RAND_RESET_I(1);
    __Vchglast__TOP__puzzle__DOT__Xdfrtp_2_50__DOT__base__DOT__RESET = VL_RAND_RESET_I(1);
    __Vchglast__TOP__puzzle__DOT__Xdfrtp_2_83__DOT__base__DOT__RESET = VL_RAND_RESET_I(1);
    __Vchglast__TOP__puzzle__DOT__Xdfrtp_2_72__DOT__base__DOT__RESET = VL_RAND_RESET_I(1);
    __Vchglast__TOP__puzzle__DOT__Xdfrtp_2_51__DOT__base__DOT__RESET = VL_RAND_RESET_I(1);
    __Vchglast__TOP__puzzle__DOT__Xdfrtp_2_40__DOT__base__DOT__RESET = VL_RAND_RESET_I(1);
    __Vchglast__TOP__puzzle__DOT__Xdfrtp_2_73__DOT__base__DOT__RESET = VL_RAND_RESET_I(1);
    __Vchglast__TOP__puzzle__DOT__Xdfrtp_2_62__DOT__base__DOT__RESET = VL_RAND_RESET_I(1);
    __Vchglast__TOP__puzzle__DOT__Xdfrtp_2_52__DOT__base__DOT__RESET = VL_RAND_RESET_I(1);
    __Vchglast__TOP__puzzle__DOT__Xdfrtp_2_30__DOT__base__DOT__RESET = VL_RAND_RESET_I(1);
    __Vchglast__TOP__puzzle__DOT__Xdfrtp_2_41__DOT__base__DOT__RESET = VL_RAND_RESET_I(1);
    __Vchglast__TOP__puzzle__DOT__Xdfrtp_2_74__DOT__base__DOT__RESET = VL_RAND_RESET_I(1);
    __Vchglast__TOP__puzzle__DOT__Xdfrtp_2_63__DOT__base__DOT__RESET = VL_RAND_RESET_I(1);
    __Vchglast__TOP__puzzle__DOT__Xdfrtp_2_20__DOT__base__DOT__RESET = VL_RAND_RESET_I(1);
    __Vchglast__TOP__puzzle__DOT__Xdfrtp_2_42__DOT__base__DOT__RESET = VL_RAND_RESET_I(1);
    __Vchglast__TOP__puzzle__DOT__Xdfrtp_2_31__DOT__base__DOT__RESET = VL_RAND_RESET_I(1);
    __Vchglast__TOP__puzzle__DOT__Xdfrtp_2_75__DOT__base__DOT__RESET = VL_RAND_RESET_I(1);
    __Vchglast__TOP__puzzle__DOT__Xdfrtp_2_64__DOT__base__DOT__RESET = VL_RAND_RESET_I(1);
    __Vchglast__TOP__puzzle__DOT__Xdfrtp_2_53__DOT__base__DOT__RESET = VL_RAND_RESET_I(1);
    __Vchglast__TOP__puzzle__DOT__Xdfrtp_2_10__DOT__base__DOT__RESET = VL_RAND_RESET_I(1);
    __Vchglast__TOP__puzzle__DOT__Xdfrtp_2_21__DOT__base__DOT__RESET = VL_RAND_RESET_I(1);
    __Vchglast__TOP__puzzle__DOT__Xdfrtp_2_43__DOT__base__DOT__RESET = VL_RAND_RESET_I(1);
    __Vchglast__TOP__puzzle__DOT__Xdfrtp_2_32__DOT__base__DOT__RESET = VL_RAND_RESET_I(1);
    __Vchglast__TOP__puzzle__DOT__Xdfrtp_2_65__DOT__base__DOT__RESET = VL_RAND_RESET_I(1);
    __Vchglast__TOP__puzzle__DOT__Xdfrtp_2_76__DOT__base__DOT__RESET = VL_RAND_RESET_I(1);
    __Vchglast__TOP__puzzle__DOT__Xdfrtp_2_54__DOT__base__DOT__RESET = VL_RAND_RESET_I(1);
    __Vchglast__TOP__puzzle__DOT__Xdfrtp_2_22__DOT__base__DOT__RESET = VL_RAND_RESET_I(1);
    __Vchglast__TOP__puzzle__DOT__Xdfrtp_2_11__DOT__base__DOT__RESET = VL_RAND_RESET_I(1);
    __Vchglast__TOP__puzzle__DOT__Xdfrtp_2_33__DOT__base__DOT__RESET = VL_RAND_RESET_I(1);
    __Vchglast__TOP__puzzle__DOT__Xdfrtp_2_66__DOT__base__DOT__RESET = VL_RAND_RESET_I(1);
    __Vchglast__TOP__puzzle__DOT__Xdfrtp_2_77__DOT__base__DOT__RESET = VL_RAND_RESET_I(1);
    __Vchglast__TOP__puzzle__DOT__Xdfrtp_2_55__DOT__base__DOT__RESET = VL_RAND_RESET_I(1);
    __Vchglast__TOP__puzzle__DOT__Xdfrtp_2_44__DOT__base__DOT__RESET = VL_RAND_RESET_I(1);
    __Vchglast__TOP__puzzle__DOT__Xdfrtp_2_23__DOT__base__DOT__RESET = VL_RAND_RESET_I(1);
    __Vchglast__TOP__puzzle__DOT__Xdfrtp_2_12__DOT__base__DOT__RESET = VL_RAND_RESET_I(1);
    __Vchglast__TOP__puzzle__DOT__Xdfrtp_2_34__DOT__base__DOT__RESET = VL_RAND_RESET_I(1);
    __Vchglast__TOP__puzzle__DOT__Xdfrtp_2_67__DOT__base__DOT__RESET = VL_RAND_RESET_I(1);
    __Vchglast__TOP__puzzle__DOT__Xdfrtp_2_56__DOT__base__DOT__RESET = VL_RAND_RESET_I(1);
    __Vchglast__TOP__puzzle__DOT__Xdfrtp_2_45__DOT__base__DOT__RESET = VL_RAND_RESET_I(1);
    __Vchglast__TOP__puzzle__DOT__Xdfrtp_2_78__DOT__base__DOT__RESET = VL_RAND_RESET_I(1);
    __Vchglast__TOP__puzzle__DOT__Xdfrtp_2_24__DOT__base__DOT__RESET = VL_RAND_RESET_I(1);
    __Vchglast__TOP__puzzle__DOT__Xdfrtp_2_13__DOT__base__DOT__RESET = VL_RAND_RESET_I(1);
    __Vchglast__TOP__puzzle__DOT__Xdfrtp_2_68__DOT__base__DOT__RESET = VL_RAND_RESET_I(1);
    __Vchglast__TOP__puzzle__DOT__Xdfrtp_2_57__DOT__base__DOT__RESET = VL_RAND_RESET_I(1);
    __Vchglast__TOP__puzzle__DOT__Xdfrtp_2_35__DOT__base__DOT__RESET = VL_RAND_RESET_I(1);
    __Vchglast__TOP__puzzle__DOT__Xdfrtp_2_46__DOT__base__DOT__RESET = VL_RAND_RESET_I(1);
    __Vchglast__TOP__puzzle__DOT__Xdfrtp_2_79__DOT__base__DOT__RESET = VL_RAND_RESET_I(1);
    __Vchglast__TOP__puzzle__DOT__Xdfrtp_2_25__DOT__base__DOT__RESET = VL_RAND_RESET_I(1);
    __Vchglast__TOP__puzzle__DOT__Xdfrtp_2_14__DOT__base__DOT__RESET = VL_RAND_RESET_I(1);
    __Vchglast__TOP__puzzle__DOT__Xdfrtp_2_47__DOT__base__DOT__RESET = VL_RAND_RESET_I(1);
    __Vchglast__TOP__puzzle__DOT__Xdfrtp_2_58__DOT__base__DOT__RESET = VL_RAND_RESET_I(1);
    __Vchglast__TOP__puzzle__DOT__Xdfrtp_2_36__DOT__base__DOT__RESET = VL_RAND_RESET_I(1);
    __Vchglast__TOP__puzzle__DOT__Xdfrtp_2_69__DOT__base__DOT__RESET = VL_RAND_RESET_I(1);
    __Vchglast__TOP__puzzle__DOT__Xdfrtp_2_15__DOT__base__DOT__RESET = VL_RAND_RESET_I(1);
    __Vchglast__TOP__puzzle__DOT__Xdfrtp_2_48__DOT__base__DOT__RESET = VL_RAND_RESET_I(1);
    __Vchglast__TOP__puzzle__DOT__Xdfrtp_1_26__DOT__base__DOT__RESET = VL_RAND_RESET_I(1);
    __Vchglast__TOP__puzzle__DOT__Xdfrtp_2_59__DOT__base__DOT__RESET = VL_RAND_RESET_I(1);
    __Vchglast__TOP__puzzle__DOT__Xdfrtp_2_37__DOT__base__DOT__RESET = VL_RAND_RESET_I(1);
    __Vchglast__TOP__puzzle__DOT__Xdfrtp_2_16__DOT__base__DOT__RESET = VL_RAND_RESET_I(1);
    __Vchglast__TOP__puzzle__DOT__Xdfrtp_2_49__DOT__base__DOT__RESET = VL_RAND_RESET_I(1);
    __Vchglast__TOP__puzzle__DOT__Xdfrtp_2_27__DOT__base__DOT__RESET = VL_RAND_RESET_I(1);
    __Vchglast__TOP__puzzle__DOT__Xdfrtp_2_38__DOT__base__DOT__RESET = VL_RAND_RESET_I(1);
    __Vchglast__TOP__puzzle__DOT__Xdfrtp_2_28__DOT__base__DOT__RESET = VL_RAND_RESET_I(1);
    __Vchglast__TOP__puzzle__DOT__Xdfrtp_2_17__DOT__base__DOT__RESET = VL_RAND_RESET_I(1);
    __Vchglast__TOP__puzzle__DOT__Xdfrtp_2_39__DOT__base__DOT__RESET = VL_RAND_RESET_I(1);
    __Vchglast__TOP__puzzle__DOT__Xdfrtp_2_18__DOT__base__DOT__RESET = VL_RAND_RESET_I(1);
    __Vchglast__TOP__puzzle__DOT__Xdfrtp_2_29__DOT__base__DOT__RESET = VL_RAND_RESET_I(1);
    __Vchglast__TOP__puzzle__DOT__Xdfstp_2_0__DOT__base__DOT__SET = VL_RAND_RESET_I(1);
    __Vchglast__TOP__puzzle__DOT__Xdfrtp_2_19__DOT__base__DOT__RESET = VL_RAND_RESET_I(1);
    __Vchglast__TOP__puzzle__DOT__Xdfstp_2_1__DOT__base__DOT__SET = VL_RAND_RESET_I(1);
    __Vchglast__TOP__puzzle__DOT__Xdfrtp_2_0__DOT__base__DOT__RESET = VL_RAND_RESET_I(1);
    __Vchglast__TOP__puzzle__DOT__Xdfstp_2_2__DOT__base__DOT__SET = VL_RAND_RESET_I(1);
    __Vchglast__TOP__puzzle__DOT__Xdfrtp_2_1__DOT__base__DOT__RESET = VL_RAND_RESET_I(1);
    __Vchglast__TOP__puzzle__DOT__Xdfstp_2_3__DOT__base__DOT__SET = VL_RAND_RESET_I(1);
    __Vchglast__TOP__puzzle__DOT__Xdfrtp_2_2__DOT__base__DOT__RESET = VL_RAND_RESET_I(1);
    __Vchglast__TOP__puzzle__DOT__Xdfrtp_2_3__DOT__base__DOT__RESET = VL_RAND_RESET_I(1);
    __Vchglast__TOP__puzzle__DOT__Xdfrtp_2_4__DOT__base__DOT__RESET = VL_RAND_RESET_I(1);
    __Vchglast__TOP__puzzle__DOT__Xdfrtp_2_5__DOT__base__DOT__RESET = VL_RAND_RESET_I(1);
    __Vchglast__TOP__puzzle__DOT__Xdfrtp_2_6__DOT__base__DOT__RESET = VL_RAND_RESET_I(1);
    __Vchglast__TOP__puzzle__DOT__Xdfrtp_2_7__DOT__base__DOT__RESET = VL_RAND_RESET_I(1);
    __Vchglast__TOP__puzzle__DOT__Xdfrtp_2_8__DOT__base__DOT__RESET = VL_RAND_RESET_I(1);
    __Vchglast__TOP__puzzle__DOT__Xdfrtp_2_9__DOT__base__DOT__RESET = VL_RAND_RESET_I(1);
    { int __Vi0=0; for (; __Vi0<19; ++__Vi0) {
            __Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }}
}
