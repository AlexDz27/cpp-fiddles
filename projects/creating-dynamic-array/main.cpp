#include <iostream>

using namespace std;

int main() {
  int mySize;
  cin >> mySize;

  int * myArray = new int[mySize];

  for (int i = 0; i < 3; ++i) {
    myArray[i] = i + 1;
  }

  for (int i = 0; i < 3; ++i) {
    cout << myArray[i] << endl;
  }

  delete[] myArray;
  myArray = nullptr;

  return 0;
}