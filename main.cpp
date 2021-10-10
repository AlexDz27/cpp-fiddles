#include <iostream>

using namespace std;

// Second task
int main() {
  const double PI = 3.1415926;

  double x, y, z;
  double result; // should be -55.6848

  cout << "Enter values for variables 'x', 'y', 'z'" << endl;
  cout << "X: "; cin >> x; // should be -4.5
  cout << "Y: "; cin >> y; // should be 0.000075 (0.75 * 10^-4)
//  cout << "Z: "; cin >> z; // should be 84.5

  if (!cin.good()) { // If user entered values other than numbers
    cout << "Error: you've entered bad values into one of the variables. All variables must be numbers. Exiting the program...";
    return 1;
  }

  cout << "Going further" << endl;

  // First action
  double modulusResult = pow(fabs(x - y), 2);
  cout << modulusResult << endl;

  // Second action
  double upperSumResult = 8 + modulusResult + 1;
  cout << upperSumResult << endl;

  return 0;
}
