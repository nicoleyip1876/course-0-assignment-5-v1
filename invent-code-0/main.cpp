#include <iostream>
#include <string>
using namespace std;

// Getting user input
int Input() {
  int number;
  cout << "Enter a number: " << endl;
  cin >> number;
  return number;
}

// Returning factorial
int Factorial(int number) {
  int new_number = number;
  number--;

  while (number > 0) {
    new_number = new_number * number;
    number--;
  }

  return new_number;
}

int main() {
  int number = Input();
  int factorial = Factorial(number);

  cout << "The factorial of " << number << " is " << factorial << endl;
  return 0;
}
