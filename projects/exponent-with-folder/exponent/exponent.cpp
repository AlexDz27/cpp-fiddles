#include "exponent.h"

int exponent(int number, int extent) {
  int result = number;

  while (extent != 1) {
    result = result * number;

    extent--;
  }

  return result;
}