#include <iostream>

using namespace std;

int main() {
  int pickedNumber; pickedNumber = 42;
  int guessNumber;

  int counter; counter = 1;
  do {
    cout << "What is the number I picked? \n\n";

    cout << "Number: \n";
    cin >> guessNumber;

    if (pickedNumber == guessNumber) {
      cout << "Hooray! You've guessed the picked number " << pickedNumber << "! \n\n";

      return 0;
    }

    counter = counter + 1;
  } while (counter <= 3);

  if (pickedNumber != guessNumber) {
    cout << "Unfortunately, you haven't guessed the picked number. The picked number was " << pickedNumber << " \n\n";
  }

  return 1;
}
