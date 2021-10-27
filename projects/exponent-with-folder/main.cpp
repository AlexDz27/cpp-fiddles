#include <iostream>
#include <string>
#include "exponent/exponent.h"
// to work, this should be in CMakeLists.txt: 'add_executable(untitled main.cpp exponent/exponent.cpp exponent/exponent.h)'

using namespace std;

int main() {
  cout << exponent(3, 3);

  return 0;
}
