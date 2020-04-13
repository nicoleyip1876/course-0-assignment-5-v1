#include <iostream>
#include <string>
using namespace std;

float get_temperature(int input) {
  return input * 1;
}

int main() {
  int temp = 6;
  cout << "the temperature should be 6: " << get_temperature(temp) << endl;
  return 0;
}
