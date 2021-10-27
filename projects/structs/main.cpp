#include <iostream>
#include <string>

using namespace std;

int main() {
  struct product {
    int weight;
    double price;
  };

  product apple;

  apple.weight = 32;
  apple.price = 45.45;

  cout << apple.weight << endl;
  cout << apple.price << endl;

  return 0;
}
