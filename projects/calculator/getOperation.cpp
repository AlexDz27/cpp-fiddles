#include <iostream>

using namespace std;

char getOperation() {
  char operation;

  cout << "Choose your operation (+, -, /, *): \n";
  cin >> operation;

  if (operation != '+' && operation != '-' && operation != '/' && operation != '*') {
    cout << "Hey, you didnt type valid operation \n";

    return 1;
  }

  return operation;
}