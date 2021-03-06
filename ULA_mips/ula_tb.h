#ifndef __ULA_TB
#define __ULA_TB

#include "systemc.h"
#include "ula.h"

SC_MODULE (ula_tb) {
	sc_out<sc_uint<3> > opcode;
	sc_out< sc_int<SIZE> > A, B;
	sc_in< sc_int<SIZE> > Z;
	sc_in<bool> zero;
	void aciona();
	SC_CTOR (ula_tb) {
		SC_THREAD(aciona);
	}
};
#endif
