#include "pocketcalculator.h"


void pocketcalculator(std::istream& in,  std::ostream& out){
  int const res = calc(in);
  printLargeNumber(res, out);
}
