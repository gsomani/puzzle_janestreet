#include "utils.h"
#include "inputs.h"

int main(int argc, char **argv) {

  Verilated::commandArgs(argc, argv);
  Verilated::traceEverOn(true);

  auto *tb = new MODULE;
  auto *traceObj = new VerilatedVcdC;


  opentrace(getenv("VCD"), traceObj, tb);
  int tc = 0;

  tb->rst_n = 0;
  tb->enable = 0;
  for(int i=0 ; i<2; i++)
    tick(tc,tb,traceObj);
  tb->rst_n = 1;
  tick(tc,tb,traceObj);
  tick(tc,tb,traceObj);
  
  for(int i=0 ; i<121; i++)
  {
    tb->I      = I[i];
    tb->enable = 1;
    tick(tc,tb,traceObj);
  }
  tb->enable = 0;
  tick(tc,tb,traceObj);
  
  while(tb->O)
    tick(tc,tb,traceObj);

}
