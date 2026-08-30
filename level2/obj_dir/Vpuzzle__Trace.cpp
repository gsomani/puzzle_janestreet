// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vpuzzle__Syms.h"


void Vpuzzle::traceChgTop0(void* userp, VerilatedVcd* tracep) {
    Vpuzzle__Syms* __restrict vlSymsp = static_cast<Vpuzzle__Syms*>(userp);
    Vpuzzle* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        vlTOPp->traceChgSub0(userp, tracep);
    }
}

void Vpuzzle::traceChgSub0(void* userp, VerilatedVcd* tracep) {
    Vpuzzle__Syms* __restrict vlSymsp = static_cast<Vpuzzle__Syms*>(userp);
    Vpuzzle* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0U])) {
            tracep->chgBit(oldp+0,(vlTOPp->puzzle__DOT__Xdfrtp_2_80__DOT__base__DOT__RESET));
            tracep->chgBit(oldp+1,(vlTOPp->puzzle__DOT__Xdfrtp_2_70__DOT__base__DOT__RESET));
            tracep->chgBit(oldp+2,(vlTOPp->puzzle__DOT__Xdfrtp_2_81__DOT__base__DOT__RESET));
            tracep->chgBit(oldp+3,(vlTOPp->puzzle__DOT__Xdfrtp_2_60__DOT__base__DOT__RESET));
            tracep->chgBit(oldp+4,(vlTOPp->puzzle__DOT__Xdfrtp_2_82__DOT__base__DOT__RESET));
            tracep->chgBit(oldp+5,(vlTOPp->puzzle__DOT__Xdfrtp_2_71__DOT__base__DOT__RESET));
            tracep->chgBit(oldp+6,(vlTOPp->puzzle__DOT__Xdfrtp_2_61__DOT__base__DOT__RESET));
            tracep->chgBit(oldp+7,(vlTOPp->puzzle__DOT__Xdfrtp_2_50__DOT__base__DOT__RESET));
            tracep->chgBit(oldp+8,(vlTOPp->puzzle__DOT__Xdfrtp_2_83__DOT__base__DOT__RESET));
            tracep->chgBit(oldp+9,(vlTOPp->puzzle__DOT__Xdfrtp_2_72__DOT__base__DOT__RESET));
            tracep->chgBit(oldp+10,(vlTOPp->puzzle__DOT__Xdfrtp_2_51__DOT__base__DOT__RESET));
            tracep->chgBit(oldp+11,(vlTOPp->puzzle__DOT__Xdfrtp_2_40__DOT__base__DOT__RESET));
            tracep->chgBit(oldp+12,(vlTOPp->puzzle__DOT__Xdfrtp_2_73__DOT__base__DOT__RESET));
            tracep->chgBit(oldp+13,(vlTOPp->puzzle__DOT__Xdfrtp_2_62__DOT__base__DOT__RESET));
            tracep->chgBit(oldp+14,(vlTOPp->puzzle__DOT__Xdfrtp_2_52__DOT__base__DOT__RESET));
            tracep->chgBit(oldp+15,(vlTOPp->puzzle__DOT__Xdfrtp_2_30__DOT__base__DOT__RESET));
            tracep->chgBit(oldp+16,(vlTOPp->puzzle__DOT__Xdfrtp_2_41__DOT__base__DOT__RESET));
            tracep->chgBit(oldp+17,(vlTOPp->puzzle__DOT__Xdfrtp_2_74__DOT__base__DOT__RESET));
            tracep->chgBit(oldp+18,(vlTOPp->puzzle__DOT__Xdfrtp_2_63__DOT__base__DOT__RESET));
            tracep->chgBit(oldp+19,(vlTOPp->puzzle__DOT__Xdfrtp_2_20__DOT__base__DOT__RESET));
            tracep->chgBit(oldp+20,(vlTOPp->puzzle__DOT__Xdfrtp_2_42__DOT__base__DOT__RESET));
            tracep->chgBit(oldp+21,(vlTOPp->puzzle__DOT__Xdfrtp_2_31__DOT__base__DOT__RESET));
            tracep->chgBit(oldp+22,(vlTOPp->puzzle__DOT__Xdfrtp_2_75__DOT__base__DOT__RESET));
            tracep->chgBit(oldp+23,(vlTOPp->puzzle__DOT__Xdfrtp_2_64__DOT__base__DOT__RESET));
            tracep->chgBit(oldp+24,(vlTOPp->puzzle__DOT__Xdfrtp_2_53__DOT__base__DOT__RESET));
            tracep->chgBit(oldp+25,(vlTOPp->puzzle__DOT__Xdfrtp_2_10__DOT__base__DOT__RESET));
            tracep->chgBit(oldp+26,(vlTOPp->puzzle__DOT__Xdfrtp_2_21__DOT__base__DOT__RESET));
            tracep->chgBit(oldp+27,(vlTOPp->puzzle__DOT__Xdfrtp_2_43__DOT__base__DOT__RESET));
            tracep->chgBit(oldp+28,(vlTOPp->puzzle__DOT__Xdfrtp_2_32__DOT__base__DOT__RESET));
            tracep->chgBit(oldp+29,(vlTOPp->puzzle__DOT__Xdfrtp_2_65__DOT__base__DOT__RESET));
            tracep->chgBit(oldp+30,(vlTOPp->puzzle__DOT__Xdfrtp_2_76__DOT__base__DOT__RESET));
            tracep->chgBit(oldp+31,(vlTOPp->puzzle__DOT__Xdfrtp_2_54__DOT__base__DOT__RESET));
            tracep->chgBit(oldp+32,(vlTOPp->puzzle__DOT__Xdfrtp_2_22__DOT__base__DOT__RESET));
            tracep->chgBit(oldp+33,(vlTOPp->puzzle__DOT__Xdfrtp_2_11__DOT__base__DOT__RESET));
            tracep->chgBit(oldp+34,(vlTOPp->puzzle__DOT__Xdfrtp_2_33__DOT__base__DOT__RESET));
            tracep->chgBit(oldp+35,(vlTOPp->puzzle__DOT__Xdfrtp_2_66__DOT__base__DOT__RESET));
            tracep->chgBit(oldp+36,(vlTOPp->puzzle__DOT__Xdfrtp_2_77__DOT__base__DOT__RESET));
            tracep->chgBit(oldp+37,(vlTOPp->puzzle__DOT__Xdfrtp_2_55__DOT__base__DOT__RESET));
            tracep->chgBit(oldp+38,(vlTOPp->puzzle__DOT__Xdfrtp_2_44__DOT__base__DOT__RESET));
            tracep->chgBit(oldp+39,(vlTOPp->puzzle__DOT__Xdfrtp_2_23__DOT__base__DOT__RESET));
            tracep->chgBit(oldp+40,(vlTOPp->puzzle__DOT__Xdfrtp_2_12__DOT__base__DOT__RESET));
            tracep->chgBit(oldp+41,(vlTOPp->puzzle__DOT__Xdfrtp_2_34__DOT__base__DOT__RESET));
            tracep->chgBit(oldp+42,(vlTOPp->puzzle__DOT__Xdfrtp_2_67__DOT__base__DOT__RESET));
            tracep->chgBit(oldp+43,(vlTOPp->puzzle__DOT__Xdfrtp_2_56__DOT__base__DOT__RESET));
            tracep->chgBit(oldp+44,(vlTOPp->puzzle__DOT__Xdfrtp_2_45__DOT__base__DOT__RESET));
            tracep->chgBit(oldp+45,(vlTOPp->puzzle__DOT__Xdfrtp_2_78__DOT__base__DOT__RESET));
            tracep->chgBit(oldp+46,(vlTOPp->puzzle__DOT__Xdfrtp_2_24__DOT__base__DOT__RESET));
            tracep->chgBit(oldp+47,(vlTOPp->puzzle__DOT__Xdfrtp_2_13__DOT__base__DOT__RESET));
            tracep->chgBit(oldp+48,(vlTOPp->puzzle__DOT__Xdfrtp_2_68__DOT__base__DOT__RESET));
            tracep->chgBit(oldp+49,(vlTOPp->puzzle__DOT__Xdfrtp_2_57__DOT__base__DOT__RESET));
            tracep->chgBit(oldp+50,(vlTOPp->puzzle__DOT__Xdfrtp_2_35__DOT__base__DOT__RESET));
            tracep->chgBit(oldp+51,(vlTOPp->puzzle__DOT__Xdfrtp_2_46__DOT__base__DOT__RESET));
            tracep->chgBit(oldp+52,(vlTOPp->puzzle__DOT__Xdfrtp_2_79__DOT__base__DOT__RESET));
            tracep->chgBit(oldp+53,(vlTOPp->puzzle__DOT__Xdfrtp_2_25__DOT__base__DOT__RESET));
            tracep->chgBit(oldp+54,(vlTOPp->puzzle__DOT__Xdfrtp_2_14__DOT__base__DOT__RESET));
            tracep->chgBit(oldp+55,(vlTOPp->puzzle__DOT__Xdfrtp_2_47__DOT__base__DOT__RESET));
            tracep->chgBit(oldp+56,(vlTOPp->puzzle__DOT__Xdfrtp_2_58__DOT__base__DOT__RESET));
            tracep->chgBit(oldp+57,(vlTOPp->puzzle__DOT__Xdfrtp_2_36__DOT__base__DOT__RESET));
            tracep->chgBit(oldp+58,(vlTOPp->puzzle__DOT__Xdfrtp_2_69__DOT__base__DOT__RESET));
            tracep->chgBit(oldp+59,(vlTOPp->puzzle__DOT__Xdfrtp_2_15__DOT__base__DOT__RESET));
            tracep->chgBit(oldp+60,(vlTOPp->puzzle__DOT__Xdfrtp_2_48__DOT__base__DOT__RESET));
            tracep->chgBit(oldp+61,(vlTOPp->puzzle__DOT__Xdfrtp_1_26__DOT__base__DOT__RESET));
            tracep->chgBit(oldp+62,(vlTOPp->puzzle__DOT__Xdfrtp_2_59__DOT__base__DOT__RESET));
            tracep->chgBit(oldp+63,(vlTOPp->puzzle__DOT__Xdfrtp_2_37__DOT__base__DOT__RESET));
            tracep->chgBit(oldp+64,(vlTOPp->puzzle__DOT__Xdfrtp_2_16__DOT__base__DOT__RESET));
            tracep->chgBit(oldp+65,(vlTOPp->puzzle__DOT__Xdfrtp_2_49__DOT__base__DOT__RESET));
            tracep->chgBit(oldp+66,(vlTOPp->puzzle__DOT__Xdfrtp_2_27__DOT__base__DOT__RESET));
            tracep->chgBit(oldp+67,(vlTOPp->puzzle__DOT__Xdfrtp_2_38__DOT__base__DOT__RESET));
            tracep->chgBit(oldp+68,(vlTOPp->puzzle__DOT__Xdfrtp_2_28__DOT__base__DOT__RESET));
            tracep->chgBit(oldp+69,(vlTOPp->puzzle__DOT__Xdfrtp_2_17__DOT__base__DOT__RESET));
            tracep->chgBit(oldp+70,(vlTOPp->puzzle__DOT__Xdfrtp_2_39__DOT__base__DOT__RESET));
            tracep->chgBit(oldp+71,(vlTOPp->puzzle__DOT__Xdfrtp_2_18__DOT__base__DOT__RESET));
            tracep->chgBit(oldp+72,(vlTOPp->puzzle__DOT__Xdfrtp_2_29__DOT__base__DOT__RESET));
            tracep->chgBit(oldp+73,(vlTOPp->puzzle__DOT__Xdfstp_2_0__DOT__base__DOT__SET));
            tracep->chgBit(oldp+74,(vlTOPp->puzzle__DOT__Xdfrtp_2_19__DOT__base__DOT__RESET));
            tracep->chgBit(oldp+75,(vlTOPp->puzzle__DOT__Xdfstp_2_1__DOT__base__DOT__SET));
            tracep->chgBit(oldp+76,(vlTOPp->puzzle__DOT__Xdfrtp_2_0__DOT__base__DOT__RESET));
            tracep->chgBit(oldp+77,(vlTOPp->puzzle__DOT__Xdfstp_2_2__DOT__base__DOT__SET));
            tracep->chgBit(oldp+78,(vlTOPp->puzzle__DOT__Xdfrtp_2_1__DOT__base__DOT__RESET));
            tracep->chgBit(oldp+79,(vlTOPp->puzzle__DOT__Xdfstp_2_3__DOT__base__DOT__SET));
            tracep->chgBit(oldp+80,(vlTOPp->puzzle__DOT__Xdfrtp_2_2__DOT__base__DOT__RESET));
            tracep->chgBit(oldp+81,(vlTOPp->puzzle__DOT__Xdfrtp_2_3__DOT__base__DOT__RESET));
            tracep->chgBit(oldp+82,(vlTOPp->puzzle__DOT__Xdfrtp_2_4__DOT__base__DOT__RESET));
            tracep->chgBit(oldp+83,(vlTOPp->puzzle__DOT__Xdfrtp_2_5__DOT__base__DOT__RESET));
            tracep->chgBit(oldp+84,(vlTOPp->puzzle__DOT__Xdfrtp_2_6__DOT__base__DOT__RESET));
            tracep->chgBit(oldp+85,(vlTOPp->puzzle__DOT__Xdfrtp_2_7__DOT__base__DOT__RESET));
            tracep->chgBit(oldp+86,(vlTOPp->puzzle__DOT__Xdfrtp_2_8__DOT__base__DOT__RESET));
            tracep->chgBit(oldp+87,(vlTOPp->puzzle__DOT__Xdfrtp_2_9__DOT__base__DOT__RESET));
        }
        if (VL_UNLIKELY((vlTOPp->__Vm_traceActivity
                         [1U] | vlTOPp->__Vm_traceActivity
                         [2U]))) {
            tracep->chgBit(oldp+88,(((~ (IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_3__DOT__base__DOT__buf_Q)) 
                                     & (IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_2__DOT__base__DOT__buf_Q))));
            tracep->chgBit(oldp+89,((1U & ((~ (IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_2__DOT__base__DOT__buf_Q)) 
                                           | (IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_3__DOT__base__DOT__buf_Q)))));
            tracep->chgBit(oldp+90,(((IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_2__DOT__base__DOT__buf_Q) 
                                     & (IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_3__DOT__base__DOT__buf_Q))));
            tracep->chgBit(oldp+91,((1U & ((IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_3__DOT__base__DOT__buf_Q) 
                                           | (~ (IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_2__DOT__base__DOT__buf_Q))))));
            tracep->chgBit(oldp+92,((1U & (~ ((IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_2__DOT__base__DOT__buf_Q) 
                                              | (IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_3__DOT__base__DOT__buf_Q))))));
        }
        if (VL_UNLIKELY((vlTOPp->__Vm_traceActivity
                         [2U] | vlTOPp->__Vm_traceActivity
                         [3U]))) {
            tracep->chgBit(oldp+93,((1U & (~ ((IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_1__DOT__base__DOT__buf_Q) 
                                              ^ (IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_2__DOT__base__DOT__buf_Q))))));
            tracep->chgBit(oldp+94,(((~ (IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_1__DOT__base__DOT__buf_Q)) 
                                     & (IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_2__DOT__base__DOT__buf_Q))));
            tracep->chgBit(oldp+95,((1U & (~ ((IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_2__DOT__base__DOT__buf_Q) 
                                              | (IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_1__DOT__base__DOT__buf_Q))))));
            tracep->chgBit(oldp+96,(((IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_2__DOT__base__DOT__buf_Q) 
                                     & (IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_1__DOT__base__DOT__buf_Q))));
            tracep->chgBit(oldp+97,(((IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_1__DOT__base__DOT__buf_Q) 
                                     & (IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_2__DOT__base__DOT__buf_Q))));
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[4U])) {
            tracep->chgBit(oldp+98,(vlTOPp->puzzle__DOT__Xand2b_2_11__DOT__base__DOT__and0_out_X));
            tracep->chgBit(oldp+99,(vlTOPp->puzzle__DOT__Xnand4_2_12__DOT__base__DOT__nand0_out_Y));
            tracep->chgBit(oldp+100,(vlTOPp->puzzle__DOT__Xand3_2_9__DOT__base__DOT__and0_out_X));
            tracep->chgBit(oldp+101,(vlTOPp->puzzle__DOT__Xnand4_2_13__DOT__base__DOT__nand0_out_Y));
            tracep->chgBit(oldp+102,(vlTOPp->puzzle__DOT__Xand4_2_2__DOT__base__DOT__and0_out_X));
            tracep->chgBit(oldp+103,(vlTOPp->puzzle__DOT__Xor2_2_10__DOT__base__DOT__or0_out_X));
            tracep->chgBit(oldp+104,(vlTOPp->puzzle__DOT__Xand3_2_11__DOT__base__DOT__and0_out_X));
            tracep->chgBit(oldp+105,((1U & (~ (IData)(vlTOPp->puzzle__DOT__Xand2b_2_11__DOT__base__DOT__and0_out_X)))));
            tracep->chgBit(oldp+106,(vlTOPp->puzzle__DOT__Xnand2_2_14__DOT__base__DOT__nand0_out_Y));
            tracep->chgBit(oldp+107,((1U & (~ (IData)(vlTOPp->puzzle__DOT__Xand3_2_9__DOT__base__DOT__and0_out_X)))));
            tracep->chgBit(oldp+108,(vlTOPp->puzzle__DOT__Xnand2_2_15__DOT__base__DOT__nand0_out_Y));
            tracep->chgBit(oldp+109,(vlTOPp->puzzle__DOT__Xnand2_2_13__DOT__base__DOT__nand0_out_Y));
            tracep->chgBit(oldp+110,((1U & (~ (IData)(vlTOPp->puzzle__DOT__Xand4_2_2__DOT__base__DOT__and0_out_X)))));
            tracep->chgBit(oldp+111,(vlTOPp->puzzle__DOT__Xand2b_2_16__DOT__base__DOT__and0_out_X));
            tracep->chgBit(oldp+112,((1U & (~ (IData)(vlTOPp->puzzle__DOT__Xand3_2_11__DOT__base__DOT__and0_out_X)))));
            tracep->chgBit(oldp+113,((1U & (~ (IData)(vlTOPp->puzzle__DOT__Xnand4_2_12__DOT__base__DOT__nand0_out_Y)))));
            tracep->chgBit(oldp+114,((1U & (~ (IData)(vlTOPp->puzzle__DOT__Xnand4_2_13__DOT__base__DOT__nand0_out_Y)))));
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[5U])) {
            tracep->chgBit(oldp+115,(vlTOPp->puzzle__DOT__Xor2_2_8__DOT__base__DOT__or0_out_X));
            tracep->chgBit(oldp+116,(vlTOPp->puzzle__DOT__Xnand2b_2_8__DOT__base__DOT__or0_out_Y));
            tracep->chgBit(oldp+117,(vlTOPp->puzzle__DOT__Xnand2b_2_9__DOT__base__DOT__or0_out_Y));
            tracep->chgBit(oldp+118,(vlTOPp->puzzle__DOT__Xnand2_2_20__DOT__base__DOT__nand0_out_Y));
            tracep->chgBit(oldp+119,(vlTOPp->puzzle__DOT__Xnor2_2_37__DOT__base__DOT__nor0_out_Y));
            tracep->chgBit(oldp+120,((1U & (~ (IData)(vlTOPp->puzzle__DOT__Xor2_2_8__DOT__base__DOT__or0_out_X)))));
        }
        if (VL_UNLIKELY((vlTOPp->__Vm_traceActivity
                         [5U] | vlTOPp->__Vm_traceActivity
                         [6U]))) {
            tracep->chgBit(oldp+121,(((~ (IData)(vlTOPp->puzzle__DOT__Xor2_2_8__DOT__base__DOT__or0_out_X)) 
                                      & (IData)(vlTOPp->puzzle__DOT__Xnand2b_2_12__DOT__base__DOT__or0_out_Y))));
            tracep->chgBit(oldp+122,(((IData)(vlTOPp->puzzle__DOT__Xnand2_2_19__DOT__base__DOT__nand0_out_Y) 
                                      & (IData)(vlTOPp->puzzle__DOT__Xnand2_2_20__DOT__base__DOT__nand0_out_Y))));
            tracep->chgBit(oldp+123,(((IData)(vlTOPp->puzzle__DOT__Xand2b_2_13__DOT__base__DOT__and0_out_X) 
                                      | (IData)(vlTOPp->puzzle__DOT__Xor2_2_8__DOT__base__DOT__or0_out_X))));
            tracep->chgBit(oldp+124,((((IData)(vlTOPp->puzzle__DOT__Xnand2b_2_8__DOT__base__DOT__or0_out_Y) 
                                       & (IData)(vlTOPp->puzzle__DOT__Xand2_2_6__DOT__base__DOT__and0_out_X)) 
                                      & (IData)(vlTOPp->puzzle__DOT__Xnand2b_2_9__DOT__base__DOT__or0_out_Y))));
            tracep->chgBit(oldp+125,(((IData)(vlTOPp->puzzle__DOT__Xnor2_2_22__DOT__base__DOT__nor0_out_Y) 
                                      | (IData)(vlTOPp->puzzle__DOT__Xnand2_2_20__DOT__base__DOT__nand0_out_Y))));
            tracep->chgBit(oldp+126,(((IData)(vlTOPp->puzzle__DOT__Xor2_2_8__DOT__base__DOT__or0_out_X) 
                                      & (IData)(vlTOPp->puzzle__DOT__Xand2b_2_13__DOT__base__DOT__and0_out_X))));
            tracep->chgBit(oldp+127,(((IData)(vlTOPp->puzzle__DOT__Xnand2b_2_9__DOT__base__DOT__or0_out_Y) 
                                      | (IData)(vlTOPp->puzzle__DOT__Xnor2_2_22__DOT__base__DOT__nor0_out_Y))));
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[6U])) {
            tracep->chgBit(oldp+128,(vlTOPp->puzzle__DOT__Xnand2_2_29__DOT__base__DOT__nand0_out_Y));
            tracep->chgBit(oldp+129,(vlTOPp->puzzle__DOT__Xand2b_2_13__DOT__base__DOT__and0_out_X));
            tracep->chgBit(oldp+130,(vlTOPp->puzzle__DOT__Xnand2b_2_12__DOT__base__DOT__or0_out_Y));
            tracep->chgBit(oldp+131,(vlTOPp->puzzle__DOT__Xand2_2_6__DOT__base__DOT__and0_out_X));
            tracep->chgBit(oldp+132,(vlTOPp->puzzle__DOT__Xand2b_2_15__DOT__base__DOT__and0_out_X));
            tracep->chgBit(oldp+133,(vlTOPp->puzzle__DOT__Xnor2_2_22__DOT__base__DOT__nor0_out_Y));
            tracep->chgBit(oldp+134,(vlTOPp->puzzle__DOT__Xnand2_2_19__DOT__base__DOT__nand0_out_Y));
            tracep->chgBit(oldp+135,(vlTOPp->puzzle__DOT__Xand2b_2_17__DOT__base__DOT__and0_out_X));
            tracep->chgBit(oldp+136,(vlTOPp->puzzle__DOT__Xnor2_2_38__DOT__base__DOT__nor0_out_Y));
            tracep->chgBit(oldp+137,(vlTOPp->puzzle__DOT__Xnand2b_2_11__DOT__base__DOT__or0_out_Y));
            tracep->chgBit(oldp+138,((1U & (~ (IData)(vlTOPp->puzzle__DOT__Xnor2_2_38__DOT__base__DOT__nor0_out_Y)))));
            tracep->chgBit(oldp+139,((1U & (~ (IData)(vlTOPp->puzzle__DOT__Xnor2_2_22__DOT__base__DOT__nor0_out_Y)))));
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[7U])) {
            tracep->chgBit(oldp+140,(vlTOPp->puzzle__DOT__Xnand4_2_14__DOT__base__DOT__nand0_out_Y));
            tracep->chgBit(oldp+141,(vlTOPp->puzzle__DOT__Xa211oi_2_2__DOT__base__DOT__nor0_out_Y));
            tracep->chgBit(oldp+142,(vlTOPp->puzzle__DOT__Xxnor2_2_27__DOT__base__DOT__xnor0_out_Y));
            tracep->chgBit(oldp+143,(vlTOPp->puzzle__DOT__Xa31oi_2_0__DOT__base__DOT__nor0_out_Y));
            tracep->chgBit(oldp+144,(vlTOPp->puzzle__DOT__Xand4b_2_0__DOT__base__DOT__and0_out_X));
            tracep->chgBit(oldp+145,(vlTOPp->puzzle__DOT__Xand3b_2_0__DOT__base__DOT__and0_out_X));
            tracep->chgBit(oldp+146,(vlTOPp->puzzle__DOT__Xnor4b_2_0__DOT__base__DOT__nor0_out_Y));
            tracep->chgBit(oldp+147,((1U & (~ (IData)(vlTOPp->puzzle__DOT__Xand3b_2_0__DOT__base__DOT__and0_out_X)))));
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[8U])) {
            tracep->chgBit(oldp+148,(vlTOPp->puzzle__DOT__Xor2_2_9__DOT__base__DOT__or0_out_X));
            tracep->chgBit(oldp+149,(vlTOPp->puzzle__DOT__Xand2b_2_7__DOT__base__DOT__and0_out_X));
            tracep->chgBit(oldp+150,(vlTOPp->puzzle__DOT__Xand2b_2_12__DOT__base__DOT__and0_out_X));
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[9U])) {
            tracep->chgBit(oldp+151,(vlTOPp->puzzle__DOT__Xand3_2_15__DOT__base__DOT__and0_out_X));
            tracep->chgBit(oldp+152,(vlTOPp->puzzle__DOT__Xnand2_2_32__DOT__base__DOT__nand0_out_Y));
            tracep->chgBit(oldp+153,((1U & (~ (IData)(vlTOPp->puzzle__DOT__Xnand2_2_32__DOT__base__DOT__nand0_out_Y)))));
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0xaU])) {
            tracep->chgBit(oldp+154,(vlTOPp->puzzle__DOT__Xand4bb_2_11__DOT__base__DOT__and0_out_X));
            tracep->chgBit(oldp+155,(vlTOPp->puzzle__DOT__Xnor4_2_1__DOT__base__DOT__nor0_out_Y));
            tracep->chgBit(oldp+156,(vlTOPp->puzzle__DOT__Xand4bb_2_12__DOT__base__DOT__and0_out_X));
            tracep->chgBit(oldp+157,(vlTOPp->puzzle__DOT__Xand4bb_2_10__DOT__base__DOT__and0_out_X));
            tracep->chgBit(oldp+158,(vlTOPp->puzzle__DOT__Xand4bb_2_9__DOT__base__DOT__and0_out_X));
            tracep->chgBit(oldp+159,(vlTOPp->puzzle__DOT__Xor4b_2_4__DOT__base__DOT__or0_out_X));
            tracep->chgBit(oldp+160,(vlTOPp->puzzle__DOT__Xor4b_2_5__DOT__base__DOT__or0_out_X));
            tracep->chgBit(oldp+161,(vlTOPp->puzzle__DOT__Xor4b_2_6__DOT__base__DOT__or0_out_X));
            tracep->chgBit(oldp+162,(vlTOPp->puzzle__DOT__Xor4_2_4__DOT__base__DOT__or0_out_X));
            tracep->chgBit(oldp+163,(vlTOPp->puzzle__DOT__Xor4b_2_7__DOT__base__DOT__or0_out_X));
            tracep->chgBit(oldp+164,(vlTOPp->puzzle__DOT__Xand4bb_2_13__DOT__base__DOT__and0_out_X));
            tracep->chgBit(oldp+165,(vlTOPp->puzzle__DOT__Xand4b_2_2__DOT__base__DOT__and0_out_X));
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0xbU])) {
            tracep->chgBit(oldp+166,(vlTOPp->puzzle__DOT__Xor2_2_1__DOT__base__DOT__or0_out_X));
            tracep->chgBit(oldp+167,(vlTOPp->puzzle__DOT__Xnor2_2_4__DOT__base__DOT__nor0_out_Y));
            tracep->chgBit(oldp+168,(vlTOPp->puzzle__DOT__Xnand2_2_4__DOT__base__DOT__nand0_out_Y));
            tracep->chgBit(oldp+169,(vlTOPp->puzzle__DOT__Xand2_2_1__DOT__base__DOT__and0_out_X));
            tracep->chgBit(oldp+170,(vlTOPp->puzzle__DOT__Xnor2_2_7__DOT__base__DOT__nor0_out_Y));
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0xcU])) {
            tracep->chgBit(oldp+171,(vlTOPp->puzzle__DOT__Xxor2_2_4__DOT__base__DOT__xor0_out_X));
            tracep->chgBit(oldp+172,(vlTOPp->puzzle__DOT__Xnand2_2_22__DOT__base__DOT__nand0_out_Y));
            tracep->chgBit(oldp+173,((1U & (~ (IData)(vlTOPp->puzzle__DOT__Xxor2_2_4__DOT__base__DOT__xor0_out_X)))));
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0xdU])) {
            tracep->chgBit(oldp+174,(vlTOPp->puzzle__DOT__Xnor3b_2_4__DOT__base__DOT__and0_out_Y));
            tracep->chgBit(oldp+175,(vlTOPp->puzzle__DOT__Xa21oi_2_18__DOT__base__DOT__nor0_out_Y));
            tracep->chgBit(oldp+176,(vlTOPp->puzzle__DOT__Xnor2_2_48__DOT__base__DOT__nor0_out_Y));
            tracep->chgBit(oldp+177,(vlTOPp->puzzle__DOT__Xnor3b_2_2__DOT__base__DOT__and0_out_Y));
            tracep->chgBit(oldp+178,(vlTOPp->puzzle__DOT__Xa211oi_2_1__DOT__base__DOT__nor0_out_Y));
            tracep->chgBit(oldp+179,((1U & (~ (IData)(vlTOPp->puzzle__DOT__Xor4b_2_8__DOT__base__DOT__or0_out_X)))));
            tracep->chgBit(oldp+180,(vlTOPp->puzzle__DOT__Xnor3b_2_3__DOT__base__DOT__and0_out_Y));
            tracep->chgBit(oldp+181,(vlTOPp->puzzle__DOT__Xor4b_2_8__DOT__base__DOT__or0_out_X));
            tracep->chgBit(oldp+182,(vlTOPp->puzzle__DOT__Xnor3_2_3__DOT__base__DOT__nor0_out_Y));
            tracep->chgBit(oldp+183,(vlTOPp->puzzle__DOT__Xnor2_2_47__DOT__base__DOT__nor0_out_Y));
            tracep->chgBit(oldp+184,(((IData)(vlTOPp->puzzle__DOT__Xnor3b_2_4__DOT__base__DOT__and0_out_Y) 
                                      | (IData)(vlTOPp->puzzle__DOT__Xa21oi_2_18__DOT__base__DOT__nor0_out_Y))));
            tracep->chgBit(oldp+185,((1U & (~ ((IData)(vlTOPp->puzzle__DOT__Xa211oi_2_1__DOT__base__DOT__nor0_out_Y) 
                                               | (~ (IData)(vlTOPp->puzzle__DOT__Xor4b_2_8__DOT__base__DOT__or0_out_X)))))));
            tracep->chgBit(oldp+186,((1U & (~ ((IData)(vlTOPp->puzzle__DOT__Xa211oi_2_1__DOT__base__DOT__nor0_out_Y) 
                                               | (IData)(vlTOPp->puzzle__DOT__Xnor2_2_48__DOT__base__DOT__nor0_out_Y))))));
            tracep->chgBit(oldp+187,((1U & (~ ((IData)(vlTOPp->puzzle__DOT__Xnor2_2_48__DOT__base__DOT__nor0_out_Y) 
                                               | (~ (IData)(vlTOPp->puzzle__DOT__Xor4b_2_8__DOT__base__DOT__or0_out_X)))))));
            tracep->chgBit(oldp+188,(((IData)(vlTOPp->puzzle__DOT__Xnor2_2_48__DOT__base__DOT__nor0_out_Y) 
                                      & (~ (IData)(vlTOPp->puzzle__DOT__Xor4b_2_8__DOT__base__DOT__or0_out_X)))));
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0xeU])) {
            tracep->chgBit(oldp+189,(vlTOPp->puzzle__DOT__Xnor2_2_8__DOT__base__DOT__nor0_out_Y));
            tracep->chgBit(oldp+190,(vlTOPp->puzzle__DOT__Xand2_2_0__DOT__base__DOT__and0_out_X));
            tracep->chgBit(oldp+191,(vlTOPp->puzzle__DOT__Xand2b_2_0__DOT__base__DOT__and0_out_X));
            tracep->chgBit(oldp+192,(vlTOPp->puzzle__DOT__Xnor2_2_1__DOT__base__DOT__nor0_out_Y));
            tracep->chgBit(oldp+193,((1U & (~ (IData)(vlTOPp->puzzle__DOT__Xnor2_2_9__DOT__base__DOT__nor0_out_Y)))));
            tracep->chgBit(oldp+194,(vlTOPp->puzzle__DOT__Xnand2_2_7__DOT__base__DOT__nand0_out_Y));
            tracep->chgBit(oldp+195,(vlTOPp->puzzle__DOT__Xnor2_2_0__DOT__base__DOT__nor0_out_Y));
            tracep->chgBit(oldp+196,(vlTOPp->puzzle__DOT__Xnor2_2_9__DOT__base__DOT__nor0_out_Y));
            tracep->chgBit(oldp+197,((1U & (~ (IData)(vlTOPp->puzzle__DOT__Xnor2_2_0__DOT__base__DOT__nor0_out_Y)))));
        }
        if (VL_UNLIKELY(((vlTOPp->__Vm_traceActivity
                          [0xeU] | vlTOPp->__Vm_traceActivity
                          [0x11U]) | vlTOPp->__Vm_traceActivity
                         [0x12U]))) {
            tracep->chgBit(oldp+198,((1U & (~ ((IData)(vlTOPp->puzzle__DOT__Xnand2_2_6__DOT__base__DOT__nand0_out_Y) 
                                               & (((IData)(vlTOPp->puzzle__DOT__Xxor2_2_2__DOT__base__DOT__xor0_out_X) 
                                                   | (IData)(vlTOPp->puzzle__DOT__Xnor2_2_8__DOT__base__DOT__nor0_out_Y)) 
                                                  | (IData)(vlTOPp->puzzle__DOT__Xxor2_2_3__DOT__base__DOT__xor0_out_X)))))));
            tracep->chgBit(oldp+199,((1U & (~ ((IData)(vlTOPp->puzzle__DOT__Xor3_2_0__DOT__base__DOT__or0_out_X) 
                                               | ((IData)(vlTOPp->puzzle__DOT__Xxnor2_2_9__DOT__base__DOT__xnor0_out_Y) 
                                                  & (IData)(vlTOPp->puzzle__DOT__Xand2_2_0__DOT__base__DOT__and0_out_X)))))));
            tracep->chgBit(oldp+200,(((((IData)(vlTOPp->puzzle__DOT__Xxor2_2_3__DOT__base__DOT__xor0_out_X) 
                                        | (IData)(vlTOPp->puzzle__DOT__Xnor2_2_8__DOT__base__DOT__nor0_out_Y)) 
                                       & (IData)(vlTOPp->puzzle__DOT__Xxnor2_2_9__DOT__base__DOT__xnor0_out_Y)) 
                                      & (IData)(vlTOPp->puzzle__DOT__Xnand2_2_6__DOT__base__DOT__nand0_out_Y))));
            tracep->chgBit(oldp+201,((1U & ((((((IData)(vlTOPp->puzzle__DOT__Xnor2_2_12__DOT__base__DOT__nor0_out_Y) 
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
                                                           & (IData)(vlTOPp->puzzle__DOT__Xnand2_2_6__DOT__base__DOT__nand0_out_Y))))))))));
            tracep->chgBit(oldp+202,(((((~ ((~ ((IData)(vlTOPp->puzzle__DOT__Xnand2_2_6__DOT__base__DOT__nand0_out_Y) 
                                                & (((IData)(vlTOPp->puzzle__DOT__Xxor2_2_2__DOT__base__DOT__xor0_out_X) 
                                                    | (IData)(vlTOPp->puzzle__DOT__Xnor2_2_8__DOT__base__DOT__nor0_out_Y)) 
                                                   | (IData)(vlTOPp->puzzle__DOT__Xxor2_2_3__DOT__base__DOT__xor0_out_X)))) 
                                            & (IData)(vlTOPp->puzzle__DOT__Xxor2_2_8__DOT__base__DOT__xor0_out_X))) 
                                        & (IData)(vlTOPp->puzzle__DOT__Xxor2_2_6__DOT__base__DOT__xor0_out_X)) 
                                       & (~ ((IData)(vlTOPp->puzzle__DOT__Xa21oi_2_0__DOT__base__DOT__nor0_out_Y) 
                                             & (~ ((IData)(vlTOPp->puzzle__DOT__Xor2_2_3__DOT__base__DOT__or0_out_X) 
                                                   & (IData)(vlTOPp->puzzle__DOT__Xxnor2_2_2__DOT__base__DOT__xnor0_out_Y)))))) 
                                      | (IData)(vlTOPp->puzzle__DOT__Xxor2_2_5__DOT__base__DOT__xor0_out_X))));
            tracep->chgBit(oldp+203,((((IData)(vlTOPp->puzzle__DOT__Xnor2_2_12__DOT__base__DOT__nor0_out_Y) 
                                       | (IData)(vlTOPp->puzzle__DOT__Xxor2_2_8__DOT__base__DOT__xor0_out_X)) 
                                      | ((((IData)(vlTOPp->puzzle__DOT__Xxor2_2_3__DOT__base__DOT__xor0_out_X) 
                                           | (IData)(vlTOPp->puzzle__DOT__Xnor2_2_8__DOT__base__DOT__nor0_out_Y)) 
                                          & (IData)(vlTOPp->puzzle__DOT__Xxnor2_2_9__DOT__base__DOT__xnor0_out_Y)) 
                                         & (IData)(vlTOPp->puzzle__DOT__Xnand2_2_6__DOT__base__DOT__nand0_out_Y)))));
            tracep->chgBit(oldp+204,((1U & (~ ((IData)(vlTOPp->puzzle__DOT__Xxnor2_2_10__DOT__base__DOT__xnor0_out_Y) 
                                               | ((IData)(vlTOPp->puzzle__DOT__Xnand2_2_3__DOT__base__DOT__nand0_out_Y) 
                                                  & (((IData)(vlTOPp->puzzle__DOT__Xnor2_2_12__DOT__base__DOT__nor0_out_Y) 
                                                      | (IData)(vlTOPp->puzzle__DOT__Xxor2_2_8__DOT__base__DOT__xor0_out_X)) 
                                                     | ((((IData)(vlTOPp->puzzle__DOT__Xxor2_2_3__DOT__base__DOT__xor0_out_X) 
                                                          | (IData)(vlTOPp->puzzle__DOT__Xnor2_2_8__DOT__base__DOT__nor0_out_Y)) 
                                                         & (IData)(vlTOPp->puzzle__DOT__Xxnor2_2_9__DOT__base__DOT__xnor0_out_Y)) 
                                                        & (IData)(vlTOPp->puzzle__DOT__Xnand2_2_6__DOT__base__DOT__nand0_out_Y)))))))));
            tracep->chgBit(oldp+205,((1U & (~ (((IData)(vlTOPp->puzzle__DOT__Xxor2_2_5__DOT__base__DOT__xor0_out_X) 
                                                & (((IData)(vlTOPp->puzzle__DOT__Xxor2_2_8__DOT__base__DOT__xor0_out_X)
                                                     ? 
                                                    (((IData)(vlTOPp->puzzle__DOT__Xnand2_2_5__DOT__base__DOT__nand0_out_Y) 
                                                      & (IData)(vlTOPp->puzzle__DOT__Xnor2_2_12__DOT__base__DOT__nor0_out_Y)) 
                                                     | ((IData)(vlTOPp->puzzle__DOT__Xor2_2_2__DOT__base__DOT__or0_out_X) 
                                                        & (IData)(vlTOPp->puzzle__DOT__Xxnor2_2_9__DOT__base__DOT__xnor0_out_Y)))
                                                     : 
                                                    ((((IData)(vlTOPp->puzzle__DOT__Xnor2_2_9__DOT__base__DOT__nor0_out_Y) 
                                                       | (IData)(vlTOPp->puzzle__DOT__Xxor2_2_2__DOT__base__DOT__xor0_out_X)) 
                                                      & (IData)(vlTOPp->puzzle__DOT__Xor2_2_0__DOT__base__DOT__or0_out_X)) 
                                                     | (IData)(vlTOPp->puzzle__DOT__Xnor2_2_11__DOT__base__DOT__nor0_out_Y))) 
                                                   | (IData)(vlTOPp->puzzle__DOT__Xxor2_2_6__DOT__base__DOT__xor0_out_X))) 
                                               & ((((IData)(vlTOPp->puzzle__DOT__Xxor2_2_8__DOT__base__DOT__xor0_out_X) 
                                                    & (IData)(vlTOPp->puzzle__DOT__Xor2_2_0__DOT__base__DOT__or0_out_X)) 
                                                   | (IData)(vlTOPp->puzzle__DOT__Xxnor2_2_10__DOT__base__DOT__xnor0_out_Y)) 
                                                  | ((IData)(vlTOPp->puzzle__DOT__Xnand2b_2_0__DOT__base__DOT__or0_out_Y)
                                                      ? (IData)(vlTOPp->puzzle__DOT__Xxnor2_2_9__DOT__base__DOT__xnor0_out_Y)
                                                      : (IData)(vlTOPp->puzzle__DOT__Xnor2_2_12__DOT__base__DOT__nor0_out_Y))))))));
            tracep->chgBit(oldp+206,(((IData)(vlTOPp->puzzle__DOT__Xxor2_2_8__DOT__base__DOT__xor0_out_X)
                                       ? (((IData)(vlTOPp->puzzle__DOT__Xnand2_2_5__DOT__base__DOT__nand0_out_Y) 
                                           & (IData)(vlTOPp->puzzle__DOT__Xnor2_2_12__DOT__base__DOT__nor0_out_Y)) 
                                          | ((IData)(vlTOPp->puzzle__DOT__Xor2_2_2__DOT__base__DOT__or0_out_X) 
                                             & (IData)(vlTOPp->puzzle__DOT__Xxnor2_2_9__DOT__base__DOT__xnor0_out_Y)))
                                       : ((((IData)(vlTOPp->puzzle__DOT__Xnor2_2_9__DOT__base__DOT__nor0_out_Y) 
                                            | (IData)(vlTOPp->puzzle__DOT__Xxor2_2_2__DOT__base__DOT__xor0_out_X)) 
                                           & (IData)(vlTOPp->puzzle__DOT__Xor2_2_0__DOT__base__DOT__or0_out_X)) 
                                          | (IData)(vlTOPp->puzzle__DOT__Xnor2_2_11__DOT__base__DOT__nor0_out_Y)))));
            tracep->chgBit(oldp+207,(((((IData)(vlTOPp->puzzle__DOT__Xxor2_2_8__DOT__base__DOT__xor0_out_X) 
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
                                                   & (~ 
                                                      ((IData)(vlTOPp->puzzle__DOT__Xnor2_2_5__DOT__base__DOT__nor0_out_Y) 
                                                       | (~ 
                                                          ((IData)(vlTOPp->puzzle__DOT__Xxnor2_2_9__DOT__base__DOT__xnor0_out_Y) 
                                                           | (IData)(vlTOPp->puzzle__DOT__Xnand2_2_9__DOT__base__DOT__nand0_out_Y)))))))))) 
                                      | (IData)(vlTOPp->puzzle__DOT__Xxnor2_2_7__DOT__base__DOT__xnor0_out_Y))));
            tracep->chgBit(oldp+208,((1U & (~ (((((IData)(vlTOPp->puzzle__DOT__Xo21a_2_0__DOT__base__DOT__and0_out_X) 
                                                  | (IData)(vlTOPp->puzzle__DOT__Xor3_2_2__DOT__base__DOT__or0_out_X)) 
                                                 | (IData)(vlTOPp->puzzle__DOT__Xxnor2_2_10__DOT__base__DOT__xnor0_out_Y)) 
                                                | (IData)(vlTOPp->puzzle__DOT__Xxor2_2_8__DOT__base__DOT__xor0_out_X)) 
                                               & (((((IData)(vlTOPp->puzzle__DOT__Xand3_2_0__DOT__base__DOT__and0_out_X) 
                                                     | (IData)(vlTOPp->puzzle__DOT__Xxor2_2_8__DOT__base__DOT__xor0_out_X)) 
                                                    | (~ 
                                                       ((IData)(vlTOPp->puzzle__DOT__Xor3_2_0__DOT__base__DOT__or0_out_X) 
                                                        | ((IData)(vlTOPp->puzzle__DOT__Xxnor2_2_9__DOT__base__DOT__xnor0_out_Y) 
                                                           & (IData)(vlTOPp->puzzle__DOT__Xand2_2_0__DOT__base__DOT__and0_out_X))))) 
                                                   & ((~ 
                                                       ((IData)(vlTOPp->puzzle__DOT__Xxor2_2_2__DOT__base__DOT__xor0_out_X) 
                                                        | (IData)(vlTOPp->puzzle__DOT__Xnor2_2_10__DOT__base__DOT__nor0_out_Y))) 
                                                      | (IData)(vlTOPp->puzzle__DOT__Xo31ai_2_0__DOT__base__DOT__nand0_out_Y))) 
                                                  | (IData)(vlTOPp->puzzle__DOT__Xxor2_2_6__DOT__base__DOT__xor0_out_X)))))));
            tracep->chgBit(oldp+209,((1U & ((IData)(vlTOPp->puzzle__DOT__Xxor2_2_6__DOT__base__DOT__xor0_out_X)
                                             ? ((IData)(vlTOPp->puzzle__DOT__Xxor2_2_8__DOT__base__DOT__xor0_out_X)
                                                 ? 
                                                ((((IData)(vlTOPp->puzzle__DOT__Xnand2_2_0__DOT__base__DOT__nand0_out_Y) 
                                                   & (IData)(vlTOPp->puzzle__DOT__Xxor2_2_2__DOT__base__DOT__xor0_out_X)) 
                                                  & (IData)(vlTOPp->puzzle__DOT__Xnand2_2_1__DOT__base__DOT__nand0_out_Y)) 
                                                 | (IData)(vlTOPp->puzzle__DOT__Xand2_2_0__DOT__base__DOT__and0_out_X))
                                                 : 
                                                (((IData)(vlTOPp->puzzle__DOT__Xnand2_2_11__DOT__base__DOT__nand0_out_Y) 
                                                  | (IData)(vlTOPp->puzzle__DOT__Xnor2_2_8__DOT__base__DOT__nor0_out_Y)) 
                                                 & (IData)(vlTOPp->puzzle__DOT__Xor2_2_3__DOT__base__DOT__or0_out_X)))
                                             : ((((IData)(vlTOPp->puzzle__DOT__Xand3_2_0__DOT__base__DOT__and0_out_X) 
                                                  | (IData)(vlTOPp->puzzle__DOT__Xxor2_2_8__DOT__base__DOT__xor0_out_X)) 
                                                 | (~ 
                                                    ((IData)(vlTOPp->puzzle__DOT__Xxnor2_2_9__DOT__base__DOT__xnor0_out_Y) 
                                                     | (IData)(vlTOPp->puzzle__DOT__Xor3_2_0__DOT__base__DOT__or0_out_X)))) 
                                                & ((IData)(vlTOPp->puzzle__DOT__Xo31ai_2_0__DOT__base__DOT__nand0_out_Y) 
                                                   | (~ 
                                                      ((IData)(vlTOPp->puzzle__DOT__Xnor2_2_10__DOT__base__DOT__nor0_out_Y) 
                                                       | (IData)(vlTOPp->puzzle__DOT__Xnand2_2_11__DOT__base__DOT__nand0_out_Y)))))))));
            tracep->chgBit(oldp+210,((1U & ((((IData)(vlTOPp->puzzle__DOT__Xand3_2_0__DOT__base__DOT__and0_out_X) 
                                              | (IData)(vlTOPp->puzzle__DOT__Xxor2_2_8__DOT__base__DOT__xor0_out_X)) 
                                             | (~ ((IData)(vlTOPp->puzzle__DOT__Xor3_2_0__DOT__base__DOT__or0_out_X) 
                                                   | ((IData)(vlTOPp->puzzle__DOT__Xxnor2_2_9__DOT__base__DOT__xnor0_out_Y) 
                                                      & (IData)(vlTOPp->puzzle__DOT__Xand2_2_0__DOT__base__DOT__and0_out_X))))) 
                                            & ((~ ((IData)(vlTOPp->puzzle__DOT__Xxor2_2_2__DOT__base__DOT__xor0_out_X) 
                                                   | (IData)(vlTOPp->puzzle__DOT__Xnor2_2_10__DOT__base__DOT__nor0_out_Y))) 
                                               | (IData)(vlTOPp->puzzle__DOT__Xo31ai_2_0__DOT__base__DOT__nand0_out_Y))))));
            tracep->chgBit(oldp+211,((1U & ((~ ((IData)(vlTOPp->puzzle__DOT__Xxnor2_2_9__DOT__base__DOT__xnor0_out_Y) 
                                                | (IData)(vlTOPp->puzzle__DOT__Xnand2_2_5__DOT__base__DOT__nand0_out_Y))) 
                                            | (~ ((
                                                   ((IData)(vlTOPp->puzzle__DOT__Xxor2_2_2__DOT__base__DOT__xor0_out_X) 
                                                    | (IData)(vlTOPp->puzzle__DOT__Xnor2_2_8__DOT__base__DOT__nor0_out_Y)) 
                                                   | (IData)(vlTOPp->puzzle__DOT__Xor2_2_2__DOT__base__DOT__or0_out_X)) 
                                                  | (IData)(vlTOPp->puzzle__DOT__Xxor2_2_6__DOT__base__DOT__xor0_out_X)))))));
            tracep->chgBit(oldp+212,((((IData)(vlTOPp->puzzle__DOT__Xxor2_2_2__DOT__base__DOT__xor0_out_X) 
                                       | (IData)(vlTOPp->puzzle__DOT__Xnor2_2_8__DOT__base__DOT__nor0_out_Y)) 
                                      | (IData)(vlTOPp->puzzle__DOT__Xor2_2_2__DOT__base__DOT__or0_out_X))));
            tracep->chgBit(oldp+213,((1U & (~ ((~ ((IData)(vlTOPp->puzzle__DOT__Xnand2_2_6__DOT__base__DOT__nand0_out_Y) 
                                                   & (((IData)(vlTOPp->puzzle__DOT__Xxor2_2_2__DOT__base__DOT__xor0_out_X) 
                                                       | (IData)(vlTOPp->puzzle__DOT__Xnor2_2_8__DOT__base__DOT__nor0_out_Y)) 
                                                      | (IData)(vlTOPp->puzzle__DOT__Xxor2_2_3__DOT__base__DOT__xor0_out_X)))) 
                                               & (IData)(vlTOPp->puzzle__DOT__Xxor2_2_8__DOT__base__DOT__xor0_out_X))))));
            tracep->chgBit(oldp+214,((((IData)(vlTOPp->puzzle__DOT__Xnor2_2_9__DOT__base__DOT__nor0_out_Y) 
                                       | (IData)(vlTOPp->puzzle__DOT__Xxor2_2_2__DOT__base__DOT__xor0_out_X)) 
                                      & (IData)(vlTOPp->puzzle__DOT__Xor2_2_0__DOT__base__DOT__or0_out_X))));
            tracep->chgBit(oldp+215,(((((IData)(vlTOPp->puzzle__DOT__Xnand2_2_0__DOT__base__DOT__nand0_out_Y) 
                                        & (IData)(vlTOPp->puzzle__DOT__Xxor2_2_2__DOT__base__DOT__xor0_out_X)) 
                                       & (IData)(vlTOPp->puzzle__DOT__Xnand2_2_1__DOT__base__DOT__nand0_out_Y)) 
                                      | (IData)(vlTOPp->puzzle__DOT__Xand2_2_0__DOT__base__DOT__and0_out_X))));
            tracep->chgBit(oldp+216,(((IData)(vlTOPp->puzzle__DOT__Xxor2_2_8__DOT__base__DOT__xor0_out_X)
                                       ? ((((IData)(vlTOPp->puzzle__DOT__Xnand2_2_0__DOT__base__DOT__nand0_out_Y) 
                                            & (IData)(vlTOPp->puzzle__DOT__Xxor2_2_2__DOT__base__DOT__xor0_out_X)) 
                                           & (IData)(vlTOPp->puzzle__DOT__Xnand2_2_1__DOT__base__DOT__nand0_out_Y)) 
                                          | (IData)(vlTOPp->puzzle__DOT__Xand2_2_0__DOT__base__DOT__and0_out_X))
                                       : (((IData)(vlTOPp->puzzle__DOT__Xnand2_2_11__DOT__base__DOT__nand0_out_Y) 
                                           | (IData)(vlTOPp->puzzle__DOT__Xnor2_2_8__DOT__base__DOT__nor0_out_Y)) 
                                          & (IData)(vlTOPp->puzzle__DOT__Xor2_2_3__DOT__base__DOT__or0_out_X)))));
            tracep->chgBit(oldp+217,(((((IData)(vlTOPp->puzzle__DOT__Xnor2_2_9__DOT__base__DOT__nor0_out_Y) 
                                        | (IData)(vlTOPp->puzzle__DOT__Xxor2_2_2__DOT__base__DOT__xor0_out_X)) 
                                       & (IData)(vlTOPp->puzzle__DOT__Xor2_2_0__DOT__base__DOT__or0_out_X)) 
                                      | (IData)(vlTOPp->puzzle__DOT__Xnor2_2_11__DOT__base__DOT__nor0_out_Y))));
            tracep->chgBit(oldp+218,((((IData)(vlTOPp->puzzle__DOT__Xxor2_2_2__DOT__base__DOT__xor0_out_X) 
                                       | (IData)(vlTOPp->puzzle__DOT__Xnor2_2_8__DOT__base__DOT__nor0_out_Y)) 
                                      | (IData)(vlTOPp->puzzle__DOT__Xxor2_2_3__DOT__base__DOT__xor0_out_X))));
            tracep->chgBit(oldp+219,((((((~ ((~ ((IData)(vlTOPp->puzzle__DOT__Xnand2_2_6__DOT__base__DOT__nand0_out_Y) 
                                                 & (((IData)(vlTOPp->puzzle__DOT__Xxor2_2_2__DOT__base__DOT__xor0_out_X) 
                                                     | (IData)(vlTOPp->puzzle__DOT__Xnor2_2_8__DOT__base__DOT__nor0_out_Y)) 
                                                    | (IData)(vlTOPp->puzzle__DOT__Xxor2_2_3__DOT__base__DOT__xor0_out_X)))) 
                                             & (IData)(vlTOPp->puzzle__DOT__Xxor2_2_8__DOT__base__DOT__xor0_out_X))) 
                                         & (IData)(vlTOPp->puzzle__DOT__Xxor2_2_6__DOT__base__DOT__xor0_out_X)) 
                                        & (~ ((IData)(vlTOPp->puzzle__DOT__Xa21oi_2_0__DOT__base__DOT__nor0_out_Y) 
                                              & (~ 
                                                 ((IData)(vlTOPp->puzzle__DOT__Xor2_2_3__DOT__base__DOT__or0_out_X) 
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
                                               & (IData)(vlTOPp->puzzle__DOT__Xxor2_2_8__DOT__base__DOT__xor0_out_X)))))));
            tracep->chgBit(oldp+220,(((IData)(vlTOPp->puzzle__DOT__Xnand2_2_3__DOT__base__DOT__nand0_out_Y) 
                                      & (((IData)(vlTOPp->puzzle__DOT__Xnor2_2_12__DOT__base__DOT__nor0_out_Y) 
                                          | (IData)(vlTOPp->puzzle__DOT__Xxor2_2_8__DOT__base__DOT__xor0_out_X)) 
                                         | ((((IData)(vlTOPp->puzzle__DOT__Xxor2_2_3__DOT__base__DOT__xor0_out_X) 
                                              | (IData)(vlTOPp->puzzle__DOT__Xnor2_2_8__DOT__base__DOT__nor0_out_Y)) 
                                             & (IData)(vlTOPp->puzzle__DOT__Xxnor2_2_9__DOT__base__DOT__xnor0_out_Y)) 
                                            & (IData)(vlTOPp->puzzle__DOT__Xnand2_2_6__DOT__base__DOT__nand0_out_Y))))));
            tracep->chgBit(oldp+221,((((IData)(vlTOPp->puzzle__DOT__Xxor2_2_8__DOT__base__DOT__xor0_out_X)
                                        ? (((IData)(vlTOPp->puzzle__DOT__Xnand2_2_5__DOT__base__DOT__nand0_out_Y) 
                                            & (IData)(vlTOPp->puzzle__DOT__Xnor2_2_12__DOT__base__DOT__nor0_out_Y)) 
                                           | ((IData)(vlTOPp->puzzle__DOT__Xor2_2_2__DOT__base__DOT__or0_out_X) 
                                              & (IData)(vlTOPp->puzzle__DOT__Xxnor2_2_9__DOT__base__DOT__xnor0_out_Y)))
                                        : ((((IData)(vlTOPp->puzzle__DOT__Xnor2_2_9__DOT__base__DOT__nor0_out_Y) 
                                             | (IData)(vlTOPp->puzzle__DOT__Xxor2_2_2__DOT__base__DOT__xor0_out_X)) 
                                            & (IData)(vlTOPp->puzzle__DOT__Xor2_2_0__DOT__base__DOT__or0_out_X)) 
                                           | (IData)(vlTOPp->puzzle__DOT__Xnor2_2_11__DOT__base__DOT__nor0_out_Y))) 
                                      | (IData)(vlTOPp->puzzle__DOT__Xxor2_2_6__DOT__base__DOT__xor0_out_X))));
            tracep->chgBit(oldp+222,((1U & ((~ (((((IData)(vlTOPp->puzzle__DOT__Xo21a_2_0__DOT__base__DOT__and0_out_X) 
                                                   | (IData)(vlTOPp->puzzle__DOT__Xor3_2_2__DOT__base__DOT__or0_out_X)) 
                                                  | (IData)(vlTOPp->puzzle__DOT__Xxnor2_2_10__DOT__base__DOT__xnor0_out_Y)) 
                                                 | (IData)(vlTOPp->puzzle__DOT__Xxor2_2_8__DOT__base__DOT__xor0_out_X)) 
                                                & (((((IData)(vlTOPp->puzzle__DOT__Xand3_2_0__DOT__base__DOT__and0_out_X) 
                                                      | (IData)(vlTOPp->puzzle__DOT__Xxor2_2_8__DOT__base__DOT__xor0_out_X)) 
                                                     | (~ 
                                                        ((IData)(vlTOPp->puzzle__DOT__Xor3_2_0__DOT__base__DOT__or0_out_X) 
                                                         | ((IData)(vlTOPp->puzzle__DOT__Xxnor2_2_9__DOT__base__DOT__xnor0_out_Y) 
                                                            & (IData)(vlTOPp->puzzle__DOT__Xand2_2_0__DOT__base__DOT__and0_out_X))))) 
                                                    & ((~ 
                                                        ((IData)(vlTOPp->puzzle__DOT__Xxor2_2_2__DOT__base__DOT__xor0_out_X) 
                                                         | (IData)(vlTOPp->puzzle__DOT__Xnor2_2_10__DOT__base__DOT__nor0_out_Y))) 
                                                       | (IData)(vlTOPp->puzzle__DOT__Xo31ai_2_0__DOT__base__DOT__nand0_out_Y))) 
                                                   | (IData)(vlTOPp->puzzle__DOT__Xxor2_2_6__DOT__base__DOT__xor0_out_X)))) 
                                            | (IData)(vlTOPp->puzzle__DOT__Xxor2_2_5__DOT__base__DOT__xor0_out_X)))));
            tracep->chgBit(oldp+223,((1U & (((IData)(vlTOPp->puzzle__DOT__Xxor2_2_6__DOT__base__DOT__xor0_out_X)
                                              ? ((IData)(vlTOPp->puzzle__DOT__Xxor2_2_8__DOT__base__DOT__xor0_out_X)
                                                  ? 
                                                 ((((IData)(vlTOPp->puzzle__DOT__Xnand2_2_0__DOT__base__DOT__nand0_out_Y) 
                                                    & (IData)(vlTOPp->puzzle__DOT__Xxor2_2_2__DOT__base__DOT__xor0_out_X)) 
                                                   & (IData)(vlTOPp->puzzle__DOT__Xnand2_2_1__DOT__base__DOT__nand0_out_Y)) 
                                                  | (IData)(vlTOPp->puzzle__DOT__Xand2_2_0__DOT__base__DOT__and0_out_X))
                                                  : 
                                                 (((IData)(vlTOPp->puzzle__DOT__Xnand2_2_11__DOT__base__DOT__nand0_out_Y) 
                                                   | (IData)(vlTOPp->puzzle__DOT__Xnor2_2_8__DOT__base__DOT__nor0_out_Y)) 
                                                  & (IData)(vlTOPp->puzzle__DOT__Xor2_2_3__DOT__base__DOT__or0_out_X)))
                                              : ((((IData)(vlTOPp->puzzle__DOT__Xand3_2_0__DOT__base__DOT__and0_out_X) 
                                                   | (IData)(vlTOPp->puzzle__DOT__Xxor2_2_8__DOT__base__DOT__xor0_out_X)) 
                                                  | (~ 
                                                     ((IData)(vlTOPp->puzzle__DOT__Xxnor2_2_9__DOT__base__DOT__xnor0_out_Y) 
                                                      | (IData)(vlTOPp->puzzle__DOT__Xor3_2_0__DOT__base__DOT__or0_out_X)))) 
                                                 & ((IData)(vlTOPp->puzzle__DOT__Xo31ai_2_0__DOT__base__DOT__nand0_out_Y) 
                                                    | (~ 
                                                       ((IData)(vlTOPp->puzzle__DOT__Xnor2_2_10__DOT__base__DOT__nor0_out_Y) 
                                                        | (IData)(vlTOPp->puzzle__DOT__Xnand2_2_11__DOT__base__DOT__nand0_out_Y)))))) 
                                            | (IData)(vlTOPp->puzzle__DOT__Xxor2_2_5__DOT__base__DOT__xor0_out_X)))));
            tracep->chgBit(oldp+224,((1U & (((IData)(vlTOPp->puzzle__DOT__Xand3_2_0__DOT__base__DOT__and0_out_X) 
                                             | (IData)(vlTOPp->puzzle__DOT__Xxor2_2_8__DOT__base__DOT__xor0_out_X)) 
                                            | (~ ((IData)(vlTOPp->puzzle__DOT__Xor3_2_0__DOT__base__DOT__or0_out_X) 
                                                  | ((IData)(vlTOPp->puzzle__DOT__Xxnor2_2_9__DOT__base__DOT__xnor0_out_Y) 
                                                     & (IData)(vlTOPp->puzzle__DOT__Xand2_2_0__DOT__base__DOT__and0_out_X))))))));
            tracep->chgBit(oldp+225,(((IData)(vlTOPp->puzzle__DOT__Xxor2_2_8__DOT__base__DOT__xor0_out_X) 
                                      & ((~ ((IData)(vlTOPp->puzzle__DOT__Xxnor2_2_9__DOT__base__DOT__xnor0_out_Y) 
                                             | (IData)(vlTOPp->puzzle__DOT__Xnand2_2_5__DOT__base__DOT__nand0_out_Y))) 
                                         | (~ ((((IData)(vlTOPp->puzzle__DOT__Xxor2_2_2__DOT__base__DOT__xor0_out_X) 
                                                 | (IData)(vlTOPp->puzzle__DOT__Xnor2_2_8__DOT__base__DOT__nor0_out_Y)) 
                                                | (IData)(vlTOPp->puzzle__DOT__Xor2_2_2__DOT__base__DOT__or0_out_X)) 
                                               | (IData)(vlTOPp->puzzle__DOT__Xxor2_2_6__DOT__base__DOT__xor0_out_X)))))));
            tracep->chgBit(oldp+226,((1U & (~ ((((IData)(vlTOPp->puzzle__DOT__Xxor2_2_2__DOT__base__DOT__xor0_out_X) 
                                                 | (IData)(vlTOPp->puzzle__DOT__Xnor2_2_8__DOT__base__DOT__nor0_out_Y)) 
                                                | (IData)(vlTOPp->puzzle__DOT__Xor2_2_2__DOT__base__DOT__or0_out_X)) 
                                               | (IData)(vlTOPp->puzzle__DOT__Xxor2_2_6__DOT__base__DOT__xor0_out_X))))));
            tracep->chgBit(oldp+227,((1U & (((((IData)(vlTOPp->puzzle__DOT__Xand3_2_0__DOT__base__DOT__and0_out_X) 
                                               | (IData)(vlTOPp->puzzle__DOT__Xxor2_2_8__DOT__base__DOT__xor0_out_X)) 
                                              | (~ 
                                                 ((IData)(vlTOPp->puzzle__DOT__Xor3_2_0__DOT__base__DOT__or0_out_X) 
                                                  | ((IData)(vlTOPp->puzzle__DOT__Xxnor2_2_9__DOT__base__DOT__xnor0_out_Y) 
                                                     & (IData)(vlTOPp->puzzle__DOT__Xand2_2_0__DOT__base__DOT__and0_out_X))))) 
                                             & ((~ 
                                                 ((IData)(vlTOPp->puzzle__DOT__Xxor2_2_2__DOT__base__DOT__xor0_out_X) 
                                                  | (IData)(vlTOPp->puzzle__DOT__Xnor2_2_10__DOT__base__DOT__nor0_out_Y))) 
                                                | (IData)(vlTOPp->puzzle__DOT__Xo31ai_2_0__DOT__base__DOT__nand0_out_Y))) 
                                            | (IData)(vlTOPp->puzzle__DOT__Xxor2_2_6__DOT__base__DOT__xor0_out_X)))));
            tracep->chgBit(oldp+228,((((~ ((~ ((IData)(vlTOPp->puzzle__DOT__Xnand2_2_6__DOT__base__DOT__nand0_out_Y) 
                                               & (((IData)(vlTOPp->puzzle__DOT__Xxor2_2_2__DOT__base__DOT__xor0_out_X) 
                                                   | (IData)(vlTOPp->puzzle__DOT__Xnor2_2_8__DOT__base__DOT__nor0_out_Y)) 
                                                  | (IData)(vlTOPp->puzzle__DOT__Xxor2_2_3__DOT__base__DOT__xor0_out_X)))) 
                                           & (IData)(vlTOPp->puzzle__DOT__Xxor2_2_8__DOT__base__DOT__xor0_out_X))) 
                                       & (IData)(vlTOPp->puzzle__DOT__Xxor2_2_6__DOT__base__DOT__xor0_out_X)) 
                                      & (~ ((IData)(vlTOPp->puzzle__DOT__Xa21oi_2_0__DOT__base__DOT__nor0_out_Y) 
                                            & (~ ((IData)(vlTOPp->puzzle__DOT__Xor2_2_3__DOT__base__DOT__or0_out_X) 
                                                  & (IData)(vlTOPp->puzzle__DOT__Xxnor2_2_2__DOT__base__DOT__xnor0_out_Y))))))));
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0xfU])) {
            tracep->chgBit(oldp+229,(vlTOPp->puzzle__DOT__Xand2b_2_5__DOT__base__DOT__and0_out_X));
            tracep->chgBit(oldp+230,(vlTOPp->puzzle__DOT__Xo22ai_2_0__DOT__base__DOT__or0_out_Y));
            tracep->chgBit(oldp+231,(vlTOPp->puzzle__DOT__Xor3_2_5__DOT__base__DOT__or0_out_X));
            tracep->chgBit(oldp+232,(vlTOPp->puzzle__DOT__Xnand2b_2_6__DOT__base__DOT__or0_out_Y));
            tracep->chgBit(oldp+233,(vlTOPp->puzzle__DOT__Xxnor2_2_4__DOT__base__DOT__xnor0_out_Y));
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x10U])) {
            tracep->chgBit(oldp+234,(vlTOPp->puzzle__DOT__Xnand2_2_16__DOT__base__DOT__nand0_out_Y));
            tracep->chgBit(oldp+235,(vlTOPp->puzzle__DOT__Xa21oi_2_4__DOT__base__DOT__nor0_out_Y));
            tracep->chgBit(oldp+236,(vlTOPp->puzzle__DOT__Xnor2_2_21__DOT__base__DOT__nor0_out_Y));
            tracep->chgBit(oldp+237,(vlTOPp->puzzle__DOT__Xxnor2_2_5__DOT__base__DOT__xnor0_out_Y));
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x11U])) {
            tracep->chgBit(oldp+238,(vlTOPp->puzzle__DOT__Xnand2_2_6__DOT__base__DOT__nand0_out_Y));
            tracep->chgBit(oldp+239,(vlTOPp->puzzle__DOT__Xxor2_2_3__DOT__base__DOT__xor0_out_X));
            tracep->chgBit(oldp+240,(vlTOPp->puzzle__DOT__Xnand2b_2_0__DOT__base__DOT__or0_out_Y));
            tracep->chgBit(oldp+241,(vlTOPp->puzzle__DOT__Xa32o_2_0__DOT__base__DOT__or0_out_X));
            tracep->chgBit(oldp+242,(vlTOPp->puzzle__DOT__Xnor2_2_2__DOT__base__DOT__nor0_out_Y));
            tracep->chgBit(oldp+243,(vlTOPp->puzzle__DOT__Xnor2_2_10__DOT__base__DOT__nor0_out_Y));
            tracep->chgBit(oldp+244,(vlTOPp->puzzle__DOT__Xor3_2_0__DOT__base__DOT__or0_out_X));
            tracep->chgBit(oldp+245,(vlTOPp->puzzle__DOT__Xor2_2_0__DOT__base__DOT__or0_out_X));
            tracep->chgBit(oldp+246,(vlTOPp->puzzle__DOT__Xor3_2_2__DOT__base__DOT__or0_out_X));
            tracep->chgBit(oldp+247,(vlTOPp->puzzle__DOT__Xnand2_2_0__DOT__base__DOT__nand0_out_Y));
            tracep->chgBit(oldp+248,(vlTOPp->puzzle__DOT__Xxnor2_2_2__DOT__base__DOT__xnor0_out_Y));
            tracep->chgBit(oldp+249,(vlTOPp->puzzle__DOT__Xnand2_2_1__DOT__base__DOT__nand0_out_Y));
            tracep->chgBit(oldp+250,(vlTOPp->puzzle__DOT__Xnand2_2_5__DOT__base__DOT__nand0_out_Y));
            tracep->chgBit(oldp+251,(vlTOPp->puzzle__DOT__Xor2_2_2__DOT__base__DOT__or0_out_X));
            tracep->chgBit(oldp+252,((1U & (~ (IData)(vlTOPp->puzzle__DOT__Xor2_2_2__DOT__base__DOT__or0_out_X)))));
            tracep->chgBit(oldp+253,(vlTOPp->puzzle__DOT__Xnand2_2_9__DOT__base__DOT__nand0_out_Y));
            tracep->chgBit(oldp+254,(((IData)(vlTOPp->puzzle__DOT__Xnand2_2_1__DOT__base__DOT__nand0_out_Y) 
                                      & (IData)(vlTOPp->puzzle__DOT__Xnand2_2_0__DOT__base__DOT__nand0_out_Y))));
            tracep->chgBit(oldp+255,((1U & (~ (IData)(vlTOPp->puzzle__DOT__Xor2_2_0__DOT__base__DOT__or0_out_X)))));
        }
        if (VL_UNLIKELY((vlTOPp->__Vm_traceActivity
                         [0x11U] | vlTOPp->__Vm_traceActivity
                         [0x12U]))) {
            tracep->chgBit(oldp+256,(((IData)(vlTOPp->puzzle__DOT__Xnand2b_2_0__DOT__base__DOT__or0_out_Y)
                                       ? (IData)(vlTOPp->puzzle__DOT__Xxnor2_2_9__DOT__base__DOT__xnor0_out_Y)
                                       : (IData)(vlTOPp->puzzle__DOT__Xnor2_2_12__DOT__base__DOT__nor0_out_Y))));
            tracep->chgBit(oldp+257,((1U & (~ ((IData)(vlTOPp->puzzle__DOT__Xxor2_2_8__DOT__base__DOT__xor0_out_X) 
                                               & ((~ (IData)(vlTOPp->puzzle__DOT__Xor2_2_2__DOT__base__DOT__or0_out_X)) 
                                                  | (IData)(vlTOPp->puzzle__DOT__Xxor2_2_2__DOT__base__DOT__xor0_out_X)))))));
            tracep->chgBit(oldp+258,(((((IData)(vlTOPp->puzzle__DOT__Xxor2_2_8__DOT__base__DOT__xor0_out_X) 
                                        | ((((IData)(vlTOPp->puzzle__DOT__Xnand2_2_1__DOT__base__DOT__nand0_out_Y) 
                                             & (IData)(vlTOPp->puzzle__DOT__Xnand2_2_0__DOT__base__DOT__nand0_out_Y)) 
                                            | (IData)(vlTOPp->puzzle__DOT__Xxor2_2_2__DOT__base__DOT__xor0_out_X)) 
                                           & (IData)(vlTOPp->puzzle__DOT__Xor2_2_4__DOT__base__DOT__or0_out_X))) 
                                       & ((~ ((IData)(vlTOPp->puzzle__DOT__Xxor2_2_8__DOT__base__DOT__xor0_out_X) 
                                              & ((~ (IData)(vlTOPp->puzzle__DOT__Xor2_2_2__DOT__base__DOT__or0_out_X)) 
                                                 | (IData)(vlTOPp->puzzle__DOT__Xxor2_2_2__DOT__base__DOT__xor0_out_X)))) 
                                          | (IData)(vlTOPp->puzzle__DOT__Xnor2_2_2__DOT__base__DOT__nor0_out_Y))) 
                                      & (IData)(vlTOPp->puzzle__DOT__Xxnor2_2_10__DOT__base__DOT__xnor0_out_Y))));
            tracep->chgBit(oldp+259,(((((IData)(vlTOPp->puzzle__DOT__Xnand2_2_1__DOT__base__DOT__nand0_out_Y) 
                                        & (IData)(vlTOPp->puzzle__DOT__Xnand2_2_0__DOT__base__DOT__nand0_out_Y)) 
                                       | (IData)(vlTOPp->puzzle__DOT__Xxor2_2_2__DOT__base__DOT__xor0_out_X)) 
                                      & (IData)(vlTOPp->puzzle__DOT__Xor2_2_4__DOT__base__DOT__or0_out_X))));
            tracep->chgBit(oldp+260,((1U & (~ ((IData)(vlTOPp->puzzle__DOT__Xnor2_2_5__DOT__base__DOT__nor0_out_Y) 
                                               | (~ 
                                                  ((IData)(vlTOPp->puzzle__DOT__Xxnor2_2_9__DOT__base__DOT__xnor0_out_Y) 
                                                   | (IData)(vlTOPp->puzzle__DOT__Xnand2_2_9__DOT__base__DOT__nand0_out_Y))))))));
            tracep->chgBit(oldp+261,((1U & (~ ((IData)(vlTOPp->puzzle__DOT__Xxor2_2_8__DOT__base__DOT__xor0_out_X) 
                                               | ((IData)(vlTOPp->puzzle__DOT__Xxor2_2_6__DOT__base__DOT__xor0_out_X) 
                                                  & (~ 
                                                     ((IData)(vlTOPp->puzzle__DOT__Xnor2_2_5__DOT__base__DOT__nor0_out_Y) 
                                                      | (~ 
                                                         ((IData)(vlTOPp->puzzle__DOT__Xxnor2_2_9__DOT__base__DOT__xnor0_out_Y) 
                                                          | (IData)(vlTOPp->puzzle__DOT__Xnand2_2_9__DOT__base__DOT__nand0_out_Y)))))))))));
            tracep->chgBit(oldp+262,((((((IData)(vlTOPp->puzzle__DOT__Xxor2_2_8__DOT__base__DOT__xor0_out_X) 
                                         | (~ ((IData)(vlTOPp->puzzle__DOT__Xnand2_2_6__DOT__base__DOT__nand0_out_Y) 
                                               | (IData)(vlTOPp->puzzle__DOT__Xxnor2_2_9__DOT__base__DOT__xnor0_out_Y)))) 
                                        | (IData)(vlTOPp->puzzle__DOT__Xand3_2_0__DOT__base__DOT__and0_out_X)) 
                                       & (IData)(vlTOPp->puzzle__DOT__Xxnor2_2_10__DOT__base__DOT__xnor0_out_Y)) 
                                      & (~ (((IData)(vlTOPp->puzzle__DOT__Xxor2_2_2__DOT__base__DOT__xor0_out_X)
                                              ? (IData)(vlTOPp->puzzle__DOT__Xor3_2_2__DOT__base__DOT__or0_out_X)
                                              : (IData)(vlTOPp->puzzle__DOT__Xor3_2_0__DOT__base__DOT__or0_out_X)) 
                                            & (IData)(vlTOPp->puzzle__DOT__Xxor2_2_8__DOT__base__DOT__xor0_out_X))))));
            tracep->chgBit(oldp+263,(((((IData)(vlTOPp->puzzle__DOT__Xxor2_2_8__DOT__base__DOT__xor0_out_X) 
                                        & (IData)(vlTOPp->puzzle__DOT__Xor2_2_0__DOT__base__DOT__or0_out_X)) 
                                       | (IData)(vlTOPp->puzzle__DOT__Xxnor2_2_10__DOT__base__DOT__xnor0_out_Y)) 
                                      | ((IData)(vlTOPp->puzzle__DOT__Xnand2b_2_0__DOT__base__DOT__or0_out_Y)
                                          ? (IData)(vlTOPp->puzzle__DOT__Xxnor2_2_9__DOT__base__DOT__xnor0_out_Y)
                                          : (IData)(vlTOPp->puzzle__DOT__Xnor2_2_12__DOT__base__DOT__nor0_out_Y)))));
            tracep->chgBit(oldp+264,(((((IData)(vlTOPp->puzzle__DOT__Xo21a_2_0__DOT__base__DOT__and0_out_X) 
                                        | (IData)(vlTOPp->puzzle__DOT__Xor3_2_2__DOT__base__DOT__or0_out_X)) 
                                       | (IData)(vlTOPp->puzzle__DOT__Xxnor2_2_10__DOT__base__DOT__xnor0_out_Y)) 
                                      | (IData)(vlTOPp->puzzle__DOT__Xxor2_2_8__DOT__base__DOT__xor0_out_X))));
            tracep->chgBit(oldp+265,((1U & (~ ((IData)(vlTOPp->puzzle__DOT__Xa21oi_2_0__DOT__base__DOT__nor0_out_Y) 
                                               & (~ 
                                                  ((IData)(vlTOPp->puzzle__DOT__Xor2_2_3__DOT__base__DOT__or0_out_X) 
                                                   & (IData)(vlTOPp->puzzle__DOT__Xxnor2_2_2__DOT__base__DOT__xnor0_out_Y))))))));
            tracep->chgBit(oldp+266,((1U & (~ ((IData)(vlTOPp->puzzle__DOT__Xnand2_2_6__DOT__base__DOT__nand0_out_Y) 
                                               | (IData)(vlTOPp->puzzle__DOT__Xxnor2_2_9__DOT__base__DOT__xnor0_out_Y))))));
            tracep->chgBit(oldp+267,((1U & (~ (((IData)(vlTOPp->puzzle__DOT__Xxor2_2_2__DOT__base__DOT__xor0_out_X)
                                                 ? (IData)(vlTOPp->puzzle__DOT__Xor3_2_2__DOT__base__DOT__or0_out_X)
                                                 : (IData)(vlTOPp->puzzle__DOT__Xor3_2_0__DOT__base__DOT__or0_out_X)) 
                                               & (IData)(vlTOPp->puzzle__DOT__Xxor2_2_8__DOT__base__DOT__xor0_out_X))))));
            tracep->chgBit(oldp+268,((1U & (~ ((IData)(vlTOPp->puzzle__DOT__Xxor2_2_2__DOT__base__DOT__xor0_out_X) 
                                               | (IData)(vlTOPp->puzzle__DOT__Xnor2_2_10__DOT__base__DOT__nor0_out_Y))))));
            tracep->chgBit(oldp+269,(((((IData)(vlTOPp->puzzle__DOT__Xxnor2_2_9__DOT__base__DOT__xnor0_out_Y) 
                                        & (IData)(vlTOPp->puzzle__DOT__Xnand2_2_9__DOT__base__DOT__nand0_out_Y)) 
                                       | (IData)(vlTOPp->puzzle__DOT__Xxor2_2_8__DOT__base__DOT__xor0_out_X)) 
                                      | (IData)(vlTOPp->puzzle__DOT__Xo21a_2_0__DOT__base__DOT__and0_out_X))));
            tracep->chgBit(oldp+270,((1U & (~ (((((IData)(vlTOPp->puzzle__DOT__Xxnor2_2_9__DOT__base__DOT__xnor0_out_Y) 
                                                  & (IData)(vlTOPp->puzzle__DOT__Xnand2_2_9__DOT__base__DOT__nand0_out_Y)) 
                                                 | (IData)(vlTOPp->puzzle__DOT__Xxor2_2_8__DOT__base__DOT__xor0_out_X)) 
                                                | (IData)(vlTOPp->puzzle__DOT__Xo21a_2_0__DOT__base__DOT__and0_out_X)) 
                                               & (~ 
                                                  ((IData)(vlTOPp->puzzle__DOT__Xnor2_2_5__DOT__base__DOT__nor0_out_Y) 
                                                   & (IData)(vlTOPp->puzzle__DOT__Xxor2_2_8__DOT__base__DOT__xor0_out_X))))))));
            tracep->chgBit(oldp+271,((1U & (~ ((IData)(vlTOPp->puzzle__DOT__Xnor2_2_10__DOT__base__DOT__nor0_out_Y) 
                                               | (IData)(vlTOPp->puzzle__DOT__Xnand2_2_11__DOT__base__DOT__nand0_out_Y))))));
            tracep->chgBit(oldp+272,((1U & (~ ((IData)(vlTOPp->puzzle__DOT__Xxnor2_2_9__DOT__base__DOT__xnor0_out_Y) 
                                               | (IData)(vlTOPp->puzzle__DOT__Xor3_2_0__DOT__base__DOT__or0_out_X))))));
            tracep->chgBit(oldp+273,((1U & ((((IData)(vlTOPp->puzzle__DOT__Xand3_2_0__DOT__base__DOT__and0_out_X) 
                                              | (IData)(vlTOPp->puzzle__DOT__Xxor2_2_8__DOT__base__DOT__xor0_out_X)) 
                                             | (~ ((IData)(vlTOPp->puzzle__DOT__Xxnor2_2_9__DOT__base__DOT__xnor0_out_Y) 
                                                   | (IData)(vlTOPp->puzzle__DOT__Xor3_2_0__DOT__base__DOT__or0_out_X)))) 
                                            & ((IData)(vlTOPp->puzzle__DOT__Xo31ai_2_0__DOT__base__DOT__nand0_out_Y) 
                                               | (~ 
                                                  ((IData)(vlTOPp->puzzle__DOT__Xnor2_2_10__DOT__base__DOT__nor0_out_Y) 
                                                   | (IData)(vlTOPp->puzzle__DOT__Xnand2_2_11__DOT__base__DOT__nand0_out_Y))))))));
            tracep->chgBit(oldp+274,((((IData)(vlTOPp->puzzle__DOT__Xnand2_2_5__DOT__base__DOT__nand0_out_Y) 
                                       & (IData)(vlTOPp->puzzle__DOT__Xnor2_2_12__DOT__base__DOT__nor0_out_Y)) 
                                      | ((IData)(vlTOPp->puzzle__DOT__Xor2_2_2__DOT__base__DOT__or0_out_X) 
                                         & (IData)(vlTOPp->puzzle__DOT__Xxnor2_2_9__DOT__base__DOT__xnor0_out_Y)))));
            tracep->chgBit(oldp+275,(((IData)(vlTOPp->puzzle__DOT__Xxor2_2_2__DOT__base__DOT__xor0_out_X)
                                       ? (IData)(vlTOPp->puzzle__DOT__Xor3_2_2__DOT__base__DOT__or0_out_X)
                                       : (IData)(vlTOPp->puzzle__DOT__Xor3_2_0__DOT__base__DOT__or0_out_X))));
            tracep->chgBit(oldp+276,(((IData)(vlTOPp->puzzle__DOT__Xxor2_2_8__DOT__base__DOT__xor0_out_X) 
                                      | ((((IData)(vlTOPp->puzzle__DOT__Xnand2_2_1__DOT__base__DOT__nand0_out_Y) 
                                           & (IData)(vlTOPp->puzzle__DOT__Xnand2_2_0__DOT__base__DOT__nand0_out_Y)) 
                                          | (IData)(vlTOPp->puzzle__DOT__Xxor2_2_2__DOT__base__DOT__xor0_out_X)) 
                                         & (IData)(vlTOPp->puzzle__DOT__Xor2_2_4__DOT__base__DOT__or0_out_X)))));
            tracep->chgBit(oldp+277,((1U & ((~ ((IData)(vlTOPp->puzzle__DOT__Xxor2_2_8__DOT__base__DOT__xor0_out_X) 
                                                & ((~ (IData)(vlTOPp->puzzle__DOT__Xor2_2_2__DOT__base__DOT__or0_out_X)) 
                                                   | (IData)(vlTOPp->puzzle__DOT__Xxor2_2_2__DOT__base__DOT__xor0_out_X)))) 
                                            | (IData)(vlTOPp->puzzle__DOT__Xnor2_2_2__DOT__base__DOT__nor0_out_Y)))));
            tracep->chgBit(oldp+278,(((IData)(vlTOPp->puzzle__DOT__Xxor2_2_2__DOT__base__DOT__xor0_out_X) 
                                      & (IData)(vlTOPp->puzzle__DOT__Xnor2_2_10__DOT__base__DOT__nor0_out_Y))));
            tracep->chgBit(oldp+279,(((IData)(vlTOPp->puzzle__DOT__Xxor2_2_6__DOT__base__DOT__xor0_out_X) 
                                      & (~ ((IData)(vlTOPp->puzzle__DOT__Xnor2_2_5__DOT__base__DOT__nor0_out_Y) 
                                            | (~ ((IData)(vlTOPp->puzzle__DOT__Xxnor2_2_9__DOT__base__DOT__xnor0_out_Y) 
                                                  | (IData)(vlTOPp->puzzle__DOT__Xnand2_2_9__DOT__base__DOT__nand0_out_Y))))))));
            tracep->chgBit(oldp+280,((1U & (~ ((IData)(vlTOPp->puzzle__DOT__Xor2_2_3__DOT__base__DOT__or0_out_X) 
                                               & (IData)(vlTOPp->puzzle__DOT__Xxnor2_2_2__DOT__base__DOT__xnor0_out_Y))))));
            tracep->chgBit(oldp+281,((1U & (((IData)(vlTOPp->puzzle__DOT__Xxor2_2_8__DOT__base__DOT__xor0_out_X) 
                                             | (~ ((IData)(vlTOPp->puzzle__DOT__Xnand2_2_6__DOT__base__DOT__nand0_out_Y) 
                                                   | (IData)(vlTOPp->puzzle__DOT__Xxnor2_2_9__DOT__base__DOT__xnor0_out_Y)))) 
                                            | (IData)(vlTOPp->puzzle__DOT__Xand3_2_0__DOT__base__DOT__and0_out_X)))));
            tracep->chgBit(oldp+282,((1U & ((~ ((IData)(vlTOPp->puzzle__DOT__Xxor2_2_2__DOT__base__DOT__xor0_out_X) 
                                                | (IData)(vlTOPp->puzzle__DOT__Xnor2_2_10__DOT__base__DOT__nor0_out_Y))) 
                                            | (IData)(vlTOPp->puzzle__DOT__Xo31ai_2_0__DOT__base__DOT__nand0_out_Y)))));
            tracep->chgBit(oldp+283,((1U & (((IData)(vlTOPp->puzzle__DOT__Xand3_2_0__DOT__base__DOT__and0_out_X) 
                                             | (IData)(vlTOPp->puzzle__DOT__Xxor2_2_8__DOT__base__DOT__xor0_out_X)) 
                                            | (~ ((IData)(vlTOPp->puzzle__DOT__Xxnor2_2_9__DOT__base__DOT__xnor0_out_Y) 
                                                  | (IData)(vlTOPp->puzzle__DOT__Xor3_2_0__DOT__base__DOT__or0_out_X)))))));
            tracep->chgBit(oldp+284,((1U & ((IData)(vlTOPp->puzzle__DOT__Xo31ai_2_0__DOT__base__DOT__nand0_out_Y) 
                                            | (~ ((IData)(vlTOPp->puzzle__DOT__Xnor2_2_10__DOT__base__DOT__nor0_out_Y) 
                                                  | (IData)(vlTOPp->puzzle__DOT__Xnand2_2_11__DOT__base__DOT__nand0_out_Y)))))));
            tracep->chgBit(oldp+285,(((IData)(vlTOPp->puzzle__DOT__Xnand2b_2_0__DOT__base__DOT__or0_out_Y) 
                                      | (IData)(vlTOPp->puzzle__DOT__Xxor2_2_2__DOT__base__DOT__xor0_out_X))));
            tracep->chgBit(oldp+286,((((IData)(vlTOPp->puzzle__DOT__Xnor2_2_28__DOT__base__DOT__nor0_out_Y) 
                                       | (IData)(vlTOPp->puzzle__DOT__Xxor2_2_6__DOT__base__DOT__xor0_out_X)) 
                                      & (~ ((IData)(vlTOPp->puzzle__DOT__Xxor2_2_8__DOT__base__DOT__xor0_out_X) 
                                            | ((IData)(vlTOPp->puzzle__DOT__Xxor2_2_6__DOT__base__DOT__xor0_out_X) 
                                               & (~ 
                                                  ((IData)(vlTOPp->puzzle__DOT__Xnor2_2_5__DOT__base__DOT__nor0_out_Y) 
                                                   | (~ 
                                                      ((IData)(vlTOPp->puzzle__DOT__Xxnor2_2_9__DOT__base__DOT__xnor0_out_Y) 
                                                       | (IData)(vlTOPp->puzzle__DOT__Xnand2_2_9__DOT__base__DOT__nand0_out_Y)))))))))));
            tracep->chgBit(oldp+287,(((IData)(vlTOPp->puzzle__DOT__Xxor2_2_8__DOT__base__DOT__xor0_out_X) 
                                      & (IData)(vlTOPp->puzzle__DOT__Xor2_2_0__DOT__base__DOT__or0_out_X))));
            tracep->chgBit(oldp+288,(((IData)(vlTOPp->puzzle__DOT__Xxnor2_2_9__DOT__base__DOT__xnor0_out_Y) 
                                      & (IData)(vlTOPp->puzzle__DOT__Xnand2_2_9__DOT__base__DOT__nand0_out_Y))));
            tracep->chgBit(oldp+289,(((IData)(vlTOPp->puzzle__DOT__Xor2_2_2__DOT__base__DOT__or0_out_X) 
                                      & (IData)(vlTOPp->puzzle__DOT__Xxnor2_2_9__DOT__base__DOT__xnor0_out_Y))));
            tracep->chgBit(oldp+290,(((IData)(vlTOPp->puzzle__DOT__Xnand2_2_5__DOT__base__DOT__nand0_out_Y) 
                                      & (IData)(vlTOPp->puzzle__DOT__Xnor2_2_12__DOT__base__DOT__nor0_out_Y))));
            tracep->chgBit(oldp+291,((((IData)(vlTOPp->puzzle__DOT__Xnand2_2_1__DOT__base__DOT__nand0_out_Y) 
                                       & (IData)(vlTOPp->puzzle__DOT__Xnand2_2_0__DOT__base__DOT__nand0_out_Y)) 
                                      | (IData)(vlTOPp->puzzle__DOT__Xxor2_2_2__DOT__base__DOT__xor0_out_X))));
            tracep->chgBit(oldp+292,((((IData)(vlTOPp->puzzle__DOT__Xnand2_2_0__DOT__base__DOT__nand0_out_Y) 
                                       & (IData)(vlTOPp->puzzle__DOT__Xxor2_2_2__DOT__base__DOT__xor0_out_X)) 
                                      & (IData)(vlTOPp->puzzle__DOT__Xnand2_2_1__DOT__base__DOT__nand0_out_Y))));
            tracep->chgBit(oldp+293,((1U & (~ ((IData)(vlTOPp->puzzle__DOT__Xxnor2_2_9__DOT__base__DOT__xnor0_out_Y) 
                                               | (IData)(vlTOPp->puzzle__DOT__Xnand2_2_5__DOT__base__DOT__nand0_out_Y))))));
            tracep->chgBit(oldp+294,((1U & ((~ (IData)(vlTOPp->puzzle__DOT__Xor2_2_2__DOT__base__DOT__or0_out_X)) 
                                            | (IData)(vlTOPp->puzzle__DOT__Xxor2_2_2__DOT__base__DOT__xor0_out_X)))));
            tracep->chgBit(oldp+295,(((IData)(vlTOPp->puzzle__DOT__Xxor2_2_6__DOT__base__DOT__xor0_out_X) 
                                      & (~ (((((IData)(vlTOPp->puzzle__DOT__Xxnor2_2_9__DOT__base__DOT__xnor0_out_Y) 
                                               & (IData)(vlTOPp->puzzle__DOT__Xnand2_2_9__DOT__base__DOT__nand0_out_Y)) 
                                              | (IData)(vlTOPp->puzzle__DOT__Xxor2_2_8__DOT__base__DOT__xor0_out_X)) 
                                             | (IData)(vlTOPp->puzzle__DOT__Xo21a_2_0__DOT__base__DOT__and0_out_X)) 
                                            & (~ ((IData)(vlTOPp->puzzle__DOT__Xnor2_2_5__DOT__base__DOT__nor0_out_Y) 
                                                  & (IData)(vlTOPp->puzzle__DOT__Xxor2_2_8__DOT__base__DOT__xor0_out_X))))))));
            tracep->chgBit(oldp+296,((1U & (~ ((IData)(vlTOPp->puzzle__DOT__Xxnor2_2_9__DOT__base__DOT__xnor0_out_Y) 
                                               | (IData)(vlTOPp->puzzle__DOT__Xnand2_2_9__DOT__base__DOT__nand0_out_Y))))));
            tracep->chgBit(oldp+297,((1U & (((IData)(vlTOPp->puzzle__DOT__Xnor2_2_2__DOT__base__DOT__nor0_out_Y) 
                                             | (IData)(vlTOPp->puzzle__DOT__Xxnor2_2_9__DOT__base__DOT__xnor0_out_Y)) 
                                            | (~ (IData)(vlTOPp->puzzle__DOT__Xor2_2_2__DOT__base__DOT__or0_out_X))))));
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x12U])) {
            tracep->chgBit(oldp+298,(vlTOPp->puzzle__DOT__Xo211a_2_5__DOT__base__DOT__and0_out_X));
            tracep->chgBit(oldp+299,(vlTOPp->puzzle__DOT__Xo211a_2_4__DOT__base__DOT__and0_out_X));
            tracep->chgBit(oldp+300,(vlTOPp->puzzle__DOT__Xnor4_2_0__DOT__base__DOT__nor0_out_Y));
            tracep->chgBit(oldp+301,(vlTOPp->puzzle__DOT__Xo211a_2_3__DOT__base__DOT__and0_out_X));
            tracep->chgBit(oldp+302,(vlTOPp->puzzle__DOT__Xo211a_2_2__DOT__base__DOT__and0_out_X));
            tracep->chgBit(oldp+303,(vlTOPp->puzzle__DOT__Xxor2_2_2__DOT__base__DOT__xor0_out_X));
            tracep->chgBit(oldp+304,(vlTOPp->puzzle__DOT__Xand4bb_2_7__DOT__base__DOT__and0_out_X));
            tracep->chgBit(oldp+305,(vlTOPp->puzzle__DOT__Xxnor2_2_9__DOT__base__DOT__xnor0_out_Y));
            tracep->chgBit(oldp+306,(vlTOPp->puzzle__DOT__Xnor2_2_12__DOT__base__DOT__nor0_out_Y));
            tracep->chgBit(oldp+307,(vlTOPp->puzzle__DOT__Xa21o_2_8__DOT__base__DOT__or0_out_X));
            tracep->chgBit(oldp+308,(vlTOPp->puzzle__DOT__Xxor2_2_8__DOT__base__DOT__xor0_out_X));
            tracep->chgBit(oldp+309,(vlTOPp->puzzle__DOT__Xxnor2_2_10__DOT__base__DOT__xnor0_out_Y));
            tracep->chgBit(oldp+310,(vlTOPp->puzzle__DOT__Xand4bb_2_8__DOT__base__DOT__and0_out_X));
            tracep->chgBit(oldp+311,(vlTOPp->puzzle__DOT__Xa21oi_2_0__DOT__base__DOT__nor0_out_Y));
            tracep->chgBit(oldp+312,(vlTOPp->puzzle__DOT__Xor4b_2_0__DOT__base__DOT__or0_out_X));
            tracep->chgBit(oldp+313,(vlTOPp->puzzle__DOT__Xor4b_2_1__DOT__base__DOT__or0_out_X));
            tracep->chgBit(oldp+314,(vlTOPp->puzzle__DOT__Xxor2_2_6__DOT__base__DOT__xor0_out_X));
            tracep->chgBit(oldp+315,(vlTOPp->puzzle__DOT__Xnor2_2_20__DOT__base__DOT__nor0_out_Y));
            tracep->chgBit(oldp+316,(vlTOPp->puzzle__DOT__Xor4b_2_2__DOT__base__DOT__or0_out_X));
            tracep->chgBit(oldp+317,(vlTOPp->puzzle__DOT__Xnand2_2_3__DOT__base__DOT__nand0_out_Y));
            tracep->chgBit(oldp+318,(vlTOPp->puzzle__DOT__Xxor2_2_5__DOT__base__DOT__xor0_out_X));
            tracep->chgBit(oldp+319,(vlTOPp->puzzle__DOT__Xo21a_2_0__DOT__base__DOT__and0_out_X));
            tracep->chgBit(oldp+320,(vlTOPp->puzzle__DOT__Xor4b_2_3__DOT__base__DOT__or0_out_X));
            tracep->chgBit(oldp+321,((((IData)(vlTOPp->puzzle__DOT__Xnor2_2_28__DOT__base__DOT__nor0_out_Y) 
                                       | (IData)(vlTOPp->puzzle__DOT__Xxor2_2_8__DOT__base__DOT__xor0_out_X)) 
                                      | (IData)(vlTOPp->puzzle__DOT__Xnor2_2_11__DOT__base__DOT__nor0_out_Y))));
            tracep->chgBit(oldp+322,(((((IData)(vlTOPp->puzzle__DOT__Xnor2_2_12__DOT__base__DOT__nor0_out_Y) 
                                        | (IData)(vlTOPp->puzzle__DOT__Xnand2_2_3__DOT__base__DOT__nand0_out_Y)) 
                                       & (IData)(vlTOPp->puzzle__DOT__Xxnor2_2_10__DOT__base__DOT__xnor0_out_Y)) 
                                      & (((IData)(vlTOPp->puzzle__DOT__Xnor2_2_28__DOT__base__DOT__nor0_out_Y) 
                                          | (IData)(vlTOPp->puzzle__DOT__Xxor2_2_8__DOT__base__DOT__xor0_out_X)) 
                                         | (IData)(vlTOPp->puzzle__DOT__Xnor2_2_11__DOT__base__DOT__nor0_out_Y)))));
            tracep->chgBit(oldp+323,(vlTOPp->puzzle__DOT__Xor2_2_3__DOT__base__DOT__or0_out_X));
            tracep->chgBit(oldp+324,(vlTOPp->puzzle__DOT__Xand3_2_0__DOT__base__DOT__and0_out_X));
            tracep->chgBit(oldp+325,(vlTOPp->puzzle__DOT__Xo31ai_2_0__DOT__base__DOT__nand0_out_Y));
            tracep->chgBit(oldp+326,(vlTOPp->puzzle__DOT__Xa21o_2_5__DOT__base__DOT__or0_out_X));
            tracep->chgBit(oldp+327,(vlTOPp->puzzle__DOT__Xa21oi_2_7__DOT__base__DOT__nor0_out_Y));
            tracep->chgBit(oldp+328,(vlTOPp->puzzle__DOT__Xnor2_2_5__DOT__base__DOT__nor0_out_Y));
            tracep->chgBit(oldp+329,(vlTOPp->puzzle__DOT__Xor2_2_4__DOT__base__DOT__or0_out_X));
            tracep->chgBit(oldp+330,(vlTOPp->puzzle__DOT__Xnand2_2_11__DOT__base__DOT__nand0_out_Y));
            tracep->chgBit(oldp+331,(((IData)(vlTOPp->puzzle__DOT__Xnor2_2_28__DOT__base__DOT__nor0_out_Y) 
                                      | (IData)(vlTOPp->puzzle__DOT__Xxor2_2_6__DOT__base__DOT__xor0_out_X))));
            tracep->chgBit(oldp+332,(vlTOPp->puzzle__DOT__Xxnor2_2_7__DOT__base__DOT__xnor0_out_Y));
            tracep->chgBit(oldp+333,(vlTOPp->puzzle__DOT__Xand4b_2_1__DOT__base__DOT__and0_out_X));
            tracep->chgBit(oldp+334,(vlTOPp->puzzle__DOT__Xand3_2_1__DOT__base__DOT__and0_out_X));
            tracep->chgBit(oldp+335,((1U & (~ ((IData)(vlTOPp->puzzle__DOT__Xxor2_2_8__DOT__base__DOT__xor0_out_X) 
                                               & ((IData)(vlTOPp->puzzle__DOT__Xand3_2_1__DOT__base__DOT__and0_out_X) 
                                                  | (IData)(vlTOPp->puzzle__DOT__Xnor2_2_12__DOT__base__DOT__nor0_out_Y)))))));
            tracep->chgBit(oldp+336,(vlTOPp->puzzle__DOT__Xnor2_2_28__DOT__base__DOT__nor0_out_Y));
            tracep->chgBit(oldp+337,(vlTOPp->puzzle__DOT__Xnor2_2_11__DOT__base__DOT__nor0_out_Y));
            tracep->chgBit(oldp+338,((((~ ((IData)(vlTOPp->puzzle__DOT__Xo211a_2_3__DOT__base__DOT__and0_out_X) 
                                           | (IData)(vlTOPp->puzzle__DOT__Xo211a_2_5__DOT__base__DOT__and0_out_X))) 
                                       & (IData)(vlTOPp->puzzle__DOT__Xo211a_2_4__DOT__base__DOT__and0_out_X)) 
                                      & (IData)(vlTOPp->puzzle__DOT__Xo211a_2_2__DOT__base__DOT__and0_out_X))));
            tracep->chgBit(oldp+339,((((~ ((IData)(vlTOPp->puzzle__DOT__Xo211a_2_2__DOT__base__DOT__and0_out_X) 
                                           | (IData)(vlTOPp->puzzle__DOT__Xo211a_2_5__DOT__base__DOT__and0_out_X))) 
                                       & (IData)(vlTOPp->puzzle__DOT__Xo211a_2_4__DOT__base__DOT__and0_out_X)) 
                                      & (IData)(vlTOPp->puzzle__DOT__Xo211a_2_3__DOT__base__DOT__and0_out_X))));
            tracep->chgBit(oldp+340,((((~ ((IData)(vlTOPp->puzzle__DOT__Xo211a_2_5__DOT__base__DOT__and0_out_X) 
                                           | (IData)(vlTOPp->puzzle__DOT__Xo211a_2_4__DOT__base__DOT__and0_out_X))) 
                                       & (IData)(vlTOPp->puzzle__DOT__Xo211a_2_2__DOT__base__DOT__and0_out_X)) 
                                      & (IData)(vlTOPp->puzzle__DOT__Xo211a_2_3__DOT__base__DOT__and0_out_X))));
            tracep->chgBit(oldp+341,((1U & (~ ((IData)(vlTOPp->puzzle__DOT__Xo211a_2_3__DOT__base__DOT__and0_out_X) 
                                               | (IData)(vlTOPp->puzzle__DOT__Xo211a_2_4__DOT__base__DOT__and0_out_X))))));
            tracep->chgBit(oldp+342,((1U & (~ ((IData)(vlTOPp->puzzle__DOT__Xo211a_2_2__DOT__base__DOT__and0_out_X) 
                                               | (IData)(vlTOPp->puzzle__DOT__Xo211a_2_4__DOT__base__DOT__and0_out_X))))));
            tracep->chgBit(oldp+343,((1U & (~ (IData)(vlTOPp->puzzle__DOT__Xo211a_2_2__DOT__base__DOT__and0_out_X)))));
            tracep->chgBit(oldp+344,((1U & (~ (IData)(vlTOPp->puzzle__DOT__Xo211a_2_3__DOT__base__DOT__and0_out_X)))));
            tracep->chgBit(oldp+345,((1U & (~ (IData)(vlTOPp->puzzle__DOT__Xo211a_2_4__DOT__base__DOT__and0_out_X)))));
            tracep->chgBit(oldp+346,((1U & (~ (IData)(vlTOPp->puzzle__DOT__Xo211a_2_5__DOT__base__DOT__and0_out_X)))));
            tracep->chgBit(oldp+347,(((IData)(vlTOPp->puzzle__DOT__Xnor2_2_12__DOT__base__DOT__nor0_out_Y) 
                                      | (IData)(vlTOPp->puzzle__DOT__Xnand2_2_3__DOT__base__DOT__nand0_out_Y))));
            tracep->chgBit(oldp+348,((1U & (~ ((IData)(vlTOPp->puzzle__DOT__Xnor2_2_5__DOT__base__DOT__nor0_out_Y) 
                                               & (IData)(vlTOPp->puzzle__DOT__Xxor2_2_8__DOT__base__DOT__xor0_out_X))))));
            tracep->chgBit(oldp+349,((((IData)(vlTOPp->puzzle__DOT__Xor2_2_4__DOT__base__DOT__or0_out_X) 
                                       & (IData)(vlTOPp->puzzle__DOT__Xxor2_2_8__DOT__base__DOT__xor0_out_X)) 
                                      & (IData)(vlTOPp->puzzle__DOT__Xnand2_2_11__DOT__base__DOT__nand0_out_Y))));
            tracep->chgBit(oldp+350,(((IData)(vlTOPp->puzzle__DOT__Xand3_2_1__DOT__base__DOT__and0_out_X) 
                                      | (IData)(vlTOPp->puzzle__DOT__Xnor2_2_12__DOT__base__DOT__nor0_out_Y))));
            tracep->chgBit(oldp+351,((1U & (~ ((IData)(vlTOPp->puzzle__DOT__Xo211a_2_5__DOT__base__DOT__and0_out_X) 
                                               | (IData)(vlTOPp->puzzle__DOT__Xo211a_2_4__DOT__base__DOT__and0_out_X))))));
            tracep->chgBit(oldp+352,((1U & (~ ((IData)(vlTOPp->puzzle__DOT__Xo211a_2_3__DOT__base__DOT__and0_out_X) 
                                               | (IData)(vlTOPp->puzzle__DOT__Xo211a_2_5__DOT__base__DOT__and0_out_X))))));
            tracep->chgBit(oldp+353,((1U & (~ ((IData)(vlTOPp->puzzle__DOT__Xo211a_2_2__DOT__base__DOT__and0_out_X) 
                                               | (IData)(vlTOPp->puzzle__DOT__Xo211a_2_5__DOT__base__DOT__and0_out_X))))));
        }
        tracep->chgBit(oldp+354,(vlTOPp->I));
        tracep->chgBit(oldp+355,(vlTOPp->O[0]));
        tracep->chgBit(oldp+356,(vlTOPp->O[1]));
        tracep->chgBit(oldp+357,(vlTOPp->O[2]));
        tracep->chgBit(oldp+358,(vlTOPp->O[3]));
        tracep->chgBit(oldp+359,(vlTOPp->O[4]));
        tracep->chgBit(oldp+360,(vlTOPp->O[5]));
        tracep->chgBit(oldp+361,(vlTOPp->O[6]));
        tracep->chgBit(oldp+362,(vlTOPp->O[7]));
        tracep->chgBit(oldp+363,(vlTOPp->clk));
        tracep->chgBit(oldp+364,(vlTOPp->enable));
        tracep->chgBit(oldp+365,(vlTOPp->rst_n));
        tracep->chgBit(oldp+366,(vlTOPp->success));
        tracep->chgBit(oldp+367,(vlTOPp->puzzle__DOT__Xdfxtp_2_0__DOT__base__DOT__buf_Q));
        tracep->chgBit(oldp+368,(vlTOPp->puzzle__DOT__Xdfxtp_2_3__DOT__base__DOT__buf_Q));
        tracep->chgBit(oldp+369,(((~ (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_6__DOT__base__DOT__buf_Q)) 
                                  & (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_11__DOT__base__DOT__buf_Q))));
        tracep->chgBit(oldp+370,(vlTOPp->puzzle__DOT__Xdfrtp_2_11__DOT__base__DOT__buf_Q));
        tracep->chgBit(oldp+371,(vlTOPp->puzzle__DOT__Xdfrtp_2_6__DOT__base__DOT__buf_Q));
        tracep->chgBit(oldp+372,(((((IData)(vlTOPp->puzzle__DOT__Xand4bb_2_7__DOT__base__DOT__and0_out_X) 
                                    & (IData)(vlTOPp->I)) 
                                   & (IData)(vlTOPp->puzzle__DOT__Xand2b_2_11__DOT__base__DOT__and0_out_X)) 
                                  | (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_56__DOT__base__DOT__buf_Q))));
        tracep->chgBit(oldp+373,(vlTOPp->puzzle__DOT__Xdfrtp_2_56__DOT__base__DOT__buf_Q));
        tracep->chgBit(oldp+374,(((((((~ ((((IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_0__DOT__base__DOT__buf_Q) 
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
                                     | (IData)(vlTOPp->puzzle__DOT__Xa21oi_2_18__DOT__base__DOT__nor0_out_Y)))));
        tracep->chgBit(oldp+375,(vlTOPp->puzzle__DOT__Xdfrtp_2_83__DOT__base__DOT__buf_Q));
        tracep->chgBit(oldp+376,(vlTOPp->puzzle__DOT__Xdfrtp_2_74__DOT__base__DOT__buf_Q));
        tracep->chgBit(oldp+377,((((IData)(vlTOPp->puzzle__DOT__Xnor3b_2_4__DOT__base__DOT__and0_out_Y) 
                                   | (IData)(vlTOPp->puzzle__DOT__Xa211oi_2_2__DOT__base__DOT__nor0_out_Y)) 
                                  | (IData)(vlTOPp->puzzle__DOT__Xa21oi_2_18__DOT__base__DOT__nor0_out_Y))));
        tracep->chgBit(oldp+378,(((((IData)(vlTOPp->puzzle__DOT__Xand3_2_8__DOT__base__DOT__and0_out_X) 
                                    & (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_20__DOT__base__DOT__buf_Q)) 
                                   & (IData)(vlTOPp->puzzle__DOT__Xand3_2_9__DOT__base__DOT__and0_out_X)) 
                                  | (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_21__DOT__base__DOT__buf_Q))));
        tracep->chgBit(oldp+379,(vlTOPp->puzzle__DOT__Xdfrtp_2_21__DOT__base__DOT__buf_Q));
        tracep->chgBit(oldp+380,(vlTOPp->puzzle__DOT__Xand3_2_8__DOT__base__DOT__and0_out_X));
        tracep->chgBit(oldp+381,(vlTOPp->puzzle__DOT__Xdfrtp_2_20__DOT__base__DOT__buf_Q));
        tracep->chgBit(oldp+382,(vlTOPp->puzzle__DOT__Xxnor2_2_24__DOT__base__DOT__xnor0_out_Y));
        tracep->chgBit(oldp+383,(vlTOPp->puzzle__DOT__Xdfstp_2_1__DOT__base__DOT__buf_Q));
        tracep->chgBit(oldp+384,(vlTOPp->puzzle__DOT__Xxor2_2_19__DOT__base__DOT__xor0_out_X));
        tracep->chgBit(oldp+385,((1U & (~ ((IData)(vlTOPp->puzzle__DOT__Xdfstp_2_0__DOT__base__DOT__buf_Q) 
                                           ^ ((((IData)(vlTOPp->puzzle__DOT__Xnand2_2_29__DOT__base__DOT__nand0_out_Y) 
                                                & (IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_3__DOT__base__DOT__buf_Q)) 
                                               & (~ (IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_0__DOT__base__DOT__buf_Q))) 
                                              | ((~ 
                                                  ((~ (IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_0__DOT__base__DOT__buf_Q)) 
                                                   & (IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_2__DOT__base__DOT__buf_Q))) 
                                                 & (~ 
                                                    ((IData)(vlTOPp->puzzle__DOT__Xnand2_2_29__DOT__base__DOT__nand0_out_Y) 
                                                     & (IData)(vlTOPp->puzzle__DOT__Xor2_2_9__DOT__base__DOT__or0_out_X))))))))));
        tracep->chgBit(oldp+386,(vlTOPp->puzzle__DOT__Xdfstp_2_0__DOT__base__DOT__buf_Q));
        tracep->chgBit(oldp+387,((1U & ((((IData)(vlTOPp->puzzle__DOT__Xnand2_2_29__DOT__base__DOT__nand0_out_Y) 
                                          & (IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_3__DOT__base__DOT__buf_Q)) 
                                         & (~ (IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_0__DOT__base__DOT__buf_Q))) 
                                        | ((~ ((~ (IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_0__DOT__base__DOT__buf_Q)) 
                                               & (IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_2__DOT__base__DOT__buf_Q))) 
                                           & (~ ((IData)(vlTOPp->puzzle__DOT__Xnand2_2_29__DOT__base__DOT__nand0_out_Y) 
                                                 & (IData)(vlTOPp->puzzle__DOT__Xor2_2_9__DOT__base__DOT__or0_out_X))))))));
        tracep->chgBit(oldp+388,((1U & (~ ((IData)(vlTOPp->puzzle__DOT__Xxnor2_2_5__DOT__base__DOT__xnor0_out_Y) 
                                           | (IData)(vlTOPp->puzzle__DOT__Xo2bb2a_2_0__DOT__base__DOT__and0_out_X))))));
        tracep->chgBit(oldp+389,((1U & (~ ((IData)(vlTOPp->puzzle__DOT__Xo2bb2a_2_0__DOT__base__DOT__and0_out_X) 
                                           & (IData)(vlTOPp->puzzle__DOT__Xxnor2_2_5__DOT__base__DOT__xnor0_out_Y))))));
        tracep->chgBit(oldp+390,((((~ ((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_44__DOT__base__DOT__buf_Q) 
                                       | (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_46__DOT__base__DOT__buf_Q))) 
                                   & (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_45__DOT__base__DOT__buf_Q)) 
                                  & (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_43__DOT__base__DOT__buf_Q))));
        tracep->chgBit(oldp+391,((((IData)(vlTOPp->puzzle__DOT__Xand2b_2_11__DOT__base__DOT__and0_out_X) 
                                   & (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_43__DOT__base__DOT__buf_Q)) 
                                  & (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_44__DOT__base__DOT__buf_Q))));
        tracep->chgBit(oldp+392,((1U & (~ ((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_43__DOT__base__DOT__buf_Q) 
                                           | ((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_44__DOT__base__DOT__buf_Q) 
                                              & (IData)(vlTOPp->puzzle__DOT__Xand2b_2_11__DOT__base__DOT__and0_out_X)))))));
        tracep->chgBit(oldp+393,((1U & (~ ((((IData)(vlTOPp->puzzle__DOT__Xand2b_2_11__DOT__base__DOT__and0_out_X) 
                                             & (((~ 
                                                  ((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_44__DOT__base__DOT__buf_Q) 
                                                   | (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_46__DOT__base__DOT__buf_Q))) 
                                                 & (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_45__DOT__base__DOT__buf_Q)) 
                                                & (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_43__DOT__base__DOT__buf_Q))) 
                                            | (~ ((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_43__DOT__base__DOT__buf_Q) 
                                                  | ((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_44__DOT__base__DOT__buf_Q) 
                                                     & (IData)(vlTOPp->puzzle__DOT__Xand2b_2_11__DOT__base__DOT__and0_out_X))))) 
                                           | (((IData)(vlTOPp->puzzle__DOT__Xand2b_2_11__DOT__base__DOT__and0_out_X) 
                                               & (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_43__DOT__base__DOT__buf_Q)) 
                                              & (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_44__DOT__base__DOT__buf_Q)))))));
        tracep->chgBit(oldp+394,(vlTOPp->puzzle__DOT__Xdfrtp_2_45__DOT__base__DOT__buf_Q));
        tracep->chgBit(oldp+395,(vlTOPp->puzzle__DOT__Xdfrtp_2_46__DOT__base__DOT__buf_Q));
        tracep->chgBit(oldp+396,(vlTOPp->puzzle__DOT__Xdfrtp_2_43__DOT__base__DOT__buf_Q));
        tracep->chgBit(oldp+397,(vlTOPp->puzzle__DOT__Xdfrtp_2_44__DOT__base__DOT__buf_Q));
        tracep->chgBit(oldp+398,(vlTOPp->puzzle__DOT__Xdfxtp_2_2__DOT__base__DOT__buf_Q));
        tracep->chgBit(oldp+399,((1U & (~ (IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_0__DOT__base__DOT__buf_Q)))));
        tracep->chgBit(oldp+400,((1U & ((~ ((~ (IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_0__DOT__base__DOT__buf_Q)) 
                                            & (IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_2__DOT__base__DOT__buf_Q))) 
                                        & (~ ((IData)(vlTOPp->puzzle__DOT__Xnand2_2_29__DOT__base__DOT__nand0_out_Y) 
                                              & (IData)(vlTOPp->puzzle__DOT__Xor2_2_9__DOT__base__DOT__or0_out_X)))))));
        tracep->chgBit(oldp+401,(vlTOPp->puzzle__DOT__Xdfxtp_2_1__DOT__base__DOT__buf_Q));
        tracep->chgBit(oldp+402,(((~ (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_5__DOT__base__DOT__buf_Q)) 
                                  & (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_12__DOT__base__DOT__buf_Q))));
        tracep->chgBit(oldp+403,(vlTOPp->puzzle__DOT__Xdfrtp_2_12__DOT__base__DOT__buf_Q));
        tracep->chgBit(oldp+404,(vlTOPp->puzzle__DOT__Xdfrtp_2_5__DOT__base__DOT__buf_Q));
        tracep->chgBit(oldp+405,((((((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_2__DOT__base__DOT__buf_Q) 
                                     & (~ (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_1__DOT__base__DOT__buf_Q))) 
                                    & ((~ (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_0__DOT__base__DOT__buf_Q)) 
                                       & (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_14__DOT__base__DOT__buf_Q))) 
                                   & ((~ (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_8__DOT__base__DOT__buf_Q)) 
                                      & (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_4__DOT__base__DOT__buf_Q))) 
                                  & ((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_3__DOT__base__DOT__buf_Q) 
                                     & (~ (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_9__DOT__base__DOT__buf_Q))))));
        tracep->chgBit(oldp+406,(((~ (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_8__DOT__base__DOT__buf_Q)) 
                                  & (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_4__DOT__base__DOT__buf_Q))));
        tracep->chgBit(oldp+407,(((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_2__DOT__base__DOT__buf_Q) 
                                  & (~ (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_1__DOT__base__DOT__buf_Q)))));
        tracep->chgBit(oldp+408,(((~ (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_0__DOT__base__DOT__buf_Q)) 
                                  & (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_14__DOT__base__DOT__buf_Q))));
        tracep->chgBit(oldp+409,(((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_3__DOT__base__DOT__buf_Q) 
                                  & (~ (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_9__DOT__base__DOT__buf_Q)))));
        tracep->chgBit(oldp+410,(((((IData)(vlTOPp->puzzle__DOT__Xnor4_2_1__DOT__base__DOT__nor0_out_Y) 
                                    & (IData)(vlTOPp->I)) 
                                   & (IData)(vlTOPp->puzzle__DOT__Xand2b_2_11__DOT__base__DOT__and0_out_X)) 
                                  | (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_60__DOT__base__DOT__buf_Q))));
        tracep->chgBit(oldp+411,(vlTOPp->puzzle__DOT__Xdfrtp_2_60__DOT__base__DOT__buf_Q));
        tracep->chgBit(oldp+412,(vlTOPp->puzzle__DOT__Xand2b_2_8__DOT__base__DOT__and0_out_X));
        tracep->chgBit(oldp+413,(vlTOPp->puzzle__DOT__Xand3_2_10__DOT__base__DOT__and0_out_X));
        tracep->chgBit(oldp+414,((((~ ((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_25__DOT__base__DOT__buf_Q) 
                                       | (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_22__DOT__base__DOT__buf_Q))) 
                                   & (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_19__DOT__base__DOT__buf_Q)) 
                                  & (IData)(vlTOPp->puzzle__DOT__Xdfrtp_1_26__DOT__base__DOT__buf_Q))));
        tracep->chgBit(oldp+415,(((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_20__DOT__base__DOT__buf_Q) 
                                  & (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_21__DOT__base__DOT__buf_Q))));
        tracep->chgBit(oldp+416,((((((IData)(vlTOPp->puzzle__DOT__Xnor3_2_3__DOT__base__DOT__nor0_out_Y) 
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
                                            | (~ ((
                                                   ((IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_1__DOT__base__DOT__buf_Q) 
                                                    & (IData)(vlTOPp->puzzle__DOT__Xnand2b_2_10__DOT__base__DOT__or0_out_Y)) 
                                                   | (IData)(vlTOPp->puzzle__DOT__Xand2b_2_7__DOT__base__DOT__and0_out_X)) 
                                                  | (IData)(vlTOPp->puzzle__DOT__Xa31oi_2_0__DOT__base__DOT__nor0_out_Y))))))) 
                                  & (((IData)(vlTOPp->puzzle__DOT__Xnor3b_2_4__DOT__base__DOT__and0_out_Y) 
                                      | (IData)(vlTOPp->puzzle__DOT__Xa211oi_2_2__DOT__base__DOT__nor0_out_Y)) 
                                     | (IData)(vlTOPp->puzzle__DOT__Xa21oi_2_18__DOT__base__DOT__nor0_out_Y)))));
        tracep->chgBit(oldp+417,(vlTOPp->puzzle__DOT__Xdfrtp_2_73__DOT__base__DOT__buf_Q));
        tracep->chgBit(oldp+418,((1U & (~ ((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_49__DOT__base__DOT__buf_Q) 
                                           ^ ((IData)(vlTOPp->puzzle__DOT__Xdfstp_2_0__DOT__base__DOT__buf_Q) 
                                              ^ (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_50__DOT__base__DOT__buf_Q)))))));
        tracep->chgBit(oldp+419,(vlTOPp->puzzle__DOT__Xdfrtp_2_49__DOT__base__DOT__buf_Q));
        tracep->chgBit(oldp+420,(((IData)(vlTOPp->puzzle__DOT__Xdfstp_2_0__DOT__base__DOT__buf_Q) 
                                  ^ (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_50__DOT__base__DOT__buf_Q))));
        tracep->chgBit(oldp+421,((1U & (~ ((IData)(vlTOPp->puzzle__DOT__Xdfstp_2_1__DOT__base__DOT__buf_Q) 
                                           ^ (~ ((IData)(vlTOPp->puzzle__DOT__Xnor2_2_36__DOT__base__DOT__nor0_out_Y) 
                                                 | ((IData)(vlTOPp->puzzle__DOT__Xnand2_2_32__DOT__base__DOT__nand0_out_Y) 
                                                    & (IData)(vlTOPp->puzzle__DOT__Xnand2_2_30__DOT__base__DOT__nand0_out_Y)))))))));
        tracep->chgBit(oldp+422,((1U & (~ ((IData)(vlTOPp->puzzle__DOT__Xnor2_2_36__DOT__base__DOT__nor0_out_Y) 
                                           | ((IData)(vlTOPp->puzzle__DOT__Xnand2_2_32__DOT__base__DOT__nand0_out_Y) 
                                              & (IData)(vlTOPp->puzzle__DOT__Xnand2_2_30__DOT__base__DOT__nand0_out_Y)))))));
        tracep->chgBit(oldp+423,(vlTOPp->puzzle__DOT__Xdfrtp_2_16__DOT__base__DOT__buf_Q));
        tracep->chgBit(oldp+424,((1U & (~ ((IData)(vlTOPp->puzzle__DOT__Xand2b_2_11__DOT__base__DOT__and0_out_X) 
                                           & (((~ ((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_44__DOT__base__DOT__buf_Q) 
                                                   | (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_46__DOT__base__DOT__buf_Q))) 
                                               & (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_45__DOT__base__DOT__buf_Q)) 
                                              & (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_43__DOT__base__DOT__buf_Q)))))));
        tracep->chgBit(oldp+425,((((~ (((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_18__DOT__base__DOT__buf_Q) 
                                        & (~ (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_17__DOT__base__DOT__buf_Q))) 
                                       & (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_15__DOT__base__DOT__buf_Q))) 
                                   & (((~ ((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_44__DOT__base__DOT__buf_Q) 
                                           | (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_46__DOT__base__DOT__buf_Q))) 
                                       & (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_45__DOT__base__DOT__buf_Q)) 
                                      & (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_43__DOT__base__DOT__buf_Q))) 
                                  & (IData)(vlTOPp->puzzle__DOT__Xand2b_2_11__DOT__base__DOT__and0_out_X))));
        tracep->chgBit(oldp+426,((1U & ((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_16__DOT__base__DOT__buf_Q)
                                         ? (~ ((IData)(vlTOPp->puzzle__DOT__Xand2b_2_11__DOT__base__DOT__and0_out_X) 
                                               & (((~ 
                                                    ((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_44__DOT__base__DOT__buf_Q) 
                                                     | (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_46__DOT__base__DOT__buf_Q))) 
                                                   & (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_45__DOT__base__DOT__buf_Q)) 
                                                  & (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_43__DOT__base__DOT__buf_Q))))
                                         : (((~ (((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_18__DOT__base__DOT__buf_Q) 
                                                  & (~ (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_17__DOT__base__DOT__buf_Q))) 
                                                 & (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_15__DOT__base__DOT__buf_Q))) 
                                             & (((~ 
                                                  ((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_44__DOT__base__DOT__buf_Q) 
                                                   | (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_46__DOT__base__DOT__buf_Q))) 
                                                 & (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_45__DOT__base__DOT__buf_Q)) 
                                                & (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_43__DOT__base__DOT__buf_Q))) 
                                            & (IData)(vlTOPp->puzzle__DOT__Xand2b_2_11__DOT__base__DOT__and0_out_X))))));
        tracep->chgBit(oldp+427,((((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_17__DOT__base__DOT__buf_Q) 
                                   & (IData)(vlTOPp->puzzle__DOT__Xand4_2_2__DOT__base__DOT__and0_out_X)) 
                                  | (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_18__DOT__base__DOT__buf_Q))));
        tracep->chgBit(oldp+428,(vlTOPp->puzzle__DOT__Xdfrtp_2_18__DOT__base__DOT__buf_Q));
        tracep->chgBit(oldp+429,(vlTOPp->puzzle__DOT__Xdfrtp_2_17__DOT__base__DOT__buf_Q));
        tracep->chgBit(oldp+430,(vlTOPp->puzzle__DOT__Xdfrtp_2_82__DOT__base__DOT__buf_Q));
        tracep->chgBit(oldp+431,(vlTOPp->puzzle__DOT__Xnor4b_2_1__DOT__base__DOT__nor0_out_Y));
        tracep->chgBit(oldp+432,((1U & (~ (IData)(vlTOPp->success)))));
        tracep->chgBit(oldp+433,((1U & (~ ((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_49__DOT__base__DOT__buf_Q) 
                                           ^ (~ ((IData)(vlTOPp->puzzle__DOT__Xdfstp_2_3__DOT__base__DOT__buf_Q) 
                                                 ^ (IData)(vlTOPp->puzzle__DOT__Xdfstp_2_2__DOT__base__DOT__buf_Q))))))));
        tracep->chgBit(oldp+434,(((((~ ((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_49__DOT__base__DOT__buf_Q) 
                                        ^ (~ ((IData)(vlTOPp->puzzle__DOT__Xdfstp_2_3__DOT__base__DOT__buf_Q) 
                                              ^ (IData)(vlTOPp->puzzle__DOT__Xdfstp_2_2__DOT__base__DOT__buf_Q))))) 
                                    | ((~ (IData)(vlTOPp->puzzle__DOT__Xand2_2_16__DOT__base__DOT__and0_out_X)) 
                                       | (IData)(vlTOPp->puzzle__DOT__Xand2b_2_11__DOT__base__DOT__and0_out_X))) 
                                   & ((IData)(vlTOPp->puzzle__DOT__Xor2_2_10__DOT__base__DOT__or0_out_X) 
                                      | (IData)(vlTOPp->puzzle__DOT__Xdfstp_2_1__DOT__base__DOT__buf_Q))) 
                                  & (~ ((~ ((~ (IData)(vlTOPp->puzzle__DOT__Xand2b_2_11__DOT__base__DOT__and0_out_X)) 
                                            | ((IData)(vlTOPp->I) 
                                               & (IData)(vlTOPp->puzzle__DOT__Xxnor2_2_26__DOT__base__DOT__xnor0_out_Y)))) 
                                        & ((IData)(vlTOPp->puzzle__DOT__Xxnor2_2_26__DOT__base__DOT__xnor0_out_Y) 
                                           | (IData)(vlTOPp->I)))))));
        tracep->chgBit(oldp+435,((1U & ((~ (IData)(vlTOPp->puzzle__DOT__Xand2_2_16__DOT__base__DOT__and0_out_X)) 
                                        | (IData)(vlTOPp->puzzle__DOT__Xand2b_2_11__DOT__base__DOT__and0_out_X)))));
        tracep->chgBit(oldp+436,((1U & (~ ((~ ((~ (IData)(vlTOPp->puzzle__DOT__Xand2b_2_11__DOT__base__DOT__and0_out_X)) 
                                               | ((IData)(vlTOPp->I) 
                                                  & (IData)(vlTOPp->puzzle__DOT__Xxnor2_2_26__DOT__base__DOT__xnor0_out_Y)))) 
                                           & ((IData)(vlTOPp->puzzle__DOT__Xxnor2_2_26__DOT__base__DOT__xnor0_out_Y) 
                                              | (IData)(vlTOPp->I)))))));
        tracep->chgBit(oldp+437,(vlTOPp->puzzle__DOT__Xand4bb_2_0__DOT__base__DOT__and0_out_X));
        tracep->chgBit(oldp+438,((((((~ (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_6__DOT__base__DOT__buf_Q)) 
                                     & (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_11__DOT__base__DOT__buf_Q)) 
                                    & ((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_13__DOT__base__DOT__buf_Q) 
                                       & (~ (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_7__DOT__base__DOT__buf_Q)))) 
                                   & ((~ (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_53__DOT__base__DOT__buf_Q)) 
                                      & (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_10__DOT__base__DOT__buf_Q))) 
                                  & ((~ (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_5__DOT__base__DOT__buf_Q)) 
                                     & (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_12__DOT__base__DOT__buf_Q)))));
        tracep->chgBit(oldp+439,(((~ (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_53__DOT__base__DOT__buf_Q)) 
                                  & (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_10__DOT__base__DOT__buf_Q))));
        tracep->chgBit(oldp+440,(((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_13__DOT__base__DOT__buf_Q) 
                                  & (~ (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_7__DOT__base__DOT__buf_Q)))));
        tracep->chgBit(oldp+441,(((((IData)(vlTOPp->puzzle__DOT__Xand4bb_2_10__DOT__base__DOT__and0_out_X) 
                                    & (IData)(vlTOPp->I)) 
                                   & (IData)(vlTOPp->puzzle__DOT__Xand2b_2_11__DOT__base__DOT__and0_out_X)) 
                                  | (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_71__DOT__base__DOT__buf_Q))));
        tracep->chgBit(oldp+442,(vlTOPp->puzzle__DOT__Xdfrtp_2_71__DOT__base__DOT__buf_Q));
        tracep->chgBit(oldp+443,(vlTOPp->puzzle__DOT__Xdfrtp_2_15__DOT__base__DOT__buf_Q));
        tracep->chgBit(oldp+444,(((((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_15__DOT__base__DOT__buf_Q) 
                                    | (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_16__DOT__base__DOT__buf_Q)) 
                                   & (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_17__DOT__base__DOT__buf_Q)) 
                                  & (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_18__DOT__base__DOT__buf_Q))));
        tracep->chgBit(oldp+445,(((((((((IData)(vlTOPp->puzzle__DOT__Xand2b_2_12__DOT__base__DOT__and0_out_X) 
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
                                     | (IData)(vlTOPp->puzzle__DOT__Xa21oi_2_18__DOT__base__DOT__nor0_out_Y)))));
        tracep->chgBit(oldp+446,(vlTOPp->puzzle__DOT__Xdfrtp_2_25__DOT__base__DOT__buf_Q));
        tracep->chgBit(oldp+447,(vlTOPp->puzzle__DOT__Xdfrtp_2_24__DOT__base__DOT__buf_Q));
        tracep->chgBit(oldp+448,((1U & (~ ((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_49__DOT__base__DOT__buf_Q) 
                                           ^ (((IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_2__DOT__base__DOT__buf_Q) 
                                               & (IData)(vlTOPp->puzzle__DOT__Xnor2_2_37__DOT__base__DOT__nor0_out_Y)) 
                                              | ((IData)(vlTOPp->puzzle__DOT__Xnand2b_2_11__DOT__base__DOT__or0_out_Y) 
                                                 & (IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_3__DOT__base__DOT__buf_Q))))))));
        tracep->chgBit(oldp+449,((((IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_2__DOT__base__DOT__buf_Q) 
                                   & (IData)(vlTOPp->puzzle__DOT__Xnor2_2_37__DOT__base__DOT__nor0_out_Y)) 
                                  | ((IData)(vlTOPp->puzzle__DOT__Xnand2b_2_11__DOT__base__DOT__or0_out_Y) 
                                     & (IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_3__DOT__base__DOT__buf_Q)))));
        tracep->chgBit(oldp+450,(vlTOPp->puzzle__DOT__Xxnor2_2_26__DOT__base__DOT__xnor0_out_Y));
        tracep->chgBit(oldp+451,(vlTOPp->puzzle__DOT__Xxnor2_2_17__DOT__base__DOT__xnor0_out_Y));
        tracep->chgBit(oldp+452,((1U & (~ ((IData)(vlTOPp->puzzle__DOT__Xdfstp_2_2__DOT__base__DOT__buf_Q) 
                                           ^ (IData)(vlTOPp->puzzle__DOT__Xdfstp_2_0__DOT__base__DOT__buf_Q))))));
        tracep->chgBit(oldp+453,((1U & (~ (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_29__DOT__base__DOT__buf_Q)))));
        tracep->chgBit(oldp+454,((1U & ((IData)(vlTOPp->puzzle__DOT__Xand2b_2_11__DOT__base__DOT__and0_out_X)
                                         ? (((~ ((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_44__DOT__base__DOT__buf_Q) 
                                                 | (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_46__DOT__base__DOT__buf_Q))) 
                                             & (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_45__DOT__base__DOT__buf_Q)) 
                                            & (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_43__DOT__base__DOT__buf_Q))
                                         : (~ (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_29__DOT__base__DOT__buf_Q))))));
        tracep->chgBit(oldp+455,((1U & (~ ((IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_3__DOT__base__DOT__buf_Q) 
                                           | ((IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_2__DOT__base__DOT__buf_Q) 
                                              & (IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_0__DOT__base__DOT__buf_Q)))))));
        tracep->chgBit(oldp+456,(((((~ ((IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_3__DOT__base__DOT__buf_Q) 
                                        | ((IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_2__DOT__base__DOT__buf_Q) 
                                           & (IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_0__DOT__base__DOT__buf_Q)))) 
                                    | (~ ((IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_0__DOT__base__DOT__buf_Q) 
                                          | (IData)(vlTOPp->puzzle__DOT__Xand2b_2_13__DOT__base__DOT__and0_out_X)))) 
                                   & ((IData)(vlTOPp->puzzle__DOT__Xand2b_2_13__DOT__base__DOT__and0_out_X) 
                                      | (IData)(vlTOPp->puzzle__DOT__Xor2_2_8__DOT__base__DOT__or0_out_X))) 
                                  & (IData)(vlTOPp->puzzle__DOT__Xnand2b_2_12__DOT__base__DOT__or0_out_Y))));
        tracep->chgBit(oldp+457,((1U & (~ ((IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_0__DOT__base__DOT__buf_Q) 
                                           | (IData)(vlTOPp->puzzle__DOT__Xand2b_2_13__DOT__base__DOT__and0_out_X))))));
        tracep->chgBit(oldp+458,((((IData)(vlTOPp->puzzle__DOT__Xnor2_2_47__DOT__base__DOT__nor0_out_Y) 
                                   | ((~ ((IData)(vlTOPp->puzzle__DOT__Xdfstp_2_0__DOT__base__DOT__buf_Q) 
                                          ^ ((((IData)(vlTOPp->puzzle__DOT__Xnand2_2_29__DOT__base__DOT__nand0_out_Y) 
                                               & (IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_3__DOT__base__DOT__buf_Q)) 
                                              & (~ (IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_0__DOT__base__DOT__buf_Q))) 
                                             | ((~ 
                                                 ((~ (IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_0__DOT__base__DOT__buf_Q)) 
                                                  & (IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_2__DOT__base__DOT__buf_Q))) 
                                                & (~ 
                                                   ((IData)(vlTOPp->puzzle__DOT__Xnand2_2_29__DOT__base__DOT__nand0_out_Y) 
                                                    & (IData)(vlTOPp->puzzle__DOT__Xor2_2_9__DOT__base__DOT__or0_out_X))))))) 
                                      & (IData)(vlTOPp->puzzle__DOT__Xnor3b_2_4__DOT__base__DOT__and0_out_Y))) 
                                  & ((IData)(vlTOPp->puzzle__DOT__Xnor3b_2_4__DOT__base__DOT__and0_out_Y) 
                                     | (IData)(vlTOPp->puzzle__DOT__Xa21oi_2_18__DOT__base__DOT__nor0_out_Y)))));
        tracep->chgBit(oldp+459,(((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_69__DOT__base__DOT__buf_Q) 
                                  & (~ (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_72__DOT__base__DOT__buf_Q)))));
        tracep->chgBit(oldp+460,(((((~ (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_73__DOT__base__DOT__buf_Q)) 
                                    & (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_68__DOT__base__DOT__buf_Q)) 
                                   & ((~ (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_74__DOT__base__DOT__buf_Q)) 
                                      & (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_70__DOT__base__DOT__buf_Q))) 
                                  & ((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_69__DOT__base__DOT__buf_Q) 
                                     & (~ (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_72__DOT__base__DOT__buf_Q))))));
        tracep->chgBit(oldp+461,(((~ (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_74__DOT__base__DOT__buf_Q)) 
                                  & (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_70__DOT__base__DOT__buf_Q))));
        tracep->chgBit(oldp+462,(((~ (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_73__DOT__base__DOT__buf_Q)) 
                                  & (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_68__DOT__base__DOT__buf_Q))));
        tracep->chgBit(oldp+463,(vlTOPp->puzzle__DOT__Xdfstp_2_2__DOT__base__DOT__buf_Q));
        tracep->chgBit(oldp+464,((((IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_3__DOT__base__DOT__buf_Q) 
                                   & (IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_2__DOT__base__DOT__buf_Q)) 
                                  & (IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_1__DOT__base__DOT__buf_Q))));
        tracep->chgBit(oldp+465,(vlTOPp->puzzle__DOT__Xdfrtp_2_80__DOT__base__DOT__buf_Q));
        tracep->chgBit(oldp+466,((((~ ((((IData)(vlTOPp->puzzle__DOT__Xand4bb_2_9__DOT__base__DOT__and0_out_X) 
                                         & (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_80__DOT__base__DOT__buf_Q)) 
                                        & (IData)(vlTOPp->puzzle__DOT__Xand2b_2_11__DOT__base__DOT__and0_out_X)) 
                                       & (IData)(vlTOPp->I))) 
                                   | (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_66__DOT__base__DOT__buf_Q)) 
                                  & ((((IData)(vlTOPp->puzzle__DOT__Xand4bb_2_9__DOT__base__DOT__and0_out_X) 
                                       & (IData)(vlTOPp->I)) 
                                      & (IData)(vlTOPp->puzzle__DOT__Xand2b_2_11__DOT__base__DOT__and0_out_X)) 
                                     | (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_80__DOT__base__DOT__buf_Q)))));
        tracep->chgBit(oldp+467,(vlTOPp->puzzle__DOT__Xdfrtp_2_29__DOT__base__DOT__buf_Q));
        tracep->chgBit(oldp+468,(((IData)(vlTOPp->I) 
                                  | (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_27__DOT__base__DOT__buf_Q))));
        tracep->chgBit(oldp+469,((1U & (~ ((IData)(vlTOPp->I) 
                                           & (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_27__DOT__base__DOT__buf_Q))))));
        tracep->chgBit(oldp+470,((1U & ((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_29__DOT__base__DOT__buf_Q)
                                         ? ((IData)(vlTOPp->I) 
                                            | (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_27__DOT__base__DOT__buf_Q))
                                         : (~ ((IData)(vlTOPp->I) 
                                               & (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_27__DOT__base__DOT__buf_Q)))))));
        tracep->chgBit(oldp+471,(vlTOPp->puzzle__DOT__Xo2bb2a_2_0__DOT__base__DOT__and0_out_X));
        tracep->chgBit(oldp+472,(vlTOPp->puzzle__DOT__Xa21oi_2_10__DOT__base__DOT__nor0_out_Y));
        tracep->chgBit(oldp+473,((1U & (~ ((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_15__DOT__base__DOT__buf_Q) 
                                           & (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_16__DOT__base__DOT__buf_Q))))));
        tracep->chgBit(oldp+474,((1U & ((~ ((((IData)(vlTOPp->puzzle__DOT__Xnor2_2_36__DOT__base__DOT__nor0_out_Y) 
                                              & (IData)(vlTOPp->puzzle__DOT__Xor2_2_9__DOT__base__DOT__or0_out_X)) 
                                             | ((IData)(vlTOPp->puzzle__DOT__Xxnor2_2_27__DOT__base__DOT__xnor0_out_Y) 
                                                & (((IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_3__DOT__base__DOT__buf_Q) 
                                                    | (IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_2__DOT__base__DOT__buf_Q)) 
                                                   | (~ (IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_1__DOT__base__DOT__buf_Q))))) 
                                            & (IData)(vlTOPp->puzzle__DOT__Xnand2b_2_11__DOT__base__DOT__or0_out_Y))) 
                                        ^ (IData)(vlTOPp->puzzle__DOT__Xdfstp_2_2__DOT__base__DOT__buf_Q)))));
        tracep->chgBit(oldp+475,((1U & (~ ((((IData)(vlTOPp->puzzle__DOT__Xnor2_2_36__DOT__base__DOT__nor0_out_Y) 
                                             & (IData)(vlTOPp->puzzle__DOT__Xor2_2_9__DOT__base__DOT__or0_out_X)) 
                                            | ((IData)(vlTOPp->puzzle__DOT__Xxnor2_2_27__DOT__base__DOT__xnor0_out_Y) 
                                               & (((IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_3__DOT__base__DOT__buf_Q) 
                                                   | (IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_2__DOT__base__DOT__buf_Q)) 
                                                  | (~ (IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_1__DOT__base__DOT__buf_Q))))) 
                                           & (IData)(vlTOPp->puzzle__DOT__Xnand2b_2_11__DOT__base__DOT__or0_out_Y))))));
        tracep->chgBit(oldp+476,(((((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_24__DOT__base__DOT__buf_Q) 
                                    & (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_25__DOT__base__DOT__buf_Q)) 
                                   & (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_20__DOT__base__DOT__buf_Q)) 
                                  & (IData)(vlTOPp->puzzle__DOT__Xnor3_2_2__DOT__base__DOT__nor0_out_Y))));
        tracep->chgBit(oldp+477,(vlTOPp->puzzle__DOT__Xnor3_2_2__DOT__base__DOT__nor0_out_Y));
        tracep->chgBit(oldp+478,((((((((((IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_3__DOT__base__DOT__buf_Q) 
                                         | (~ (IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_2__DOT__base__DOT__buf_Q))) 
                                        & (~ (IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_0__DOT__base__DOT__buf_Q))) 
                                       & (IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_1__DOT__base__DOT__buf_Q)) 
                                      & (IData)(vlTOPp->puzzle__DOT__Xnor3b_2_2__DOT__base__DOT__and0_out_Y)) 
                                     | ((IData)(vlTOPp->puzzle__DOT__Xnor3_2_3__DOT__base__DOT__nor0_out_Y) 
                                        & ((~ (IData)(vlTOPp->puzzle__DOT__Xor2_2_8__DOT__base__DOT__or0_out_X)) 
                                           & (IData)(vlTOPp->puzzle__DOT__Xnand2b_2_12__DOT__base__DOT__or0_out_Y)))) 
                                    | (IData)(vlTOPp->puzzle__DOT__Xnor2_2_47__DOT__base__DOT__nor0_out_Y)) 
                                   | (((~ ((IData)(vlTOPp->puzzle__DOT__Xdfstp_2_3__DOT__base__DOT__buf_Q) 
                                           ^ (~ (((
                                                   ((IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_2__DOT__base__DOT__buf_Q) 
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
                                     | (IData)(vlTOPp->puzzle__DOT__Xa21oi_2_18__DOT__base__DOT__nor0_out_Y)))));
        tracep->chgBit(oldp+479,((((((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_61__DOT__base__DOT__buf_Q) 
                                     & (~ (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_76__DOT__base__DOT__buf_Q))) 
                                    & ((~ (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_60__DOT__base__DOT__buf_Q)) 
                                       & (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_57__DOT__base__DOT__buf_Q))) 
                                   & ((~ (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_71__DOT__base__DOT__buf_Q)) 
                                      & (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_63__DOT__base__DOT__buf_Q))) 
                                  & ((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_77__DOT__base__DOT__buf_Q) 
                                     & (~ (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_62__DOT__base__DOT__buf_Q))))));
        tracep->chgBit(oldp+480,(((((((~ (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_73__DOT__base__DOT__buf_Q)) 
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
                                        & (~ (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_62__DOT__base__DOT__buf_Q)))))));
        tracep->chgBit(oldp+481,((((((~ (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_80__DOT__base__DOT__buf_Q)) 
                                     & (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_66__DOT__base__DOT__buf_Q)) 
                                    & ((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_79__DOT__base__DOT__buf_Q) 
                                       & (~ (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_65__DOT__base__DOT__buf_Q)))) 
                                   & ((~ (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_75__DOT__base__DOT__buf_Q)) 
                                      & (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_67__DOT__base__DOT__buf_Q))) 
                                  & ((~ (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_78__DOT__base__DOT__buf_Q)) 
                                     & (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_64__DOT__base__DOT__buf_Q)))));
        tracep->chgBit(oldp+482,(vlTOPp->puzzle__DOT__Xand2_2_16__DOT__base__DOT__and0_out_X));
        tracep->chgBit(oldp+483,(vlTOPp->puzzle__DOT__Xdfrtp_2_48__DOT__base__DOT__buf_Q));
        tracep->chgBit(oldp+484,(vlTOPp->puzzle__DOT__Xdfrtp_2_50__DOT__base__DOT__buf_Q));
        tracep->chgBit(oldp+485,(vlTOPp->puzzle__DOT__Xdfrtp_2_70__DOT__base__DOT__buf_Q));
        tracep->chgBit(oldp+486,((1U & ((~ (IData)(vlTOPp->puzzle__DOT__Xnand4_2_12__DOT__base__DOT__nand0_out_Y)) 
                                        | (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_70__DOT__base__DOT__buf_Q)))));
        tracep->chgBit(oldp+487,((((IData)(vlTOPp->success) 
                                   & ((~ (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_47__DOT__base__DOT__buf_Q)) 
                                      | (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_83__DOT__base__DOT__buf_Q))) 
                                  | (((IData)(vlTOPp->puzzle__DOT__Xand4b_2_3__DOT__base__DOT__and0_out_X) 
                                      & (~ (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_37__DOT__base__DOT__buf_Q))) 
                                     & (IData)(vlTOPp->puzzle__DOT__Xand2_2_15__DOT__base__DOT__and0_out_X)))));
        tracep->chgBit(oldp+488,(vlTOPp->puzzle__DOT__Xdfrtp_2_30__DOT__base__DOT__buf_Q));
        tracep->chgBit(oldp+489,(vlTOPp->puzzle__DOT__Xdfrtp_2_34__DOT__base__DOT__buf_Q));
        tracep->chgBit(oldp+490,(((IData)(vlTOPp->puzzle__DOT__Xand2b_2_11__DOT__base__DOT__and0_out_X)
                                   ? (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_30__DOT__base__DOT__buf_Q)
                                   : (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_34__DOT__base__DOT__buf_Q))));
        tracep->chgBit(oldp+491,((((((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_19__DOT__base__DOT__buf_Q) 
                                     & ((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_20__DOT__base__DOT__buf_Q) 
                                        & (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_21__DOT__base__DOT__buf_Q))) 
                                    & (IData)(vlTOPp->puzzle__DOT__Xand3_2_9__DOT__base__DOT__and0_out_X)) 
                                   & (IData)(vlTOPp->puzzle__DOT__Xand3_2_8__DOT__base__DOT__and0_out_X)) 
                                  ^ (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_22__DOT__base__DOT__buf_Q))));
        tracep->chgBit(oldp+492,(((((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_19__DOT__base__DOT__buf_Q) 
                                    & ((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_20__DOT__base__DOT__buf_Q) 
                                       & (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_21__DOT__base__DOT__buf_Q))) 
                                   & (IData)(vlTOPp->puzzle__DOT__Xand3_2_9__DOT__base__DOT__and0_out_X)) 
                                  & (IData)(vlTOPp->puzzle__DOT__Xand3_2_8__DOT__base__DOT__and0_out_X))));
        tracep->chgBit(oldp+493,(vlTOPp->puzzle__DOT__Xdfrtp_2_22__DOT__base__DOT__buf_Q));
        tracep->chgBit(oldp+494,(vlTOPp->puzzle__DOT__Xdfrtp_2_23__DOT__base__DOT__buf_Q));
        tracep->chgBit(oldp+495,(vlTOPp->puzzle__DOT__Xdfrtp_2_19__DOT__base__DOT__buf_Q));
        tracep->chgBit(oldp+496,((((IData)(vlTOPp->puzzle__DOT__Xxor2_2_6__DOT__base__DOT__xor0_out_X) 
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
                                        | (IData)(vlTOPp->puzzle__DOT__Xnor2_2_12__DOT__base__DOT__nor0_out_Y))))));
        tracep->chgBit(oldp+497,(((((((((((~ (IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_1__DOT__base__DOT__buf_Q)) 
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
                                     | (IData)(vlTOPp->puzzle__DOT__Xa21oi_2_18__DOT__base__DOT__nor0_out_Y)))));
        tracep->chgBit(oldp+498,(((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_83__DOT__base__DOT__buf_Q) 
                                  | (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_47__DOT__base__DOT__buf_Q))));
        tracep->chgBit(oldp+499,(vlTOPp->puzzle__DOT__Xdfrtp_2_47__DOT__base__DOT__buf_Q));
        tracep->chgBit(oldp+500,((1U & (~ ((((IData)(vlTOPp->puzzle__DOT__Xnor2_2_38__DOT__base__DOT__nor0_out_Y) 
                                             | (IData)(vlTOPp->puzzle__DOT__Xnor2_2_36__DOT__base__DOT__nor0_out_Y)) 
                                            | (IData)(vlTOPp->puzzle__DOT__Xnor2_2_37__DOT__base__DOT__nor0_out_Y)) 
                                           ^ ((IData)(vlTOPp->puzzle__DOT__Xor2_2_9__DOT__base__DOT__or0_out_X) 
                                              ^ (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_51__DOT__base__DOT__buf_Q)))))));
        tracep->chgBit(oldp+501,((((IData)(vlTOPp->puzzle__DOT__Xnor2_2_38__DOT__base__DOT__nor0_out_Y) 
                                   | (IData)(vlTOPp->puzzle__DOT__Xnor2_2_36__DOT__base__DOT__nor0_out_Y)) 
                                  | (IData)(vlTOPp->puzzle__DOT__Xnor2_2_37__DOT__base__DOT__nor0_out_Y))));
        tracep->chgBit(oldp+502,(((IData)(vlTOPp->puzzle__DOT__Xor2_2_9__DOT__base__DOT__or0_out_X) 
                                  ^ (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_51__DOT__base__DOT__buf_Q))));
        tracep->chgBit(oldp+503,((((~ ((((IData)(vlTOPp->puzzle__DOT__Xnor4_2_1__DOT__base__DOT__nor0_out_Y) 
                                         & (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_60__DOT__base__DOT__buf_Q)) 
                                        & (IData)(vlTOPp->puzzle__DOT__Xand2b_2_11__DOT__base__DOT__and0_out_X)) 
                                       & (IData)(vlTOPp->I))) 
                                   | (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_57__DOT__base__DOT__buf_Q)) 
                                  & ((((IData)(vlTOPp->puzzle__DOT__Xnor4_2_1__DOT__base__DOT__nor0_out_Y) 
                                       & (IData)(vlTOPp->I)) 
                                      & (IData)(vlTOPp->puzzle__DOT__Xand2b_2_11__DOT__base__DOT__and0_out_X)) 
                                     | (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_60__DOT__base__DOT__buf_Q)))));
        tracep->chgBit(oldp+504,((((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_82__DOT__base__DOT__buf_Q) 
                                   & ((~ (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_47__DOT__base__DOT__buf_Q)) 
                                      | (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_83__DOT__base__DOT__buf_Q))) 
                                  | (((IData)(vlTOPp->puzzle__DOT__Xand4b_2_3__DOT__base__DOT__and0_out_X) 
                                      & (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_37__DOT__base__DOT__buf_Q)) 
                                     & (IData)(vlTOPp->puzzle__DOT__Xand2_2_15__DOT__base__DOT__and0_out_X)))));
        tracep->chgBit(oldp+505,((((~ ((((IData)(vlTOPp->puzzle__DOT__Xand4bb_2_10__DOT__base__DOT__and0_out_X) 
                                         & (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_71__DOT__base__DOT__buf_Q)) 
                                        & (IData)(vlTOPp->puzzle__DOT__Xand2b_2_11__DOT__base__DOT__and0_out_X)) 
                                       & (IData)(vlTOPp->I))) 
                                   | (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_63__DOT__base__DOT__buf_Q)) 
                                  & ((((IData)(vlTOPp->puzzle__DOT__Xand4bb_2_10__DOT__base__DOT__and0_out_X) 
                                       & (IData)(vlTOPp->I)) 
                                      & (IData)(vlTOPp->puzzle__DOT__Xand2b_2_11__DOT__base__DOT__and0_out_X)) 
                                     | (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_71__DOT__base__DOT__buf_Q)))));
        tracep->chgBit(oldp+506,(vlTOPp->puzzle__DOT__Xdfrtp_2_32__DOT__base__DOT__buf_Q));
        tracep->chgBit(oldp+507,(vlTOPp->puzzle__DOT__Xdfrtp_2_40__DOT__base__DOT__buf_Q));
        tracep->chgBit(oldp+508,(((IData)(vlTOPp->puzzle__DOT__Xand2b_2_11__DOT__base__DOT__and0_out_X)
                                   ? (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_32__DOT__base__DOT__buf_Q)
                                   : (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_40__DOT__base__DOT__buf_Q))));
        tracep->chgBit(oldp+509,(((((IData)(vlTOPp->puzzle__DOT__Xand2b_2_11__DOT__base__DOT__and0_out_X) 
                                    & (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_43__DOT__base__DOT__buf_Q)) 
                                   & (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_44__DOT__base__DOT__buf_Q)) 
                                  ^ (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_46__DOT__base__DOT__buf_Q))));
        tracep->chgBit(oldp+510,(((~ ((((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_19__DOT__base__DOT__buf_Q) 
                                        & ((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_20__DOT__base__DOT__buf_Q) 
                                           & (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_21__DOT__base__DOT__buf_Q))) 
                                       & (IData)(vlTOPp->puzzle__DOT__Xand3_2_9__DOT__base__DOT__and0_out_X)) 
                                      & (IData)(vlTOPp->puzzle__DOT__Xand3_2_8__DOT__base__DOT__and0_out_X))) 
                                  & ((((IData)(vlTOPp->puzzle__DOT__Xand3_2_8__DOT__base__DOT__and0_out_X) 
                                       & ((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_20__DOT__base__DOT__buf_Q) 
                                          & (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_21__DOT__base__DOT__buf_Q))) 
                                      & (IData)(vlTOPp->puzzle__DOT__Xand3_2_9__DOT__base__DOT__and0_out_X)) 
                                     | (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_19__DOT__base__DOT__buf_Q)))));
        tracep->chgBit(oldp+511,(((((IData)(vlTOPp->puzzle__DOT__Xand3_2_8__DOT__base__DOT__and0_out_X) 
                                    & ((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_20__DOT__base__DOT__buf_Q) 
                                       & (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_21__DOT__base__DOT__buf_Q))) 
                                   & (IData)(vlTOPp->puzzle__DOT__Xand3_2_9__DOT__base__DOT__and0_out_X)) 
                                  | (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_19__DOT__base__DOT__buf_Q))));
        tracep->chgBit(oldp+512,(((~ (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_75__DOT__base__DOT__buf_Q)) 
                                  & (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_67__DOT__base__DOT__buf_Q))));
        tracep->chgBit(oldp+513,(((~ (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_80__DOT__base__DOT__buf_Q)) 
                                  & (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_66__DOT__base__DOT__buf_Q))));
        tracep->chgBit(oldp+514,(((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_79__DOT__base__DOT__buf_Q) 
                                  & (~ (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_65__DOT__base__DOT__buf_Q)))));
        tracep->chgBit(oldp+515,(((~ (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_78__DOT__base__DOT__buf_Q)) 
                                  & (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_64__DOT__base__DOT__buf_Q))));
        tracep->chgBit(oldp+516,((1U & (~ ((((IData)(vlTOPp->puzzle__DOT__Xnor4_2_0__DOT__base__DOT__nor0_out_Y) 
                                             & (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_0__DOT__base__DOT__buf_Q)) 
                                            & (IData)(vlTOPp->puzzle__DOT__Xand2b_2_11__DOT__base__DOT__and0_out_X)) 
                                           & (IData)(vlTOPp->I))))));
        tracep->chgBit(oldp+517,((((((IData)(vlTOPp->puzzle__DOT__Xnor4_2_0__DOT__base__DOT__nor0_out_Y) 
                                     & (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_0__DOT__base__DOT__buf_Q)) 
                                    & (IData)(vlTOPp->puzzle__DOT__Xand2b_2_11__DOT__base__DOT__and0_out_X)) 
                                   & (IData)(vlTOPp->I)) 
                                  | (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_14__DOT__base__DOT__buf_Q))));
        tracep->chgBit(oldp+518,(vlTOPp->puzzle__DOT__Xdfrtp_2_14__DOT__base__DOT__buf_Q));
        tracep->chgBit(oldp+519,((1U & (~ ((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_49__DOT__base__DOT__buf_Q) 
                                           ^ (IData)(vlTOPp->puzzle__DOT__Xxnor2_2_17__DOT__base__DOT__xnor0_out_Y))))));
        tracep->chgBit(oldp+520,((1U & ((~ ((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_49__DOT__base__DOT__buf_Q) 
                                            ^ (IData)(vlTOPp->puzzle__DOT__Xxnor2_2_17__DOT__base__DOT__xnor0_out_Y))) 
                                        | (IData)(vlTOPp->puzzle__DOT__Xdfstp_2_3__DOT__base__DOT__buf_Q)))));
        tracep->chgBit(oldp+521,(vlTOPp->puzzle__DOT__Xdfstp_2_3__DOT__base__DOT__buf_Q));
        tracep->chgBit(oldp+522,((1U & (~ ((~ ((IData)(vlTOPp->puzzle__DOT__Xdfstp_2_3__DOT__base__DOT__buf_Q) 
                                               ^ (IData)(vlTOPp->puzzle__DOT__Xdfstp_2_2__DOT__base__DOT__buf_Q))) 
                                           ^ (IData)(vlTOPp->puzzle__DOT__Xxor2_2_19__DOT__base__DOT__xor0_out_X))))));
        tracep->chgBit(oldp+523,((1U & (~ ((IData)(vlTOPp->puzzle__DOT__Xdfstp_2_3__DOT__base__DOT__buf_Q) 
                                           ^ (IData)(vlTOPp->puzzle__DOT__Xdfstp_2_2__DOT__base__DOT__buf_Q))))));
        tracep->chgBit(oldp+524,(vlTOPp->puzzle__DOT__Xdfrtp_2_61__DOT__base__DOT__buf_Q));
        tracep->chgBit(oldp+525,((((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_76__DOT__base__DOT__buf_Q) 
                                   & (~ ((IData)(vlTOPp->puzzle__DOT__Xor4b_2_4__DOT__base__DOT__or0_out_X) 
                                         | (~ ((IData)(vlTOPp->puzzle__DOT__Xand2b_2_11__DOT__base__DOT__and0_out_X) 
                                               & (IData)(vlTOPp->I)))))) 
                                  | (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_61__DOT__base__DOT__buf_Q))));
        tracep->chgBit(oldp+526,((((IData)(vlTOPp->puzzle__DOT__Xor2_2_10__DOT__base__DOT__or0_out_X) 
                                   | (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_50__DOT__base__DOT__buf_Q)) 
                                  & (((((IData)(vlTOPp->puzzle__DOT__Xand2b_2_11__DOT__base__DOT__and0_out_X) 
                                        & (IData)(vlTOPp->puzzle__DOT__Xdfstp_2_3__DOT__base__DOT__buf_Q)) 
                                       | ((~ ((IData)(vlTOPp->puzzle__DOT__Xand2b_2_11__DOT__base__DOT__and0_out_X) 
                                              | (IData)(vlTOPp->puzzle__DOT__Xxnor2_2_26__DOT__base__DOT__xnor0_out_Y))) 
                                          & (IData)(vlTOPp->puzzle__DOT__Xxnor2_2_24__DOT__base__DOT__xnor0_out_Y))) 
                                      | (~ ((IData)(vlTOPp->puzzle__DOT__Xand2_2_16__DOT__base__DOT__and0_out_X) 
                                            | (IData)(vlTOPp->puzzle__DOT__Xand2b_2_11__DOT__base__DOT__and0_out_X)))) 
                                     | ((IData)(vlTOPp->puzzle__DOT__Xxnor2_2_26__DOT__base__DOT__xnor0_out_Y) 
                                        & (~ ((IData)(vlTOPp->puzzle__DOT__Xand2b_2_11__DOT__base__DOT__and0_out_X) 
                                              | (IData)(vlTOPp->puzzle__DOT__Xxnor2_2_24__DOT__base__DOT__xnor0_out_Y))))))));
        tracep->chgBit(oldp+527,(vlTOPp->puzzle__DOT__Xdfrtp_2_72__DOT__base__DOT__buf_Q));
        tracep->chgBit(oldp+528,((1U & (((~ ((IData)(vlTOPp->puzzle__DOT__Xor4b_2_7__DOT__base__DOT__or0_out_X) 
                                             | (~ ((IData)(vlTOPp->puzzle__DOT__Xand2b_2_11__DOT__base__DOT__and0_out_X) 
                                                   & (IData)(vlTOPp->I))))) 
                                         | (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_72__DOT__base__DOT__buf_Q)) 
                                        & ((((~ ((IData)(vlTOPp->puzzle__DOT__Xand2b_2_11__DOT__base__DOT__and0_out_X) 
                                                 & (IData)(vlTOPp->I))) 
                                             | (IData)(vlTOPp->puzzle__DOT__Xor4b_2_7__DOT__base__DOT__or0_out_X)) 
                                            | (~ (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_72__DOT__base__DOT__buf_Q))) 
                                           | (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_69__DOT__base__DOT__buf_Q))))));
        tracep->chgBit(oldp+529,((1U & (~ (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_72__DOT__base__DOT__buf_Q)))));
        tracep->chgBit(oldp+530,(vlTOPp->puzzle__DOT__Xdfrtp_2_2__DOT__base__DOT__buf_Q));
        tracep->chgBit(oldp+531,((1U & ((((IData)(vlTOPp->puzzle__DOT__Xnand2_2_14__DOT__base__DOT__nand0_out_Y) 
                                          | (IData)(vlTOPp->puzzle__DOT__Xor4b_2_0__DOT__base__DOT__or0_out_X)) 
                                         | (~ (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_1__DOT__base__DOT__buf_Q))) 
                                        | (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_2__DOT__base__DOT__buf_Q)))));
        tracep->chgBit(oldp+532,((1U & (~ (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_1__DOT__base__DOT__buf_Q)))));
        tracep->chgBit(oldp+533,((((((IData)(vlTOPp->puzzle__DOT__Xnor2_2_36__DOT__base__DOT__nor0_out_Y) 
                                     | (IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_3__DOT__base__DOT__buf_Q)) 
                                    | (IData)(vlTOPp->puzzle__DOT__Xand2b_2_17__DOT__base__DOT__and0_out_X)) 
                                   & (IData)(vlTOPp->puzzle__DOT__Xnand2_2_30__DOT__base__DOT__nand0_out_Y)) 
                                  ^ (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_48__DOT__base__DOT__buf_Q))));
        tracep->chgBit(oldp+534,(((((IData)(vlTOPp->puzzle__DOT__Xnor2_2_36__DOT__base__DOT__nor0_out_Y) 
                                    | (IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_3__DOT__base__DOT__buf_Q)) 
                                   | (IData)(vlTOPp->puzzle__DOT__Xand2b_2_17__DOT__base__DOT__and0_out_X)) 
                                  & (IData)(vlTOPp->puzzle__DOT__Xnand2_2_30__DOT__base__DOT__nand0_out_Y))));
        tracep->chgBit(oldp+535,((1U & (~ ((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_17__DOT__base__DOT__buf_Q) 
                                           | ((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_15__DOT__base__DOT__buf_Q) 
                                              & (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_18__DOT__base__DOT__buf_Q)))))));
        tracep->chgBit(oldp+536,(((~ (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_71__DOT__base__DOT__buf_Q)) 
                                  & (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_63__DOT__base__DOT__buf_Q))));
        tracep->chgBit(oldp+537,(((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_61__DOT__base__DOT__buf_Q) 
                                  & (~ (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_76__DOT__base__DOT__buf_Q)))));
        tracep->chgBit(oldp+538,(((~ (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_60__DOT__base__DOT__buf_Q)) 
                                  & (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_57__DOT__base__DOT__buf_Q))));
        tracep->chgBit(oldp+539,(((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_77__DOT__base__DOT__buf_Q) 
                                  & (~ (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_62__DOT__base__DOT__buf_Q)))));
        tracep->chgBit(oldp+540,((1U & (~ ((((((~ ((IData)(vlTOPp->puzzle__DOT__Xo211a_2_3__DOT__base__DOT__and0_out_X) 
                                                   | (IData)(vlTOPp->puzzle__DOT__Xo211a_2_5__DOT__base__DOT__and0_out_X))) 
                                               & (IData)(vlTOPp->puzzle__DOT__Xo211a_2_4__DOT__base__DOT__and0_out_X)) 
                                              & (IData)(vlTOPp->puzzle__DOT__Xo211a_2_2__DOT__base__DOT__and0_out_X)) 
                                             & (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_6__DOT__base__DOT__buf_Q)) 
                                            & (IData)(vlTOPp->puzzle__DOT__Xand2b_2_11__DOT__base__DOT__and0_out_X)) 
                                           & (IData)(vlTOPp->I))))));
        tracep->chgBit(oldp+541,((((((((~ ((IData)(vlTOPp->puzzle__DOT__Xo211a_2_3__DOT__base__DOT__and0_out_X) 
                                           | (IData)(vlTOPp->puzzle__DOT__Xo211a_2_5__DOT__base__DOT__and0_out_X))) 
                                       & (IData)(vlTOPp->puzzle__DOT__Xo211a_2_4__DOT__base__DOT__and0_out_X)) 
                                      & (IData)(vlTOPp->puzzle__DOT__Xo211a_2_2__DOT__base__DOT__and0_out_X)) 
                                     & (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_6__DOT__base__DOT__buf_Q)) 
                                    & (IData)(vlTOPp->puzzle__DOT__Xand2b_2_11__DOT__base__DOT__and0_out_X)) 
                                   & (IData)(vlTOPp->I)) 
                                  | (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_11__DOT__base__DOT__buf_Q))));
        tracep->chgBit(oldp+542,(((((IData)(vlTOPp->puzzle__DOT__Xxor2_2_6__DOT__base__DOT__xor0_out_X) 
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
                                     & (IData)(vlTOPp->puzzle__DOT__Xxnor2_2_10__DOT__base__DOT__xnor0_out_Y)))));
        tracep->chgBit(oldp+543,((1U & (~ ((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_45__DOT__base__DOT__buf_Q) 
                                           | ((((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_43__DOT__base__DOT__buf_Q) 
                                                & (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_44__DOT__base__DOT__buf_Q)) 
                                               & (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_46__DOT__base__DOT__buf_Q)) 
                                              & (IData)(vlTOPp->puzzle__DOT__Xand2b_2_11__DOT__base__DOT__and0_out_X)))))));
        tracep->chgBit(oldp+544,(((((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_43__DOT__base__DOT__buf_Q) 
                                    & (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_44__DOT__base__DOT__buf_Q)) 
                                   & (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_46__DOT__base__DOT__buf_Q)) 
                                  & (IData)(vlTOPp->puzzle__DOT__Xand2b_2_11__DOT__base__DOT__and0_out_X))));
        tracep->chgBit(oldp+545,((1U & (~ (((((((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_43__DOT__base__DOT__buf_Q) 
                                                & (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_44__DOT__base__DOT__buf_Q)) 
                                               & (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_46__DOT__base__DOT__buf_Q)) 
                                              & (IData)(vlTOPp->puzzle__DOT__Xand2b_2_11__DOT__base__DOT__and0_out_X)) 
                                             & (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_45__DOT__base__DOT__buf_Q)) 
                                            | (~ ((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_45__DOT__base__DOT__buf_Q) 
                                                  | ((((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_43__DOT__base__DOT__buf_Q) 
                                                       & (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_44__DOT__base__DOT__buf_Q)) 
                                                      & (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_46__DOT__base__DOT__buf_Q)) 
                                                     & (IData)(vlTOPp->puzzle__DOT__Xand2b_2_11__DOT__base__DOT__and0_out_X))))) 
                                           | ((IData)(vlTOPp->puzzle__DOT__Xand2b_2_11__DOT__base__DOT__and0_out_X) 
                                              & (((~ 
                                                   ((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_44__DOT__base__DOT__buf_Q) 
                                                    | (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_46__DOT__base__DOT__buf_Q))) 
                                                  & (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_45__DOT__base__DOT__buf_Q)) 
                                                 & (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_43__DOT__base__DOT__buf_Q))))))));
        tracep->chgBit(oldp+546,(vlTOPp->puzzle__DOT__Xdfrtp_2_51__DOT__base__DOT__buf_Q));
        tracep->chgBit(oldp+547,((1U & ((((IData)(vlTOPp->puzzle__DOT__Xand2b_2_11__DOT__base__DOT__and0_out_X) 
                                          & (IData)(vlTOPp->puzzle__DOT__Xdfstp_2_1__DOT__base__DOT__buf_Q)) 
                                         | ((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_51__DOT__base__DOT__buf_Q) 
                                            & (~ ((IData)(vlTOPp->puzzle__DOT__Xand2_2_16__DOT__base__DOT__and0_out_X) 
                                                  | (IData)(vlTOPp->puzzle__DOT__Xand2b_2_11__DOT__base__DOT__and0_out_X))))) 
                                        | (~ (((~ (IData)(vlTOPp->puzzle__DOT__Xand2_2_16__DOT__base__DOT__and0_out_X)) 
                                               | (IData)(vlTOPp->puzzle__DOT__Xand2b_2_11__DOT__base__DOT__and0_out_X)) 
                                              | (~ 
                                                 ((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_49__DOT__base__DOT__buf_Q) 
                                                  ^ 
                                                  ((IData)(vlTOPp->puzzle__DOT__Xdfstp_2_0__DOT__base__DOT__buf_Q) 
                                                   ^ (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_50__DOT__base__DOT__buf_Q))))))))));
        tracep->chgBit(oldp+548,((((IData)(vlTOPp->puzzle__DOT__Xnand4_2_13__DOT__base__DOT__nand0_out_Y) 
                                   | (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_68__DOT__base__DOT__buf_Q)) 
                                  & ((((IData)(vlTOPp->puzzle__DOT__Xand4bb_2_12__DOT__base__DOT__and0_out_X) 
                                       & (IData)(vlTOPp->I)) 
                                      & (IData)(vlTOPp->puzzle__DOT__Xand2b_2_11__DOT__base__DOT__and0_out_X)) 
                                     | (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_73__DOT__base__DOT__buf_Q)))));
        tracep->chgBit(oldp+549,(vlTOPp->puzzle__DOT__Xdfrtp_2_62__DOT__base__DOT__buf_Q));
        tracep->chgBit(oldp+550,((1U & (((~ ((IData)(vlTOPp->puzzle__DOT__Xor4b_2_6__DOT__base__DOT__or0_out_X) 
                                             | (~ ((IData)(vlTOPp->puzzle__DOT__Xand2b_2_11__DOT__base__DOT__and0_out_X) 
                                                   & (IData)(vlTOPp->I))))) 
                                         | (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_62__DOT__base__DOT__buf_Q)) 
                                        & ((((~ ((IData)(vlTOPp->puzzle__DOT__Xand2b_2_11__DOT__base__DOT__and0_out_X) 
                                                 & (IData)(vlTOPp->I))) 
                                             | (IData)(vlTOPp->puzzle__DOT__Xor4b_2_6__DOT__base__DOT__or0_out_X)) 
                                            | (~ (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_62__DOT__base__DOT__buf_Q))) 
                                           | (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_77__DOT__base__DOT__buf_Q))))));
        tracep->chgBit(oldp+551,(vlTOPp->puzzle__DOT__Xdfrtp_2_13__DOT__base__DOT__buf_Q));
        tracep->chgBit(oldp+552,((1U & ((((IData)(vlTOPp->puzzle__DOT__Xnand2_2_15__DOT__base__DOT__nand0_out_Y) 
                                          | (IData)(vlTOPp->puzzle__DOT__Xor4b_2_2__DOT__base__DOT__or0_out_X)) 
                                         | (~ (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_7__DOT__base__DOT__buf_Q))) 
                                        | (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_13__DOT__base__DOT__buf_Q)))));
        tracep->chgBit(oldp+553,((1U & (~ (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_7__DOT__base__DOT__buf_Q)))));
        tracep->chgBit(oldp+554,(vlTOPp->puzzle__DOT__Xxor2_2_13__DOT__base__DOT__xor0_out_X));
        tracep->chgBit(oldp+555,(vlTOPp->puzzle__DOT__Xnor2_2_17__DOT__base__DOT__nor0_out_Y));
        tracep->chgBit(oldp+556,(vlTOPp->puzzle__DOT__Xnand2_2_17__DOT__base__DOT__nand0_out_Y));
        tracep->chgBit(oldp+557,((1U & (~ ((IData)(vlTOPp->puzzle__DOT__Xnor2_2_17__DOT__base__DOT__nor0_out_Y) 
                                           | ((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_18__DOT__base__DOT__buf_Q) 
                                              & (IData)(vlTOPp->puzzle__DOT__Xnand2_2_17__DOT__base__DOT__nand0_out_Y)))))));
        tracep->chgBit(oldp+558,((1U & (~ ((((((~ ((IData)(vlTOPp->puzzle__DOT__Xo211a_2_2__DOT__base__DOT__and0_out_X) 
                                                   | (IData)(vlTOPp->puzzle__DOT__Xo211a_2_5__DOT__base__DOT__and0_out_X))) 
                                               & (IData)(vlTOPp->puzzle__DOT__Xo211a_2_4__DOT__base__DOT__and0_out_X)) 
                                              & (IData)(vlTOPp->puzzle__DOT__Xo211a_2_3__DOT__base__DOT__and0_out_X)) 
                                             & (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_5__DOT__base__DOT__buf_Q)) 
                                            & (IData)(vlTOPp->puzzle__DOT__Xand2b_2_11__DOT__base__DOT__and0_out_X)) 
                                           & (IData)(vlTOPp->I))))));
        tracep->chgBit(oldp+559,((((((((~ ((IData)(vlTOPp->puzzle__DOT__Xo211a_2_2__DOT__base__DOT__and0_out_X) 
                                           | (IData)(vlTOPp->puzzle__DOT__Xo211a_2_5__DOT__base__DOT__and0_out_X))) 
                                       & (IData)(vlTOPp->puzzle__DOT__Xo211a_2_4__DOT__base__DOT__and0_out_X)) 
                                      & (IData)(vlTOPp->puzzle__DOT__Xo211a_2_3__DOT__base__DOT__and0_out_X)) 
                                     & (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_5__DOT__base__DOT__buf_Q)) 
                                    & (IData)(vlTOPp->puzzle__DOT__Xand2b_2_11__DOT__base__DOT__and0_out_X)) 
                                   & (IData)(vlTOPp->I)) 
                                  | (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_12__DOT__base__DOT__buf_Q))));
        tracep->chgBit(oldp+560,((((IData)(vlTOPp->puzzle__DOT__Xand2b_2_12__DOT__base__DOT__and0_out_X) 
                                   & (IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_2__DOT__base__DOT__buf_Q)) 
                                  & (~ (IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_0__DOT__base__DOT__buf_Q)))));
        tracep->chgBit(oldp+561,(vlTOPp->puzzle__DOT__Xa21oi_2_8__DOT__base__DOT__nor0_out_Y));
        tracep->chgBit(oldp+562,((1U & (~ ((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_15__DOT__base__DOT__buf_Q) 
                                           | (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_17__DOT__base__DOT__buf_Q))))));
        tracep->chgBit(oldp+563,(vlTOPp->puzzle__DOT__Xxor2_2_7__DOT__base__DOT__xor0_out_X));
        tracep->chgBit(oldp+564,(vlTOPp->puzzle__DOT__Xdfrtp_2_52__DOT__base__DOT__buf_Q));
        tracep->chgBit(oldp+565,((((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_54__DOT__base__DOT__buf_Q) 
                                   & (~ ((IData)(vlTOPp->puzzle__DOT__Xor4b_2_3__DOT__base__DOT__or0_out_X) 
                                         | (~ ((IData)(vlTOPp->puzzle__DOT__Xand2b_2_11__DOT__base__DOT__and0_out_X) 
                                               & (IData)(vlTOPp->I)))))) 
                                  | (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_52__DOT__base__DOT__buf_Q))));
        tracep->chgBit(oldp+566,(((IData)(vlTOPp->puzzle__DOT__Xand2b_2_11__DOT__base__DOT__and0_out_X)
                                   ? (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_42__DOT__base__DOT__buf_Q)
                                   : (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_30__DOT__base__DOT__buf_Q))));
        tracep->chgBit(oldp+567,(vlTOPp->puzzle__DOT__Xdfrtp_2_41__DOT__base__DOT__buf_Q));
        tracep->chgBit(oldp+568,(((IData)(vlTOPp->puzzle__DOT__Xand2b_2_11__DOT__base__DOT__and0_out_X)
                                   ? (IData)(vlTOPp->I)
                                   : (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_41__DOT__base__DOT__buf_Q))));
        tracep->chgBit(oldp+569,((((IData)(vlTOPp->puzzle__DOT__Xnand4_2_12__DOT__base__DOT__nand0_out_Y) 
                                   | (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_70__DOT__base__DOT__buf_Q)) 
                                  & ((((IData)(vlTOPp->puzzle__DOT__Xand4bb_2_11__DOT__base__DOT__and0_out_X) 
                                       & (IData)(vlTOPp->I)) 
                                      & (IData)(vlTOPp->puzzle__DOT__Xand2b_2_11__DOT__base__DOT__and0_out_X)) 
                                     | (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_74__DOT__base__DOT__buf_Q)))));
        tracep->chgBit(oldp+570,(vlTOPp->puzzle__DOT__Xdfrtp_2_63__DOT__base__DOT__buf_Q));
        tracep->chgBit(oldp+571,((((((IData)(vlTOPp->puzzle__DOT__Xand4bb_2_10__DOT__base__DOT__and0_out_X) 
                                     & (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_71__DOT__base__DOT__buf_Q)) 
                                    & (IData)(vlTOPp->puzzle__DOT__Xand2b_2_11__DOT__base__DOT__and0_out_X)) 
                                   & (IData)(vlTOPp->I)) 
                                  | (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_63__DOT__base__DOT__buf_Q))));
        tracep->chgBit(oldp+572,(vlTOPp->puzzle__DOT__Xdfrtp_2_37__DOT__base__DOT__buf_Q));
        tracep->chgBit(oldp+573,((1U & (~ (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_37__DOT__base__DOT__buf_Q)))));
        tracep->chgBit(oldp+574,(vlTOPp->puzzle__DOT__Xxnor2_2_0__DOT__base__DOT__xnor0_out_Y));
        tracep->chgBit(oldp+575,(vlTOPp->puzzle__DOT__Xdfrtp_2_3__DOT__base__DOT__buf_Q));
        tracep->chgBit(oldp+576,((1U & ((((IData)(vlTOPp->puzzle__DOT__Xnand2_2_13__DOT__base__DOT__nand0_out_Y) 
                                          | (IData)(vlTOPp->puzzle__DOT__Xor4b_2_1__DOT__base__DOT__or0_out_X)) 
                                         | (~ (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_9__DOT__base__DOT__buf_Q))) 
                                        | (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_3__DOT__base__DOT__buf_Q)))));
        tracep->chgBit(oldp+577,((1U & (~ (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_9__DOT__base__DOT__buf_Q)))));
        tracep->chgBit(oldp+578,(vlTOPp->puzzle__DOT__Xxor2_2_14__DOT__base__DOT__xor0_out_X));
        tracep->chgBit(oldp+579,((1U & (~ ((((IData)(vlTOPp->puzzle__DOT__Xand4b_2_1__DOT__base__DOT__and0_out_X) 
                                             & (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_53__DOT__base__DOT__buf_Q)) 
                                            & (IData)(vlTOPp->puzzle__DOT__Xand2b_2_11__DOT__base__DOT__and0_out_X)) 
                                           & (IData)(vlTOPp->I))))));
        tracep->chgBit(oldp+580,((((((IData)(vlTOPp->puzzle__DOT__Xand4b_2_1__DOT__base__DOT__and0_out_X) 
                                     & (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_53__DOT__base__DOT__buf_Q)) 
                                    & (IData)(vlTOPp->puzzle__DOT__Xand2b_2_11__DOT__base__DOT__and0_out_X)) 
                                   & (IData)(vlTOPp->I)) 
                                  | (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_10__DOT__base__DOT__buf_Q))));
        tracep->chgBit(oldp+581,(vlTOPp->puzzle__DOT__Xdfrtp_2_10__DOT__base__DOT__buf_Q));
        tracep->chgBit(oldp+582,(((((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_16__DOT__base__DOT__buf_Q) 
                                    & (((~ ((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_44__DOT__base__DOT__buf_Q) 
                                            | (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_46__DOT__base__DOT__buf_Q))) 
                                        & (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_45__DOT__base__DOT__buf_Q)) 
                                       & (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_43__DOT__base__DOT__buf_Q))) 
                                   & (IData)(vlTOPp->puzzle__DOT__Xand2b_2_11__DOT__base__DOT__and0_out_X)) 
                                  | (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_15__DOT__base__DOT__buf_Q))));
        tracep->chgBit(oldp+583,((1U & (~ (((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_18__DOT__base__DOT__buf_Q) 
                                            & (~ (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_17__DOT__base__DOT__buf_Q))) 
                                           & (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_15__DOT__base__DOT__buf_Q))))));
        tracep->chgBit(oldp+584,(((((~ ((IData)(vlTOPp->puzzle__DOT__Xand2b_2_11__DOT__base__DOT__and0_out_X) 
                                        & (((~ ((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_44__DOT__base__DOT__buf_Q) 
                                                | (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_46__DOT__base__DOT__buf_Q))) 
                                            & (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_45__DOT__base__DOT__buf_Q)) 
                                           & (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_43__DOT__base__DOT__buf_Q)))) 
                                    | (~ (((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_18__DOT__base__DOT__buf_Q) 
                                           & (~ (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_17__DOT__base__DOT__buf_Q))) 
                                          & (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_15__DOT__base__DOT__buf_Q)))) 
                                   & ((((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_16__DOT__base__DOT__buf_Q) 
                                        & (((~ ((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_44__DOT__base__DOT__buf_Q) 
                                                | (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_46__DOT__base__DOT__buf_Q))) 
                                            & (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_45__DOT__base__DOT__buf_Q)) 
                                           & (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_43__DOT__base__DOT__buf_Q))) 
                                       & (IData)(vlTOPp->puzzle__DOT__Xand2b_2_11__DOT__base__DOT__and0_out_X)) 
                                      | (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_15__DOT__base__DOT__buf_Q))) 
                                  & (~ (IData)(vlTOPp->puzzle__DOT__Xand4_2_2__DOT__base__DOT__and0_out_X)))));
        tracep->chgBit(oldp+585,(((((((((IData)(vlTOPp->puzzle__DOT__Xand3_2_15__DOT__base__DOT__and0_out_X) 
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
                                             | (~ (
                                                   ((IData)(vlTOPp->puzzle__DOT__Xand2_2_6__DOT__base__DOT__and0_out_X) 
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
                                     | (IData)(vlTOPp->puzzle__DOT__Xa21oi_2_18__DOT__base__DOT__nor0_out_Y)))));
        tracep->chgBit(oldp+586,((((((~ (((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_18__DOT__base__DOT__buf_Q) 
                                          & (~ (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_17__DOT__base__DOT__buf_Q))) 
                                         & (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_15__DOT__base__DOT__buf_Q))) 
                                     | (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_16__DOT__base__DOT__buf_Q)) 
                                    | (~ ((IData)(vlTOPp->puzzle__DOT__Xand2b_2_11__DOT__base__DOT__and0_out_X) 
                                          & (((~ ((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_44__DOT__base__DOT__buf_Q) 
                                                  | (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_46__DOT__base__DOT__buf_Q))) 
                                              & (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_45__DOT__base__DOT__buf_Q)) 
                                             & (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_43__DOT__base__DOT__buf_Q))))) 
                                   & (~ (((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_18__DOT__base__DOT__buf_Q) 
                                          & (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_17__DOT__base__DOT__buf_Q)) 
                                         & (IData)(vlTOPp->puzzle__DOT__Xand4_2_2__DOT__base__DOT__and0_out_X)))) 
                                  & (((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_17__DOT__base__DOT__buf_Q) 
                                      & (IData)(vlTOPp->puzzle__DOT__Xand4_2_2__DOT__base__DOT__and0_out_X)) 
                                     | (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_18__DOT__base__DOT__buf_Q)))));
        tracep->chgBit(oldp+587,((1U & (~ (((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_18__DOT__base__DOT__buf_Q) 
                                            & (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_17__DOT__base__DOT__buf_Q)) 
                                           & (IData)(vlTOPp->puzzle__DOT__Xand4_2_2__DOT__base__DOT__and0_out_X))))));
        tracep->chgBit(oldp+588,((1U & (~ ((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_23__DOT__base__DOT__buf_Q) 
                                           | ((IData)(vlTOPp->I) 
                                              & (IData)(vlTOPp->puzzle__DOT__Xand2b_2_11__DOT__base__DOT__and0_out_X)))))));
        tracep->chgBit(oldp+589,((1U & (~ ((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_20__DOT__base__DOT__buf_Q) 
                                           ^ (~ ((IData)(vlTOPp->puzzle__DOT__Xand3_2_8__DOT__base__DOT__and0_out_X) 
                                                 & (IData)(vlTOPp->puzzle__DOT__Xand3_2_9__DOT__base__DOT__and0_out_X))))))));
        tracep->chgBit(oldp+590,(vlTOPp->puzzle__DOT__Xdfrtp_2_42__DOT__base__DOT__buf_Q));
        tracep->chgBit(oldp+591,(((IData)(vlTOPp->puzzle__DOT__Xand2b_2_11__DOT__base__DOT__and0_out_X)
                                   ? (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_35__DOT__base__DOT__buf_Q)
                                   : (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_42__DOT__base__DOT__buf_Q))));
        tracep->chgBit(oldp+592,(vlTOPp->puzzle__DOT__Xdfrtp_2_31__DOT__base__DOT__buf_Q));
        tracep->chgBit(oldp+593,(((IData)(vlTOPp->puzzle__DOT__Xand2b_2_11__DOT__base__DOT__and0_out_X)
                                   ? (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_41__DOT__base__DOT__buf_Q)
                                   : (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_31__DOT__base__DOT__buf_Q))));
        tracep->chgBit(oldp+594,(vlTOPp->puzzle__DOT__Xdfrtp_2_75__DOT__base__DOT__buf_Q));
        tracep->chgBit(oldp+595,((((~ ((((IData)(vlTOPp->puzzle__DOT__Xand4b_2_2__DOT__base__DOT__and0_out_X) 
                                         & (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_75__DOT__base__DOT__buf_Q)) 
                                        & (IData)(vlTOPp->puzzle__DOT__Xand2b_2_11__DOT__base__DOT__and0_out_X)) 
                                       & (IData)(vlTOPp->I))) 
                                   | (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_67__DOT__base__DOT__buf_Q)) 
                                  & ((((IData)(vlTOPp->puzzle__DOT__Xand4b_2_2__DOT__base__DOT__and0_out_X) 
                                       & (IData)(vlTOPp->I)) 
                                      & (IData)(vlTOPp->puzzle__DOT__Xand2b_2_11__DOT__base__DOT__and0_out_X)) 
                                     | (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_75__DOT__base__DOT__buf_Q)))));
        tracep->chgBit(oldp+596,(vlTOPp->puzzle__DOT__Xdfrtp_2_64__DOT__base__DOT__buf_Q));
        tracep->chgBit(oldp+597,((((((IData)(vlTOPp->puzzle__DOT__Xand4bb_2_13__DOT__base__DOT__and0_out_X) 
                                     & (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_78__DOT__base__DOT__buf_Q)) 
                                    & (IData)(vlTOPp->puzzle__DOT__Xand2b_2_11__DOT__base__DOT__and0_out_X)) 
                                   & (IData)(vlTOPp->I)) 
                                  | (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_64__DOT__base__DOT__buf_Q))));
        tracep->chgBit(oldp+598,(vlTOPp->puzzle__DOT__Xdfrtp_2_53__DOT__base__DOT__buf_Q));
        tracep->chgBit(oldp+599,((((~ ((((IData)(vlTOPp->puzzle__DOT__Xand4b_2_1__DOT__base__DOT__and0_out_X) 
                                         & (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_53__DOT__base__DOT__buf_Q)) 
                                        & (IData)(vlTOPp->puzzle__DOT__Xand2b_2_11__DOT__base__DOT__and0_out_X)) 
                                       & (IData)(vlTOPp->I))) 
                                   | (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_10__DOT__base__DOT__buf_Q)) 
                                  & ((((IData)(vlTOPp->puzzle__DOT__Xand4b_2_1__DOT__base__DOT__and0_out_X) 
                                       & (IData)(vlTOPp->I)) 
                                      & (IData)(vlTOPp->puzzle__DOT__Xand2b_2_11__DOT__base__DOT__and0_out_X)) 
                                     | (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_53__DOT__base__DOT__buf_Q)))));
        tracep->chgBit(oldp+600,((1U & (~ ((~ (IData)(vlTOPp->puzzle__DOT__Xand2b_2_11__DOT__base__DOT__and0_out_X)) 
                                           | ((IData)(vlTOPp->I) 
                                              & (IData)(vlTOPp->puzzle__DOT__Xxnor2_2_26__DOT__base__DOT__xnor0_out_Y)))))));
        tracep->chgBit(oldp+601,((1U & (~ ((((((~ ((IData)(vlTOPp->puzzle__DOT__Xo211a_2_5__DOT__base__DOT__and0_out_X) 
                                                   | (IData)(vlTOPp->puzzle__DOT__Xo211a_2_4__DOT__base__DOT__and0_out_X))) 
                                               & (IData)(vlTOPp->puzzle__DOT__Xo211a_2_2__DOT__base__DOT__and0_out_X)) 
                                              & (IData)(vlTOPp->puzzle__DOT__Xo211a_2_3__DOT__base__DOT__and0_out_X)) 
                                             & (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_8__DOT__base__DOT__buf_Q)) 
                                            & (IData)(vlTOPp->puzzle__DOT__Xand2b_2_11__DOT__base__DOT__and0_out_X)) 
                                           & (IData)(vlTOPp->I))))));
        tracep->chgBit(oldp+602,((((((((~ ((IData)(vlTOPp->puzzle__DOT__Xo211a_2_5__DOT__base__DOT__and0_out_X) 
                                           | (IData)(vlTOPp->puzzle__DOT__Xo211a_2_4__DOT__base__DOT__and0_out_X))) 
                                       & (IData)(vlTOPp->puzzle__DOT__Xo211a_2_2__DOT__base__DOT__and0_out_X)) 
                                      & (IData)(vlTOPp->puzzle__DOT__Xo211a_2_3__DOT__base__DOT__and0_out_X)) 
                                     & (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_8__DOT__base__DOT__buf_Q)) 
                                    & (IData)(vlTOPp->puzzle__DOT__Xand2b_2_11__DOT__base__DOT__and0_out_X)) 
                                   & (IData)(vlTOPp->I)) 
                                  | (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_4__DOT__base__DOT__buf_Q))));
        tracep->chgBit(oldp+603,(vlTOPp->puzzle__DOT__Xdfrtp_2_4__DOT__base__DOT__buf_Q));
        tracep->chgBit(oldp+604,(((((~ ((IData)(vlTOPp->I) 
                                        & (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_27__DOT__base__DOT__buf_Q))) 
                                    | (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_29__DOT__base__DOT__buf_Q)) 
                                   & ((IData)(vlTOPp->I) 
                                      | (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_27__DOT__base__DOT__buf_Q))) 
                                  & (IData)(vlTOPp->puzzle__DOT__Xand2b_2_11__DOT__base__DOT__and0_out_X))));
        tracep->chgBit(oldp+605,(((((((~ ((IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_0__DOT__base__DOT__buf_Q) 
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
                                     | (IData)(vlTOPp->puzzle__DOT__Xa21oi_2_18__DOT__base__DOT__nor0_out_Y)))));
        tracep->chgBit(oldp+606,((((IData)(vlTOPp->puzzle__DOT__Xnand2b_2_0__DOT__base__DOT__or0_out_Y) 
                                   | (IData)(vlTOPp->puzzle__DOT__Xxor2_2_2__DOT__base__DOT__xor0_out_X)) 
                                  & ((IData)(vlTOPp->puzzle__DOT__Xnor2_2_4__DOT__base__DOT__nor0_out_Y) 
                                     | (IData)(vlTOPp->puzzle__DOT__Xor2_2_4__DOT__base__DOT__or0_out_X)))));
        tracep->chgBit(oldp+607,((1U & (~ (((IData)(vlTOPp->puzzle__DOT__Xand2b_2_11__DOT__base__DOT__and0_out_X)
                                             ? (((~ 
                                                  ((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_44__DOT__base__DOT__buf_Q) 
                                                   | (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_46__DOT__base__DOT__buf_Q))) 
                                                 & (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_45__DOT__base__DOT__buf_Q)) 
                                                & (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_43__DOT__base__DOT__buf_Q))
                                             : (~ (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_29__DOT__base__DOT__buf_Q))) 
                                           | ((~ (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_29__DOT__base__DOT__buf_Q)) 
                                              & (~ 
                                                 ((IData)(vlTOPp->I) 
                                                  & (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_27__DOT__base__DOT__buf_Q)))))))));
        tracep->chgBit(oldp+608,((((~ ((IData)(vlTOPp->puzzle__DOT__Xand3_2_8__DOT__base__DOT__and0_out_X) 
                                       & (IData)(vlTOPp->puzzle__DOT__Xand3_2_9__DOT__base__DOT__and0_out_X))) 
                                   | (~ ((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_21__DOT__base__DOT__buf_Q) 
                                         & (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_20__DOT__base__DOT__buf_Q)))) 
                                  & ((((IData)(vlTOPp->puzzle__DOT__Xand3_2_8__DOT__base__DOT__and0_out_X) 
                                       & (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_20__DOT__base__DOT__buf_Q)) 
                                      & (IData)(vlTOPp->puzzle__DOT__Xand3_2_9__DOT__base__DOT__and0_out_X)) 
                                     | (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_21__DOT__base__DOT__buf_Q)))));
        tracep->chgBit(oldp+609,(((IData)(vlTOPp->puzzle__DOT__Xand2b_2_11__DOT__base__DOT__and0_out_X)
                                   ? (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_39__DOT__base__DOT__buf_Q)
                                   : (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_32__DOT__base__DOT__buf_Q))));
        tracep->chgBit(oldp+610,(vlTOPp->puzzle__DOT__Xdfrtp_2_65__DOT__base__DOT__buf_Q));
        tracep->chgBit(oldp+611,((1U & (((~ ((IData)(vlTOPp->puzzle__DOT__Xor4b_2_5__DOT__base__DOT__or0_out_X) 
                                             | (~ ((IData)(vlTOPp->puzzle__DOT__Xand2b_2_11__DOT__base__DOT__and0_out_X) 
                                                   & (IData)(vlTOPp->I))))) 
                                         | (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_65__DOT__base__DOT__buf_Q)) 
                                        & ((((~ ((IData)(vlTOPp->puzzle__DOT__Xand2b_2_11__DOT__base__DOT__and0_out_X) 
                                                 & (IData)(vlTOPp->I))) 
                                             | (IData)(vlTOPp->puzzle__DOT__Xor4b_2_5__DOT__base__DOT__or0_out_X)) 
                                            | (~ (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_65__DOT__base__DOT__buf_Q))) 
                                           | (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_79__DOT__base__DOT__buf_Q))))));
        tracep->chgBit(oldp+612,(vlTOPp->puzzle__DOT__Xdfrtp_2_76__DOT__base__DOT__buf_Q));
        tracep->chgBit(oldp+613,((1U & (((~ ((IData)(vlTOPp->puzzle__DOT__Xor4b_2_4__DOT__base__DOT__or0_out_X) 
                                             | (~ ((IData)(vlTOPp->puzzle__DOT__Xand2b_2_11__DOT__base__DOT__and0_out_X) 
                                                   & (IData)(vlTOPp->I))))) 
                                         | (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_76__DOT__base__DOT__buf_Q)) 
                                        & ((((~ ((IData)(vlTOPp->puzzle__DOT__Xand2b_2_11__DOT__base__DOT__and0_out_X) 
                                                 & (IData)(vlTOPp->I))) 
                                             | (IData)(vlTOPp->puzzle__DOT__Xor4b_2_4__DOT__base__DOT__or0_out_X)) 
                                            | (~ (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_76__DOT__base__DOT__buf_Q))) 
                                           | (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_61__DOT__base__DOT__buf_Q))))));
        tracep->chgBit(oldp+614,(vlTOPp->puzzle__DOT__Xdfrtp_2_54__DOT__base__DOT__buf_Q));
        tracep->chgBit(oldp+615,((1U & (((~ ((IData)(vlTOPp->puzzle__DOT__Xor4b_2_3__DOT__base__DOT__or0_out_X) 
                                             | (~ ((IData)(vlTOPp->puzzle__DOT__Xand2b_2_11__DOT__base__DOT__and0_out_X) 
                                                   & (IData)(vlTOPp->I))))) 
                                         | (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_54__DOT__base__DOT__buf_Q)) 
                                        & ((((~ ((IData)(vlTOPp->puzzle__DOT__Xand2b_2_11__DOT__base__DOT__and0_out_X) 
                                                 & (IData)(vlTOPp->I))) 
                                             | (IData)(vlTOPp->puzzle__DOT__Xor4b_2_3__DOT__base__DOT__or0_out_X)) 
                                            | (~ (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_54__DOT__base__DOT__buf_Q))) 
                                           | (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_52__DOT__base__DOT__buf_Q))))));
        tracep->chgBit(oldp+616,((1U & ((((~ ((IData)(vlTOPp->puzzle__DOT__Xand2b_2_11__DOT__base__DOT__and0_out_X) 
                                              & (IData)(vlTOPp->I))) 
                                          | (IData)(vlTOPp->puzzle__DOT__Xor4b_2_3__DOT__base__DOT__or0_out_X)) 
                                         | (~ (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_54__DOT__base__DOT__buf_Q))) 
                                        | (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_52__DOT__base__DOT__buf_Q)))));
        tracep->chgBit(oldp+617,((1U & (~ (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_54__DOT__base__DOT__buf_Q)))));
        tracep->chgBit(oldp+618,((1U & (~ ((IData)(vlTOPp->puzzle__DOT__Xand2b_2_11__DOT__base__DOT__and0_out_X) 
                                           & (IData)(vlTOPp->I))))));
        tracep->chgBit(oldp+619,((1U & (~ (((IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_3__DOT__base__DOT__buf_Q) 
                                            | (IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_2__DOT__base__DOT__buf_Q)) 
                                           | (IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_1__DOT__base__DOT__buf_Q))))));
        tracep->chgBit(oldp+620,(vlTOPp->puzzle__DOT__Xnand2_2_28__DOT__base__DOT__nand0_out_Y));
        tracep->chgBit(oldp+621,((1U & (~ ((IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_3__DOT__base__DOT__buf_Q) 
                                           | (IData)(vlTOPp->puzzle__DOT__Xand2b_2_15__DOT__base__DOT__and0_out_X))))));
        tracep->chgBit(oldp+622,(((((IData)(vlTOPp->puzzle__DOT__Xxnor2_2_27__DOT__base__DOT__xnor0_out_Y) 
                                    | (~ (IData)(vlTOPp->puzzle__DOT__Xnand2_2_32__DOT__base__DOT__nand0_out_Y))) 
                                   | (~ ((IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_3__DOT__base__DOT__buf_Q) 
                                         | (IData)(vlTOPp->puzzle__DOT__Xand2b_2_15__DOT__base__DOT__and0_out_X)))) 
                                  & ((IData)(vlTOPp->puzzle__DOT__Xnand2_2_28__DOT__base__DOT__nand0_out_Y) 
                                     | (IData)(vlTOPp->puzzle__DOT__Xand2b_2_15__DOT__base__DOT__and0_out_X)))));
        tracep->chgBit(oldp+623,(vlTOPp->puzzle__DOT__Xxor2_2_16__DOT__base__DOT__xor0_out_X));
        tracep->chgBit(oldp+624,((1U & (~ ((~ (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_83__DOT__base__DOT__buf_Q)) 
                                           | ((IData)(vlTOPp->puzzle__DOT__Xnand4_2_14__DOT__base__DOT__nand0_out_Y) 
                                              & (~ 
                                                 ((IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_1__DOT__base__DOT__buf_Q) 
                                                  ^ (IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_2__DOT__base__DOT__buf_Q)))))))));
        tracep->chgBit(oldp+625,(vlTOPp->puzzle__DOT__Xa21oi_2_9__DOT__base__DOT__nor0_out_Y));
        tracep->chgBit(oldp+626,(vlTOPp->puzzle__DOT__Xo21ai_2_5__DOT__base__DOT__nand0_out_Y));
        tracep->chgBit(oldp+627,(vlTOPp->puzzle__DOT__Xnand2_2_27__DOT__base__DOT__nand0_out_Y));
        tracep->chgBit(oldp+628,(((((IData)(vlTOPp->puzzle__DOT__Xor2_2_8__DOT__base__DOT__or0_out_X) 
                                    | (IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_1__DOT__base__DOT__buf_Q)) 
                                   & (IData)(vlTOPp->puzzle__DOT__Xnand2_2_27__DOT__base__DOT__nand0_out_Y)) 
                                  & (IData)(vlTOPp->puzzle__DOT__Xo21ai_2_5__DOT__base__DOT__nand0_out_Y))));
        tracep->chgBit(oldp+629,((((IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_3__DOT__base__DOT__buf_Q) 
                                   | (IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_1__DOT__base__DOT__buf_Q)) 
                                  & ((IData)(vlTOPp->puzzle__DOT__Xand4b_2_0__DOT__base__DOT__and0_out_X) 
                                     | (IData)(vlTOPp->puzzle__DOT__Xa21oi_2_9__DOT__base__DOT__nor0_out_Y)))));
        tracep->chgBit(oldp+630,(((((IData)(vlTOPp->puzzle__DOT__Xand4b_2_1__DOT__base__DOT__and0_out_X) 
                                    & (IData)(vlTOPp->I)) 
                                   & (IData)(vlTOPp->puzzle__DOT__Xand2b_2_11__DOT__base__DOT__and0_out_X)) 
                                  | (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_53__DOT__base__DOT__buf_Q))));
        tracep->chgBit(oldp+631,(((~ (IData)(vlTOPp->puzzle__DOT__Xand3_2_11__DOT__base__DOT__and0_out_X)) 
                                  & (((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_24__DOT__base__DOT__buf_Q) 
                                      & (IData)(vlTOPp->puzzle__DOT__Xand3_2_9__DOT__base__DOT__and0_out_X)) 
                                     | (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_25__DOT__base__DOT__buf_Q)))));
        tracep->chgBit(oldp+632,((((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_24__DOT__base__DOT__buf_Q) 
                                   & (IData)(vlTOPp->puzzle__DOT__Xand3_2_9__DOT__base__DOT__and0_out_X)) 
                                  | (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_25__DOT__base__DOT__buf_Q))));
        tracep->chgBit(oldp+633,(((~ (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_55__DOT__base__DOT__buf_Q)) 
                                  & (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_58__DOT__base__DOT__buf_Q))));
        tracep->chgBit(oldp+634,(vlTOPp->puzzle__DOT__Xdfrtp_2_58__DOT__base__DOT__buf_Q));
        tracep->chgBit(oldp+635,(vlTOPp->puzzle__DOT__Xdfrtp_2_55__DOT__base__DOT__buf_Q));
        tracep->chgBit(oldp+636,(vlTOPp->puzzle__DOT__Xdfrtp_2_33__DOT__base__DOT__buf_Q));
        tracep->chgBit(oldp+637,(((IData)(vlTOPp->puzzle__DOT__Xand2b_2_11__DOT__base__DOT__and0_out_X)
                                   ? (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_34__DOT__base__DOT__buf_Q)
                                   : (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_33__DOT__base__DOT__buf_Q))));
        tracep->chgBit(oldp+638,(vlTOPp->puzzle__DOT__Xdfrtp_2_66__DOT__base__DOT__buf_Q));
        tracep->chgBit(oldp+639,((((((IData)(vlTOPp->puzzle__DOT__Xand4bb_2_9__DOT__base__DOT__and0_out_X) 
                                     & (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_80__DOT__base__DOT__buf_Q)) 
                                    & (IData)(vlTOPp->puzzle__DOT__Xand2b_2_11__DOT__base__DOT__and0_out_X)) 
                                   & (IData)(vlTOPp->I)) 
                                  | (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_66__DOT__base__DOT__buf_Q))));
        tracep->chgBit(oldp+640,(vlTOPp->puzzle__DOT__Xdfrtp_2_77__DOT__base__DOT__buf_Q));
        tracep->chgBit(oldp+641,((((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_62__DOT__base__DOT__buf_Q) 
                                   & (~ ((IData)(vlTOPp->puzzle__DOT__Xor4b_2_6__DOT__base__DOT__or0_out_X) 
                                         | (~ ((IData)(vlTOPp->puzzle__DOT__Xand2b_2_11__DOT__base__DOT__and0_out_X) 
                                               & (IData)(vlTOPp->I)))))) 
                                  | (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_77__DOT__base__DOT__buf_Q))));
        tracep->chgBit(oldp+642,((((~ ((((IData)(vlTOPp->puzzle__DOT__Xand4bb_2_8__DOT__base__DOT__and0_out_X) 
                                         & (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_55__DOT__base__DOT__buf_Q)) 
                                        & (IData)(vlTOPp->puzzle__DOT__Xand2b_2_11__DOT__base__DOT__and0_out_X)) 
                                       & (IData)(vlTOPp->I))) 
                                   | (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_58__DOT__base__DOT__buf_Q)) 
                                  & ((((IData)(vlTOPp->puzzle__DOT__Xand4bb_2_8__DOT__base__DOT__and0_out_X) 
                                       & (IData)(vlTOPp->I)) 
                                      & (IData)(vlTOPp->puzzle__DOT__Xand2b_2_11__DOT__base__DOT__and0_out_X)) 
                                     | (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_55__DOT__base__DOT__buf_Q)))));
        tracep->chgBit(oldp+643,((1U & (~ ((((~ ((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_44__DOT__base__DOT__buf_Q) 
                                                 | (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_46__DOT__base__DOT__buf_Q))) 
                                             & (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_45__DOT__base__DOT__buf_Q)) 
                                            & (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_43__DOT__base__DOT__buf_Q)) 
                                           | (~ ((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_44__DOT__base__DOT__buf_Q) 
                                                 ^ (IData)(vlTOPp->puzzle__DOT__Xand2b_2_11__DOT__base__DOT__and0_out_X))))))));
        tracep->chgBit(oldp+644,(vlTOPp->puzzle__DOT__Xdfrtp_2_69__DOT__base__DOT__buf_Q));
        tracep->chgBit(oldp+645,((1U & ((((~ ((IData)(vlTOPp->puzzle__DOT__Xand2b_2_11__DOT__base__DOT__and0_out_X) 
                                              & (IData)(vlTOPp->I))) 
                                          | (IData)(vlTOPp->puzzle__DOT__Xor4b_2_7__DOT__base__DOT__or0_out_X)) 
                                         | (~ (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_72__DOT__base__DOT__buf_Q))) 
                                        | (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_69__DOT__base__DOT__buf_Q)))));
        tracep->chgBit(oldp+646,((1U & (~ (((IData)(vlTOPp->puzzle__DOT__Xand2_2_6__DOT__base__DOT__and0_out_X) 
                                            | (IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_3__DOT__base__DOT__buf_Q)) 
                                           | (IData)(vlTOPp->puzzle__DOT__Xnor2_2_22__DOT__base__DOT__nor0_out_Y))))));
        tracep->chgBit(oldp+647,((1U & (((IData)(vlTOPp->puzzle__DOT__Xand2b_2_11__DOT__base__DOT__and0_out_X) 
                                         & (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_51__DOT__base__DOT__buf_Q)) 
                                        | (~ ((IData)(vlTOPp->puzzle__DOT__Xand2_2_16__DOT__base__DOT__and0_out_X) 
                                              | (IData)(vlTOPp->puzzle__DOT__Xand2b_2_11__DOT__base__DOT__and0_out_X)))))));
        tracep->chgBit(oldp+648,((((IData)(vlTOPp->puzzle__DOT__Xxor2_2_16__DOT__base__DOT__xor0_out_X) 
                                   & (~ (IData)(vlTOPp->puzzle__DOT__Xand2b_2_11__DOT__base__DOT__and0_out_X))) 
                                  & (IData)(vlTOPp->puzzle__DOT__Xxnor2_2_26__DOT__base__DOT__xnor0_out_Y))));
        tracep->chgBit(oldp+649,((1U & ((~ (IData)(vlTOPp->puzzle__DOT__Xxor2_2_16__DOT__base__DOT__xor0_out_X)) 
                                        & (~ ((IData)(vlTOPp->puzzle__DOT__Xand2b_2_11__DOT__base__DOT__and0_out_X) 
                                              | (IData)(vlTOPp->puzzle__DOT__Xxnor2_2_26__DOT__base__DOT__xnor0_out_Y)))))));
        tracep->chgBit(oldp+650,(((((((IData)(vlTOPp->puzzle__DOT__Xxor2_2_16__DOT__base__DOT__xor0_out_X) 
                                      & (~ (IData)(vlTOPp->puzzle__DOT__Xand2b_2_11__DOT__base__DOT__and0_out_X))) 
                                     & (IData)(vlTOPp->puzzle__DOT__Xxnor2_2_26__DOT__base__DOT__xnor0_out_Y)) 
                                    | ((~ (IData)(vlTOPp->puzzle__DOT__Xxor2_2_16__DOT__base__DOT__xor0_out_X)) 
                                       & (~ ((IData)(vlTOPp->puzzle__DOT__Xand2b_2_11__DOT__base__DOT__and0_out_X) 
                                             | (IData)(vlTOPp->puzzle__DOT__Xxnor2_2_26__DOT__base__DOT__xnor0_out_Y))))) 
                                   | (((IData)(vlTOPp->puzzle__DOT__Xand2b_2_11__DOT__base__DOT__and0_out_X) 
                                       & (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_51__DOT__base__DOT__buf_Q)) 
                                      | (~ ((IData)(vlTOPp->puzzle__DOT__Xand2_2_16__DOT__base__DOT__and0_out_X) 
                                            | (IData)(vlTOPp->puzzle__DOT__Xand2b_2_11__DOT__base__DOT__and0_out_X))))) 
                                  & ((IData)(vlTOPp->puzzle__DOT__Xdfstp_2_3__DOT__base__DOT__buf_Q) 
                                     | (IData)(vlTOPp->puzzle__DOT__Xor2_2_10__DOT__base__DOT__or0_out_X)))));
        tracep->chgBit(oldp+651,((1U & (~ (((IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_1__DOT__base__DOT__buf_Q) 
                                            & (IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_3__DOT__base__DOT__buf_Q)) 
                                           & (IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_2__DOT__base__DOT__buf_Q))))));
        tracep->chgBit(oldp+652,((1U & (~ ((~ (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_83__DOT__base__DOT__buf_Q)) 
                                           | ((~ (IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_0__DOT__base__DOT__buf_Q)) 
                                              & (~ 
                                                 (((IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_1__DOT__base__DOT__buf_Q) 
                                                   & (IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_3__DOT__base__DOT__buf_Q)) 
                                                  & (IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_2__DOT__base__DOT__buf_Q)))))))));
        tracep->chgBit(oldp+653,((((IData)(vlTOPp->puzzle__DOT__Xnand2_2_19__DOT__base__DOT__nand0_out_Y) 
                                   | (IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_0__DOT__base__DOT__buf_Q)) 
                                  & ((IData)(vlTOPp->puzzle__DOT__Xnor2_2_22__DOT__base__DOT__nor0_out_Y) 
                                     | (IData)(vlTOPp->puzzle__DOT__Xnand2_2_20__DOT__base__DOT__nand0_out_Y)))));
        tracep->chgBit(oldp+654,(((((((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_46__DOT__base__DOT__buf_Q) 
                                      | (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_44__DOT__base__DOT__buf_Q)) 
                                     | (~ ((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_43__DOT__base__DOT__buf_Q) 
                                           & (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_45__DOT__base__DOT__buf_Q)))) 
                                    & (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_33__DOT__base__DOT__buf_Q)) 
                                   | (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_36__DOT__base__DOT__buf_Q)) 
                                  | ((IData)(vlTOPp->puzzle__DOT__Xor4_2_4__DOT__base__DOT__or0_out_X) 
                                     & ((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_41__DOT__base__DOT__buf_Q) 
                                        | (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_38__DOT__base__DOT__buf_Q))))));
        tracep->chgBit(oldp+655,((1U & (((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_46__DOT__base__DOT__buf_Q) 
                                         | (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_44__DOT__base__DOT__buf_Q)) 
                                        | (~ ((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_43__DOT__base__DOT__buf_Q) 
                                              & (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_45__DOT__base__DOT__buf_Q)))))));
        tracep->chgBit(oldp+656,(vlTOPp->puzzle__DOT__Xdfrtp_2_36__DOT__base__DOT__buf_Q));
        tracep->chgBit(oldp+657,(((IData)(vlTOPp->puzzle__DOT__Xor4_2_4__DOT__base__DOT__or0_out_X) 
                                  & ((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_41__DOT__base__DOT__buf_Q) 
                                     | (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_38__DOT__base__DOT__buf_Q)))));
        tracep->chgBit(oldp+658,((1U & ((((~ ((IData)(vlTOPp->puzzle__DOT__Xand2b_2_11__DOT__base__DOT__and0_out_X) 
                                              & (IData)(vlTOPp->I))) 
                                          | (IData)(vlTOPp->puzzle__DOT__Xor4b_2_6__DOT__base__DOT__or0_out_X)) 
                                         | (~ (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_62__DOT__base__DOT__buf_Q))) 
                                        | (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_77__DOT__base__DOT__buf_Q)))));
        tracep->chgBit(oldp+659,((1U & (~ ((IData)(vlTOPp->puzzle__DOT__Xor4b_2_6__DOT__base__DOT__or0_out_X) 
                                           | (~ ((IData)(vlTOPp->puzzle__DOT__Xand2b_2_11__DOT__base__DOT__and0_out_X) 
                                                 & (IData)(vlTOPp->I))))))));
        tracep->chgBit(oldp+660,(((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_52__DOT__base__DOT__buf_Q) 
                                  & (~ (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_54__DOT__base__DOT__buf_Q)))));
        tracep->chgBit(oldp+661,(((~ (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_56__DOT__base__DOT__buf_Q)) 
                                  & (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_59__DOT__base__DOT__buf_Q))));
        tracep->chgBit(oldp+662,(vlTOPp->puzzle__DOT__Xdfrtp_2_59__DOT__base__DOT__buf_Q));
        tracep->chgBit(oldp+663,((((((IData)(vlTOPp->puzzle__DOT__Xnand2b_2_0__DOT__base__DOT__or0_out_Y) 
                                     | (IData)(vlTOPp->puzzle__DOT__Xxor2_2_2__DOT__base__DOT__xor0_out_X)) 
                                    & ((IData)(vlTOPp->puzzle__DOT__Xnor2_2_4__DOT__base__DOT__nor0_out_Y) 
                                       | (IData)(vlTOPp->puzzle__DOT__Xor2_2_4__DOT__base__DOT__or0_out_X))) 
                                   & (IData)(vlTOPp->puzzle__DOT__Xa21oi_2_0__DOT__base__DOT__nor0_out_Y)) 
                                  | (((IData)(vlTOPp->puzzle__DOT__Xor2_2_4__DOT__base__DOT__or0_out_X) 
                                      & (IData)(vlTOPp->puzzle__DOT__Xxor2_2_8__DOT__base__DOT__xor0_out_X)) 
                                     & (IData)(vlTOPp->puzzle__DOT__Xnand2_2_11__DOT__base__DOT__nand0_out_Y)))));
        tracep->chgBit(oldp+664,((1U & (~ ((IData)(vlTOPp->puzzle__DOT__Xand3_2_9__DOT__base__DOT__and0_out_X) 
                                           | (~ ((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_23__DOT__base__DOT__buf_Q) 
                                                 | ((IData)(vlTOPp->I) 
                                                    & (IData)(vlTOPp->puzzle__DOT__Xand2b_2_11__DOT__base__DOT__and0_out_X)))))))));
        tracep->chgBit(oldp+665,(vlTOPp->puzzle__DOT__Xdfrtp_2_67__DOT__base__DOT__buf_Q));
        tracep->chgBit(oldp+666,((((((IData)(vlTOPp->puzzle__DOT__Xand4b_2_2__DOT__base__DOT__and0_out_X) 
                                     & (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_75__DOT__base__DOT__buf_Q)) 
                                    & (IData)(vlTOPp->puzzle__DOT__Xand2b_2_11__DOT__base__DOT__and0_out_X)) 
                                   & (IData)(vlTOPp->I)) 
                                  | (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_67__DOT__base__DOT__buf_Q))));
        tracep->chgBit(oldp+667,((((~ ((((IData)(vlTOPp->puzzle__DOT__Xand4bb_2_7__DOT__base__DOT__and0_out_X) 
                                         & (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_56__DOT__base__DOT__buf_Q)) 
                                        & (IData)(vlTOPp->puzzle__DOT__Xand2b_2_11__DOT__base__DOT__and0_out_X)) 
                                       & (IData)(vlTOPp->I))) 
                                   | (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_59__DOT__base__DOT__buf_Q)) 
                                  & ((((IData)(vlTOPp->puzzle__DOT__Xand4bb_2_7__DOT__base__DOT__and0_out_X) 
                                       & (IData)(vlTOPp->I)) 
                                      & (IData)(vlTOPp->puzzle__DOT__Xand2b_2_11__DOT__base__DOT__and0_out_X)) 
                                     | (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_56__DOT__base__DOT__buf_Q)))));
        tracep->chgBit(oldp+668,(vlTOPp->puzzle__DOT__Xdfrtp_2_78__DOT__base__DOT__buf_Q));
        tracep->chgBit(oldp+669,((((~ ((((IData)(vlTOPp->puzzle__DOT__Xand4bb_2_13__DOT__base__DOT__and0_out_X) 
                                         & (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_78__DOT__base__DOT__buf_Q)) 
                                        & (IData)(vlTOPp->puzzle__DOT__Xand2b_2_11__DOT__base__DOT__and0_out_X)) 
                                       & (IData)(vlTOPp->I))) 
                                   | (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_64__DOT__base__DOT__buf_Q)) 
                                  & ((((IData)(vlTOPp->puzzle__DOT__Xand4bb_2_13__DOT__base__DOT__and0_out_X) 
                                       & (IData)(vlTOPp->I)) 
                                      & (IData)(vlTOPp->puzzle__DOT__Xand2b_2_11__DOT__base__DOT__and0_out_X)) 
                                     | (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_78__DOT__base__DOT__buf_Q)))));
        tracep->chgBit(oldp+670,((1U & (~ (IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_2__DOT__base__DOT__buf_Q)))));
        tracep->chgBit(oldp+671,((1U & (~ (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_62__DOT__base__DOT__buf_Q)))));
        tracep->chgBit(oldp+672,((((IData)(vlTOPp->puzzle__DOT__Xdfrtp_1_26__DOT__base__DOT__buf_Q) 
                                   | (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_23__DOT__base__DOT__buf_Q)) 
                                  | (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_22__DOT__base__DOT__buf_Q))));
        tracep->chgBit(oldp+673,((((((IData)(vlTOPp->puzzle__DOT__Xxnor2_2_27__DOT__base__DOT__xnor0_out_Y) 
                                     | (~ (IData)(vlTOPp->puzzle__DOT__Xnand2_2_32__DOT__base__DOT__nand0_out_Y))) 
                                    | (~ ((IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_3__DOT__base__DOT__buf_Q) 
                                          | (IData)(vlTOPp->puzzle__DOT__Xand2b_2_15__DOT__base__DOT__and0_out_X)))) 
                                   & ((IData)(vlTOPp->puzzle__DOT__Xnand2_2_28__DOT__base__DOT__nand0_out_Y) 
                                      | (IData)(vlTOPp->puzzle__DOT__Xand2b_2_15__DOT__base__DOT__and0_out_X))) 
                                  ^ (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_50__DOT__base__DOT__buf_Q))));
        tracep->chgBit(oldp+674,((1U & (~ ((~ (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_83__DOT__base__DOT__buf_Q)) 
                                           | ((IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_2__DOT__base__DOT__buf_Q) 
                                              & (IData)(vlTOPp->puzzle__DOT__Xnand4_2_14__DOT__base__DOT__nand0_out_Y)))))));
        tracep->chgBit(oldp+675,(((IData)(vlTOPp->puzzle__DOT__Xxnor2_2_26__DOT__base__DOT__xnor0_out_Y) 
                                  & (~ ((IData)(vlTOPp->puzzle__DOT__Xand2b_2_11__DOT__base__DOT__and0_out_X) 
                                        | (IData)(vlTOPp->puzzle__DOT__Xxnor2_2_24__DOT__base__DOT__xnor0_out_Y))))));
        tracep->chgBit(oldp+676,((1U & ((((IData)(vlTOPp->puzzle__DOT__Xand2b_2_11__DOT__base__DOT__and0_out_X) 
                                          & (IData)(vlTOPp->puzzle__DOT__Xdfstp_2_3__DOT__base__DOT__buf_Q)) 
                                         | ((~ ((IData)(vlTOPp->puzzle__DOT__Xand2b_2_11__DOT__base__DOT__and0_out_X) 
                                                | (IData)(vlTOPp->puzzle__DOT__Xxnor2_2_26__DOT__base__DOT__xnor0_out_Y))) 
                                            & (IData)(vlTOPp->puzzle__DOT__Xxnor2_2_24__DOT__base__DOT__xnor0_out_Y))) 
                                        | (~ ((IData)(vlTOPp->puzzle__DOT__Xand2_2_16__DOT__base__DOT__and0_out_X) 
                                              | (IData)(vlTOPp->puzzle__DOT__Xand2b_2_11__DOT__base__DOT__and0_out_X)))))));
        tracep->chgBit(oldp+677,((1U & (~ ((IData)(vlTOPp->puzzle__DOT__Xand2_2_16__DOT__base__DOT__and0_out_X) 
                                           | (IData)(vlTOPp->puzzle__DOT__Xand2b_2_11__DOT__base__DOT__and0_out_X))))));
        tracep->chgBit(oldp+678,((1U & (~ (((~ (IData)(vlTOPp->puzzle__DOT__Xand2_2_16__DOT__base__DOT__and0_out_X)) 
                                            | (IData)(vlTOPp->puzzle__DOT__Xand2b_2_11__DOT__base__DOT__and0_out_X)) 
                                           | (~ ((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_49__DOT__base__DOT__buf_Q) 
                                                 ^ 
                                                 ((IData)(vlTOPp->puzzle__DOT__Xdfstp_2_0__DOT__base__DOT__buf_Q) 
                                                  ^ (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_50__DOT__base__DOT__buf_Q)))))))));
        tracep->chgBit(oldp+679,(((((IData)(vlTOPp->puzzle__DOT__Xand4bb_2_9__DOT__base__DOT__and0_out_X) 
                                    & (IData)(vlTOPp->I)) 
                                   & (IData)(vlTOPp->puzzle__DOT__Xand2b_2_11__DOT__base__DOT__and0_out_X)) 
                                  | (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_80__DOT__base__DOT__buf_Q))));
        tracep->chgBit(oldp+680,((1U & (~ ((((IData)(vlTOPp->puzzle__DOT__Xand4bb_2_9__DOT__base__DOT__and0_out_X) 
                                             & (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_80__DOT__base__DOT__buf_Q)) 
                                            & (IData)(vlTOPp->puzzle__DOT__Xand2b_2_11__DOT__base__DOT__and0_out_X)) 
                                           & (IData)(vlTOPp->I))))));
        tracep->chgBit(oldp+681,(((((((~ ((IData)(vlTOPp->puzzle__DOT__Xo211a_2_3__DOT__base__DOT__and0_out_X) 
                                          | (IData)(vlTOPp->puzzle__DOT__Xo211a_2_5__DOT__base__DOT__and0_out_X))) 
                                      & (IData)(vlTOPp->puzzle__DOT__Xo211a_2_4__DOT__base__DOT__and0_out_X)) 
                                     & (IData)(vlTOPp->puzzle__DOT__Xo211a_2_2__DOT__base__DOT__and0_out_X)) 
                                    & (IData)(vlTOPp->I)) 
                                   & (IData)(vlTOPp->puzzle__DOT__Xand2b_2_11__DOT__base__DOT__and0_out_X)) 
                                  | (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_6__DOT__base__DOT__buf_Q))));
        tracep->chgBit(oldp+682,((((~ ((((((~ ((IData)(vlTOPp->puzzle__DOT__Xo211a_2_3__DOT__base__DOT__and0_out_X) 
                                               | (IData)(vlTOPp->puzzle__DOT__Xo211a_2_5__DOT__base__DOT__and0_out_X))) 
                                           & (IData)(vlTOPp->puzzle__DOT__Xo211a_2_4__DOT__base__DOT__and0_out_X)) 
                                          & (IData)(vlTOPp->puzzle__DOT__Xo211a_2_2__DOT__base__DOT__and0_out_X)) 
                                         & (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_6__DOT__base__DOT__buf_Q)) 
                                        & (IData)(vlTOPp->puzzle__DOT__Xand2b_2_11__DOT__base__DOT__and0_out_X)) 
                                       & (IData)(vlTOPp->I))) 
                                   | (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_11__DOT__base__DOT__buf_Q)) 
                                  & ((((((~ ((IData)(vlTOPp->puzzle__DOT__Xo211a_2_3__DOT__base__DOT__and0_out_X) 
                                             | (IData)(vlTOPp->puzzle__DOT__Xo211a_2_5__DOT__base__DOT__and0_out_X))) 
                                         & (IData)(vlTOPp->puzzle__DOT__Xo211a_2_4__DOT__base__DOT__and0_out_X)) 
                                        & (IData)(vlTOPp->puzzle__DOT__Xo211a_2_2__DOT__base__DOT__and0_out_X)) 
                                       & (IData)(vlTOPp->I)) 
                                      & (IData)(vlTOPp->puzzle__DOT__Xand2b_2_11__DOT__base__DOT__and0_out_X)) 
                                     | (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_6__DOT__base__DOT__buf_Q)))));
        tracep->chgBit(oldp+683,((1U & (~ (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_76__DOT__base__DOT__buf_Q)))));
        tracep->chgBit(oldp+684,(vlTOPp->puzzle__DOT__Xdfrtp_2_57__DOT__base__DOT__buf_Q));
        tracep->chgBit(oldp+685,(((IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_3__DOT__base__DOT__buf_Q)
                                   ? (IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_0__DOT__base__DOT__buf_Q)
                                   : (IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_1__DOT__base__DOT__buf_Q))));
        tracep->chgBit(oldp+686,((1U & (~ (((IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_3__DOT__base__DOT__buf_Q)
                                             ? (IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_0__DOT__base__DOT__buf_Q)
                                             : (IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_1__DOT__base__DOT__buf_Q)) 
                                           | ((IData)(vlTOPp->puzzle__DOT__Xor2_2_8__DOT__base__DOT__or0_out_X) 
                                              & (IData)(vlTOPp->puzzle__DOT__Xand2b_2_13__DOT__base__DOT__and0_out_X)))))));
        tracep->chgBit(oldp+687,((((~ (IData)(vlTOPp->puzzle__DOT__Xand3_2_9__DOT__base__DOT__and0_out_X)) 
                                   & (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_24__DOT__base__DOT__buf_Q)) 
                                  | (((IData)(vlTOPp->puzzle__DOT__Xand2b_2_8__DOT__base__DOT__and0_out_X) 
                                      & (IData)(vlTOPp->I)) 
                                     & (IData)(vlTOPp->puzzle__DOT__Xand2b_2_11__DOT__base__DOT__and0_out_X)))));
        tracep->chgBit(oldp+688,((((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_7__DOT__base__DOT__buf_Q) 
                                   & (~ ((IData)(vlTOPp->puzzle__DOT__Xor4b_2_2__DOT__base__DOT__or0_out_X) 
                                         | (IData)(vlTOPp->puzzle__DOT__Xnand2_2_15__DOT__base__DOT__nand0_out_Y)))) 
                                  | (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_13__DOT__base__DOT__buf_Q))));
        tracep->chgBit(oldp+689,(vlTOPp->puzzle__DOT__Xdfrtp_2_68__DOT__base__DOT__buf_Q));
        tracep->chgBit(oldp+690,((1U & ((~ (IData)(vlTOPp->puzzle__DOT__Xnand4_2_13__DOT__base__DOT__nand0_out_Y)) 
                                        | (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_68__DOT__base__DOT__buf_Q)))));
        tracep->chgBit(oldp+691,((((((IData)(vlTOPp->puzzle__DOT__Xnor4_2_1__DOT__base__DOT__nor0_out_Y) 
                                     & (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_60__DOT__base__DOT__buf_Q)) 
                                    & (IData)(vlTOPp->puzzle__DOT__Xand2b_2_11__DOT__base__DOT__and0_out_X)) 
                                   & (IData)(vlTOPp->I)) 
                                  | (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_57__DOT__base__DOT__buf_Q))));
        tracep->chgBit(oldp+692,(vlTOPp->puzzle__DOT__Xdfrtp_2_35__DOT__base__DOT__buf_Q));
        tracep->chgBit(oldp+693,(((IData)(vlTOPp->puzzle__DOT__Xand2b_2_11__DOT__base__DOT__and0_out_X)
                                   ? (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_40__DOT__base__DOT__buf_Q)
                                   : (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_35__DOT__base__DOT__buf_Q))));
        tracep->chgBit(oldp+694,(vlTOPp->puzzle__DOT__Xdfrtp_2_79__DOT__base__DOT__buf_Q));
        tracep->chgBit(oldp+695,((((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_65__DOT__base__DOT__buf_Q) 
                                   & (~ ((IData)(vlTOPp->puzzle__DOT__Xor4b_2_5__DOT__base__DOT__or0_out_X) 
                                         | (~ ((IData)(vlTOPp->puzzle__DOT__Xand2b_2_11__DOT__base__DOT__and0_out_X) 
                                               & (IData)(vlTOPp->I)))))) 
                                  | (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_79__DOT__base__DOT__buf_Q))));
        tracep->chgBit(oldp+696,((1U & ((((~ ((IData)(vlTOPp->puzzle__DOT__Xand2b_2_11__DOT__base__DOT__and0_out_X) 
                                              & (IData)(vlTOPp->I))) 
                                          | (IData)(vlTOPp->puzzle__DOT__Xor4b_2_5__DOT__base__DOT__or0_out_X)) 
                                         | (~ (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_65__DOT__base__DOT__buf_Q))) 
                                        | (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_79__DOT__base__DOT__buf_Q)))));
        tracep->chgBit(oldp+697,((1U & (~ (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_65__DOT__base__DOT__buf_Q)))));
        tracep->chgBit(oldp+698,(vlTOPp->puzzle__DOT__Xand4b_2_3__DOT__base__DOT__and0_out_X));
        tracep->chgBit(oldp+699,(((((((~ (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_55__DOT__base__DOT__buf_Q)) 
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
                                        & (~ (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_9__DOT__base__DOT__buf_Q)))))));
        tracep->chgBit(oldp+700,(vlTOPp->puzzle__DOT__Xdfrtp_2_1__DOT__base__DOT__buf_Q));
        tracep->chgBit(oldp+701,((1U & (((IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_3__DOT__base__DOT__buf_Q) 
                                         | (IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_2__DOT__base__DOT__buf_Q)) 
                                        | (~ (IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_1__DOT__base__DOT__buf_Q))))));
        tracep->chgBit(oldp+702,(vlTOPp->puzzle__DOT__Xxor2_2_0__DOT__base__DOT__xor0_out_X));
        tracep->chgBit(oldp+703,((((IData)(vlTOPp->puzzle__DOT__Xxnor2_2_3__DOT__base__DOT__xnor0_out_Y) 
                                   & (IData)(vlTOPp->puzzle__DOT__Xnand2_2_21__DOT__base__DOT__nand0_out_Y)) 
                                  & (IData)(vlTOPp->puzzle__DOT__Xnand2_2_22__DOT__base__DOT__nand0_out_Y))));
        tracep->chgBit(oldp+704,(vlTOPp->puzzle__DOT__Xnand2_2_21__DOT__base__DOT__nand0_out_Y));
        tracep->chgBit(oldp+705,(vlTOPp->puzzle__DOT__Xxnor2_2_3__DOT__base__DOT__xnor0_out_Y));
        tracep->chgBit(oldp+706,((1U & (~ ((IData)(vlTOPp->puzzle__DOT__Xand2b_2_11__DOT__base__DOT__and0_out_X) 
                                           | (IData)(vlTOPp->puzzle__DOT__Xxnor2_2_26__DOT__base__DOT__xnor0_out_Y))))));
        tracep->chgBit(oldp+707,((1U & (~ ((IData)(vlTOPp->puzzle__DOT__Xor4b_2_5__DOT__base__DOT__or0_out_X) 
                                           | (~ ((IData)(vlTOPp->puzzle__DOT__Xand2b_2_11__DOT__base__DOT__and0_out_X) 
                                                 & (IData)(vlTOPp->I))))))));
        tracep->chgBit(oldp+708,(vlTOPp->puzzle__DOT__Xdfrtp_1_26__DOT__base__DOT__buf_Q));
        tracep->chgBit(oldp+709,((1U & (~ ((IData)(vlTOPp->puzzle__DOT__Xand3_2_8__DOT__base__DOT__and0_out_X) 
                                           & (IData)(vlTOPp->puzzle__DOT__Xand3_2_9__DOT__base__DOT__and0_out_X))))));
        tracep->chgBit(oldp+710,((((IData)(vlTOPp->puzzle__DOT__Xand3_2_11__DOT__base__DOT__and0_out_X) 
                                   | (IData)(vlTOPp->puzzle__DOT__Xdfrtp_1_26__DOT__base__DOT__buf_Q)) 
                                  & (~ ((IData)(vlTOPp->puzzle__DOT__Xand3_2_8__DOT__base__DOT__and0_out_X) 
                                        & (IData)(vlTOPp->puzzle__DOT__Xand3_2_9__DOT__base__DOT__and0_out_X))))));
        tracep->chgBit(oldp+711,(vlTOPp->puzzle__DOT__Xnor2_2_36__DOT__base__DOT__nor0_out_Y));
        tracep->chgBit(oldp+712,(vlTOPp->puzzle__DOT__Xnand2_2_30__DOT__base__DOT__nand0_out_Y));
        tracep->chgBit(oldp+713,(((((IData)(vlTOPp->puzzle__DOT__Xand2b_2_11__DOT__base__DOT__and0_out_X) 
                                    & (((~ ((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_44__DOT__base__DOT__buf_Q) 
                                            | (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_46__DOT__base__DOT__buf_Q))) 
                                        & (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_45__DOT__base__DOT__buf_Q)) 
                                       & (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_43__DOT__base__DOT__buf_Q))) 
                                   & (~ ((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_16__DOT__base__DOT__buf_Q) 
                                         | (~ (((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_18__DOT__base__DOT__buf_Q) 
                                                & (~ (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_17__DOT__base__DOT__buf_Q))) 
                                               & (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_15__DOT__base__DOT__buf_Q)))))) 
                                  | (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_47__DOT__base__DOT__buf_Q))));
        tracep->chgBit(oldp+714,((((((IData)(vlTOPp->puzzle__DOT__Xand4bb_2_8__DOT__base__DOT__and0_out_X) 
                                     & (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_55__DOT__base__DOT__buf_Q)) 
                                    & (IData)(vlTOPp->puzzle__DOT__Xand2b_2_11__DOT__base__DOT__and0_out_X)) 
                                   & (IData)(vlTOPp->I)) 
                                  | (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_58__DOT__base__DOT__buf_Q))));
        tracep->chgBit(oldp+715,(((IData)(vlTOPp->puzzle__DOT__Xand2b_2_11__DOT__base__DOT__and0_out_X)
                                   ? (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_33__DOT__base__DOT__buf_Q)
                                   : (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_36__DOT__base__DOT__buf_Q))));
        tracep->chgBit(oldp+716,((((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_72__DOT__base__DOT__buf_Q) 
                                   & (~ ((IData)(vlTOPp->puzzle__DOT__Xor4b_2_7__DOT__base__DOT__or0_out_X) 
                                         | (~ ((IData)(vlTOPp->puzzle__DOT__Xand2b_2_11__DOT__base__DOT__and0_out_X) 
                                               & (IData)(vlTOPp->I)))))) 
                                  | (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_69__DOT__base__DOT__buf_Q))));
        tracep->chgBit(oldp+717,((1U & (~ ((~ (IData)(vlTOPp->puzzle__DOT__Xand3b_2_0__DOT__base__DOT__and0_out_X)) 
                                           & ((IData)(vlTOPp->puzzle__DOT__Xnand2b_2_9__DOT__base__DOT__or0_out_Y) 
                                              | (IData)(vlTOPp->puzzle__DOT__Xnor2_2_22__DOT__base__DOT__nor0_out_Y)))))));
        tracep->chgBit(oldp+718,(vlTOPp->puzzle__DOT__Xxnor2_2_1__DOT__base__DOT__xnor0_out_Y));
        tracep->chgBit(oldp+719,((1U & ((((~ ((IData)(vlTOPp->puzzle__DOT__Xand2b_2_11__DOT__base__DOT__and0_out_X) 
                                              & (IData)(vlTOPp->I))) 
                                          | (IData)(vlTOPp->puzzle__DOT__Xor4b_2_4__DOT__base__DOT__or0_out_X)) 
                                         | (~ (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_76__DOT__base__DOT__buf_Q))) 
                                        | (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_61__DOT__base__DOT__buf_Q)))));
        tracep->chgBit(oldp+720,(vlTOPp->puzzle__DOT__Xdfrtp_2_7__DOT__base__DOT__buf_Q));
        tracep->chgBit(oldp+721,(vlTOPp->puzzle__DOT__Xxor2_2_1__DOT__base__DOT__xor0_out_X));
        tracep->chgBit(oldp+722,((((((IData)(vlTOPp->puzzle__DOT__Xand2b_2_0__DOT__base__DOT__and0_out_X) 
                                     & (IData)(vlTOPp->puzzle__DOT__Xxnor2_2_0__DOT__base__DOT__xnor0_out_Y)) 
                                    & (IData)(vlTOPp->puzzle__DOT__Xxor2_2_8__DOT__base__DOT__xor0_out_X)) 
                                   | (IData)(vlTOPp->puzzle__DOT__Xand3_2_1__DOT__base__DOT__and0_out_X)) 
                                  | (IData)(vlTOPp->puzzle__DOT__Xnor2_2_12__DOT__base__DOT__nor0_out_Y))));
        tracep->chgBit(oldp+723,((((~ ((IData)(vlTOPp->puzzle__DOT__Xxor2_2_8__DOT__base__DOT__xor0_out_X) 
                                       & ((IData)(vlTOPp->puzzle__DOT__Xand3_2_1__DOT__base__DOT__and0_out_X) 
                                          | (IData)(vlTOPp->puzzle__DOT__Xnor2_2_12__DOT__base__DOT__nor0_out_Y)))) 
                                   & (IData)(vlTOPp->puzzle__DOT__Xxnor2_2_10__DOT__base__DOT__xnor0_out_Y)) 
                                  & (((((IData)(vlTOPp->puzzle__DOT__Xand2b_2_0__DOT__base__DOT__and0_out_X) 
                                        & (IData)(vlTOPp->puzzle__DOT__Xxnor2_2_0__DOT__base__DOT__xnor0_out_Y)) 
                                       & (IData)(vlTOPp->puzzle__DOT__Xxor2_2_8__DOT__base__DOT__xor0_out_X)) 
                                      | (IData)(vlTOPp->puzzle__DOT__Xand3_2_1__DOT__base__DOT__and0_out_X)) 
                                     | (IData)(vlTOPp->puzzle__DOT__Xnor2_2_12__DOT__base__DOT__nor0_out_Y)))));
        tracep->chgBit(oldp+724,(((((IData)(vlTOPp->puzzle__DOT__Xand2b_2_11__DOT__base__DOT__and0_out_X) 
                                    & (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_50__DOT__base__DOT__buf_Q)) 
                                   | ((~ ((IData)(vlTOPp->puzzle__DOT__Xand2_2_16__DOT__base__DOT__and0_out_X) 
                                          | (IData)(vlTOPp->puzzle__DOT__Xand2b_2_11__DOT__base__DOT__and0_out_X))) 
                                      & (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_48__DOT__base__DOT__buf_Q))) 
                                  | (((IData)(vlTOPp->puzzle__DOT__Xxor2_2_14__DOT__base__DOT__xor0_out_X) 
                                      | (IData)(vlTOPp->puzzle__DOT__Xxor2_2_13__DOT__base__DOT__xor0_out_X)) 
                                     & (~ (((~ (IData)(vlTOPp->puzzle__DOT__Xand2_2_16__DOT__base__DOT__and0_out_X)) 
                                            | (IData)(vlTOPp->puzzle__DOT__Xand2b_2_11__DOT__base__DOT__and0_out_X)) 
                                           | ((IData)(vlTOPp->puzzle__DOT__Xxor2_2_13__DOT__base__DOT__xor0_out_X) 
                                              & (IData)(vlTOPp->puzzle__DOT__Xxor2_2_14__DOT__base__DOT__xor0_out_X))))))));
        tracep->chgBit(oldp+725,((((IData)(vlTOPp->puzzle__DOT__Xxor2_2_14__DOT__base__DOT__xor0_out_X) 
                                   | (IData)(vlTOPp->puzzle__DOT__Xxor2_2_13__DOT__base__DOT__xor0_out_X)) 
                                  & (~ (((~ (IData)(vlTOPp->puzzle__DOT__Xand2_2_16__DOT__base__DOT__and0_out_X)) 
                                         | (IData)(vlTOPp->puzzle__DOT__Xand2b_2_11__DOT__base__DOT__and0_out_X)) 
                                        | ((IData)(vlTOPp->puzzle__DOT__Xxor2_2_13__DOT__base__DOT__xor0_out_X) 
                                           & (IData)(vlTOPp->puzzle__DOT__Xxor2_2_14__DOT__base__DOT__xor0_out_X)))))));
        tracep->chgBit(oldp+726,((1U & (~ ((((IData)(vlTOPp->puzzle__DOT__Xand4bb_2_10__DOT__base__DOT__and0_out_X) 
                                             & (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_71__DOT__base__DOT__buf_Q)) 
                                            & (IData)(vlTOPp->puzzle__DOT__Xand2b_2_11__DOT__base__DOT__and0_out_X)) 
                                           & (IData)(vlTOPp->I))))));
        tracep->chgBit(oldp+727,((1U & (~ ((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_21__DOT__base__DOT__buf_Q) 
                                           & (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_20__DOT__base__DOT__buf_Q))))));
        tracep->chgBit(oldp+728,((1U & ((((IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_2__DOT__base__DOT__buf_Q) 
                                          & (IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_3__DOT__base__DOT__buf_Q)) 
                                         | (IData)(vlTOPp->puzzle__DOT__Xand2b_2_17__DOT__base__DOT__and0_out_X)) 
                                        | (~ (IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_0__DOT__base__DOT__buf_Q))))));
        tracep->chgBit(oldp+729,(((((~ (((IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_1__DOT__base__DOT__buf_Q) 
                                         & (IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_3__DOT__base__DOT__buf_Q)) 
                                        & (IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_2__DOT__base__DOT__buf_Q))) 
                                    | (IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_0__DOT__base__DOT__buf_Q)) 
                                   & (((IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_1__DOT__base__DOT__buf_Q) 
                                       & (IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_2__DOT__base__DOT__buf_Q)) 
                                      | (IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_3__DOT__base__DOT__buf_Q))) 
                                  & (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_83__DOT__base__DOT__buf_Q))));
        tracep->chgBit(oldp+730,((1U & (~ ((IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_0__DOT__base__DOT__buf_Q) 
                                           | ((IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_2__DOT__base__DOT__buf_Q) 
                                              & (IData)(vlTOPp->puzzle__DOT__Xand2b_2_12__DOT__base__DOT__and0_out_X)))))));
        tracep->chgBit(oldp+731,((((((IData)(vlTOPp->puzzle__DOT__Xand4bb_2_7__DOT__base__DOT__and0_out_X) 
                                     & (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_56__DOT__base__DOT__buf_Q)) 
                                    & (IData)(vlTOPp->puzzle__DOT__Xand2b_2_11__DOT__base__DOT__and0_out_X)) 
                                   & (IData)(vlTOPp->I)) 
                                  | (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_59__DOT__base__DOT__buf_Q))));
        tracep->chgBit(oldp+732,((((((((((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_46__DOT__base__DOT__buf_Q) 
                                         | (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_44__DOT__base__DOT__buf_Q)) 
                                        | (~ ((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_43__DOT__base__DOT__buf_Q) 
                                              & (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_45__DOT__base__DOT__buf_Q)))) 
                                       & (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_33__DOT__base__DOT__buf_Q)) 
                                      | (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_36__DOT__base__DOT__buf_Q)) 
                                     | ((IData)(vlTOPp->puzzle__DOT__Xor4_2_4__DOT__base__DOT__or0_out_X) 
                                        & ((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_41__DOT__base__DOT__buf_Q) 
                                           | (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_38__DOT__base__DOT__buf_Q)))) 
                                    & (IData)(vlTOPp->I)) 
                                   & (IData)(vlTOPp->puzzle__DOT__Xand2b_2_11__DOT__base__DOT__and0_out_X)) 
                                  | (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_37__DOT__base__DOT__buf_Q))));
        tracep->chgBit(oldp+733,((1U & (~ ((IData)(vlTOPp->puzzle__DOT__Xxor2_2_0__DOT__base__DOT__xor0_out_X) 
                                           & (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_43__DOT__base__DOT__buf_Q))))));
        tracep->chgBit(oldp+734,(vlTOPp->puzzle__DOT__Xdfrtp_2_9__DOT__base__DOT__buf_Q));
        tracep->chgBit(oldp+735,(vlTOPp->puzzle__DOT__Xxnor2_2_8__DOT__base__DOT__xnor0_out_Y));
        tracep->chgBit(oldp+736,((((IData)(vlTOPp->puzzle__DOT__Xor3_2_5__DOT__base__DOT__or0_out_X) 
                                   & (IData)(vlTOPp->puzzle__DOT__Xnand2b_2_6__DOT__base__DOT__or0_out_Y)) 
                                  & (IData)(vlTOPp->puzzle__DOT__Xnand2_2_16__DOT__base__DOT__nand0_out_Y))));
        tracep->chgBit(oldp+737,((1U & ((((IData)(vlTOPp->puzzle__DOT__Xand2b_2_11__DOT__base__DOT__and0_out_X) 
                                          & (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_49__DOT__base__DOT__buf_Q)) 
                                         | ((IData)(vlTOPp->puzzle__DOT__Xdfstp_2_0__DOT__base__DOT__buf_Q) 
                                            & (~ ((IData)(vlTOPp->puzzle__DOT__Xand2_2_16__DOT__base__DOT__and0_out_X) 
                                                  | (IData)(vlTOPp->puzzle__DOT__Xand2b_2_11__DOT__base__DOT__and0_out_X))))) 
                                        | (~ ((IData)(vlTOPp->puzzle__DOT__Xxnor2_2_26__DOT__base__DOT__xnor0_out_Y) 
                                              | ((~ (IData)(vlTOPp->puzzle__DOT__Xand2_2_16__DOT__base__DOT__and0_out_X)) 
                                                 | (IData)(vlTOPp->puzzle__DOT__Xand2b_2_11__DOT__base__DOT__and0_out_X))))))));
        tracep->chgBit(oldp+738,((1U & (~ ((IData)(vlTOPp->puzzle__DOT__Xxnor2_2_26__DOT__base__DOT__xnor0_out_Y) 
                                           | ((~ (IData)(vlTOPp->puzzle__DOT__Xand2_2_16__DOT__base__DOT__and0_out_X)) 
                                              | (IData)(vlTOPp->puzzle__DOT__Xand2b_2_11__DOT__base__DOT__and0_out_X)))))));
        tracep->chgBit(oldp+739,(((((IData)(vlTOPp->puzzle__DOT__Xand4b_2_2__DOT__base__DOT__and0_out_X) 
                                    & (IData)(vlTOPp->I)) 
                                   & (IData)(vlTOPp->puzzle__DOT__Xand2b_2_11__DOT__base__DOT__and0_out_X)) 
                                  | (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_75__DOT__base__DOT__buf_Q))));
        tracep->chgBit(oldp+740,((1U & (~ ((((IData)(vlTOPp->puzzle__DOT__Xand4b_2_2__DOT__base__DOT__and0_out_X) 
                                             & (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_75__DOT__base__DOT__buf_Q)) 
                                            & (IData)(vlTOPp->puzzle__DOT__Xand2b_2_11__DOT__base__DOT__and0_out_X)) 
                                           & (IData)(vlTOPp->I))))));
        tracep->chgBit(oldp+741,((1U & (((IData)(vlTOPp->puzzle__DOT__Xand3_2_15__DOT__base__DOT__and0_out_X) 
                                         | (~ (IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_2__DOT__base__DOT__buf_Q))) 
                                        & (~ (IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_0__DOT__base__DOT__buf_Q))))));
        tracep->chgBit(oldp+742,(((((IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_1__DOT__base__DOT__buf_Q) 
                                    & (IData)(vlTOPp->puzzle__DOT__Xa211oi_2_2__DOT__base__DOT__nor0_out_Y)) 
                                   | (IData)(vlTOPp->puzzle__DOT__Xand4b_2_0__DOT__base__DOT__and0_out_X)) 
                                  | (IData)(vlTOPp->puzzle__DOT__Xnor4b_2_0__DOT__base__DOT__nor0_out_Y))));
        tracep->chgBit(oldp+743,((((((~ ((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_49__DOT__base__DOT__buf_Q) 
                                         ^ (IData)(vlTOPp->puzzle__DOT__Xxnor2_2_17__DOT__base__DOT__xnor0_out_Y))) 
                                     | (IData)(vlTOPp->puzzle__DOT__Xdfstp_2_3__DOT__base__DOT__buf_Q)) 
                                    & (IData)(vlTOPp->puzzle__DOT__Xand2b_2_16__DOT__base__DOT__and0_out_X)) 
                                   & (~ ((~ ((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_49__DOT__base__DOT__buf_Q) 
                                             ^ (IData)(vlTOPp->puzzle__DOT__Xxnor2_2_17__DOT__base__DOT__xnor0_out_Y))) 
                                         & (IData)(vlTOPp->puzzle__DOT__Xdfstp_2_3__DOT__base__DOT__buf_Q)))) 
                                  | (((IData)(vlTOPp->puzzle__DOT__Xand2b_2_11__DOT__base__DOT__and0_out_X) 
                                      & (IData)(vlTOPp->puzzle__DOT__Xdfstp_2_2__DOT__base__DOT__buf_Q)) 
                                     | ((~ ((IData)(vlTOPp->puzzle__DOT__Xand2_2_16__DOT__base__DOT__and0_out_X) 
                                            | (IData)(vlTOPp->puzzle__DOT__Xand2b_2_11__DOT__base__DOT__and0_out_X))) 
                                        & (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_49__DOT__base__DOT__buf_Q))))));
        tracep->chgBit(oldp+744,(vlTOPp->puzzle__DOT__Xdfrtp_2_27__DOT__base__DOT__buf_Q));
        tracep->chgBit(oldp+745,((((~ (IData)(vlTOPp->puzzle__DOT__Xand2b_2_11__DOT__base__DOT__and0_out_X)) 
                                   & (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_27__DOT__base__DOT__buf_Q)) 
                                  | (((((~ ((IData)(vlTOPp->I) 
                                            & (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_27__DOT__base__DOT__buf_Q))) 
                                        | (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_29__DOT__base__DOT__buf_Q)) 
                                       & ((IData)(vlTOPp->I) 
                                          | (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_27__DOT__base__DOT__buf_Q))) 
                                      & (IData)(vlTOPp->puzzle__DOT__Xand2b_2_11__DOT__base__DOT__and0_out_X)) 
                                     & (~ (((~ ((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_44__DOT__base__DOT__buf_Q) 
                                                | (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_46__DOT__base__DOT__buf_Q))) 
                                            & (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_45__DOT__base__DOT__buf_Q)) 
                                           & (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_43__DOT__base__DOT__buf_Q)))))));
        tracep->chgBit(oldp+746,(vlTOPp->puzzle__DOT__Xdfrtp_2_38__DOT__base__DOT__buf_Q));
        tracep->chgBit(oldp+747,(((IData)(vlTOPp->puzzle__DOT__Xand2b_2_11__DOT__base__DOT__and0_out_X)
                                   ? (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_36__DOT__base__DOT__buf_Q)
                                   : (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_38__DOT__base__DOT__buf_Q))));
        tracep->chgBit(oldp+748,(((((~ (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_55__DOT__base__DOT__buf_Q)) 
                                    & (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_58__DOT__base__DOT__buf_Q)) 
                                   & ((~ (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_56__DOT__base__DOT__buf_Q)) 
                                      & (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_59__DOT__base__DOT__buf_Q))) 
                                  & ((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_52__DOT__base__DOT__buf_Q) 
                                     & (~ (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_54__DOT__base__DOT__buf_Q))))));
        tracep->chgBit(oldp+749,(((((IData)(vlTOPp->puzzle__DOT__Xand4bb_2_12__DOT__base__DOT__and0_out_X) 
                                    & (IData)(vlTOPp->I)) 
                                   & (IData)(vlTOPp->puzzle__DOT__Xand2b_2_11__DOT__base__DOT__and0_out_X)) 
                                  | (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_73__DOT__base__DOT__buf_Q))));
        tracep->chgBit(oldp+750,((1U & (~ (((~ (IData)(vlTOPp->puzzle__DOT__Xand2_2_16__DOT__base__DOT__and0_out_X)) 
                                            | (IData)(vlTOPp->puzzle__DOT__Xand2b_2_11__DOT__base__DOT__and0_out_X)) 
                                           | ((IData)(vlTOPp->puzzle__DOT__Xxor2_2_13__DOT__base__DOT__xor0_out_X) 
                                              & (IData)(vlTOPp->puzzle__DOT__Xxor2_2_14__DOT__base__DOT__xor0_out_X)))))));
        tracep->chgBit(oldp+751,((1U & (~ (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_28__DOT__base__DOT__buf_Q)))));
        tracep->chgBit(oldp+752,(vlTOPp->puzzle__DOT__Xand2_2_15__DOT__base__DOT__and0_out_X));
        tracep->chgBit(oldp+753,(vlTOPp->puzzle__DOT__Xdfrtp_2_28__DOT__base__DOT__buf_Q));
        tracep->chgBit(oldp+754,((((((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_29__DOT__base__DOT__buf_Q)
                                      ? ((IData)(vlTOPp->I) 
                                         | (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_27__DOT__base__DOT__buf_Q))
                                      : (~ ((IData)(vlTOPp->I) 
                                            & (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_27__DOT__base__DOT__buf_Q)))) 
                                    & (((~ ((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_44__DOT__base__DOT__buf_Q) 
                                            | (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_46__DOT__base__DOT__buf_Q))) 
                                        & (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_45__DOT__base__DOT__buf_Q)) 
                                       & (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_43__DOT__base__DOT__buf_Q))) 
                                   & (IData)(vlTOPp->puzzle__DOT__Xand2b_2_11__DOT__base__DOT__and0_out_X)) 
                                  | (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_28__DOT__base__DOT__buf_Q))));
        tracep->chgBit(oldp+755,(((IData)(vlTOPp->puzzle__DOT__Xand4_2_2__DOT__base__DOT__and0_out_X) 
                                  ^ (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_17__DOT__base__DOT__buf_Q))));
        tracep->chgBit(oldp+756,(vlTOPp->puzzle__DOT__Xdfrtp_2_39__DOT__base__DOT__buf_Q));
        tracep->chgBit(oldp+757,(((IData)(vlTOPp->puzzle__DOT__Xand2b_2_11__DOT__base__DOT__and0_out_X)
                                   ? (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_31__DOT__base__DOT__buf_Q)
                                   : (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_39__DOT__base__DOT__buf_Q))));
        tracep->chgBit(oldp+758,((((IData)(vlTOPp->puzzle__DOT__Xnand2_2_27__DOT__base__DOT__nand0_out_Y) 
                                   | (IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_1__DOT__base__DOT__buf_Q)) 
                                  & (IData)(vlTOPp->puzzle__DOT__Xo21ai_2_5__DOT__base__DOT__nand0_out_Y))));
        tracep->chgBit(oldp+759,((1U & (~ ((IData)(vlTOPp->puzzle__DOT__Xor4b_2_7__DOT__base__DOT__or0_out_X) 
                                           | (~ ((IData)(vlTOPp->puzzle__DOT__Xand2b_2_11__DOT__base__DOT__and0_out_X) 
                                                 & (IData)(vlTOPp->I))))))));
        tracep->chgBit(oldp+760,((1U & (~ (((~ ((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_44__DOT__base__DOT__buf_Q) 
                                                | (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_46__DOT__base__DOT__buf_Q))) 
                                            & (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_45__DOT__base__DOT__buf_Q)) 
                                           & (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_43__DOT__base__DOT__buf_Q))))));
        tracep->chgBit(oldp+761,(vlTOPp->puzzle__DOT__Xa21o_2_4__DOT__base__DOT__or0_out_X));
        tracep->chgBit(oldp+762,((1U & (~ ((((IData)(vlTOPp->puzzle__DOT__Xand4bb_2_7__DOT__base__DOT__and0_out_X) 
                                             & (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_56__DOT__base__DOT__buf_Q)) 
                                            & (IData)(vlTOPp->puzzle__DOT__Xand2b_2_11__DOT__base__DOT__and0_out_X)) 
                                           & (IData)(vlTOPp->I))))));
        tracep->chgBit(oldp+763,(((((IData)(vlTOPp->puzzle__DOT__Xand4bb_2_11__DOT__base__DOT__and0_out_X) 
                                    & (IData)(vlTOPp->I)) 
                                   & (IData)(vlTOPp->puzzle__DOT__Xand2b_2_11__DOT__base__DOT__and0_out_X)) 
                                  | (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_74__DOT__base__DOT__buf_Q))));
        tracep->chgBit(oldp+764,((1U & ((~ (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_47__DOT__base__DOT__buf_Q)) 
                                        | (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_83__DOT__base__DOT__buf_Q)))));
        tracep->chgBit(oldp+765,((((IData)(vlTOPp->puzzle__DOT__Xnor2_2_36__DOT__base__DOT__nor0_out_Y) 
                                   & (IData)(vlTOPp->puzzle__DOT__Xor2_2_9__DOT__base__DOT__or0_out_X)) 
                                  | ((IData)(vlTOPp->puzzle__DOT__Xxnor2_2_27__DOT__base__DOT__xnor0_out_Y) 
                                     & (((IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_3__DOT__base__DOT__buf_Q) 
                                         | (IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_2__DOT__base__DOT__buf_Q)) 
                                        | (~ (IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_1__DOT__base__DOT__buf_Q)))))));
        tracep->chgBit(oldp+766,((((~ ((((IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_0__DOT__base__DOT__buf_Q) 
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
                                        & (IData)(vlTOPp->puzzle__DOT__Xnand2b_2_12__DOT__base__DOT__or0_out_Y))))));
        tracep->chgBit(oldp+767,((((IData)(vlTOPp->puzzle__DOT__Xnor3b_2_4__DOT__base__DOT__and0_out_Y) 
                                   | ((((IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_1__DOT__base__DOT__buf_Q) 
                                        & (IData)(vlTOPp->puzzle__DOT__Xa211oi_2_2__DOT__base__DOT__nor0_out_Y)) 
                                       | (IData)(vlTOPp->puzzle__DOT__Xand4b_2_0__DOT__base__DOT__and0_out_X)) 
                                      | (IData)(vlTOPp->puzzle__DOT__Xnor4b_2_0__DOT__base__DOT__nor0_out_Y))) 
                                  | (IData)(vlTOPp->puzzle__DOT__Xa21oi_2_18__DOT__base__DOT__nor0_out_Y))));
        tracep->chgBit(oldp+768,((((((((IData)(vlTOPp->puzzle__DOT__Xxnor2_2_27__DOT__base__DOT__xnor0_out_Y) 
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
                                              | (IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_1__DOT__base__DOT__buf_Q))))))));
        tracep->chgBit(oldp+769,((((((IData)(vlTOPp->puzzle__DOT__Xnand2b_2_8__DOT__base__DOT__or0_out_Y) 
                                     & (IData)(vlTOPp->puzzle__DOT__Xand2_2_6__DOT__base__DOT__and0_out_X)) 
                                    & (IData)(vlTOPp->puzzle__DOT__Xnand2b_2_9__DOT__base__DOT__or0_out_Y)) 
                                   | (IData)(vlTOPp->puzzle__DOT__Xa21oi_2_8__DOT__base__DOT__nor0_out_Y)) 
                                  | ((~ (IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_3__DOT__base__DOT__buf_Q)) 
                                     & (IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_2__DOT__base__DOT__buf_Q)))));
        tracep->chgBit(oldp+770,(((((IData)(vlTOPp->puzzle__DOT__Xa31oi_2_0__DOT__base__DOT__nor0_out_Y) 
                                    | (IData)(vlTOPp->puzzle__DOT__Xand2b_2_7__DOT__base__DOT__and0_out_X)) 
                                   | (~ (((IData)(vlTOPp->puzzle__DOT__Xand2_2_6__DOT__base__DOT__and0_out_X) 
                                          | (IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_3__DOT__base__DOT__buf_Q)) 
                                         | (IData)(vlTOPp->puzzle__DOT__Xnor2_2_22__DOT__base__DOT__nor0_out_Y)))) 
                                  & (((((IData)(vlTOPp->puzzle__DOT__Xnand2b_2_8__DOT__base__DOT__or0_out_Y) 
                                        & (IData)(vlTOPp->puzzle__DOT__Xand2_2_6__DOT__base__DOT__and0_out_X)) 
                                       & (IData)(vlTOPp->puzzle__DOT__Xnand2b_2_9__DOT__base__DOT__or0_out_Y)) 
                                      | (IData)(vlTOPp->puzzle__DOT__Xa21oi_2_8__DOT__base__DOT__nor0_out_Y)) 
                                     | ((~ (IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_3__DOT__base__DOT__buf_Q)) 
                                        & (IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_2__DOT__base__DOT__buf_Q))))));
        tracep->chgBit(oldp+771,(vlTOPp->puzzle__DOT__Xdfrtp_2_0__DOT__base__DOT__buf_Q));
        tracep->chgBit(oldp+772,((((~ ((((IData)(vlTOPp->puzzle__DOT__Xnor4_2_0__DOT__base__DOT__nor0_out_Y) 
                                         & (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_0__DOT__base__DOT__buf_Q)) 
                                        & (IData)(vlTOPp->puzzle__DOT__Xand2b_2_11__DOT__base__DOT__and0_out_X)) 
                                       & (IData)(vlTOPp->I))) 
                                   | (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_14__DOT__base__DOT__buf_Q)) 
                                  & ((((IData)(vlTOPp->puzzle__DOT__Xnor4_2_0__DOT__base__DOT__nor0_out_Y) 
                                       & (IData)(vlTOPp->I)) 
                                      & (IData)(vlTOPp->puzzle__DOT__Xand2b_2_11__DOT__base__DOT__and0_out_X)) 
                                     | (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_0__DOT__base__DOT__buf_Q)))));
        tracep->chgBit(oldp+773,(((((IData)(vlTOPp->puzzle__DOT__Xand4bb_2_13__DOT__base__DOT__and0_out_X) 
                                    & (IData)(vlTOPp->I)) 
                                   & (IData)(vlTOPp->puzzle__DOT__Xand2b_2_11__DOT__base__DOT__and0_out_X)) 
                                  | (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_78__DOT__base__DOT__buf_Q))));
        tracep->chgBit(oldp+774,((1U & (~ ((((IData)(vlTOPp->puzzle__DOT__Xand4bb_2_13__DOT__base__DOT__and0_out_X) 
                                             & (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_78__DOT__base__DOT__buf_Q)) 
                                            & (IData)(vlTOPp->puzzle__DOT__Xand2b_2_11__DOT__base__DOT__and0_out_X)) 
                                           & (IData)(vlTOPp->I))))));
        tracep->chgBit(oldp+775,((1U & (~ ((IData)(vlTOPp->puzzle__DOT__Xor4b_2_3__DOT__base__DOT__or0_out_X) 
                                           | (~ ((IData)(vlTOPp->puzzle__DOT__Xand2b_2_11__DOT__base__DOT__and0_out_X) 
                                                 & (IData)(vlTOPp->I))))))));
        tracep->chgBit(oldp+776,(((~ ((IData)(vlTOPp->puzzle__DOT__Xdfstp_2_0__DOT__base__DOT__buf_Q) 
                                      ^ ((((IData)(vlTOPp->puzzle__DOT__Xnand2_2_29__DOT__base__DOT__nand0_out_Y) 
                                           & (IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_3__DOT__base__DOT__buf_Q)) 
                                          & (~ (IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_0__DOT__base__DOT__buf_Q))) 
                                         | ((~ ((~ (IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_0__DOT__base__DOT__buf_Q)) 
                                                & (IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_2__DOT__base__DOT__buf_Q))) 
                                            & (~ ((IData)(vlTOPp->puzzle__DOT__Xnand2_2_29__DOT__base__DOT__nand0_out_Y) 
                                                  & (IData)(vlTOPp->puzzle__DOT__Xor2_2_9__DOT__base__DOT__or0_out_X))))))) 
                                  & (IData)(vlTOPp->puzzle__DOT__Xnor3b_2_4__DOT__base__DOT__and0_out_Y))));
        tracep->chgBit(oldp+777,((((IData)(vlTOPp->puzzle__DOT__Xand2b_2_16__DOT__base__DOT__and0_out_X) 
                                   & (~ ((~ ((IData)(vlTOPp->puzzle__DOT__Xdfstp_2_3__DOT__base__DOT__buf_Q) 
                                             ^ (IData)(vlTOPp->puzzle__DOT__Xdfstp_2_2__DOT__base__DOT__buf_Q))) 
                                         ^ (IData)(vlTOPp->puzzle__DOT__Xxor2_2_19__DOT__base__DOT__xor0_out_X)))) 
                                  | (((IData)(vlTOPp->puzzle__DOT__Xand2b_2_11__DOT__base__DOT__and0_out_X) 
                                      & (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_48__DOT__base__DOT__buf_Q)) 
                                     | ((IData)(vlTOPp->puzzle__DOT__Xdfstp_2_2__DOT__base__DOT__buf_Q) 
                                        & (~ ((IData)(vlTOPp->puzzle__DOT__Xand2_2_16__DOT__base__DOT__and0_out_X) 
                                              | (IData)(vlTOPp->puzzle__DOT__Xand2b_2_11__DOT__base__DOT__and0_out_X))))))));
        tracep->chgBit(oldp+778,((1U & (((~ ((IData)(vlTOPp->puzzle__DOT__Xor4b_2_0__DOT__base__DOT__or0_out_X) 
                                             | (IData)(vlTOPp->puzzle__DOT__Xnand2_2_14__DOT__base__DOT__nand0_out_Y))) 
                                         | (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_1__DOT__base__DOT__buf_Q)) 
                                        & ((((IData)(vlTOPp->puzzle__DOT__Xnand2_2_14__DOT__base__DOT__nand0_out_Y) 
                                             | (IData)(vlTOPp->puzzle__DOT__Xor4b_2_0__DOT__base__DOT__or0_out_X)) 
                                            | (~ (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_1__DOT__base__DOT__buf_Q))) 
                                           | (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_2__DOT__base__DOT__buf_Q))))));
        tracep->chgBit(oldp+779,((1U & (~ ((IData)(vlTOPp->puzzle__DOT__Xor4b_2_4__DOT__base__DOT__or0_out_X) 
                                           | (~ ((IData)(vlTOPp->puzzle__DOT__Xand2b_2_11__DOT__base__DOT__and0_out_X) 
                                                 & (IData)(vlTOPp->I))))))));
        tracep->chgBit(oldp+780,(((((IData)(vlTOPp->puzzle__DOT__Xand4bb_2_8__DOT__base__DOT__and0_out_X) 
                                    & (IData)(vlTOPp->I)) 
                                   & (IData)(vlTOPp->puzzle__DOT__Xand2b_2_11__DOT__base__DOT__and0_out_X)) 
                                  | (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_55__DOT__base__DOT__buf_Q))));
        tracep->chgBit(oldp+781,((1U & (~ ((((IData)(vlTOPp->puzzle__DOT__Xand4bb_2_8__DOT__base__DOT__and0_out_X) 
                                             & (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_55__DOT__base__DOT__buf_Q)) 
                                            & (IData)(vlTOPp->puzzle__DOT__Xand2b_2_11__DOT__base__DOT__and0_out_X)) 
                                           & (IData)(vlTOPp->I))))));
        tracep->chgBit(oldp+782,((((((~ (IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_1__DOT__base__DOT__buf_Q)) 
                                     & (IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_2__DOT__base__DOT__buf_Q)) 
                                    | (IData)(vlTOPp->puzzle__DOT__Xand3_2_15__DOT__base__DOT__and0_out_X)) 
                                   | ((IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_1__DOT__base__DOT__buf_Q) 
                                      & (~ ((IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_2__DOT__base__DOT__buf_Q) 
                                            | (IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_3__DOT__base__DOT__buf_Q))))) 
                                  & (~ (IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_0__DOT__base__DOT__buf_Q)))));
        tracep->chgBit(oldp+783,((((((((~ (IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_1__DOT__base__DOT__buf_Q)) 
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
                                              & (IData)(vlTOPp->puzzle__DOT__Xand2b_2_13__DOT__base__DOT__and0_out_X))))))));
        tracep->chgBit(oldp+784,((((~ ((IData)(vlTOPp->puzzle__DOT__Xdfstp_2_1__DOT__base__DOT__buf_Q) 
                                       ^ (~ ((IData)(vlTOPp->puzzle__DOT__Xnor2_2_36__DOT__base__DOT__nor0_out_Y) 
                                             | ((IData)(vlTOPp->puzzle__DOT__Xnand2_2_32__DOT__base__DOT__nand0_out_Y) 
                                                & (IData)(vlTOPp->puzzle__DOT__Xnand2_2_30__DOT__base__DOT__nand0_out_Y)))))) 
                                   & (IData)(vlTOPp->puzzle__DOT__Xnor3b_2_4__DOT__base__DOT__and0_out_Y)) 
                                  | ((IData)(vlTOPp->puzzle__DOT__Xnor3b_2_3__DOT__base__DOT__and0_out_Y) 
                                     & (~ ((~ (IData)(vlTOPp->puzzle__DOT__Xand3b_2_0__DOT__base__DOT__and0_out_X)) 
                                           & ((IData)(vlTOPp->puzzle__DOT__Xnand2b_2_9__DOT__base__DOT__or0_out_Y) 
                                              | (IData)(vlTOPp->puzzle__DOT__Xnor2_2_22__DOT__base__DOT__nor0_out_Y))))))));
        tracep->chgBit(oldp+785,((((IData)(vlTOPp->puzzle__DOT__Xand2b_2_11__DOT__base__DOT__and0_out_X) 
                                   & (IData)(vlTOPp->puzzle__DOT__Xdfstp_2_2__DOT__base__DOT__buf_Q)) 
                                  | ((~ ((IData)(vlTOPp->puzzle__DOT__Xand2_2_16__DOT__base__DOT__and0_out_X) 
                                         | (IData)(vlTOPp->puzzle__DOT__Xand2b_2_11__DOT__base__DOT__and0_out_X))) 
                                     & (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_49__DOT__base__DOT__buf_Q)))));
        tracep->chgBit(oldp+786,((1U & (~ ((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_15__DOT__base__DOT__buf_Q) 
                                           | (IData)(vlTOPp->puzzle__DOT__Xnand2_2_22__DOT__base__DOT__nand0_out_Y))))));
        tracep->chgBit(oldp+787,(vlTOPp->puzzle__DOT__Xnand2b_2_10__DOT__base__DOT__or0_out_Y));
        tracep->chgBit(oldp+788,(((IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_1__DOT__base__DOT__buf_Q) 
                                  & (~ ((IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_2__DOT__base__DOT__buf_Q) 
                                        | (IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_3__DOT__base__DOT__buf_Q))))));
        tracep->chgBit(oldp+789,((((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_1__DOT__base__DOT__buf_Q) 
                                   & (~ ((IData)(vlTOPp->puzzle__DOT__Xor4b_2_0__DOT__base__DOT__or0_out_X) 
                                         | (IData)(vlTOPp->puzzle__DOT__Xnand2_2_14__DOT__base__DOT__nand0_out_Y)))) 
                                  | (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_2__DOT__base__DOT__buf_Q))));
        tracep->chgBit(oldp+790,((1U & (~ ((((IData)(vlTOPp->puzzle__DOT__Xnor4_2_1__DOT__base__DOT__nor0_out_Y) 
                                             & (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_60__DOT__base__DOT__buf_Q)) 
                                            & (IData)(vlTOPp->puzzle__DOT__Xand2b_2_11__DOT__base__DOT__and0_out_X)) 
                                           & (IData)(vlTOPp->I))))));
        tracep->chgBit(oldp+791,((((~ ((((IData)(vlTOPp->puzzle__DOT__Xnor2_2_38__DOT__base__DOT__nor0_out_Y) 
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
                                              & (IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_2__DOT__base__DOT__buf_Q))))))));
        tracep->chgBit(oldp+792,((((IData)(vlTOPp->puzzle__DOT__Xand2b_2_11__DOT__base__DOT__and0_out_X) 
                                   & (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_48__DOT__base__DOT__buf_Q)) 
                                  | ((IData)(vlTOPp->puzzle__DOT__Xdfstp_2_2__DOT__base__DOT__buf_Q) 
                                     & (~ ((IData)(vlTOPp->puzzle__DOT__Xand2_2_16__DOT__base__DOT__and0_out_X) 
                                           | (IData)(vlTOPp->puzzle__DOT__Xand2b_2_11__DOT__base__DOT__and0_out_X)))))));
        tracep->chgBit(oldp+793,((((IData)(vlTOPp->puzzle__DOT__Xand4b_2_0__DOT__base__DOT__and0_out_X) 
                                   | (IData)(vlTOPp->puzzle__DOT__Xa21oi_2_9__DOT__base__DOT__nor0_out_Y)) 
                                  | (IData)(vlTOPp->puzzle__DOT__Xnor4b_2_0__DOT__base__DOT__nor0_out_Y))));
        tracep->chgBit(oldp+794,((((IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_1__DOT__base__DOT__buf_Q) 
                                   & (~ (IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_0__DOT__base__DOT__buf_Q))) 
                                  & (IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_3__DOT__base__DOT__buf_Q))));
        tracep->chgBit(oldp+795,((((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_9__DOT__base__DOT__buf_Q) 
                                   & (~ ((IData)(vlTOPp->puzzle__DOT__Xor4b_2_1__DOT__base__DOT__or0_out_X) 
                                         | (IData)(vlTOPp->puzzle__DOT__Xnand2_2_13__DOT__base__DOT__nand0_out_Y)))) 
                                  | (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_3__DOT__base__DOT__buf_Q))));
        tracep->chgBit(oldp+796,(((IData)(vlTOPp->puzzle__DOT__Xnor3_2_3__DOT__base__DOT__nor0_out_Y) 
                                  & ((((IData)(vlTOPp->puzzle__DOT__Xor2_2_8__DOT__base__DOT__or0_out_X) 
                                       | (IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_1__DOT__base__DOT__buf_Q)) 
                                      & (IData)(vlTOPp->puzzle__DOT__Xnand2_2_27__DOT__base__DOT__nand0_out_Y)) 
                                     & (IData)(vlTOPp->puzzle__DOT__Xo21ai_2_5__DOT__base__DOT__nand0_out_Y)))));
        tracep->chgBit(oldp+797,((((IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_3__DOT__base__DOT__buf_Q) 
                                   & (~ (IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_0__DOT__base__DOT__buf_Q))) 
                                  & (IData)(vlTOPp->puzzle__DOT__Xand2b_2_13__DOT__base__DOT__and0_out_X))));
        tracep->chgBit(oldp+798,((((~ ((IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_0__DOT__base__DOT__buf_Q) 
                                       | ((IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_2__DOT__base__DOT__buf_Q) 
                                          & (IData)(vlTOPp->puzzle__DOT__Xand2b_2_12__DOT__base__DOT__and0_out_X)))) 
                                   & (IData)(vlTOPp->puzzle__DOT__Xnor3b_2_2__DOT__base__DOT__and0_out_Y)) 
                                  | ((IData)(vlTOPp->puzzle__DOT__Xnor3_2_3__DOT__base__DOT__nor0_out_Y) 
                                     & (((IData)(vlTOPp->puzzle__DOT__Xnand2_2_27__DOT__base__DOT__nand0_out_Y) 
                                         | (IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_1__DOT__base__DOT__buf_Q)) 
                                        & (IData)(vlTOPp->puzzle__DOT__Xo21ai_2_5__DOT__base__DOT__nand0_out_Y))))));
        tracep->chgBit(oldp+799,((((IData)(vlTOPp->puzzle__DOT__Xnor3b_2_4__DOT__base__DOT__and0_out_Y) 
                                   | (((IData)(vlTOPp->puzzle__DOT__Xand4b_2_0__DOT__base__DOT__and0_out_X) 
                                       | (IData)(vlTOPp->puzzle__DOT__Xa21oi_2_9__DOT__base__DOT__nor0_out_Y)) 
                                      | (IData)(vlTOPp->puzzle__DOT__Xnor4b_2_0__DOT__base__DOT__nor0_out_Y))) 
                                  | (IData)(vlTOPp->puzzle__DOT__Xa21oi_2_18__DOT__base__DOT__nor0_out_Y))));
        tracep->chgBit(oldp+800,((((~ ((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_49__DOT__base__DOT__buf_Q) 
                                       ^ (((IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_2__DOT__base__DOT__buf_Q) 
                                           & (IData)(vlTOPp->puzzle__DOT__Xnor2_2_37__DOT__base__DOT__nor0_out_Y)) 
                                          | ((IData)(vlTOPp->puzzle__DOT__Xnand2b_2_11__DOT__base__DOT__or0_out_Y) 
                                             & (IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_3__DOT__base__DOT__buf_Q))))) 
                                   & (IData)(vlTOPp->puzzle__DOT__Xnor3b_2_4__DOT__base__DOT__and0_out_Y)) 
                                  | ((IData)(vlTOPp->puzzle__DOT__Xnor3b_2_3__DOT__base__DOT__and0_out_Y) 
                                     & (((IData)(vlTOPp->puzzle__DOT__Xnand2_2_19__DOT__base__DOT__nand0_out_Y) 
                                         | (IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_0__DOT__base__DOT__buf_Q)) 
                                        & ((IData)(vlTOPp->puzzle__DOT__Xnor2_2_22__DOT__base__DOT__nor0_out_Y) 
                                           | (IData)(vlTOPp->puzzle__DOT__Xnand2_2_20__DOT__base__DOT__nand0_out_Y)))))));
        tracep->chgBit(oldp+801,((1U & (~ ((IData)(vlTOPp->puzzle__DOT__Xa21oi_2_7__DOT__base__DOT__nor0_out_Y) 
                                           | (IData)(vlTOPp->puzzle__DOT__Xa21o_2_4__DOT__base__DOT__or0_out_X))))));
        tracep->chgBit(oldp+802,((1U & (~ ((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_44__DOT__base__DOT__buf_Q) 
                                           ^ (IData)(vlTOPp->puzzle__DOT__Xand2b_2_11__DOT__base__DOT__and0_out_X))))));
        tracep->chgBit(oldp+803,((((IData)(vlTOPp->puzzle__DOT__Xnand2_2_11__DOT__base__DOT__nand0_out_Y) 
                                   | (IData)(vlTOPp->puzzle__DOT__Xnor2_2_8__DOT__base__DOT__nor0_out_Y)) 
                                  & (IData)(vlTOPp->puzzle__DOT__Xor2_2_3__DOT__base__DOT__or0_out_X))));
        tracep->chgBit(oldp+804,((1U & (~ ((((IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_0__DOT__base__DOT__buf_Q) 
                                             | (IData)(vlTOPp->puzzle__DOT__Xand2b_2_12__DOT__base__DOT__and0_out_X)) 
                                            | (~ ((IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_2__DOT__base__DOT__buf_Q) 
                                                  | (IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_1__DOT__base__DOT__buf_Q)))) 
                                           | ((IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_2__DOT__base__DOT__buf_Q) 
                                              & (IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_3__DOT__base__DOT__buf_Q)))))));
        tracep->chgBit(oldp+805,(vlTOPp->puzzle__DOT__Xdfrtp_2_8__DOT__base__DOT__buf_Q));
        tracep->chgBit(oldp+806,((((((((IData)(vlTOPp->puzzle__DOT__Xnor2_2_36__DOT__base__DOT__nor0_out_Y) 
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
                                              | (IData)(vlTOPp->puzzle__DOT__Xa31oi_2_0__DOT__base__DOT__nor0_out_Y))))))));
        tracep->chgBit(oldp+807,((((~ ((((((~ ((IData)(vlTOPp->puzzle__DOT__Xo211a_2_2__DOT__base__DOT__and0_out_X) 
                                               | (IData)(vlTOPp->puzzle__DOT__Xo211a_2_5__DOT__base__DOT__and0_out_X))) 
                                           & (IData)(vlTOPp->puzzle__DOT__Xo211a_2_4__DOT__base__DOT__and0_out_X)) 
                                          & (IData)(vlTOPp->puzzle__DOT__Xo211a_2_3__DOT__base__DOT__and0_out_X)) 
                                         & (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_5__DOT__base__DOT__buf_Q)) 
                                        & (IData)(vlTOPp->puzzle__DOT__Xand2b_2_11__DOT__base__DOT__and0_out_X)) 
                                       & (IData)(vlTOPp->I))) 
                                   | (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_12__DOT__base__DOT__buf_Q)) 
                                  & ((((((~ ((IData)(vlTOPp->puzzle__DOT__Xo211a_2_2__DOT__base__DOT__and0_out_X) 
                                             | (IData)(vlTOPp->puzzle__DOT__Xo211a_2_5__DOT__base__DOT__and0_out_X))) 
                                         & (IData)(vlTOPp->puzzle__DOT__Xo211a_2_4__DOT__base__DOT__and0_out_X)) 
                                        & (IData)(vlTOPp->puzzle__DOT__Xo211a_2_3__DOT__base__DOT__and0_out_X)) 
                                       & (IData)(vlTOPp->I)) 
                                      & (IData)(vlTOPp->puzzle__DOT__Xand2b_2_11__DOT__base__DOT__and0_out_X)) 
                                     | (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_5__DOT__base__DOT__buf_Q)))));
        tracep->chgBit(oldp+808,(((((IData)(vlTOPp->puzzle__DOT__Xnor4_2_0__DOT__base__DOT__nor0_out_Y) 
                                    & (IData)(vlTOPp->I)) 
                                   & (IData)(vlTOPp->puzzle__DOT__Xand2b_2_11__DOT__base__DOT__and0_out_X)) 
                                  | (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_0__DOT__base__DOT__buf_Q))));
        tracep->chgBit(oldp+809,((((((IData)(vlTOPp->puzzle__DOT__Xand2b_2_12__DOT__base__DOT__and0_out_X) 
                                     & (IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_2__DOT__base__DOT__buf_Q)) 
                                    & (~ (IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_0__DOT__base__DOT__buf_Q))) 
                                   & (IData)(vlTOPp->puzzle__DOT__Xnor3b_2_2__DOT__base__DOT__and0_out_Y)) 
                                  | ((IData)(vlTOPp->puzzle__DOT__Xnor3_2_3__DOT__base__DOT__nor0_out_Y) 
                                     & (((IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_3__DOT__base__DOT__buf_Q) 
                                         & (~ (IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_0__DOT__base__DOT__buf_Q))) 
                                        & (IData)(vlTOPp->puzzle__DOT__Xand2b_2_13__DOT__base__DOT__and0_out_X))))));
        tracep->chgBit(oldp+810,((1U & ((~ ((IData)(vlTOPp->puzzle__DOT__Xnand2b_2_9__DOT__base__DOT__or0_out_Y) 
                                            | (IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_2__DOT__base__DOT__buf_Q))) 
                                        | (~ ((((IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_1__DOT__base__DOT__buf_Q) 
                                                & (IData)(vlTOPp->puzzle__DOT__Xnand2b_2_10__DOT__base__DOT__or0_out_Y)) 
                                               | (IData)(vlTOPp->puzzle__DOT__Xand2b_2_7__DOT__base__DOT__and0_out_X)) 
                                              | (IData)(vlTOPp->puzzle__DOT__Xa31oi_2_0__DOT__base__DOT__nor0_out_Y)))))));
        tracep->chgBit(oldp+811,((((((IData)(vlTOPp->puzzle__DOT__Xand3_2_15__DOT__base__DOT__and0_out_X) 
                                     | (~ (IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_2__DOT__base__DOT__buf_Q))) 
                                    & (~ (IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_0__DOT__base__DOT__buf_Q))) 
                                   & (IData)(vlTOPp->puzzle__DOT__Xnor3b_2_2__DOT__base__DOT__and0_out_Y)) 
                                  | ((IData)(vlTOPp->puzzle__DOT__Xnor3_2_3__DOT__base__DOT__nor0_out_Y) 
                                     & (((IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_1__DOT__base__DOT__buf_Q) 
                                         & (~ (IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_0__DOT__base__DOT__buf_Q))) 
                                        & (IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_3__DOT__base__DOT__buf_Q))))));
        tracep->chgBit(oldp+812,((((IData)(vlTOPp->puzzle__DOT__Xnor3b_2_4__DOT__base__DOT__and0_out_Y) 
                                   | (((IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_2__DOT__base__DOT__buf_Q) 
                                       & (IData)(vlTOPp->puzzle__DOT__Xnor2_2_24__DOT__base__DOT__nor0_out_Y)) 
                                      | (IData)(vlTOPp->puzzle__DOT__Xnor4b_2_0__DOT__base__DOT__nor0_out_Y))) 
                                  | (IData)(vlTOPp->puzzle__DOT__Xa21oi_2_18__DOT__base__DOT__nor0_out_Y))));
        tracep->chgBit(oldp+813,(((((IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_3__DOT__base__DOT__buf_Q) 
                                    | (~ (IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_2__DOT__base__DOT__buf_Q))) 
                                   & (~ (IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_0__DOT__base__DOT__buf_Q))) 
                                  & (IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_1__DOT__base__DOT__buf_Q))));
        tracep->chgBit(oldp+814,(((((((~ ((IData)(vlTOPp->puzzle__DOT__Xo211a_2_5__DOT__base__DOT__and0_out_X) 
                                          | (IData)(vlTOPp->puzzle__DOT__Xo211a_2_4__DOT__base__DOT__and0_out_X))) 
                                      & (IData)(vlTOPp->puzzle__DOT__Xo211a_2_2__DOT__base__DOT__and0_out_X)) 
                                     & (IData)(vlTOPp->puzzle__DOT__Xo211a_2_3__DOT__base__DOT__and0_out_X)) 
                                    & (IData)(vlTOPp->I)) 
                                   & (IData)(vlTOPp->puzzle__DOT__Xand2b_2_11__DOT__base__DOT__and0_out_X)) 
                                  | (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_8__DOT__base__DOT__buf_Q))));
        tracep->chgBit(oldp+815,((((~ ((((((~ ((IData)(vlTOPp->puzzle__DOT__Xo211a_2_5__DOT__base__DOT__and0_out_X) 
                                               | (IData)(vlTOPp->puzzle__DOT__Xo211a_2_4__DOT__base__DOT__and0_out_X))) 
                                           & (IData)(vlTOPp->puzzle__DOT__Xo211a_2_2__DOT__base__DOT__and0_out_X)) 
                                          & (IData)(vlTOPp->puzzle__DOT__Xo211a_2_3__DOT__base__DOT__and0_out_X)) 
                                         & (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_8__DOT__base__DOT__buf_Q)) 
                                        & (IData)(vlTOPp->puzzle__DOT__Xand2b_2_11__DOT__base__DOT__and0_out_X)) 
                                       & (IData)(vlTOPp->I))) 
                                   | (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_4__DOT__base__DOT__buf_Q)) 
                                  & ((((((~ ((IData)(vlTOPp->puzzle__DOT__Xo211a_2_5__DOT__base__DOT__and0_out_X) 
                                             | (IData)(vlTOPp->puzzle__DOT__Xo211a_2_4__DOT__base__DOT__and0_out_X))) 
                                         & (IData)(vlTOPp->puzzle__DOT__Xo211a_2_2__DOT__base__DOT__and0_out_X)) 
                                        & (IData)(vlTOPp->puzzle__DOT__Xo211a_2_3__DOT__base__DOT__and0_out_X)) 
                                       & (IData)(vlTOPp->I)) 
                                      & (IData)(vlTOPp->puzzle__DOT__Xand2b_2_11__DOT__base__DOT__and0_out_X)) 
                                     | (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_8__DOT__base__DOT__buf_Q)))));
        tracep->chgBit(oldp+816,((1U & (~ ((~ ((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_49__DOT__base__DOT__buf_Q) 
                                               ^ (IData)(vlTOPp->puzzle__DOT__Xxnor2_2_17__DOT__base__DOT__xnor0_out_Y))) 
                                           & (IData)(vlTOPp->puzzle__DOT__Xdfstp_2_3__DOT__base__DOT__buf_Q))))));
        tracep->chgBit(oldp+817,(((((((IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_3__DOT__base__DOT__buf_Q) 
                                      | (~ (IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_2__DOT__base__DOT__buf_Q))) 
                                     & (~ (IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_0__DOT__base__DOT__buf_Q))) 
                                    & (IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_1__DOT__base__DOT__buf_Q)) 
                                   & (IData)(vlTOPp->puzzle__DOT__Xnor3b_2_2__DOT__base__DOT__and0_out_Y)) 
                                  | ((IData)(vlTOPp->puzzle__DOT__Xnor3_2_3__DOT__base__DOT__nor0_out_Y) 
                                     & ((~ (IData)(vlTOPp->puzzle__DOT__Xor2_2_8__DOT__base__DOT__or0_out_X)) 
                                        & (IData)(vlTOPp->puzzle__DOT__Xnand2b_2_12__DOT__base__DOT__or0_out_Y))))));
        tracep->chgBit(oldp+818,((1U & (((IData)(vlTOPp->puzzle__DOT__Xnor3b_2_4__DOT__base__DOT__and0_out_Y) 
                                         | ((((IData)(vlTOPp->puzzle__DOT__Xnor2_2_24__DOT__base__DOT__nor0_out_Y) 
                                              & (IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_2__DOT__base__DOT__buf_Q)) 
                                             & (IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_3__DOT__base__DOT__buf_Q)) 
                                            | (~ (((IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_3__DOT__base__DOT__buf_Q) 
                                                   | (IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_2__DOT__base__DOT__buf_Q)) 
                                                  | (IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_1__DOT__base__DOT__buf_Q))))) 
                                        | (IData)(vlTOPp->puzzle__DOT__Xa21oi_2_18__DOT__base__DOT__nor0_out_Y)))));
        tracep->chgBit(oldp+819,((((~ ((IData)(vlTOPp->puzzle__DOT__Xdfstp_2_3__DOT__base__DOT__buf_Q) 
                                       ^ (~ (((((IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_2__DOT__base__DOT__buf_Q) 
                                                & (IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_3__DOT__base__DOT__buf_Q)) 
                                               | (IData)(vlTOPp->puzzle__DOT__Xand2b_2_17__DOT__base__DOT__and0_out_X)) 
                                              | (~ (IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_0__DOT__base__DOT__buf_Q))) 
                                             & ((IData)(vlTOPp->puzzle__DOT__Xnand2_2_28__DOT__base__DOT__nand0_out_Y) 
                                                | (~ (IData)(vlTOPp->puzzle__DOT__Xnand2_2_32__DOT__base__DOT__nand0_out_Y))))))) 
                                   & (IData)(vlTOPp->puzzle__DOT__Xnor3b_2_4__DOT__base__DOT__and0_out_Y)) 
                                  | ((IData)(vlTOPp->puzzle__DOT__Xnor3b_2_3__DOT__base__DOT__and0_out_Y) 
                                     & ((IData)(vlTOPp->puzzle__DOT__Xnand2_2_19__DOT__base__DOT__nand0_out_Y) 
                                        & (IData)(vlTOPp->puzzle__DOT__Xnand2_2_20__DOT__base__DOT__nand0_out_Y))))));
        tracep->chgBit(oldp+820,((1U & (~ ((IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_0__DOT__base__DOT__buf_Q) 
                                           | (IData)(vlTOPp->puzzle__DOT__Xnand2_2_19__DOT__base__DOT__nand0_out_Y))))));
        tracep->chgBit(oldp+821,((((IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_1__DOT__base__DOT__buf_Q) 
                                   & (IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_2__DOT__base__DOT__buf_Q)) 
                                  | (IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_3__DOT__base__DOT__buf_Q))));
        tracep->chgBit(oldp+822,((1U & (((~ ((IData)(vlTOPp->puzzle__DOT__Xor4b_2_2__DOT__base__DOT__or0_out_X) 
                                             | (IData)(vlTOPp->puzzle__DOT__Xnand2_2_15__DOT__base__DOT__nand0_out_Y))) 
                                         | (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_7__DOT__base__DOT__buf_Q)) 
                                        & ((((IData)(vlTOPp->puzzle__DOT__Xnand2_2_15__DOT__base__DOT__nand0_out_Y) 
                                             | (IData)(vlTOPp->puzzle__DOT__Xor4b_2_2__DOT__base__DOT__or0_out_X)) 
                                            | (~ (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_7__DOT__base__DOT__buf_Q))) 
                                           | (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_13__DOT__base__DOT__buf_Q))))));
        tracep->chgBit(oldp+823,((1U & (~ ((IData)(vlTOPp->puzzle__DOT__Xor4b_2_1__DOT__base__DOT__or0_out_X) 
                                           | (IData)(vlTOPp->puzzle__DOT__Xnand2_2_13__DOT__base__DOT__nand0_out_Y))))));
        tracep->chgBit(oldp+824,((1U & (((~ ((IData)(vlTOPp->puzzle__DOT__Xor4b_2_1__DOT__base__DOT__or0_out_X) 
                                             | (IData)(vlTOPp->puzzle__DOT__Xnand2_2_13__DOT__base__DOT__nand0_out_Y))) 
                                         | (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_9__DOT__base__DOT__buf_Q)) 
                                        & ((((IData)(vlTOPp->puzzle__DOT__Xnand2_2_13__DOT__base__DOT__nand0_out_Y) 
                                             | (IData)(vlTOPp->puzzle__DOT__Xor4b_2_1__DOT__base__DOT__or0_out_X)) 
                                            | (~ (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_9__DOT__base__DOT__buf_Q))) 
                                           | (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_3__DOT__base__DOT__buf_Q))))));
        tracep->chgBit(oldp+825,(((((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_18__DOT__base__DOT__buf_Q) 
                                    & (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_15__DOT__base__DOT__buf_Q)) 
                                   & (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_17__DOT__base__DOT__buf_Q)) 
                                  | (IData)(vlTOPp->puzzle__DOT__Xnor2_2_17__DOT__base__DOT__nor0_out_Y))));
        tracep->chgBit(oldp+826,((((IData)(vlTOPp->puzzle__DOT__Xnor3b_2_4__DOT__base__DOT__and0_out_Y) 
                                   | (((~ ((IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_3__DOT__base__DOT__buf_Q) 
                                           | (IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_0__DOT__base__DOT__buf_Q))) 
                                       & (IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_2__DOT__base__DOT__buf_Q)) 
                                      & (IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_1__DOT__base__DOT__buf_Q))) 
                                  | (IData)(vlTOPp->puzzle__DOT__Xa21oi_2_18__DOT__base__DOT__nor0_out_Y))));
        tracep->chgBit(oldp+827,(((((~ ((((IData)(vlTOPp->puzzle__DOT__Xnor2_2_36__DOT__base__DOT__nor0_out_Y) 
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
                                           | (IData)(vlTOPp->puzzle__DOT__Xnand2_2_19__DOT__base__DOT__nand0_out_Y)))))));
        tracep->chgBit(oldp+828,(vlTOPp->puzzle__DOT__Xnor2_2_24__DOT__base__DOT__nor0_out_Y));
        tracep->chgBit(oldp+829,((1U & (~ ((IData)(vlTOPp->puzzle__DOT__Xor4b_2_0__DOT__base__DOT__or0_out_X) 
                                           | (IData)(vlTOPp->puzzle__DOT__Xnand2_2_14__DOT__base__DOT__nand0_out_Y))))));
        tracep->chgBit(oldp+830,((1U & (~ ((IData)(vlTOPp->puzzle__DOT__Xand3b_2_0__DOT__base__DOT__and0_out_X) 
                                           ^ (((IData)(vlTOPp->puzzle__DOT__Xnand2b_2_10__DOT__base__DOT__or0_out_Y) 
                                               & ((~ (IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_2__DOT__base__DOT__buf_Q)) 
                                                  | (IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_3__DOT__base__DOT__buf_Q))) 
                                              | (IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_1__DOT__base__DOT__buf_Q)))))));
        tracep->chgBit(oldp+831,((((IData)(vlTOPp->puzzle__DOT__Xnand2b_2_10__DOT__base__DOT__or0_out_Y) 
                                   & ((~ (IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_2__DOT__base__DOT__buf_Q)) 
                                      | (IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_3__DOT__base__DOT__buf_Q))) 
                                  | (IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_1__DOT__base__DOT__buf_Q))));
        tracep->chgBit(oldp+832,((((IData)(vlTOPp->puzzle__DOT__Xnor3b_2_4__DOT__base__DOT__and0_out_Y) 
                                   | (((IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_3__DOT__base__DOT__buf_Q) 
                                       | (IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_1__DOT__base__DOT__buf_Q)) 
                                      & ((IData)(vlTOPp->puzzle__DOT__Xand4b_2_0__DOT__base__DOT__and0_out_X) 
                                         | (IData)(vlTOPp->puzzle__DOT__Xa21oi_2_9__DOT__base__DOT__nor0_out_Y)))) 
                                  | (IData)(vlTOPp->puzzle__DOT__Xa21oi_2_18__DOT__base__DOT__nor0_out_Y))));
        tracep->chgBit(oldp+833,(((((((~ ((IData)(vlTOPp->puzzle__DOT__Xo211a_2_2__DOT__base__DOT__and0_out_X) 
                                          | (IData)(vlTOPp->puzzle__DOT__Xo211a_2_5__DOT__base__DOT__and0_out_X))) 
                                      & (IData)(vlTOPp->puzzle__DOT__Xo211a_2_4__DOT__base__DOT__and0_out_X)) 
                                     & (IData)(vlTOPp->puzzle__DOT__Xo211a_2_3__DOT__base__DOT__and0_out_X)) 
                                    & (IData)(vlTOPp->I)) 
                                   & (IData)(vlTOPp->puzzle__DOT__Xand2b_2_11__DOT__base__DOT__and0_out_X)) 
                                  | (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_5__DOT__base__DOT__buf_Q))));
        tracep->chgBit(oldp+834,((((IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_2__DOT__base__DOT__buf_Q) 
                                   & (IData)(vlTOPp->puzzle__DOT__Xnor2_2_24__DOT__base__DOT__nor0_out_Y)) 
                                  | (IData)(vlTOPp->puzzle__DOT__Xnor4b_2_0__DOT__base__DOT__nor0_out_Y))));
        tracep->chgBit(oldp+835,((1U & (~ ((IData)(vlTOPp->puzzle__DOT__Xdfstp_2_3__DOT__base__DOT__buf_Q) 
                                           ^ (~ (((
                                                   ((IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_2__DOT__base__DOT__buf_Q) 
                                                    & (IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_3__DOT__base__DOT__buf_Q)) 
                                                   | (IData)(vlTOPp->puzzle__DOT__Xand2b_2_17__DOT__base__DOT__and0_out_X)) 
                                                  | (~ (IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_0__DOT__base__DOT__buf_Q))) 
                                                 & ((IData)(vlTOPp->puzzle__DOT__Xnand2_2_28__DOT__base__DOT__nand0_out_Y) 
                                                    | (~ (IData)(vlTOPp->puzzle__DOT__Xnand2_2_32__DOT__base__DOT__nand0_out_Y))))))))));
        tracep->chgBit(oldp+836,((1U & (~ ((IData)(vlTOPp->puzzle__DOT__Xor4b_2_2__DOT__base__DOT__or0_out_X) 
                                           | (IData)(vlTOPp->puzzle__DOT__Xnand2_2_15__DOT__base__DOT__nand0_out_Y))))));
        tracep->chgBit(oldp+837,((1U & (~ ((IData)(vlTOPp->puzzle__DOT__Xand3_2_10__DOT__base__DOT__and0_out_X) 
                                           | (~ ((IData)(vlTOPp->success) 
                                                 | (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_82__DOT__base__DOT__buf_Q))))))));
        tracep->chgBit(oldp+838,(((IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_1__DOT__base__DOT__buf_Q) 
                                  & (IData)(vlTOPp->puzzle__DOT__Xnand2b_2_10__DOT__base__DOT__or0_out_Y))));
        tracep->chgBit(oldp+839,((1U & ((((IData)(vlTOPp->puzzle__DOT__Xnor2_2_24__DOT__base__DOT__nor0_out_Y) 
                                          & (IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_2__DOT__base__DOT__buf_Q)) 
                                         & (IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_3__DOT__base__DOT__buf_Q)) 
                                        | (~ (((IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_3__DOT__base__DOT__buf_Q) 
                                               | (IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_2__DOT__base__DOT__buf_Q)) 
                                              | (IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_1__DOT__base__DOT__buf_Q)))))));
        tracep->chgBit(oldp+840,((1U & (~ ((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_16__DOT__base__DOT__buf_Q) 
                                           | (~ (((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_18__DOT__base__DOT__buf_Q) 
                                                  & (~ (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_17__DOT__base__DOT__buf_Q))) 
                                                 & (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_15__DOT__base__DOT__buf_Q))))))));
        tracep->chgBit(oldp+841,((1U & (~ (((((IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_2__DOT__base__DOT__buf_Q) 
                                              & (IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_3__DOT__base__DOT__buf_Q)) 
                                             | (IData)(vlTOPp->puzzle__DOT__Xand2b_2_17__DOT__base__DOT__and0_out_X)) 
                                            | (~ (IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_0__DOT__base__DOT__buf_Q))) 
                                           & ((IData)(vlTOPp->puzzle__DOT__Xnand2_2_28__DOT__base__DOT__nand0_out_Y) 
                                              | (~ (IData)(vlTOPp->puzzle__DOT__Xnand2_2_32__DOT__base__DOT__nand0_out_Y))))))));
        tracep->chgBit(oldp+842,((((~ ((IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_3__DOT__base__DOT__buf_Q) 
                                       | (IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_0__DOT__base__DOT__buf_Q))) 
                                   & (IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_2__DOT__base__DOT__buf_Q)) 
                                  & (IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_1__DOT__base__DOT__buf_Q))));
        tracep->chgBit(oldp+843,((1U & (~ (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_6__DOT__base__DOT__buf_Q)))));
        tracep->chgBit(oldp+844,((((IData)(vlTOPp->puzzle__DOT__Xand4bb_2_7__DOT__base__DOT__and0_out_X) 
                                   & (IData)(vlTOPp->I)) 
                                  & (IData)(vlTOPp->puzzle__DOT__Xand2b_2_11__DOT__base__DOT__and0_out_X))));
        tracep->chgBit(oldp+845,((((IData)(vlTOPp->puzzle__DOT__Xnand4_2_14__DOT__base__DOT__nand0_out_Y) 
                                   & (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_83__DOT__base__DOT__buf_Q)) 
                                  & ((((((~ ((((IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_0__DOT__base__DOT__buf_Q) 
                                               | (IData)(vlTOPp->puzzle__DOT__Xand2b_2_12__DOT__base__DOT__and0_out_X)) 
                                              | (~ 
                                                 ((IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_2__DOT__base__DOT__buf_Q) 
                                                  | (IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_1__DOT__base__DOT__buf_Q)))) 
                                             | ((IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_2__DOT__base__DOT__buf_Q) 
                                                & (IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_3__DOT__base__DOT__buf_Q)))) 
                                         & (IData)(vlTOPp->puzzle__DOT__Xnor3b_2_2__DOT__base__DOT__and0_out_Y)) 
                                        | ((IData)(vlTOPp->puzzle__DOT__Xnor3_2_3__DOT__base__DOT__nor0_out_Y) 
                                           & ((((~ 
                                                 ((IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_3__DOT__base__DOT__buf_Q) 
                                                  | ((IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_2__DOT__base__DOT__buf_Q) 
                                                     & (IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_0__DOT__base__DOT__buf_Q)))) 
                                                | (~ 
                                                   ((IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_0__DOT__base__DOT__buf_Q) 
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
                                                  ^ 
                                                  (((IData)(vlTOPp->puzzle__DOT__Xnand2b_2_10__DOT__base__DOT__or0_out_Y) 
                                                    & ((~ (IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_2__DOT__base__DOT__buf_Q)) 
                                                       | (IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_3__DOT__base__DOT__buf_Q))) 
                                                   | (IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_1__DOT__base__DOT__buf_Q))))))) 
                                     & (((IData)(vlTOPp->puzzle__DOT__Xnor3b_2_4__DOT__base__DOT__and0_out_Y) 
                                         | ((((IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_1__DOT__base__DOT__buf_Q) 
                                              & (IData)(vlTOPp->puzzle__DOT__Xa211oi_2_2__DOT__base__DOT__nor0_out_Y)) 
                                             | (IData)(vlTOPp->puzzle__DOT__Xand4b_2_0__DOT__base__DOT__and0_out_X)) 
                                            | (IData)(vlTOPp->puzzle__DOT__Xnor4b_2_0__DOT__base__DOT__nor0_out_Y))) 
                                        | (IData)(vlTOPp->puzzle__DOT__Xa21oi_2_18__DOT__base__DOT__nor0_out_Y))))));
        tracep->chgBit(oldp+846,((((IData)(vlTOPp->puzzle__DOT__Xand3_2_8__DOT__base__DOT__and0_out_X) 
                                   & (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_20__DOT__base__DOT__buf_Q)) 
                                  & (IData)(vlTOPp->puzzle__DOT__Xand3_2_9__DOT__base__DOT__and0_out_X))));
        tracep->chgBit(oldp+847,(((IData)(vlTOPp->puzzle__DOT__Xa32o_2_0__DOT__base__DOT__or0_out_X) 
                                  & (~ ((IData)(vlTOPp->puzzle__DOT__Xo2bb2a_2_0__DOT__base__DOT__and0_out_X) 
                                        & (IData)(vlTOPp->puzzle__DOT__Xxnor2_2_5__DOT__base__DOT__xnor0_out_Y))))));
        tracep->chgBit(oldp+848,(((IData)(vlTOPp->puzzle__DOT__Xand2b_2_11__DOT__base__DOT__and0_out_X) 
                                  & (((~ ((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_44__DOT__base__DOT__buf_Q) 
                                          | (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_46__DOT__base__DOT__buf_Q))) 
                                      & (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_45__DOT__base__DOT__buf_Q)) 
                                     & (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_43__DOT__base__DOT__buf_Q)))));
        tracep->chgBit(oldp+849,((1U & (~ ((~ (IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_0__DOT__base__DOT__buf_Q)) 
                                           & (IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_2__DOT__base__DOT__buf_Q))))));
        tracep->chgBit(oldp+850,((1U & (~ ((IData)(vlTOPp->puzzle__DOT__Xnand2_2_29__DOT__base__DOT__nand0_out_Y) 
                                           & (IData)(vlTOPp->puzzle__DOT__Xor2_2_9__DOT__base__DOT__or0_out_X))))));
        tracep->chgBit(oldp+851,((1U & (~ (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_5__DOT__base__DOT__buf_Q)))));
        tracep->chgBit(oldp+852,((((IData)(vlTOPp->puzzle__DOT__Xnor4_2_1__DOT__base__DOT__nor0_out_Y) 
                                   & (IData)(vlTOPp->I)) 
                                  & (IData)(vlTOPp->puzzle__DOT__Xand2b_2_11__DOT__base__DOT__and0_out_X))));
        tracep->chgBit(oldp+853,((((IData)(vlTOPp->puzzle__DOT__Xnand4_2_14__DOT__base__DOT__nand0_out_Y) 
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
                                               | (~ 
                                                  ((((IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_1__DOT__base__DOT__buf_Q) 
                                                     & (IData)(vlTOPp->puzzle__DOT__Xnand2b_2_10__DOT__base__DOT__or0_out_Y)) 
                                                    | (IData)(vlTOPp->puzzle__DOT__Xand2b_2_7__DOT__base__DOT__and0_out_X)) 
                                                   | (IData)(vlTOPp->puzzle__DOT__Xa31oi_2_0__DOT__base__DOT__nor0_out_Y))))))) 
                                     & (((IData)(vlTOPp->puzzle__DOT__Xnor3b_2_4__DOT__base__DOT__and0_out_Y) 
                                         | (IData)(vlTOPp->puzzle__DOT__Xa211oi_2_2__DOT__base__DOT__nor0_out_Y)) 
                                        | (IData)(vlTOPp->puzzle__DOT__Xa21oi_2_18__DOT__base__DOT__nor0_out_Y))))));
        tracep->chgBit(oldp+854,(((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_17__DOT__base__DOT__buf_Q) 
                                  & (IData)(vlTOPp->puzzle__DOT__Xand4_2_2__DOT__base__DOT__and0_out_X))));
        tracep->chgBit(oldp+855,(((~ (IData)(vlTOPp->success)) 
                                  & (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_82__DOT__base__DOT__buf_Q))));
        tracep->chgBit(oldp+856,((1U & ((~ ((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_49__DOT__base__DOT__buf_Q) 
                                            ^ (~ ((IData)(vlTOPp->puzzle__DOT__Xdfstp_2_3__DOT__base__DOT__buf_Q) 
                                                  ^ (IData)(vlTOPp->puzzle__DOT__Xdfstp_2_2__DOT__base__DOT__buf_Q))))) 
                                        | ((~ (IData)(vlTOPp->puzzle__DOT__Xand2_2_16__DOT__base__DOT__and0_out_X)) 
                                           | (IData)(vlTOPp->puzzle__DOT__Xand2b_2_11__DOT__base__DOT__and0_out_X))))));
        tracep->chgBit(oldp+857,(((IData)(vlTOPp->puzzle__DOT__Xor2_2_10__DOT__base__DOT__or0_out_X) 
                                  | (IData)(vlTOPp->puzzle__DOT__Xdfstp_2_1__DOT__base__DOT__buf_Q))));
        tracep->chgBit(oldp+858,((1U & (~ (IData)(vlTOPp->puzzle__DOT__Xand4bb_2_0__DOT__base__DOT__and0_out_X)))));
        tracep->chgBit(oldp+859,((((IData)(vlTOPp->puzzle__DOT__Xand4bb_2_10__DOT__base__DOT__and0_out_X) 
                                   & (IData)(vlTOPp->I)) 
                                  & (IData)(vlTOPp->puzzle__DOT__Xand2b_2_11__DOT__base__DOT__and0_out_X))));
        tracep->chgBit(oldp+860,(((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_15__DOT__base__DOT__buf_Q) 
                                  | (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_16__DOT__base__DOT__buf_Q))));
        tracep->chgBit(oldp+861,((((IData)(vlTOPp->puzzle__DOT__Xnand4_2_14__DOT__base__DOT__nand0_out_Y) 
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
                                        | (IData)(vlTOPp->puzzle__DOT__Xa21oi_2_18__DOT__base__DOT__nor0_out_Y))))));
        tracep->chgBit(oldp+862,((1U & (~ ((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_43__DOT__base__DOT__buf_Q) 
                                           | (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_45__DOT__base__DOT__buf_Q))))));
        tracep->chgBit(oldp+863,((1U & ((~ ((IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_3__DOT__base__DOT__buf_Q) 
                                            | ((IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_2__DOT__base__DOT__buf_Q) 
                                               & (IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_0__DOT__base__DOT__buf_Q)))) 
                                        | (~ ((IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_0__DOT__base__DOT__buf_Q) 
                                              | (IData)(vlTOPp->puzzle__DOT__Xand2b_2_13__DOT__base__DOT__and0_out_X)))))));
        tracep->chgBit(oldp+864,((1U & (~ (IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_3__DOT__base__DOT__buf_Q)))));
        tracep->chgBit(oldp+865,(((IData)(vlTOPp->puzzle__DOT__Xxnor2_2_9__DOT__base__DOT__xnor0_out_Y) 
                                  & (IData)(vlTOPp->puzzle__DOT__Xand2_2_0__DOT__base__DOT__and0_out_X))));
        tracep->chgBit(oldp+866,(((IData)(vlTOPp->puzzle__DOT__Xxor2_2_3__DOT__base__DOT__xor0_out_X) 
                                  | (IData)(vlTOPp->puzzle__DOT__Xnor2_2_8__DOT__base__DOT__nor0_out_Y))));
        tracep->chgBit(oldp+867,((((IData)(vlTOPp->puzzle__DOT__Xnand4_2_14__DOT__base__DOT__nand0_out_Y) 
                                   & (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_83__DOT__base__DOT__buf_Q)) 
                                  & (((IData)(vlTOPp->puzzle__DOT__Xnor2_2_47__DOT__base__DOT__nor0_out_Y) 
                                      | ((~ ((IData)(vlTOPp->puzzle__DOT__Xdfstp_2_0__DOT__base__DOT__buf_Q) 
                                             ^ ((((IData)(vlTOPp->puzzle__DOT__Xnand2_2_29__DOT__base__DOT__nand0_out_Y) 
                                                  & (IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_3__DOT__base__DOT__buf_Q)) 
                                                 & (~ (IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_0__DOT__base__DOT__buf_Q))) 
                                                | ((~ 
                                                    ((~ (IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_0__DOT__base__DOT__buf_Q)) 
                                                     & (IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_2__DOT__base__DOT__buf_Q))) 
                                                   & (~ 
                                                      ((IData)(vlTOPp->puzzle__DOT__Xnand2_2_29__DOT__base__DOT__nand0_out_Y) 
                                                       & (IData)(vlTOPp->puzzle__DOT__Xor2_2_9__DOT__base__DOT__or0_out_X))))))) 
                                         & (IData)(vlTOPp->puzzle__DOT__Xnor3b_2_4__DOT__base__DOT__and0_out_Y))) 
                                     & ((IData)(vlTOPp->puzzle__DOT__Xnor3b_2_4__DOT__base__DOT__and0_out_Y) 
                                        | (IData)(vlTOPp->puzzle__DOT__Xa21oi_2_18__DOT__base__DOT__nor0_out_Y))))));
        tracep->chgBit(oldp+868,(vlTOPp->rst_n));
        tracep->chgBit(oldp+869,((1U & (~ ((IData)(vlTOPp->puzzle__DOT__Xa21oi_2_10__DOT__base__DOT__nor0_out_Y) 
                                           & (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_46__DOT__base__DOT__buf_Q))))));
        tracep->chgBit(oldp+870,((1U & ((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_17__DOT__base__DOT__buf_Q) 
                                        | (~ ((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_15__DOT__base__DOT__buf_Q) 
                                              & (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_16__DOT__base__DOT__buf_Q)))))));
        tracep->chgBit(oldp+871,((1U & (~ (IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_1__DOT__base__DOT__buf_Q)))));
        tracep->chgBit(oldp+872,((((IData)(vlTOPp->puzzle__DOT__Xnand4_2_14__DOT__base__DOT__nand0_out_Y) 
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
                                              ^ (~ 
                                                 (((((IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_2__DOT__base__DOT__buf_Q) 
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
                                        | (IData)(vlTOPp->puzzle__DOT__Xa21oi_2_18__DOT__base__DOT__nor0_out_Y))))));
        tracep->chgBit(oldp+873,(vlTOPp->puzzle__DOT__Xdfrtp_2_81__DOT__base__DOT__buf_Q));
        tracep->chgBit(oldp+874,((1U & (~ (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_24__DOT__base__DOT__buf_Q)))));
        tracep->chgBit(oldp+875,(((((IData)(vlTOPp->puzzle__DOT__Xxor2_2_6__DOT__base__DOT__xor0_out_X) 
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
                                  | (IData)(vlTOPp->puzzle__DOT__Xxor2_2_5__DOT__base__DOT__xor0_out_X))));
        tracep->chgBit(oldp+876,((((IData)(vlTOPp->puzzle__DOT__Xnand4_2_14__DOT__base__DOT__nand0_out_Y) 
                                   & (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_83__DOT__base__DOT__buf_Q)) 
                                  & ((((((((((~ (IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_1__DOT__base__DOT__buf_Q)) 
                                             & (IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_2__DOT__base__DOT__buf_Q)) 
                                            | (IData)(vlTOPp->puzzle__DOT__Xand3_2_15__DOT__base__DOT__and0_out_X)) 
                                           | ((IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_1__DOT__base__DOT__buf_Q) 
                                              & (~ 
                                                 ((IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_2__DOT__base__DOT__buf_Q) 
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
                                              ^ (~ 
                                                 ((IData)(vlTOPp->puzzle__DOT__Xnor2_2_36__DOT__base__DOT__nor0_out_Y) 
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
                                        | (IData)(vlTOPp->puzzle__DOT__Xa21oi_2_18__DOT__base__DOT__nor0_out_Y))))));
        tracep->chgBit(oldp+877,((1U & (~ ((((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_19__DOT__base__DOT__buf_Q) 
                                             & ((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_20__DOT__base__DOT__buf_Q) 
                                                & (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_21__DOT__base__DOT__buf_Q))) 
                                            & (IData)(vlTOPp->puzzle__DOT__Xand3_2_9__DOT__base__DOT__and0_out_X)) 
                                           & (IData)(vlTOPp->puzzle__DOT__Xand3_2_8__DOT__base__DOT__and0_out_X))))));
        tracep->chgBit(oldp+878,(((IData)(vlTOPp->puzzle__DOT__Xnand2b_2_6__DOT__base__DOT__or0_out_Y) 
                                  & (IData)(vlTOPp->puzzle__DOT__Xnand2_2_16__DOT__base__DOT__nand0_out_Y))));
        tracep->chgBit(oldp+879,(((((IData)(vlTOPp->puzzle__DOT__Xnor4_2_0__DOT__base__DOT__nor0_out_Y) 
                                    & (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_0__DOT__base__DOT__buf_Q)) 
                                   & (IData)(vlTOPp->puzzle__DOT__Xand2b_2_11__DOT__base__DOT__and0_out_X)) 
                                  & (IData)(vlTOPp->I))));
        tracep->chgBit(oldp+880,((1U & (~ (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_44__DOT__base__DOT__buf_Q)))));
        tracep->chgBit(oldp+881,(((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_15__DOT__base__DOT__buf_Q) 
                                  & (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_18__DOT__base__DOT__buf_Q))));
        tracep->chgBit(oldp+882,(((((((~ ((IData)(vlTOPp->puzzle__DOT__Xo211a_2_3__DOT__base__DOT__and0_out_X) 
                                          | (IData)(vlTOPp->puzzle__DOT__Xo211a_2_5__DOT__base__DOT__and0_out_X))) 
                                      & (IData)(vlTOPp->puzzle__DOT__Xo211a_2_4__DOT__base__DOT__and0_out_X)) 
                                     & (IData)(vlTOPp->puzzle__DOT__Xo211a_2_2__DOT__base__DOT__and0_out_X)) 
                                    & (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_6__DOT__base__DOT__buf_Q)) 
                                   & (IData)(vlTOPp->puzzle__DOT__Xand2b_2_11__DOT__base__DOT__and0_out_X)) 
                                  & (IData)(vlTOPp->I))));
        tracep->chgBit(oldp+883,((((((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_43__DOT__base__DOT__buf_Q) 
                                     & (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_44__DOT__base__DOT__buf_Q)) 
                                    & (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_46__DOT__base__DOT__buf_Q)) 
                                   & (IData)(vlTOPp->puzzle__DOT__Xand2b_2_11__DOT__base__DOT__and0_out_X)) 
                                  & (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_45__DOT__base__DOT__buf_Q))));
        tracep->chgBit(oldp+884,((1U & (~ (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_46__DOT__base__DOT__buf_Q)))));
        tracep->chgBit(oldp+885,((1U & (~ ((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_45__DOT__base__DOT__buf_Q) 
                                           | (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_46__DOT__base__DOT__buf_Q))))));
        tracep->chgBit(oldp+886,(((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_18__DOT__base__DOT__buf_Q) 
                                  & (IData)(vlTOPp->puzzle__DOT__Xnand2_2_17__DOT__base__DOT__nand0_out_Y))));
        tracep->chgBit(oldp+887,(((((((~ ((IData)(vlTOPp->puzzle__DOT__Xo211a_2_2__DOT__base__DOT__and0_out_X) 
                                          | (IData)(vlTOPp->puzzle__DOT__Xo211a_2_5__DOT__base__DOT__and0_out_X))) 
                                      & (IData)(vlTOPp->puzzle__DOT__Xo211a_2_4__DOT__base__DOT__and0_out_X)) 
                                     & (IData)(vlTOPp->puzzle__DOT__Xo211a_2_3__DOT__base__DOT__and0_out_X)) 
                                    & (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_5__DOT__base__DOT__buf_Q)) 
                                   & (IData)(vlTOPp->puzzle__DOT__Xand2b_2_11__DOT__base__DOT__and0_out_X)) 
                                  & (IData)(vlTOPp->I))));
        tracep->chgBit(oldp+888,(((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_15__DOT__base__DOT__buf_Q) 
                                  & (IData)(vlTOPp->puzzle__DOT__Xxor2_2_7__DOT__base__DOT__xor0_out_X))));
        tracep->chgBit(oldp+889,((1U & (~ (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_43__DOT__base__DOT__buf_Q)))));
        tracep->chgBit(oldp+890,((1U & (~ ((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_43__DOT__base__DOT__buf_Q) 
                                           | (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_46__DOT__base__DOT__buf_Q))))));
        tracep->chgBit(oldp+891,(((IData)(vlTOPp->puzzle__DOT__Xa21o_2_5__DOT__base__DOT__or0_out_X) 
                                  & (IData)(vlTOPp->puzzle__DOT__Xo22ai_2_0__DOT__base__DOT__or0_out_Y))));
        tracep->chgBit(oldp+892,(((((IData)(vlTOPp->puzzle__DOT__Xand4b_2_1__DOT__base__DOT__and0_out_X) 
                                    & (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_53__DOT__base__DOT__buf_Q)) 
                                   & (IData)(vlTOPp->puzzle__DOT__Xand2b_2_11__DOT__base__DOT__and0_out_X)) 
                                  & (IData)(vlTOPp->I))));
        tracep->chgBit(oldp+893,((1U & ((~ ((IData)(vlTOPp->puzzle__DOT__Xand2b_2_11__DOT__base__DOT__and0_out_X) 
                                            & (((~ 
                                                 ((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_44__DOT__base__DOT__buf_Q) 
                                                  | (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_46__DOT__base__DOT__buf_Q))) 
                                                & (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_45__DOT__base__DOT__buf_Q)) 
                                               & (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_43__DOT__base__DOT__buf_Q)))) 
                                        | (~ (((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_18__DOT__base__DOT__buf_Q) 
                                               & (~ (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_17__DOT__base__DOT__buf_Q))) 
                                              & (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_15__DOT__base__DOT__buf_Q)))))));
        tracep->chgBit(oldp+894,((((IData)(vlTOPp->puzzle__DOT__Xnand4_2_14__DOT__base__DOT__nand0_out_Y) 
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
                                                | (~ 
                                                   (((IData)(vlTOPp->puzzle__DOT__Xand2_2_6__DOT__base__DOT__and0_out_X) 
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
                                        | (IData)(vlTOPp->puzzle__DOT__Xa21oi_2_18__DOT__base__DOT__nor0_out_Y))))));
        tracep->chgBit(oldp+895,((1U & (((~ (((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_18__DOT__base__DOT__buf_Q) 
                                              & (~ (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_17__DOT__base__DOT__buf_Q))) 
                                             & (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_15__DOT__base__DOT__buf_Q))) 
                                         | (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_16__DOT__base__DOT__buf_Q)) 
                                        | (~ ((IData)(vlTOPp->puzzle__DOT__Xand2b_2_11__DOT__base__DOT__and0_out_X) 
                                              & (((~ 
                                                   ((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_44__DOT__base__DOT__buf_Q) 
                                                    | (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_46__DOT__base__DOT__buf_Q))) 
                                                  & (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_45__DOT__base__DOT__buf_Q)) 
                                                 & (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_43__DOT__base__DOT__buf_Q))))))));
        tracep->chgBit(oldp+896,(((IData)(vlTOPp->I) 
                                  & (IData)(vlTOPp->puzzle__DOT__Xand2b_2_11__DOT__base__DOT__and0_out_X))));
        tracep->chgBit(oldp+897,((1U & (~ (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_45__DOT__base__DOT__buf_Q)))));
        tracep->chgBit(oldp+898,(((IData)(vlTOPp->I) 
                                  & (IData)(vlTOPp->puzzle__DOT__Xxnor2_2_26__DOT__base__DOT__xnor0_out_Y))));
        tracep->chgBit(oldp+899,((1U & (~ ((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_44__DOT__base__DOT__buf_Q) 
                                           | (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_46__DOT__base__DOT__buf_Q))))));
        tracep->chgBit(oldp+900,(((((((~ ((IData)(vlTOPp->puzzle__DOT__Xo211a_2_5__DOT__base__DOT__and0_out_X) 
                                          | (IData)(vlTOPp->puzzle__DOT__Xo211a_2_4__DOT__base__DOT__and0_out_X))) 
                                      & (IData)(vlTOPp->puzzle__DOT__Xo211a_2_2__DOT__base__DOT__and0_out_X)) 
                                     & (IData)(vlTOPp->puzzle__DOT__Xo211a_2_3__DOT__base__DOT__and0_out_X)) 
                                    & (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_8__DOT__base__DOT__buf_Q)) 
                                   & (IData)(vlTOPp->puzzle__DOT__Xand2b_2_11__DOT__base__DOT__and0_out_X)) 
                                  & (IData)(vlTOPp->I))));
        tracep->chgBit(oldp+901,((1U & ((~ ((IData)(vlTOPp->I) 
                                            & (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_27__DOT__base__DOT__buf_Q))) 
                                        | (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_29__DOT__base__DOT__buf_Q)))));
        tracep->chgBit(oldp+902,((((IData)(vlTOPp->puzzle__DOT__Xnand4_2_14__DOT__base__DOT__nand0_out_Y) 
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
                                        | (IData)(vlTOPp->puzzle__DOT__Xa21oi_2_18__DOT__base__DOT__nor0_out_Y))))));
        tracep->chgBit(oldp+903,(((IData)(vlTOPp->puzzle__DOT__Xnor2_2_4__DOT__base__DOT__nor0_out_Y) 
                                  | (IData)(vlTOPp->puzzle__DOT__Xor2_2_4__DOT__base__DOT__or0_out_X))));
        tracep->chgBit(oldp+904,((1U & (~ (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_53__DOT__base__DOT__buf_Q)))));
        tracep->chgBit(oldp+905,((1U & ((~ (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_29__DOT__base__DOT__buf_Q)) 
                                        & (~ ((IData)(vlTOPp->I) 
                                              & (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_27__DOT__base__DOT__buf_Q)))))));
        tracep->chgBit(oldp+906,((1U & (((IData)(vlTOPp->puzzle__DOT__Xxnor2_2_27__DOT__base__DOT__xnor0_out_Y) 
                                         | (~ (IData)(vlTOPp->puzzle__DOT__Xnand2_2_32__DOT__base__DOT__nand0_out_Y))) 
                                        | (~ ((IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_3__DOT__base__DOT__buf_Q) 
                                              | (IData)(vlTOPp->puzzle__DOT__Xand2b_2_15__DOT__base__DOT__and0_out_X)))))));
        tracep->chgBit(oldp+907,(((IData)(vlTOPp->puzzle__DOT__Xnand2_2_28__DOT__base__DOT__nand0_out_Y) 
                                  | (IData)(vlTOPp->puzzle__DOT__Xand2b_2_15__DOT__base__DOT__and0_out_X))));
        tracep->chgBit(oldp+908,((1U & (~ (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_82__DOT__base__DOT__buf_Q)))));
        tracep->chgBit(oldp+909,((1U & (~ (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_83__DOT__base__DOT__buf_Q)))));
        tracep->chgBit(oldp+910,(((IData)(vlTOPp->puzzle__DOT__Xnand4_2_14__DOT__base__DOT__nand0_out_Y) 
                                  & (~ ((IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_1__DOT__base__DOT__buf_Q) 
                                        ^ (IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_2__DOT__base__DOT__buf_Q))))));
        tracep->chgBit(oldp+911,((1U & (~ ((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_44__DOT__base__DOT__buf_Q) 
                                           | (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_45__DOT__base__DOT__buf_Q))))));
        tracep->chgBit(oldp+912,(((IData)(vlTOPp->puzzle__DOT__Xor2_2_8__DOT__base__DOT__or0_out_X) 
                                  | (IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_1__DOT__base__DOT__buf_Q))));
        tracep->chgBit(oldp+913,(((IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_3__DOT__base__DOT__buf_Q) 
                                  | (IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_1__DOT__base__DOT__buf_Q))));
        tracep->chgBit(oldp+914,(((IData)(vlTOPp->puzzle__DOT__Xand4b_2_0__DOT__base__DOT__and0_out_X) 
                                  | (IData)(vlTOPp->puzzle__DOT__Xa21oi_2_9__DOT__base__DOT__nor0_out_Y))));
        tracep->chgBit(oldp+915,((1U & ((~ ((((IData)(vlTOPp->puzzle__DOT__Xand4b_2_1__DOT__base__DOT__and0_out_X) 
                                              & (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_53__DOT__base__DOT__buf_Q)) 
                                             & (IData)(vlTOPp->puzzle__DOT__Xand2b_2_11__DOT__base__DOT__and0_out_X)) 
                                            & (IData)(vlTOPp->I))) 
                                        | (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_10__DOT__base__DOT__buf_Q)))));
        tracep->chgBit(oldp+916,((1U & (~ (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_55__DOT__base__DOT__buf_Q)))));
        tracep->chgBit(oldp+917,(((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_44__DOT__base__DOT__buf_Q) 
                                  & (IData)(vlTOPp->puzzle__DOT__Xand2b_2_11__DOT__base__DOT__and0_out_X))));
        tracep->chgBit(oldp+918,((1U & (((((IData)(vlTOPp->puzzle__DOT__Xxor2_2_16__DOT__base__DOT__xor0_out_X) 
                                           & (~ (IData)(vlTOPp->puzzle__DOT__Xand2b_2_11__DOT__base__DOT__and0_out_X))) 
                                          & (IData)(vlTOPp->puzzle__DOT__Xxnor2_2_26__DOT__base__DOT__xnor0_out_Y)) 
                                         | ((~ (IData)(vlTOPp->puzzle__DOT__Xxor2_2_16__DOT__base__DOT__xor0_out_X)) 
                                            & (~ ((IData)(vlTOPp->puzzle__DOT__Xand2b_2_11__DOT__base__DOT__and0_out_X) 
                                                  | (IData)(vlTOPp->puzzle__DOT__Xxnor2_2_26__DOT__base__DOT__xnor0_out_Y))))) 
                                        | (((IData)(vlTOPp->puzzle__DOT__Xand2b_2_11__DOT__base__DOT__and0_out_X) 
                                            & (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_51__DOT__base__DOT__buf_Q)) 
                                           | (~ ((IData)(vlTOPp->puzzle__DOT__Xand2_2_16__DOT__base__DOT__and0_out_X) 
                                                 | (IData)(vlTOPp->puzzle__DOT__Xand2b_2_11__DOT__base__DOT__and0_out_X))))))));
        tracep->chgBit(oldp+919,(((IData)(vlTOPp->puzzle__DOT__Xdfstp_2_3__DOT__base__DOT__buf_Q) 
                                  | (IData)(vlTOPp->puzzle__DOT__Xor2_2_10__DOT__base__DOT__or0_out_X))));
        tracep->chgBit(oldp+920,((1U & ((~ (IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_0__DOT__base__DOT__buf_Q)) 
                                        & (~ (((IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_1__DOT__base__DOT__buf_Q) 
                                               & (IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_3__DOT__base__DOT__buf_Q)) 
                                              & (IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_2__DOT__base__DOT__buf_Q)))))));
        tracep->chgBit(oldp+921,(((IData)(vlTOPp->puzzle__DOT__Xnand2_2_19__DOT__base__DOT__nand0_out_Y) 
                                  | (IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_0__DOT__base__DOT__buf_Q))));
        tracep->chgBit(oldp+922,(((((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_46__DOT__base__DOT__buf_Q) 
                                    | (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_44__DOT__base__DOT__buf_Q)) 
                                   | (~ ((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_43__DOT__base__DOT__buf_Q) 
                                         & (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_45__DOT__base__DOT__buf_Q)))) 
                                  & (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_33__DOT__base__DOT__buf_Q))));
        tracep->chgBit(oldp+923,((1U & ((~ ((IData)(vlTOPp->puzzle__DOT__Xor4b_2_6__DOT__base__DOT__or0_out_X) 
                                            | (~ ((IData)(vlTOPp->puzzle__DOT__Xand2b_2_11__DOT__base__DOT__and0_out_X) 
                                                  & (IData)(vlTOPp->I))))) 
                                        | (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_62__DOT__base__DOT__buf_Q)))));
        tracep->chgBit(oldp+924,((1U & (~ (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_47__DOT__base__DOT__buf_Q)))));
        tracep->chgBit(oldp+925,((1U & (~ (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_56__DOT__base__DOT__buf_Q)))));
        tracep->chgBit(oldp+926,(((IData)(vlTOPp->puzzle__DOT__Xxor2_2_6__DOT__base__DOT__xor0_out_X) 
                                  & (((((IData)(vlTOPp->puzzle__DOT__Xnand2b_2_0__DOT__base__DOT__or0_out_Y) 
                                        | (IData)(vlTOPp->puzzle__DOT__Xxor2_2_2__DOT__base__DOT__xor0_out_X)) 
                                       & ((IData)(vlTOPp->puzzle__DOT__Xnor2_2_4__DOT__base__DOT__nor0_out_Y) 
                                          | (IData)(vlTOPp->puzzle__DOT__Xor2_2_4__DOT__base__DOT__or0_out_X))) 
                                      & (IData)(vlTOPp->puzzle__DOT__Xa21oi_2_0__DOT__base__DOT__nor0_out_Y)) 
                                     | (((IData)(vlTOPp->puzzle__DOT__Xor2_2_4__DOT__base__DOT__or0_out_X) 
                                         & (IData)(vlTOPp->puzzle__DOT__Xxor2_2_8__DOT__base__DOT__xor0_out_X)) 
                                        & (IData)(vlTOPp->puzzle__DOT__Xnand2_2_11__DOT__base__DOT__nand0_out_Y))))));
        tracep->chgBit(oldp+927,(((IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_2__DOT__base__DOT__buf_Q) 
                                  & (IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_0__DOT__base__DOT__buf_Q))));
        tracep->chgBit(oldp+928,(((IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_2__DOT__base__DOT__buf_Q) 
                                  & (IData)(vlTOPp->puzzle__DOT__Xnand4_2_14__DOT__base__DOT__nand0_out_Y))));
        tracep->chgBit(oldp+929,(((IData)(vlTOPp->puzzle__DOT__Xor2_2_10__DOT__base__DOT__or0_out_X) 
                                  | (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_50__DOT__base__DOT__buf_Q))));
        tracep->chgBit(oldp+930,((1U & (((((IData)(vlTOPp->puzzle__DOT__Xand2b_2_11__DOT__base__DOT__and0_out_X) 
                                           & (IData)(vlTOPp->puzzle__DOT__Xdfstp_2_3__DOT__base__DOT__buf_Q)) 
                                          | ((~ ((IData)(vlTOPp->puzzle__DOT__Xand2b_2_11__DOT__base__DOT__and0_out_X) 
                                                 | (IData)(vlTOPp->puzzle__DOT__Xxnor2_2_26__DOT__base__DOT__xnor0_out_Y))) 
                                             & (IData)(vlTOPp->puzzle__DOT__Xxnor2_2_24__DOT__base__DOT__xnor0_out_Y))) 
                                         | (~ ((IData)(vlTOPp->puzzle__DOT__Xand2_2_16__DOT__base__DOT__and0_out_X) 
                                               | (IData)(vlTOPp->puzzle__DOT__Xand2b_2_11__DOT__base__DOT__and0_out_X)))) 
                                        | ((IData)(vlTOPp->puzzle__DOT__Xxnor2_2_26__DOT__base__DOT__xnor0_out_Y) 
                                           & (~ ((IData)(vlTOPp->puzzle__DOT__Xand2b_2_11__DOT__base__DOT__and0_out_X) 
                                                 | (IData)(vlTOPp->puzzle__DOT__Xxnor2_2_24__DOT__base__DOT__xnor0_out_Y))))))));
        tracep->chgBit(oldp+931,(((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_51__DOT__base__DOT__buf_Q) 
                                  & (~ ((IData)(vlTOPp->puzzle__DOT__Xand2_2_16__DOT__base__DOT__and0_out_X) 
                                        | (IData)(vlTOPp->puzzle__DOT__Xand2b_2_11__DOT__base__DOT__and0_out_X))))));
        tracep->chgBit(oldp+932,(((IData)(vlTOPp->puzzle__DOT__Xand2b_2_11__DOT__base__DOT__and0_out_X) 
                                  & (IData)(vlTOPp->puzzle__DOT__Xdfstp_2_1__DOT__base__DOT__buf_Q))));
        tracep->chgBit(oldp+933,((1U & ((~ ((((IData)(vlTOPp->puzzle__DOT__Xand4bb_2_9__DOT__base__DOT__and0_out_X) 
                                              & (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_80__DOT__base__DOT__buf_Q)) 
                                             & (IData)(vlTOPp->puzzle__DOT__Xand2b_2_11__DOT__base__DOT__and0_out_X)) 
                                            & (IData)(vlTOPp->I))) 
                                        | (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_66__DOT__base__DOT__buf_Q)))));
        tracep->chgBit(oldp+934,((1U & ((~ ((((((~ 
                                                 ((IData)(vlTOPp->puzzle__DOT__Xo211a_2_3__DOT__base__DOT__and0_out_X) 
                                                  | (IData)(vlTOPp->puzzle__DOT__Xo211a_2_5__DOT__base__DOT__and0_out_X))) 
                                                & (IData)(vlTOPp->puzzle__DOT__Xo211a_2_4__DOT__base__DOT__and0_out_X)) 
                                               & (IData)(vlTOPp->puzzle__DOT__Xo211a_2_2__DOT__base__DOT__and0_out_X)) 
                                              & (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_6__DOT__base__DOT__buf_Q)) 
                                             & (IData)(vlTOPp->puzzle__DOT__Xand2b_2_11__DOT__base__DOT__and0_out_X)) 
                                            & (IData)(vlTOPp->I))) 
                                        | (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_11__DOT__base__DOT__buf_Q)))));
        tracep->chgBit(oldp+935,((1U & (~ (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_60__DOT__base__DOT__buf_Q)))));
        tracep->chgBit(oldp+936,(((~ ((IData)(vlTOPp->puzzle__DOT__Xand2b_2_11__DOT__base__DOT__and0_out_X) 
                                      | (IData)(vlTOPp->puzzle__DOT__Xxnor2_2_26__DOT__base__DOT__xnor0_out_Y))) 
                                  & (IData)(vlTOPp->puzzle__DOT__Xxnor2_2_24__DOT__base__DOT__xnor0_out_Y))));
        tracep->chgBit(oldp+937,(((IData)(vlTOPp->puzzle__DOT__Xand2b_2_11__DOT__base__DOT__and0_out_X) 
                                  & (IData)(vlTOPp->puzzle__DOT__Xdfstp_2_3__DOT__base__DOT__buf_Q))));
        tracep->chgBit(oldp+938,((1U & ((~ ((IData)(vlTOPp->puzzle__DOT__Xor4b_2_5__DOT__base__DOT__or0_out_X) 
                                            | (~ ((IData)(vlTOPp->puzzle__DOT__Xand2b_2_11__DOT__base__DOT__and0_out_X) 
                                                  & (IData)(vlTOPp->I))))) 
                                        | (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_65__DOT__base__DOT__buf_Q)))));
        tracep->chgBit(oldp+939,(((IData)(vlTOPp->puzzle__DOT__Xand3_2_11__DOT__base__DOT__and0_out_X) 
                                  | (IData)(vlTOPp->puzzle__DOT__Xdfrtp_1_26__DOT__base__DOT__buf_Q))));
        tracep->chgBit(oldp+940,((1U & (~ (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_71__DOT__base__DOT__buf_Q)))));
        tracep->chgBit(oldp+941,(((IData)(vlTOPp->puzzle__DOT__Xnand2_2_32__DOT__base__DOT__nand0_out_Y) 
                                  & (IData)(vlTOPp->puzzle__DOT__Xnand2_2_30__DOT__base__DOT__nand0_out_Y))));
        tracep->chgBit(oldp+942,(((~ ((IData)(vlTOPp->puzzle__DOT__Xand2_2_16__DOT__base__DOT__and0_out_X) 
                                      | (IData)(vlTOPp->puzzle__DOT__Xand2b_2_11__DOT__base__DOT__and0_out_X))) 
                                  & (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_48__DOT__base__DOT__buf_Q))));
        tracep->chgBit(oldp+943,(((IData)(vlTOPp->puzzle__DOT__Xand2b_2_11__DOT__base__DOT__and0_out_X) 
                                  & (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_50__DOT__base__DOT__buf_Q))));
        tracep->chgBit(oldp+944,((1U & ((~ ((((IData)(vlTOPp->puzzle__DOT__Xand4bb_2_10__DOT__base__DOT__and0_out_X) 
                                              & (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_71__DOT__base__DOT__buf_Q)) 
                                             & (IData)(vlTOPp->puzzle__DOT__Xand2b_2_11__DOT__base__DOT__and0_out_X)) 
                                            & (IData)(vlTOPp->I))) 
                                        | (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_63__DOT__base__DOT__buf_Q)))));
        tracep->chgBit(oldp+945,((1U & ((~ ((IData)(vlTOPp->puzzle__DOT__Xand3_2_8__DOT__base__DOT__and0_out_X) 
                                            & (IData)(vlTOPp->puzzle__DOT__Xand3_2_9__DOT__base__DOT__and0_out_X))) 
                                        | (~ ((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_21__DOT__base__DOT__buf_Q) 
                                              & (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_20__DOT__base__DOT__buf_Q)))))));
        tracep->chgBit(oldp+946,((1U & (~ (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_80__DOT__base__DOT__buf_Q)))));
        tracep->chgBit(oldp+947,(((IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_2__DOT__base__DOT__buf_Q) 
                                  & (IData)(vlTOPp->puzzle__DOT__Xand2b_2_12__DOT__base__DOT__and0_out_X))));
        tracep->chgBit(oldp+948,(((IData)(vlTOPp->puzzle__DOT__Xdfstp_2_0__DOT__base__DOT__buf_Q) 
                                  & (~ ((IData)(vlTOPp->puzzle__DOT__Xand2_2_16__DOT__base__DOT__and0_out_X) 
                                        | (IData)(vlTOPp->puzzle__DOT__Xand2b_2_11__DOT__base__DOT__and0_out_X))))));
        tracep->chgBit(oldp+949,(((IData)(vlTOPp->puzzle__DOT__Xand2b_2_11__DOT__base__DOT__and0_out_X) 
                                  & (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_49__DOT__base__DOT__buf_Q))));
        tracep->chgBit(oldp+950,((1U & ((~ ((((IData)(vlTOPp->puzzle__DOT__Xand4b_2_2__DOT__base__DOT__and0_out_X) 
                                              & (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_75__DOT__base__DOT__buf_Q)) 
                                             & (IData)(vlTOPp->puzzle__DOT__Xand2b_2_11__DOT__base__DOT__and0_out_X)) 
                                            & (IData)(vlTOPp->I))) 
                                        | (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_67__DOT__base__DOT__buf_Q)))));
        tracep->chgBit(oldp+951,((1U & ((IData)(vlTOPp->puzzle__DOT__Xand3_2_15__DOT__base__DOT__and0_out_X) 
                                        | (~ (IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_2__DOT__base__DOT__buf_Q))))));
        tracep->chgBit(oldp+952,((((IData)(vlTOPp->puzzle__DOT__Xxor2_2_1__DOT__base__DOT__xor0_out_X) 
                                   & (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_43__DOT__base__DOT__buf_Q)) 
                                  & (IData)(vlTOPp->puzzle__DOT__Xxor2_2_0__DOT__base__DOT__xor0_out_X))));
        tracep->chgBit(oldp+953,(((IData)(vlTOPp->puzzle__DOT__Xxnor2_2_0__DOT__base__DOT__xnor0_out_Y) 
                                  & (IData)(vlTOPp->puzzle__DOT__Xnor2_2_0__DOT__base__DOT__nor0_out_Y))));
        tracep->chgBit(oldp+954,((1U & (~ (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_78__DOT__base__DOT__buf_Q)))));
        tracep->chgBit(oldp+955,(((IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_1__DOT__base__DOT__buf_Q) 
                                  & (IData)(vlTOPp->puzzle__DOT__Xa211oi_2_2__DOT__base__DOT__nor0_out_Y))));
        tracep->chgBit(oldp+956,(((IData)(vlTOPp->puzzle__DOT__Xnand4_2_13__DOT__base__DOT__nand0_out_Y) 
                                  | (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_68__DOT__base__DOT__buf_Q))));
        tracep->chgBit(oldp+957,(((IData)(vlTOPp->puzzle__DOT__Xxor2_2_14__DOT__base__DOT__xor0_out_X) 
                                  | (IData)(vlTOPp->puzzle__DOT__Xxor2_2_13__DOT__base__DOT__xor0_out_X))));
        tracep->chgBit(oldp+958,(((((IData)(vlTOPp->puzzle__DOT__Xnand2b_2_0__DOT__base__DOT__or0_out_Y) 
                                    | (IData)(vlTOPp->puzzle__DOT__Xxor2_2_2__DOT__base__DOT__xor0_out_X)) 
                                   & ((IData)(vlTOPp->puzzle__DOT__Xnor2_2_4__DOT__base__DOT__nor0_out_Y) 
                                      | (IData)(vlTOPp->puzzle__DOT__Xor2_2_4__DOT__base__DOT__or0_out_X))) 
                                  & (IData)(vlTOPp->puzzle__DOT__Xa21oi_2_0__DOT__base__DOT__nor0_out_Y))));
        tracep->chgBit(oldp+959,((1U & (~ (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_73__DOT__base__DOT__buf_Q)))));
        tracep->chgBit(oldp+960,(((IData)(vlTOPp->puzzle__DOT__Xxor2_2_13__DOT__base__DOT__xor0_out_X) 
                                  & (IData)(vlTOPp->puzzle__DOT__Xxor2_2_14__DOT__base__DOT__xor0_out_X))));
        tracep->chgBit(oldp+961,(((IData)(vlTOPp->puzzle__DOT__Xnand2_2_27__DOT__base__DOT__nand0_out_Y) 
                                  | (IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_1__DOT__base__DOT__buf_Q))));
        tracep->chgBit(oldp+962,((1U & ((~ ((IData)(vlTOPp->puzzle__DOT__Xor4b_2_7__DOT__base__DOT__or0_out_X) 
                                            | (~ ((IData)(vlTOPp->puzzle__DOT__Xand2b_2_11__DOT__base__DOT__and0_out_X) 
                                                  & (IData)(vlTOPp->I))))) 
                                        | (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_72__DOT__base__DOT__buf_Q)))));
        tracep->chgBit(oldp+963,((((IData)(vlTOPp->puzzle__DOT__Xand2b_2_8__DOT__base__DOT__and0_out_X) 
                                   & (IData)(vlTOPp->I)) 
                                  & (IData)(vlTOPp->puzzle__DOT__Xand2b_2_11__DOT__base__DOT__and0_out_X))));
        tracep->chgBit(oldp+964,(((~ (IData)(vlTOPp->puzzle__DOT__Xand3_2_9__DOT__base__DOT__and0_out_X)) 
                                  & (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_24__DOT__base__DOT__buf_Q))));
        tracep->chgBit(oldp+965,((1U & (~ (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_75__DOT__base__DOT__buf_Q)))));
        tracep->chgBit(oldp+966,((((((~ ((IData)(vlTOPp->I) 
                                         & (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_27__DOT__base__DOT__buf_Q))) 
                                     | (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_29__DOT__base__DOT__buf_Q)) 
                                    & ((IData)(vlTOPp->I) 
                                       | (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_27__DOT__base__DOT__buf_Q))) 
                                   & (IData)(vlTOPp->puzzle__DOT__Xand2b_2_11__DOT__base__DOT__and0_out_X)) 
                                  & (~ (((~ ((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_44__DOT__base__DOT__buf_Q) 
                                             | (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_46__DOT__base__DOT__buf_Q))) 
                                         & (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_45__DOT__base__DOT__buf_Q)) 
                                        & (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_43__DOT__base__DOT__buf_Q))))));
        tracep->chgBit(oldp+967,(((~ (IData)(vlTOPp->puzzle__DOT__Xand2b_2_11__DOT__base__DOT__and0_out_X)) 
                                  & (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_27__DOT__base__DOT__buf_Q))));
        tracep->chgBit(oldp+968,((((IData)(vlTOPp->puzzle__DOT__Xand2b_2_0__DOT__base__DOT__and0_out_X) 
                                   & (IData)(vlTOPp->puzzle__DOT__Xxnor2_2_0__DOT__base__DOT__xnor0_out_Y)) 
                                  & (IData)(vlTOPp->puzzle__DOT__Xxor2_2_8__DOT__base__DOT__xor0_out_X))));
        tracep->chgBit(oldp+969,((1U & ((~ ((((IData)(vlTOPp->puzzle__DOT__Xand4bb_2_7__DOT__base__DOT__and0_out_X) 
                                              & (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_56__DOT__base__DOT__buf_Q)) 
                                             & (IData)(vlTOPp->puzzle__DOT__Xand2b_2_11__DOT__base__DOT__and0_out_X)) 
                                            & (IData)(vlTOPp->I))) 
                                        | (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_59__DOT__base__DOT__buf_Q)))));
        tracep->chgBit(oldp+970,(((IData)(vlTOPp->puzzle__DOT__Xnand4_2_12__DOT__base__DOT__nand0_out_Y) 
                                  | (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_70__DOT__base__DOT__buf_Q))));
        tracep->chgBit(oldp+971,((((IData)(vlTOPp->puzzle__DOT__Xand4b_2_3__DOT__base__DOT__and0_out_X) 
                                   & (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_37__DOT__base__DOT__buf_Q)) 
                                  & (IData)(vlTOPp->puzzle__DOT__Xand2_2_15__DOT__base__DOT__and0_out_X))));
        tracep->chgBit(oldp+972,(((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_82__DOT__base__DOT__buf_Q) 
                                  & ((~ (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_47__DOT__base__DOT__buf_Q)) 
                                     | (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_83__DOT__base__DOT__buf_Q)))));
        tracep->chgBit(oldp+973,((1U & (~ (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_74__DOT__base__DOT__buf_Q)))));
        tracep->chgBit(oldp+974,((1U & (~ (IData)(vlTOPp->puzzle__DOT__Xxor2_2_16__DOT__base__DOT__xor0_out_X)))));
        tracep->chgBit(oldp+975,(((IData)(vlTOPp->puzzle__DOT__Xor4_2_4__DOT__base__DOT__or0_out_X) 
                                  & (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_38__DOT__base__DOT__buf_Q))));
        tracep->chgBit(oldp+976,(((IData)(vlTOPp->puzzle__DOT__Xor4_2_4__DOT__base__DOT__or0_out_X) 
                                  & (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_41__DOT__base__DOT__buf_Q))));
        tracep->chgBit(oldp+977,((((((~ ((((IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_0__DOT__base__DOT__buf_Q) 
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
                                                 | (IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_1__DOT__base__DOT__buf_Q)))))))));
        tracep->chgBit(oldp+978,((1U & (((IData)(vlTOPp->puzzle__DOT__Xa31oi_2_0__DOT__base__DOT__nor0_out_Y) 
                                         | (IData)(vlTOPp->puzzle__DOT__Xand2b_2_7__DOT__base__DOT__and0_out_X)) 
                                        | (~ (((IData)(vlTOPp->puzzle__DOT__Xand2_2_6__DOT__base__DOT__and0_out_X) 
                                               | (IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_3__DOT__base__DOT__buf_Q)) 
                                              | (IData)(vlTOPp->puzzle__DOT__Xnor2_2_22__DOT__base__DOT__nor0_out_Y)))))));
        tracep->chgBit(oldp+979,((1U & ((~ ((((IData)(vlTOPp->puzzle__DOT__Xand4bb_2_13__DOT__base__DOT__and0_out_X) 
                                              & (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_78__DOT__base__DOT__buf_Q)) 
                                             & (IData)(vlTOPp->puzzle__DOT__Xand2b_2_11__DOT__base__DOT__and0_out_X)) 
                                            & (IData)(vlTOPp->I))) 
                                        | (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_64__DOT__base__DOT__buf_Q)))));
        tracep->chgBit(oldp+980,((1U & ((~ ((IData)(vlTOPp->puzzle__DOT__Xor4b_2_3__DOT__base__DOT__or0_out_X) 
                                            | (~ ((IData)(vlTOPp->puzzle__DOT__Xand2b_2_11__DOT__base__DOT__and0_out_X) 
                                                  & (IData)(vlTOPp->I))))) 
                                        | (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_54__DOT__base__DOT__buf_Q)))));
        tracep->chgBit(oldp+981,((((IData)(vlTOPp->puzzle__DOT__Xand4b_2_3__DOT__base__DOT__and0_out_X) 
                                   & (~ (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_37__DOT__base__DOT__buf_Q))) 
                                  & (IData)(vlTOPp->puzzle__DOT__Xand2_2_15__DOT__base__DOT__and0_out_X))));
        tracep->chgBit(oldp+982,(((IData)(vlTOPp->success) 
                                  & ((~ (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_47__DOT__base__DOT__buf_Q)) 
                                     | (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_83__DOT__base__DOT__buf_Q)))));
        tracep->chgBit(oldp+983,(((IData)(vlTOPp->puzzle__DOT__Xxnor2_2_27__DOT__base__DOT__xnor0_out_Y) 
                                  & (((IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_3__DOT__base__DOT__buf_Q) 
                                      | (IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_2__DOT__base__DOT__buf_Q)) 
                                     | (~ (IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_1__DOT__base__DOT__buf_Q))))));
        tracep->chgBit(oldp+984,(((IData)(vlTOPp->puzzle__DOT__Xnor2_2_36__DOT__base__DOT__nor0_out_Y) 
                                  & (IData)(vlTOPp->puzzle__DOT__Xor2_2_9__DOT__base__DOT__or0_out_X))));
        tracep->chgBit(oldp+985,((((IData)(vlTOPp->puzzle__DOT__Xnor2_2_36__DOT__base__DOT__nor0_out_Y) 
                                   | (IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_3__DOT__base__DOT__buf_Q)) 
                                  | (IData)(vlTOPp->puzzle__DOT__Xand2b_2_17__DOT__base__DOT__and0_out_X))));
        tracep->chgBit(oldp+986,((1U & ((~ ((IData)(vlTOPp->puzzle__DOT__Xor4b_2_4__DOT__base__DOT__or0_out_X) 
                                            | (~ ((IData)(vlTOPp->puzzle__DOT__Xand2b_2_11__DOT__base__DOT__and0_out_X) 
                                                  & (IData)(vlTOPp->I))))) 
                                        | (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_76__DOT__base__DOT__buf_Q)))));
        tracep->chgBit(oldp+987,((1U & ((~ ((((IData)(vlTOPp->puzzle__DOT__Xand4bb_2_8__DOT__base__DOT__and0_out_X) 
                                              & (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_55__DOT__base__DOT__buf_Q)) 
                                             & (IData)(vlTOPp->puzzle__DOT__Xand2b_2_11__DOT__base__DOT__and0_out_X)) 
                                            & (IData)(vlTOPp->I))) 
                                        | (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_58__DOT__base__DOT__buf_Q)))));
        tracep->chgBit(oldp+988,(((IData)(vlTOPp->puzzle__DOT__Xor2_2_2__DOT__base__DOT__or0_out_X) 
                                  | (IData)(vlTOPp->puzzle__DOT__Xnor2_2_8__DOT__base__DOT__nor0_out_Y))));
        tracep->chgBit(oldp+989,(((IData)(vlTOPp->puzzle__DOT__Xnor3_2_3__DOT__base__DOT__nor0_out_Y) 
                                  & (~ (((IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_3__DOT__base__DOT__buf_Q)
                                          ? (IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_0__DOT__base__DOT__buf_Q)
                                          : (IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_1__DOT__base__DOT__buf_Q)) 
                                        | ((IData)(vlTOPp->puzzle__DOT__Xor2_2_8__DOT__base__DOT__or0_out_X) 
                                           & (IData)(vlTOPp->puzzle__DOT__Xand2b_2_13__DOT__base__DOT__and0_out_X)))))));
        tracep->chgBit(oldp+990,(((((((~ (IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_1__DOT__base__DOT__buf_Q)) 
                                      & (IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_2__DOT__base__DOT__buf_Q)) 
                                     | (IData)(vlTOPp->puzzle__DOT__Xand3_2_15__DOT__base__DOT__and0_out_X)) 
                                    | ((IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_1__DOT__base__DOT__buf_Q) 
                                       & (~ ((IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_2__DOT__base__DOT__buf_Q) 
                                             | (IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_3__DOT__base__DOT__buf_Q))))) 
                                   & (~ (IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_0__DOT__base__DOT__buf_Q))) 
                                  & (IData)(vlTOPp->puzzle__DOT__Xnor3b_2_2__DOT__base__DOT__and0_out_Y))));
        tracep->chgBit(oldp+991,(((IData)(vlTOPp->puzzle__DOT__Xnor3b_2_3__DOT__base__DOT__and0_out_Y) 
                                  & (~ ((~ (IData)(vlTOPp->puzzle__DOT__Xand3b_2_0__DOT__base__DOT__and0_out_X)) 
                                        & ((IData)(vlTOPp->puzzle__DOT__Xnand2b_2_9__DOT__base__DOT__or0_out_Y) 
                                           | (IData)(vlTOPp->puzzle__DOT__Xnor2_2_22__DOT__base__DOT__nor0_out_Y)))))));
        tracep->chgBit(oldp+992,(((~ ((IData)(vlTOPp->puzzle__DOT__Xdfstp_2_1__DOT__base__DOT__buf_Q) 
                                      ^ (~ ((IData)(vlTOPp->puzzle__DOT__Xnor2_2_36__DOT__base__DOT__nor0_out_Y) 
                                            | ((IData)(vlTOPp->puzzle__DOT__Xnand2_2_32__DOT__base__DOT__nand0_out_Y) 
                                               & (IData)(vlTOPp->puzzle__DOT__Xnand2_2_30__DOT__base__DOT__nand0_out_Y)))))) 
                                  & (IData)(vlTOPp->puzzle__DOT__Xnor3b_2_4__DOT__base__DOT__and0_out_Y))));
        tracep->chgBit(oldp+993,(((~ ((IData)(vlTOPp->puzzle__DOT__Xand2_2_16__DOT__base__DOT__and0_out_X) 
                                      | (IData)(vlTOPp->puzzle__DOT__Xand2b_2_11__DOT__base__DOT__and0_out_X))) 
                                  & (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_49__DOT__base__DOT__buf_Q))));
        tracep->chgBit(oldp+994,(((IData)(vlTOPp->puzzle__DOT__Xand2b_2_11__DOT__base__DOT__and0_out_X) 
                                  & (IData)(vlTOPp->puzzle__DOT__Xdfstp_2_2__DOT__base__DOT__buf_Q))));
        tracep->chgBit(oldp+995,(((((~ (IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_1__DOT__base__DOT__buf_Q)) 
                                    & (IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_2__DOT__base__DOT__buf_Q)) 
                                   | (IData)(vlTOPp->puzzle__DOT__Xand3_2_15__DOT__base__DOT__and0_out_X)) 
                                  | ((IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_1__DOT__base__DOT__buf_Q) 
                                     & (~ ((IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_2__DOT__base__DOT__buf_Q) 
                                           | (IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_3__DOT__base__DOT__buf_Q)))))));
        tracep->chgBit(oldp+996,((1U & ((~ ((((IData)(vlTOPp->puzzle__DOT__Xnor4_2_1__DOT__base__DOT__nor0_out_Y) 
                                              & (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_60__DOT__base__DOT__buf_Q)) 
                                             & (IData)(vlTOPp->puzzle__DOT__Xand2b_2_11__DOT__base__DOT__and0_out_X)) 
                                            & (IData)(vlTOPp->I))) 
                                        | (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_57__DOT__base__DOT__buf_Q)))));
        tracep->chgBit(oldp+997,(((IData)(vlTOPp->puzzle__DOT__Xnor3b_2_3__DOT__base__DOT__and0_out_Y) 
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
                                           & (IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_2__DOT__base__DOT__buf_Q)))))));
        tracep->chgBit(oldp+998,(((~ ((((IData)(vlTOPp->puzzle__DOT__Xnor2_2_38__DOT__base__DOT__nor0_out_Y) 
                                        | (IData)(vlTOPp->puzzle__DOT__Xnor2_2_36__DOT__base__DOT__nor0_out_Y)) 
                                       | (IData)(vlTOPp->puzzle__DOT__Xnor2_2_37__DOT__base__DOT__nor0_out_Y)) 
                                      ^ ((IData)(vlTOPp->puzzle__DOT__Xor2_2_9__DOT__base__DOT__or0_out_X) 
                                         ^ (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_51__DOT__base__DOT__buf_Q)))) 
                                  & (IData)(vlTOPp->puzzle__DOT__Xnor3b_2_4__DOT__base__DOT__and0_out_Y))));
        tracep->chgBit(oldp+999,(((IData)(vlTOPp->puzzle__DOT__Xnand2b_2_11__DOT__base__DOT__or0_out_Y) 
                                  & (IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_3__DOT__base__DOT__buf_Q))));
        tracep->chgBit(oldp+1000,(((IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_2__DOT__base__DOT__buf_Q) 
                                   & (IData)(vlTOPp->puzzle__DOT__Xnor2_2_37__DOT__base__DOT__nor0_out_Y))));
        tracep->chgBit(oldp+1001,(((IData)(vlTOPp->puzzle__DOT__Xdfstp_2_2__DOT__base__DOT__buf_Q) 
                                   & (~ ((IData)(vlTOPp->puzzle__DOT__Xand2_2_16__DOT__base__DOT__and0_out_X) 
                                         | (IData)(vlTOPp->puzzle__DOT__Xand2b_2_11__DOT__base__DOT__and0_out_X))))));
        tracep->chgBit(oldp+1002,(((IData)(vlTOPp->puzzle__DOT__Xand2b_2_11__DOT__base__DOT__and0_out_X) 
                                   & (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_48__DOT__base__DOT__buf_Q))));
        tracep->chgBit(oldp+1003,(((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_24__DOT__base__DOT__buf_Q) 
                                   & (IData)(vlTOPp->puzzle__DOT__Xand3_2_9__DOT__base__DOT__and0_out_X))));
        tracep->chgBit(oldp+1004,(((IData)(vlTOPp->puzzle__DOT__Xnor2_2_47__DOT__base__DOT__nor0_out_Y) 
                                   | ((~ ((IData)(vlTOPp->puzzle__DOT__Xdfstp_2_0__DOT__base__DOT__buf_Q) 
                                          ^ ((((IData)(vlTOPp->puzzle__DOT__Xnand2_2_29__DOT__base__DOT__nand0_out_Y) 
                                               & (IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_3__DOT__base__DOT__buf_Q)) 
                                              & (~ (IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_0__DOT__base__DOT__buf_Q))) 
                                             | ((~ 
                                                 ((~ (IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_0__DOT__base__DOT__buf_Q)) 
                                                  & (IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_2__DOT__base__DOT__buf_Q))) 
                                                & (~ 
                                                   ((IData)(vlTOPp->puzzle__DOT__Xnand2_2_29__DOT__base__DOT__nand0_out_Y) 
                                                    & (IData)(vlTOPp->puzzle__DOT__Xor2_2_9__DOT__base__DOT__or0_out_X))))))) 
                                      & (IData)(vlTOPp->puzzle__DOT__Xnor3b_2_4__DOT__base__DOT__and0_out_Y)))));
        tracep->chgBit(oldp+1005,(((IData)(vlTOPp->puzzle__DOT__Xnor2_2_9__DOT__base__DOT__nor0_out_Y) 
                                   | (IData)(vlTOPp->puzzle__DOT__Xxor2_2_2__DOT__base__DOT__xor0_out_X))));
        tracep->chgBit(oldp+1006,(((IData)(vlTOPp->puzzle__DOT__Xand2b_2_16__DOT__base__DOT__and0_out_X) 
                                   & (~ ((~ ((IData)(vlTOPp->puzzle__DOT__Xdfstp_2_3__DOT__base__DOT__buf_Q) 
                                             ^ (IData)(vlTOPp->puzzle__DOT__Xdfstp_2_2__DOT__base__DOT__buf_Q))) 
                                         ^ (IData)(vlTOPp->puzzle__DOT__Xxor2_2_19__DOT__base__DOT__xor0_out_X))))));
        tracep->chgBit(oldp+1007,(((((IData)(vlTOPp->puzzle__DOT__Xand4bb_2_13__DOT__base__DOT__and0_out_X) 
                                     & (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_78__DOT__base__DOT__buf_Q)) 
                                    & (IData)(vlTOPp->puzzle__DOT__Xand2b_2_11__DOT__base__DOT__and0_out_X)) 
                                   & (IData)(vlTOPp->I))));
        tracep->chgBit(oldp+1008,((((((~ ((IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_0__DOT__base__DOT__buf_Q) 
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
                                               | (IData)(vlTOPp->puzzle__DOT__Xnand2_2_20__DOT__base__DOT__nand0_out_Y))))))));
        tracep->chgBit(oldp+1009,(((IData)(vlTOPp->puzzle__DOT__Xnand2_2_11__DOT__base__DOT__nand0_out_Y) 
                                   | (IData)(vlTOPp->puzzle__DOT__Xnor2_2_8__DOT__base__DOT__nor0_out_Y))));
        tracep->chgBit(oldp+1010,(((IData)(vlTOPp->puzzle__DOT__Xnor3_2_3__DOT__base__DOT__nor0_out_Y) 
                                   & ((((~ ((IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_3__DOT__base__DOT__buf_Q) 
                                            | ((IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_2__DOT__base__DOT__buf_Q) 
                                               & (IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_0__DOT__base__DOT__buf_Q)))) 
                                        | (~ ((IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_0__DOT__base__DOT__buf_Q) 
                                              | (IData)(vlTOPp->puzzle__DOT__Xand2b_2_13__DOT__base__DOT__and0_out_X)))) 
                                       & ((IData)(vlTOPp->puzzle__DOT__Xand2b_2_13__DOT__base__DOT__and0_out_X) 
                                          | (IData)(vlTOPp->puzzle__DOT__Xor2_2_8__DOT__base__DOT__or0_out_X))) 
                                      & (IData)(vlTOPp->puzzle__DOT__Xnand2b_2_12__DOT__base__DOT__or0_out_Y)))));
        tracep->chgBit(oldp+1011,(((~ ((((IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_0__DOT__base__DOT__buf_Q) 
                                         | (IData)(vlTOPp->puzzle__DOT__Xand2b_2_12__DOT__base__DOT__and0_out_X)) 
                                        | (~ ((IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_2__DOT__base__DOT__buf_Q) 
                                              | (IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_1__DOT__base__DOT__buf_Q)))) 
                                       | ((IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_2__DOT__base__DOT__buf_Q) 
                                          & (IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_3__DOT__base__DOT__buf_Q)))) 
                                   & (IData)(vlTOPp->puzzle__DOT__Xnor3b_2_2__DOT__base__DOT__and0_out_Y))));
        tracep->chgBit(oldp+1012,((1U & (~ (IData)(vlTOPp->puzzle__DOT__Xnor3_2_2__DOT__base__DOT__nor0_out_Y)))));
        tracep->chgBit(oldp+1013,(((IData)(vlTOPp->puzzle__DOT__Xnor3_2_3__DOT__base__DOT__nor0_out_Y) 
                                   & (((IData)(vlTOPp->puzzle__DOT__Xnand2_2_27__DOT__base__DOT__nand0_out_Y) 
                                       | (IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_1__DOT__base__DOT__buf_Q)) 
                                      & (IData)(vlTOPp->puzzle__DOT__Xo21ai_2_5__DOT__base__DOT__nand0_out_Y)))));
        tracep->chgBit(oldp+1014,(((~ ((IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_0__DOT__base__DOT__buf_Q) 
                                       | ((IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_2__DOT__base__DOT__buf_Q) 
                                          & (IData)(vlTOPp->puzzle__DOT__Xand2b_2_12__DOT__base__DOT__and0_out_X)))) 
                                   & (IData)(vlTOPp->puzzle__DOT__Xnor3b_2_2__DOT__base__DOT__and0_out_Y))));
        tracep->chgBit(oldp+1015,(((IData)(vlTOPp->puzzle__DOT__Xand2b_2_11__DOT__base__DOT__and0_out_X) 
                                   & (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_51__DOT__base__DOT__buf_Q))));
        tracep->chgBit(oldp+1016,((1U & (~ (IData)(vlTOPp->puzzle__DOT__Xand2_2_16__DOT__base__DOT__and0_out_X)))));
        tracep->chgBit(oldp+1017,(((((IData)(vlTOPp->puzzle__DOT__Xnor3_2_3__DOT__base__DOT__nor0_out_Y) 
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
                                            | (~ ((
                                                   ((IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_1__DOT__base__DOT__buf_Q) 
                                                    & (IData)(vlTOPp->puzzle__DOT__Xnand2b_2_10__DOT__base__DOT__or0_out_Y)) 
                                                   | (IData)(vlTOPp->puzzle__DOT__Xand2b_2_7__DOT__base__DOT__and0_out_X)) 
                                                  | (IData)(vlTOPp->puzzle__DOT__Xa31oi_2_0__DOT__base__DOT__nor0_out_Y)))))))));
        tracep->chgBit(oldp+1018,((1U & ((~ ((((IData)(vlTOPp->puzzle__DOT__Xnor4_2_0__DOT__base__DOT__nor0_out_Y) 
                                               & (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_0__DOT__base__DOT__buf_Q)) 
                                              & (IData)(vlTOPp->puzzle__DOT__Xand2b_2_11__DOT__base__DOT__and0_out_X)) 
                                             & (IData)(vlTOPp->I))) 
                                         | (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_14__DOT__base__DOT__buf_Q)))));
        tracep->chgBit(oldp+1019,(((IData)(vlTOPp->puzzle__DOT__Xnor3_2_3__DOT__base__DOT__nor0_out_Y) 
                                   & (((IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_3__DOT__base__DOT__buf_Q) 
                                       & (~ (IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_0__DOT__base__DOT__buf_Q))) 
                                      & (IData)(vlTOPp->puzzle__DOT__Xand2b_2_13__DOT__base__DOT__and0_out_X)))));
        tracep->chgBit(oldp+1020,(((((IData)(vlTOPp->puzzle__DOT__Xand2b_2_12__DOT__base__DOT__and0_out_X) 
                                     & (IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_2__DOT__base__DOT__buf_Q)) 
                                    & (~ (IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_0__DOT__base__DOT__buf_Q))) 
                                   & (IData)(vlTOPp->puzzle__DOT__Xnor3b_2_2__DOT__base__DOT__and0_out_Y))));
        tracep->chgBit(oldp+1021,(((IData)(vlTOPp->puzzle__DOT__Xnor3b_2_3__DOT__base__DOT__and0_out_Y) 
                                   & ((~ ((IData)(vlTOPp->puzzle__DOT__Xnand2b_2_9__DOT__base__DOT__or0_out_Y) 
                                          | (IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_2__DOT__base__DOT__buf_Q))) 
                                      | (~ ((((IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_1__DOT__base__DOT__buf_Q) 
                                              & (IData)(vlTOPp->puzzle__DOT__Xnand2b_2_10__DOT__base__DOT__or0_out_Y)) 
                                             | (IData)(vlTOPp->puzzle__DOT__Xand2b_2_7__DOT__base__DOT__and0_out_X)) 
                                            | (IData)(vlTOPp->puzzle__DOT__Xa31oi_2_0__DOT__base__DOT__nor0_out_Y)))))));
        tracep->chgBit(oldp+1022,(((((((IData)(vlTOPp->puzzle__DOT__Xnor2_2_36__DOT__base__DOT__nor0_out_Y) 
                                       | (IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_3__DOT__base__DOT__buf_Q)) 
                                      | (IData)(vlTOPp->puzzle__DOT__Xand2b_2_17__DOT__base__DOT__and0_out_X)) 
                                     & (IData)(vlTOPp->puzzle__DOT__Xnand2_2_30__DOT__base__DOT__nand0_out_Y)) 
                                    ^ (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_48__DOT__base__DOT__buf_Q)) 
                                   & (IData)(vlTOPp->puzzle__DOT__Xnor3b_2_4__DOT__base__DOT__and0_out_Y))));
        tracep->chgBit(oldp+1023,(((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_54__DOT__base__DOT__buf_Q) 
                                   & (~ ((IData)(vlTOPp->puzzle__DOT__Xor4b_2_3__DOT__base__DOT__or0_out_X) 
                                         | (~ ((IData)(vlTOPp->puzzle__DOT__Xand2b_2_11__DOT__base__DOT__and0_out_X) 
                                               & (IData)(vlTOPp->I))))))));
        tracep->chgBit(oldp+1024,((((((((IData)(vlTOPp->puzzle__DOT__Xand3_2_15__DOT__base__DOT__and0_out_X) 
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
                                             | (~ (
                                                   ((IData)(vlTOPp->puzzle__DOT__Xand2_2_6__DOT__base__DOT__and0_out_X) 
                                                    | (IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_3__DOT__base__DOT__buf_Q)) 
                                                   | (IData)(vlTOPp->puzzle__DOT__Xnor2_2_22__DOT__base__DOT__nor0_out_Y)))) 
                                            & (((((IData)(vlTOPp->puzzle__DOT__Xnand2b_2_8__DOT__base__DOT__or0_out_Y) 
                                                  & (IData)(vlTOPp->puzzle__DOT__Xand2_2_6__DOT__base__DOT__and0_out_X)) 
                                                 & (IData)(vlTOPp->puzzle__DOT__Xnand2b_2_9__DOT__base__DOT__or0_out_Y)) 
                                                | (IData)(vlTOPp->puzzle__DOT__Xa21oi_2_8__DOT__base__DOT__nor0_out_Y)) 
                                               | ((~ (IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_3__DOT__base__DOT__buf_Q)) 
                                                  & (IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_2__DOT__base__DOT__buf_Q)))))))));
        tracep->chgBit(oldp+1025,((1U & ((~ ((((((~ 
                                                  ((IData)(vlTOPp->puzzle__DOT__Xo211a_2_5__DOT__base__DOT__and0_out_X) 
                                                   | (IData)(vlTOPp->puzzle__DOT__Xo211a_2_4__DOT__base__DOT__and0_out_X))) 
                                                 & (IData)(vlTOPp->puzzle__DOT__Xo211a_2_2__DOT__base__DOT__and0_out_X)) 
                                                & (IData)(vlTOPp->puzzle__DOT__Xo211a_2_3__DOT__base__DOT__and0_out_X)) 
                                               & (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_8__DOT__base__DOT__buf_Q)) 
                                              & (IData)(vlTOPp->puzzle__DOT__Xand2b_2_11__DOT__base__DOT__and0_out_X)) 
                                             & (IData)(vlTOPp->I))) 
                                         | (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_4__DOT__base__DOT__buf_Q)))));
        tracep->chgBit(oldp+1026,(((IData)(vlTOPp->puzzle__DOT__Xnor3_2_3__DOT__base__DOT__nor0_out_Y) 
                                   & (((IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_1__DOT__base__DOT__buf_Q) 
                                       & (~ (IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_0__DOT__base__DOT__buf_Q))) 
                                      & (IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_3__DOT__base__DOT__buf_Q)))));
        tracep->chgBit(oldp+1027,(((((IData)(vlTOPp->puzzle__DOT__Xand3_2_15__DOT__base__DOT__and0_out_X) 
                                     | (~ (IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_2__DOT__base__DOT__buf_Q))) 
                                    & (~ (IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_0__DOT__base__DOT__buf_Q))) 
                                   & (IData)(vlTOPp->puzzle__DOT__Xnor3b_2_2__DOT__base__DOT__and0_out_Y))));
        tracep->chgBit(oldp+1028,(((IData)(vlTOPp->puzzle__DOT__Xnor3b_2_3__DOT__base__DOT__and0_out_Y) 
                                   & (((IData)(vlTOPp->puzzle__DOT__Xnand2_2_19__DOT__base__DOT__nand0_out_Y) 
                                       | (IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_0__DOT__base__DOT__buf_Q)) 
                                      & ((IData)(vlTOPp->puzzle__DOT__Xnor2_2_22__DOT__base__DOT__nor0_out_Y) 
                                         | (IData)(vlTOPp->puzzle__DOT__Xnand2_2_20__DOT__base__DOT__nand0_out_Y))))));
        tracep->chgBit(oldp+1029,(((~ ((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_49__DOT__base__DOT__buf_Q) 
                                       ^ (((IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_2__DOT__base__DOT__buf_Q) 
                                           & (IData)(vlTOPp->puzzle__DOT__Xnor2_2_37__DOT__base__DOT__nor0_out_Y)) 
                                          | ((IData)(vlTOPp->puzzle__DOT__Xnand2b_2_11__DOT__base__DOT__or0_out_Y) 
                                             & (IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_3__DOT__base__DOT__buf_Q))))) 
                                   & (IData)(vlTOPp->puzzle__DOT__Xnor3b_2_4__DOT__base__DOT__and0_out_Y))));
        tracep->chgBit(oldp+1030,(((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_62__DOT__base__DOT__buf_Q) 
                                   & (~ ((IData)(vlTOPp->puzzle__DOT__Xor4b_2_6__DOT__base__DOT__or0_out_X) 
                                         | (~ ((IData)(vlTOPp->puzzle__DOT__Xand2b_2_11__DOT__base__DOT__and0_out_X) 
                                               & (IData)(vlTOPp->I))))))));
        tracep->chgBit(oldp+1031,(((((IData)(vlTOPp->puzzle__DOT__Xand4bb_2_8__DOT__base__DOT__and0_out_X) 
                                     & (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_55__DOT__base__DOT__buf_Q)) 
                                    & (IData)(vlTOPp->puzzle__DOT__Xand2b_2_11__DOT__base__DOT__and0_out_X)) 
                                   & (IData)(vlTOPp->I))));
        tracep->chgBit(oldp+1032,(((((((((IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_3__DOT__base__DOT__buf_Q) 
                                         | (~ (IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_2__DOT__base__DOT__buf_Q))) 
                                        & (~ (IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_0__DOT__base__DOT__buf_Q))) 
                                       & (IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_1__DOT__base__DOT__buf_Q)) 
                                      & (IData)(vlTOPp->puzzle__DOT__Xnor3b_2_2__DOT__base__DOT__and0_out_Y)) 
                                     | ((IData)(vlTOPp->puzzle__DOT__Xnor3_2_3__DOT__base__DOT__nor0_out_Y) 
                                        & ((~ (IData)(vlTOPp->puzzle__DOT__Xor2_2_8__DOT__base__DOT__or0_out_X)) 
                                           & (IData)(vlTOPp->puzzle__DOT__Xnand2b_2_12__DOT__base__DOT__or0_out_Y)))) 
                                    | (IData)(vlTOPp->puzzle__DOT__Xnor2_2_47__DOT__base__DOT__nor0_out_Y)) 
                                   | (((~ ((IData)(vlTOPp->puzzle__DOT__Xdfstp_2_3__DOT__base__DOT__buf_Q) 
                                           ^ (~ (((
                                                   ((IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_2__DOT__base__DOT__buf_Q) 
                                                    & (IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_3__DOT__base__DOT__buf_Q)) 
                                                   | (IData)(vlTOPp->puzzle__DOT__Xand2b_2_17__DOT__base__DOT__and0_out_X)) 
                                                  | (~ (IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_0__DOT__base__DOT__buf_Q))) 
                                                 & ((IData)(vlTOPp->puzzle__DOT__Xnand2_2_28__DOT__base__DOT__nand0_out_Y) 
                                                    | (~ (IData)(vlTOPp->puzzle__DOT__Xnand2_2_32__DOT__base__DOT__nand0_out_Y))))))) 
                                       & (IData)(vlTOPp->puzzle__DOT__Xnor3b_2_4__DOT__base__DOT__and0_out_Y)) 
                                      | ((IData)(vlTOPp->puzzle__DOT__Xnor3b_2_3__DOT__base__DOT__and0_out_Y) 
                                         & ((IData)(vlTOPp->puzzle__DOT__Xnand2_2_19__DOT__base__DOT__nand0_out_Y) 
                                            & (IData)(vlTOPp->puzzle__DOT__Xnand2_2_20__DOT__base__DOT__nand0_out_Y)))))));
        tracep->chgBit(oldp+1033,((1U & ((~ (((IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_1__DOT__base__DOT__buf_Q) 
                                              & (IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_3__DOT__base__DOT__buf_Q)) 
                                             & (IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_2__DOT__base__DOT__buf_Q))) 
                                         | (IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_0__DOT__base__DOT__buf_Q)))));
        tracep->chgBit(oldp+1034,((1U & ((~ ((IData)(vlTOPp->puzzle__DOT__Xor4b_2_1__DOT__base__DOT__or0_out_X) 
                                             | (IData)(vlTOPp->puzzle__DOT__Xnand2_2_13__DOT__base__DOT__nand0_out_Y))) 
                                         | (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_9__DOT__base__DOT__buf_Q)))));
        tracep->chgBit(oldp+1035,((1U & (~ ((~ ((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_17__DOT__base__DOT__buf_Q) 
                                                | ((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_15__DOT__base__DOT__buf_Q) 
                                                   & (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_18__DOT__base__DOT__buf_Q)))) 
                                            | ((((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_18__DOT__base__DOT__buf_Q) 
                                                 & (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_15__DOT__base__DOT__buf_Q)) 
                                                & (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_17__DOT__base__DOT__buf_Q)) 
                                               | (IData)(vlTOPp->puzzle__DOT__Xnor2_2_17__DOT__base__DOT__nor0_out_Y)))))));
        tracep->chgBit(oldp+1036,(((IData)(vlTOPp->puzzle__DOT__Xnor3_2_3__DOT__base__DOT__nor0_out_Y) 
                                   & ((~ (IData)(vlTOPp->puzzle__DOT__Xor2_2_8__DOT__base__DOT__or0_out_X)) 
                                      & (IData)(vlTOPp->puzzle__DOT__Xnand2b_2_12__DOT__base__DOT__or0_out_Y)))));
        tracep->chgBit(oldp+1037,((((((IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_3__DOT__base__DOT__buf_Q) 
                                      | (~ (IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_2__DOT__base__DOT__buf_Q))) 
                                     & (~ (IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_0__DOT__base__DOT__buf_Q))) 
                                    & (IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_1__DOT__base__DOT__buf_Q)) 
                                   & (IData)(vlTOPp->puzzle__DOT__Xnor3b_2_2__DOT__base__DOT__and0_out_Y))));
        tracep->chgBit(oldp+1038,(((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_65__DOT__base__DOT__buf_Q) 
                                   & (~ ((IData)(vlTOPp->puzzle__DOT__Xor4b_2_5__DOT__base__DOT__or0_out_X) 
                                         | (~ ((IData)(vlTOPp->puzzle__DOT__Xand2b_2_11__DOT__base__DOT__and0_out_X) 
                                               & (IData)(vlTOPp->I))))))));
        tracep->chgBit(oldp+1039,(((((IData)(vlTOPp->puzzle__DOT__Xnor4_2_1__DOT__base__DOT__nor0_out_Y) 
                                     & (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_60__DOT__base__DOT__buf_Q)) 
                                    & (IData)(vlTOPp->puzzle__DOT__Xand2b_2_11__DOT__base__DOT__and0_out_X)) 
                                   & (IData)(vlTOPp->I))));
        tracep->chgBit(oldp+1040,((((((((IData)(vlTOPp->puzzle__DOT__Xand2b_2_12__DOT__base__DOT__and0_out_X) 
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
                                               | (IData)(vlTOPp->puzzle__DOT__Xnand2_2_19__DOT__base__DOT__nand0_out_Y))))))));
        tracep->chgBit(oldp+1041,((((IData)(vlTOPp->puzzle__DOT__Xand4b_2_2__DOT__base__DOT__and0_out_X) 
                                    & (IData)(vlTOPp->I)) 
                                   & (IData)(vlTOPp->puzzle__DOT__Xand2b_2_11__DOT__base__DOT__and0_out_X))));
        tracep->chgBit(oldp+1042,((1U & ((~ ((IData)(vlTOPp->puzzle__DOT__Xor4b_2_0__DOT__base__DOT__or0_out_X) 
                                             | (IData)(vlTOPp->puzzle__DOT__Xnand2_2_14__DOT__base__DOT__nand0_out_Y))) 
                                         | (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_1__DOT__base__DOT__buf_Q)))));
        tracep->chgBit(oldp+1043,(((IData)(vlTOPp->puzzle__DOT__Xnor3b_2_3__DOT__base__DOT__and0_out_Y) 
                                   & (~ ((IData)(vlTOPp->puzzle__DOT__Xand3b_2_0__DOT__base__DOT__and0_out_X) 
                                         ^ (((IData)(vlTOPp->puzzle__DOT__Xnand2b_2_10__DOT__base__DOT__or0_out_Y) 
                                             & ((~ (IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_2__DOT__base__DOT__buf_Q)) 
                                                | (IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_3__DOT__base__DOT__buf_Q))) 
                                            | (IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_1__DOT__base__DOT__buf_Q)))))));
        tracep->chgBit(oldp+1044,(((((((IData)(vlTOPp->puzzle__DOT__Xxnor2_2_27__DOT__base__DOT__xnor0_out_Y) 
                                       | (~ (IData)(vlTOPp->puzzle__DOT__Xnand2_2_32__DOT__base__DOT__nand0_out_Y))) 
                                      | (~ ((IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_3__DOT__base__DOT__buf_Q) 
                                            | (IData)(vlTOPp->puzzle__DOT__Xand2b_2_15__DOT__base__DOT__and0_out_X)))) 
                                     & ((IData)(vlTOPp->puzzle__DOT__Xnand2_2_28__DOT__base__DOT__nand0_out_Y) 
                                        | (IData)(vlTOPp->puzzle__DOT__Xand2b_2_15__DOT__base__DOT__and0_out_X))) 
                                    ^ (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_50__DOT__base__DOT__buf_Q)) 
                                   & (IData)(vlTOPp->puzzle__DOT__Xnor3b_2_4__DOT__base__DOT__and0_out_Y))));
        tracep->chgBit(oldp+1045,((((IData)(vlTOPp->puzzle__DOT__Xnor4_2_0__DOT__base__DOT__nor0_out_Y) 
                                    & (IData)(vlTOPp->I)) 
                                   & (IData)(vlTOPp->puzzle__DOT__Xand2b_2_11__DOT__base__DOT__and0_out_X))));
        tracep->chgBit(oldp+1046,(((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_72__DOT__base__DOT__buf_Q) 
                                   & (~ ((IData)(vlTOPp->puzzle__DOT__Xor4b_2_7__DOT__base__DOT__or0_out_X) 
                                         | (~ ((IData)(vlTOPp->puzzle__DOT__Xand2b_2_11__DOT__base__DOT__and0_out_X) 
                                               & (IData)(vlTOPp->I))))))));
        tracep->chgBit(oldp+1047,(((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_1__DOT__base__DOT__buf_Q) 
                                   & (~ ((IData)(vlTOPp->puzzle__DOT__Xor4b_2_0__DOT__base__DOT__or0_out_X) 
                                         | (IData)(vlTOPp->puzzle__DOT__Xnand2_2_14__DOT__base__DOT__nand0_out_Y))))));
        tracep->chgBit(oldp+1048,(((((IData)(vlTOPp->puzzle__DOT__Xand4bb_2_7__DOT__base__DOT__and0_out_X) 
                                     & (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_56__DOT__base__DOT__buf_Q)) 
                                    & (IData)(vlTOPp->puzzle__DOT__Xand2b_2_11__DOT__base__DOT__and0_out_X)) 
                                   & (IData)(vlTOPp->I))));
        tracep->chgBit(oldp+1049,((((((((((~ (IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_1__DOT__base__DOT__buf_Q)) 
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
                                                  | (IData)(vlTOPp->puzzle__DOT__Xnor2_2_22__DOT__base__DOT__nor0_out_Y)))))))));
        tracep->chgBit(oldp+1050,((((IData)(vlTOPp->puzzle__DOT__Xand4bb_2_12__DOT__base__DOT__and0_out_X) 
                                    & (IData)(vlTOPp->I)) 
                                   & (IData)(vlTOPp->puzzle__DOT__Xand2b_2_11__DOT__base__DOT__and0_out_X))));
        tracep->chgBit(oldp+1051,((((IData)(vlTOPp->puzzle__DOT__Xand3_2_8__DOT__base__DOT__and0_out_X) 
                                    & ((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_20__DOT__base__DOT__buf_Q) 
                                       & (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_21__DOT__base__DOT__buf_Q))) 
                                   & (IData)(vlTOPp->puzzle__DOT__Xand3_2_9__DOT__base__DOT__and0_out_X))));
        tracep->chgBit(oldp+1052,((1U & ((~ ((((((~ 
                                                  ((IData)(vlTOPp->puzzle__DOT__Xo211a_2_2__DOT__base__DOT__and0_out_X) 
                                                   | (IData)(vlTOPp->puzzle__DOT__Xo211a_2_5__DOT__base__DOT__and0_out_X))) 
                                                 & (IData)(vlTOPp->puzzle__DOT__Xo211a_2_4__DOT__base__DOT__and0_out_X)) 
                                                & (IData)(vlTOPp->puzzle__DOT__Xo211a_2_3__DOT__base__DOT__and0_out_X)) 
                                               & (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_5__DOT__base__DOT__buf_Q)) 
                                              & (IData)(vlTOPp->puzzle__DOT__Xand2b_2_11__DOT__base__DOT__and0_out_X)) 
                                             & (IData)(vlTOPp->I))) 
                                         | (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_12__DOT__base__DOT__buf_Q)))));
        tracep->chgBit(oldp+1053,(((IData)(vlTOPp->puzzle__DOT__Xnor3b_2_3__DOT__base__DOT__and0_out_Y) 
                                   & ((IData)(vlTOPp->puzzle__DOT__Xnand2_2_19__DOT__base__DOT__nand0_out_Y) 
                                      & (IData)(vlTOPp->puzzle__DOT__Xnand2_2_20__DOT__base__DOT__nand0_out_Y)))));
        tracep->chgBit(oldp+1054,(((~ ((IData)(vlTOPp->puzzle__DOT__Xdfstp_2_3__DOT__base__DOT__buf_Q) 
                                       ^ (~ (((((IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_2__DOT__base__DOT__buf_Q) 
                                                & (IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_3__DOT__base__DOT__buf_Q)) 
                                               | (IData)(vlTOPp->puzzle__DOT__Xand2b_2_17__DOT__base__DOT__and0_out_X)) 
                                              | (~ (IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_0__DOT__base__DOT__buf_Q))) 
                                             & ((IData)(vlTOPp->puzzle__DOT__Xnand2_2_28__DOT__base__DOT__nand0_out_Y) 
                                                | (~ (IData)(vlTOPp->puzzle__DOT__Xnand2_2_32__DOT__base__DOT__nand0_out_Y))))))) 
                                   & (IData)(vlTOPp->puzzle__DOT__Xnor3b_2_4__DOT__base__DOT__and0_out_Y))));
        tracep->chgBit(oldp+1055,((((((~ ((IData)(vlTOPp->puzzle__DOT__Xo211a_2_2__DOT__base__DOT__and0_out_X) 
                                          | (IData)(vlTOPp->puzzle__DOT__Xo211a_2_5__DOT__base__DOT__and0_out_X))) 
                                      & (IData)(vlTOPp->puzzle__DOT__Xo211a_2_4__DOT__base__DOT__and0_out_X)) 
                                     & (IData)(vlTOPp->puzzle__DOT__Xo211a_2_3__DOT__base__DOT__and0_out_X)) 
                                    & (IData)(vlTOPp->I)) 
                                   & (IData)(vlTOPp->puzzle__DOT__Xand2b_2_11__DOT__base__DOT__and0_out_X))));
        tracep->chgBit(oldp+1056,((1U & (~ ((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_16__DOT__base__DOT__buf_Q) 
                                            | (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_15__DOT__base__DOT__buf_Q))))));
        tracep->chgBit(oldp+1057,(((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_7__DOT__base__DOT__buf_Q) 
                                   & (~ ((IData)(vlTOPp->puzzle__DOT__Xor4b_2_2__DOT__base__DOT__or0_out_X) 
                                         | (IData)(vlTOPp->puzzle__DOT__Xnand2_2_15__DOT__base__DOT__nand0_out_Y))))));
        tracep->chgBit(oldp+1058,(((((IData)(vlTOPp->puzzle__DOT__Xand4bb_2_9__DOT__base__DOT__and0_out_X) 
                                     & (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_80__DOT__base__DOT__buf_Q)) 
                                    & (IData)(vlTOPp->puzzle__DOT__Xand2b_2_11__DOT__base__DOT__and0_out_X)) 
                                   & (IData)(vlTOPp->I))));
        tracep->chgBit(oldp+1059,((1U & (~ (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_17__DOT__base__DOT__buf_Q)))));
        tracep->chgBit(oldp+1060,((((IData)(vlTOPp->puzzle__DOT__Xand4bb_2_11__DOT__base__DOT__and0_out_X) 
                                    & (IData)(vlTOPp->I)) 
                                   & (IData)(vlTOPp->puzzle__DOT__Xand2b_2_11__DOT__base__DOT__and0_out_X))));
        tracep->chgBit(oldp+1061,(((((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_29__DOT__base__DOT__buf_Q)
                                      ? ((IData)(vlTOPp->I) 
                                         | (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_27__DOT__base__DOT__buf_Q))
                                      : (~ ((IData)(vlTOPp->I) 
                                            & (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_27__DOT__base__DOT__buf_Q)))) 
                                    & (((~ ((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_44__DOT__base__DOT__buf_Q) 
                                            | (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_46__DOT__base__DOT__buf_Q))) 
                                        & (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_45__DOT__base__DOT__buf_Q)) 
                                       & (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_43__DOT__base__DOT__buf_Q))) 
                                   & (IData)(vlTOPp->puzzle__DOT__Xand2b_2_11__DOT__base__DOT__and0_out_X))));
        tracep->chgBit(oldp+1062,((1U & ((~ ((IData)(vlTOPp->puzzle__DOT__Xor4b_2_2__DOT__base__DOT__or0_out_X) 
                                             | (IData)(vlTOPp->puzzle__DOT__Xnand2_2_15__DOT__base__DOT__nand0_out_Y))) 
                                         | (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_7__DOT__base__DOT__buf_Q)))));
        tracep->chgBit(oldp+1063,(((IData)(vlTOPp->puzzle__DOT__Xnor3b_2_3__DOT__base__DOT__and0_out_Y) 
                                   & (~ ((IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_0__DOT__base__DOT__buf_Q) 
                                         | (IData)(vlTOPp->puzzle__DOT__Xnand2_2_19__DOT__base__DOT__nand0_out_Y))))));
        tracep->chgBit(oldp+1064,((((~ ((((IData)(vlTOPp->puzzle__DOT__Xnor2_2_36__DOT__base__DOT__nor0_out_Y) 
                                          & (IData)(vlTOPp->puzzle__DOT__Xor2_2_9__DOT__base__DOT__or0_out_X)) 
                                         | ((IData)(vlTOPp->puzzle__DOT__Xxnor2_2_27__DOT__base__DOT__xnor0_out_Y) 
                                            & (((IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_3__DOT__base__DOT__buf_Q) 
                                                | (IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_2__DOT__base__DOT__buf_Q)) 
                                               | (~ (IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_1__DOT__base__DOT__buf_Q))))) 
                                        & (IData)(vlTOPp->puzzle__DOT__Xnand2b_2_11__DOT__base__DOT__or0_out_Y))) 
                                    ^ (IData)(vlTOPp->puzzle__DOT__Xdfstp_2_2__DOT__base__DOT__buf_Q)) 
                                   & (IData)(vlTOPp->puzzle__DOT__Xnor3b_2_4__DOT__base__DOT__and0_out_Y))));
        tracep->chgBit(oldp+1065,((((((~ ((IData)(vlTOPp->puzzle__DOT__Xo211a_2_3__DOT__base__DOT__and0_out_X) 
                                          | (IData)(vlTOPp->puzzle__DOT__Xo211a_2_5__DOT__base__DOT__and0_out_X))) 
                                      & (IData)(vlTOPp->puzzle__DOT__Xo211a_2_4__DOT__base__DOT__and0_out_X)) 
                                     & (IData)(vlTOPp->puzzle__DOT__Xo211a_2_2__DOT__base__DOT__and0_out_X)) 
                                    & (IData)(vlTOPp->I)) 
                                   & (IData)(vlTOPp->puzzle__DOT__Xand2b_2_11__DOT__base__DOT__and0_out_X))));
        tracep->chgBit(oldp+1066,(((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_76__DOT__base__DOT__buf_Q) 
                                   & (~ ((IData)(vlTOPp->puzzle__DOT__Xor4b_2_4__DOT__base__DOT__or0_out_X) 
                                         | (~ ((IData)(vlTOPp->puzzle__DOT__Xand2b_2_11__DOT__base__DOT__and0_out_X) 
                                               & (IData)(vlTOPp->I))))))));
        tracep->chgBit(oldp+1067,(((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_9__DOT__base__DOT__buf_Q) 
                                   & (~ ((IData)(vlTOPp->puzzle__DOT__Xor4b_2_1__DOT__base__DOT__or0_out_X) 
                                         | (IData)(vlTOPp->puzzle__DOT__Xnand2_2_13__DOT__base__DOT__nand0_out_Y))))));
        tracep->chgBit(oldp+1068,(((((IData)(vlTOPp->puzzle__DOT__Xand4bb_2_10__DOT__base__DOT__and0_out_X) 
                                     & (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_71__DOT__base__DOT__buf_Q)) 
                                    & (IData)(vlTOPp->puzzle__DOT__Xand2b_2_11__DOT__base__DOT__and0_out_X)) 
                                   & (IData)(vlTOPp->I))));
        tracep->chgBit(oldp+1069,((((IData)(vlTOPp->puzzle__DOT__Xand4bb_2_13__DOT__base__DOT__and0_out_X) 
                                    & (IData)(vlTOPp->I)) 
                                   & (IData)(vlTOPp->puzzle__DOT__Xand2b_2_11__DOT__base__DOT__and0_out_X))));
        tracep->chgBit(oldp+1070,(((((((((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_46__DOT__base__DOT__buf_Q) 
                                         | (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_44__DOT__base__DOT__buf_Q)) 
                                        | (~ ((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_43__DOT__base__DOT__buf_Q) 
                                              & (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_45__DOT__base__DOT__buf_Q)))) 
                                       & (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_33__DOT__base__DOT__buf_Q)) 
                                      | (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_36__DOT__base__DOT__buf_Q)) 
                                     | ((IData)(vlTOPp->puzzle__DOT__Xor4_2_4__DOT__base__DOT__or0_out_X) 
                                        & ((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_41__DOT__base__DOT__buf_Q) 
                                           | (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_38__DOT__base__DOT__buf_Q)))) 
                                    & (IData)(vlTOPp->I)) 
                                   & (IData)(vlTOPp->puzzle__DOT__Xand2b_2_11__DOT__base__DOT__and0_out_X))));
        tracep->chgBit(oldp+1071,((((((~ ((IData)(vlTOPp->puzzle__DOT__Xo211a_2_5__DOT__base__DOT__and0_out_X) 
                                          | (IData)(vlTOPp->puzzle__DOT__Xo211a_2_4__DOT__base__DOT__and0_out_X))) 
                                      & (IData)(vlTOPp->puzzle__DOT__Xo211a_2_2__DOT__base__DOT__and0_out_X)) 
                                     & (IData)(vlTOPp->puzzle__DOT__Xo211a_2_3__DOT__base__DOT__and0_out_X)) 
                                    & (IData)(vlTOPp->I)) 
                                   & (IData)(vlTOPp->puzzle__DOT__Xand2b_2_11__DOT__base__DOT__and0_out_X))));
        tracep->chgBit(oldp+1072,(((IData)(vlTOPp->puzzle__DOT__Xxnor2_2_26__DOT__base__DOT__xnor0_out_Y) 
                                   | (IData)(vlTOPp->I))));
        tracep->chgBit(oldp+1073,(((((IData)(vlTOPp->puzzle__DOT__Xand4b_2_2__DOT__base__DOT__and0_out_X) 
                                     & (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_75__DOT__base__DOT__buf_Q)) 
                                    & (IData)(vlTOPp->puzzle__DOT__Xand2b_2_11__DOT__base__DOT__and0_out_X)) 
                                   & (IData)(vlTOPp->I))));
        tracep->chgBit(oldp+1074,((((IData)(vlTOPp->puzzle__DOT__Xand2b_2_11__DOT__base__DOT__and0_out_X) 
                                    & (((~ ((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_44__DOT__base__DOT__buf_Q) 
                                            | (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_46__DOT__base__DOT__buf_Q))) 
                                        & (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_45__DOT__base__DOT__buf_Q)) 
                                       & (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_43__DOT__base__DOT__buf_Q))) 
                                   & (~ ((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_16__DOT__base__DOT__buf_Q) 
                                         | (~ (((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_18__DOT__base__DOT__buf_Q) 
                                                & (~ (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_17__DOT__base__DOT__buf_Q))) 
                                               & (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_15__DOT__base__DOT__buf_Q))))))));
        tracep->chgBit(oldp+1075,((((IData)(vlTOPp->puzzle__DOT__Xand4bb_2_9__DOT__base__DOT__and0_out_X) 
                                    & (IData)(vlTOPp->I)) 
                                   & (IData)(vlTOPp->puzzle__DOT__Xand2b_2_11__DOT__base__DOT__and0_out_X))));
        tracep->chgBit(oldp+1076,((1U & ((IData)(vlTOPp->puzzle__DOT__Xnand2_2_28__DOT__base__DOT__nand0_out_Y) 
                                         | (~ (IData)(vlTOPp->puzzle__DOT__Xnand2_2_32__DOT__base__DOT__nand0_out_Y))))));
        tracep->chgBit(oldp+1077,(((IData)(vlTOPp->puzzle__DOT__Xnand2_2_17__DOT__base__DOT__nand0_out_Y) 
                                   & (IData)(vlTOPp->puzzle__DOT__Xnor2_2_17__DOT__base__DOT__nor0_out_Y))));
        tracep->chgBit(oldp+1078,(((((~ ((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_49__DOT__base__DOT__buf_Q) 
                                         ^ (IData)(vlTOPp->puzzle__DOT__Xxnor2_2_17__DOT__base__DOT__xnor0_out_Y))) 
                                     | (IData)(vlTOPp->puzzle__DOT__Xdfstp_2_3__DOT__base__DOT__buf_Q)) 
                                    & (IData)(vlTOPp->puzzle__DOT__Xand2b_2_16__DOT__base__DOT__and0_out_X)) 
                                   & (~ ((~ ((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_49__DOT__base__DOT__buf_Q) 
                                             ^ (IData)(vlTOPp->puzzle__DOT__Xxnor2_2_17__DOT__base__DOT__xnor0_out_Y))) 
                                         & (IData)(vlTOPp->puzzle__DOT__Xdfstp_2_3__DOT__base__DOT__buf_Q))))));
        tracep->chgBit(oldp+1079,((((IData)(vlTOPp->puzzle__DOT__Xand4b_2_1__DOT__base__DOT__and0_out_X) 
                                    & (IData)(vlTOPp->I)) 
                                   & (IData)(vlTOPp->puzzle__DOT__Xand2b_2_11__DOT__base__DOT__and0_out_X))));
        tracep->chgBit(oldp+1080,((((IData)(vlTOPp->puzzle__DOT__Xnor2_2_24__DOT__base__DOT__nor0_out_Y) 
                                    & (IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_2__DOT__base__DOT__buf_Q)) 
                                   & (IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_3__DOT__base__DOT__buf_Q))));
        tracep->chgBit(oldp+1081,((1U & (~ ((IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_3__DOT__base__DOT__buf_Q) 
                                            | (IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_0__DOT__base__DOT__buf_Q))))));
        tracep->chgBit(oldp+1082,(((IData)(vlTOPp->puzzle__DOT__Xa21o_2_8__DOT__base__DOT__or0_out_X) 
                                   & (IData)(vlTOPp->puzzle__DOT__Xnor2_2_21__DOT__base__DOT__nor0_out_Y))));
        tracep->chgBit(oldp+1083,((1U & (~ ((((IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_1__DOT__base__DOT__buf_Q) 
                                              & (IData)(vlTOPp->puzzle__DOT__Xnand2b_2_10__DOT__base__DOT__or0_out_Y)) 
                                             | (IData)(vlTOPp->puzzle__DOT__Xand2b_2_7__DOT__base__DOT__and0_out_X)) 
                                            | (IData)(vlTOPp->puzzle__DOT__Xa31oi_2_0__DOT__base__DOT__nor0_out_Y))))));
        tracep->chgBit(oldp+1084,((1U & (~ ((IData)(vlTOPp->puzzle__DOT__Xnand2b_2_9__DOT__base__DOT__or0_out_Y) 
                                            | (IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_2__DOT__base__DOT__buf_Q))))));
        tracep->chgBit(oldp+1085,((1U & (~ (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_0__DOT__base__DOT__buf_Q)))));
        tracep->chgBit(oldp+1086,((1U & (~ ((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_43__DOT__base__DOT__buf_Q) 
                                            & (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_45__DOT__base__DOT__buf_Q))))));
        tracep->chgBit(oldp+1087,((((IData)(vlTOPp->puzzle__DOT__Xnand2_2_29__DOT__base__DOT__nand0_out_Y) 
                                    & (IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_3__DOT__base__DOT__buf_Q)) 
                                   & (~ (IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_0__DOT__base__DOT__buf_Q)))));
        tracep->chgBit(oldp+1088,((((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_18__DOT__base__DOT__buf_Q) 
                                    & (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_15__DOT__base__DOT__buf_Q)) 
                                   & (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_17__DOT__base__DOT__buf_Q))));
        tracep->chgBit(oldp+1089,((1U & (~ ((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_25__DOT__base__DOT__buf_Q) 
                                            | (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_22__DOT__base__DOT__buf_Q))))));
        tracep->chgBit(oldp+1090,((1U & (~ ((IData)(vlTOPp->puzzle__DOT__Xand2b_2_11__DOT__base__DOT__and0_out_X) 
                                            | (IData)(vlTOPp->puzzle__DOT__Xxnor2_2_24__DOT__base__DOT__xnor0_out_Y))))));
        tracep->chgBit(oldp+1091,(((IData)(vlTOPp->puzzle__DOT__Xnand2b_2_10__DOT__base__DOT__or0_out_Y) 
                                   & ((~ (IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_2__DOT__base__DOT__buf_Q)) 
                                      | (IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_3__DOT__base__DOT__buf_Q)))));
        tracep->chgBit(oldp+1092,((1U & (~ ((IData)(vlTOPp->success) 
                                            | (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_82__DOT__base__DOT__buf_Q))))));
        tracep->chgBit(oldp+1093,((1U & (~ (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_8__DOT__base__DOT__buf_Q)))));
        tracep->chgBit(oldp+1094,((((IData)(vlTOPp->puzzle__DOT__Xand4bb_2_8__DOT__base__DOT__and0_out_X) 
                                    & (IData)(vlTOPp->I)) 
                                   & (IData)(vlTOPp->puzzle__DOT__Xand2b_2_11__DOT__base__DOT__and0_out_X))));
        tracep->chgBit(oldp+1095,((((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_16__DOT__base__DOT__buf_Q) 
                                    & (((~ ((IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_44__DOT__base__DOT__buf_Q) 
                                            | (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_46__DOT__base__DOT__buf_Q))) 
                                        & (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_45__DOT__base__DOT__buf_Q)) 
                                       & (IData)(vlTOPp->puzzle__DOT__Xdfrtp_2_43__DOT__base__DOT__buf_Q))) 
                                   & (IData)(vlTOPp->puzzle__DOT__Xand2b_2_11__DOT__base__DOT__and0_out_X))));
        tracep->chgBit(oldp+1096,(((IData)(vlTOPp->puzzle__DOT__Xdfxtp_2_2__DOT__base__DOT__buf_Q) 
                                   & (IData)(vlTOPp->puzzle__DOT__Xnor2_2_24__DOT__base__DOT__nor0_out_Y))));
    }
}

void Vpuzzle::traceCleanup(void* userp, VerilatedVcd* /*unused*/) {
    Vpuzzle__Syms* __restrict vlSymsp = static_cast<Vpuzzle__Syms*>(userp);
    Vpuzzle* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlTOPp->__Vm_traceActivity[0U] = 0U;
        vlTOPp->__Vm_traceActivity[1U] = 0U;
        vlTOPp->__Vm_traceActivity[2U] = 0U;
        vlTOPp->__Vm_traceActivity[3U] = 0U;
        vlTOPp->__Vm_traceActivity[4U] = 0U;
        vlTOPp->__Vm_traceActivity[5U] = 0U;
        vlTOPp->__Vm_traceActivity[6U] = 0U;
        vlTOPp->__Vm_traceActivity[7U] = 0U;
        vlTOPp->__Vm_traceActivity[8U] = 0U;
        vlTOPp->__Vm_traceActivity[9U] = 0U;
        vlTOPp->__Vm_traceActivity[0xaU] = 0U;
        vlTOPp->__Vm_traceActivity[0xbU] = 0U;
        vlTOPp->__Vm_traceActivity[0xcU] = 0U;
        vlTOPp->__Vm_traceActivity[0xdU] = 0U;
        vlTOPp->__Vm_traceActivity[0xeU] = 0U;
        vlTOPp->__Vm_traceActivity[0xfU] = 0U;
        vlTOPp->__Vm_traceActivity[0x10U] = 0U;
        vlTOPp->__Vm_traceActivity[0x11U] = 0U;
        vlTOPp->__Vm_traceActivity[0x12U] = 0U;
    }
}
