#include "verilated.h"
#include "verilated_vcd_c.h"
#include "module.h"
#include <string>
#include <iostream>
#include <random>
#include <cstdlib>

using namespace std;

int random(int n)
{
  random_device rd;
  mt19937 gen(rd());
  uniform_int_distribution<> dist(0,n-1);
  return dist(gen);
}

bool readStringToUint32Array(uint32_t *data, int n)
{
  string hexInput;
  if(!(cin >> hexInput))
    return false;
  int vecLength = (n + 3)/ 4;
  hexInput = string(vecLength*8 - hexInput.length(), '0') + hexInput;
  for(int i=0, j=hexInput.length()-8; j>=0 ; j-=8, i++)
  {
    string chunk = hexInput.substr(j,8);
    data[i] = stoul(chunk, nullptr, 16);
  }
  return true;
}

void opentrace(const char *vcdname, VerilatedVcdC *traceObj, auto *tb)
{
    tb->trace(traceObj, 99);
    traceObj->open(vcdname);
}

void evalAndDump(int &tickcount, auto *tb, VerilatedVcdC* tfp)
{
  tb->eval();
  tfp->dump(tickcount);
  tickcount++;
}


void	tick(int &tickcount, auto *tb, VerilatedVcdC* tfp)
{
  evalAndDump(tickcount, tb, tfp);
  tb->clk = 1;
  evalAndDump(tickcount, tb, tfp);
  tb->clk = 0;
  tfp->flush();
}
