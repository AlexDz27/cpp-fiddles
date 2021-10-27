#include <iostream>
#include "getOperation.h"

using namespace std;

int main() {
  char operation; operation = getOperation();

  cout << "Choose your two numbers \n";
  cout << "Number 1: \n";
  double number1; cin >> number1;
  cout << "Number 2: \n";
  double number2; cin >> number2;

  double result;
  switch (operation) {
    case '+':
      result = number1 + number2;
      break;

    case '-':
      result = number1 - number2;
      break;

    case '/':
      result = number1 / number2;
      break;

    case '*':
      result = number1 * number2;
      break;
  }

  cout << "The result of '" << number1 << " " << operation << " " << number2 << "' is " << result << " \n";

  // Debug
  cout << "Debug info: \n";
  cout << operation;
  cout << number1;
  cout << number2;

  return 0;
}
