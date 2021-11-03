#include <iostream>

using namespace std;

int main() {
  int n = 5;
  int* nPointer = &n;
  cout << nPointer << endl;
  cout << *nPointer << endl;

  *nPointer = 10;
  cout << nPointer << endl;
  cout << *nPointer << endl;
  cout << n << endl;

  return 0;
}