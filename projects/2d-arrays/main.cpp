#include <iostream>
#include <string>

using namespace std;

int main() {
  int numbersGrid[3][2] = {
    {1, 2},
    {3, 4},
    {5, 6}
  };

  int my[2] = {1, 2};

  for (int i = 0; i < 3; ++i) {
    int row[2] = {numbersGrid[i][0], numbersGrid[i][1]};
    cout << row[0] << endl;
    cout << row[1] << endl;
  }

  return 0;
}
