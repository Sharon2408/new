#include <iostream>
#include <cmath>
using namespace std;
class NegativeException {};
int main() {
  while (true) {
    double number;
    cout << "Enter a positive number: ";
cin >> number;
    try {
      if (number < 0) {
        throw NegativeException();
      }
      double sqr = sqrt(number);
      cout << "The square root of " << number  << " is " << sqr << endl;
      break;
    } catch (NegativeException) {
      cout << "Error: Please enter a positive number." << endl;
    }
  }
  return 0;
}
