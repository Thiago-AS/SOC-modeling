#include "square_root_tb.h"

void square_root_tb::source(){
	// RESET
	num_in.write(0);
	rst.write(true);
	wait();

	rst.write(false);
	wait();

	start.write(true);
	num_in.write(64);
	wait();
	wait();


	num_in.write(36);
	wait();
	wait();

	num_in.write(91);
	wait();
	wait();

	num_in.write(144);
	wait();
	wait();

	wait();
	sc_stop();
}

void square_root_tb::sink(){
	std::cout << sc_time_stamp() << "  " << "num_in: " << num_in.read() << "  " << "num_out: " << num_out.read() << std::endl;

}

