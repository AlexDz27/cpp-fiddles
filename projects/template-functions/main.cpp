#include <iostream>
#include <string>

using namespace std;

template<typename T>
T sum(T a, T b) {
  return a + b;
}

int main() {
  double a = 2.4;
  double b = 3.5;

  double result = sum<double>(a, b);

  cout << result;

  return 0;
}
