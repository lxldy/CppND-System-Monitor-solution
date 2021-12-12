#include <string>
#include <sstream>
#include <iomanip>

#include "format.h"

using std::string;
using std::stringstream;
// TODO: Complete this helper function
// INPUT: Long int measuring seconds
// OUTPUT: HH:MM:SS
string Format::ElapsedTime(long seconds) {
  int HH, MM, SS;
  stringstream output;
  HH = (seconds / 3600) % 100; 
  MM = (seconds / 60) % 60;
  SS = seconds % 60;
  output <<  HH << ":" << MM << ":" << SS;
  return output.str();
}