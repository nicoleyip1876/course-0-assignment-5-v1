#include <iostream>
#include <string>
using namespace std;

string get_temperature() {
  return "celcius";
}

int main() {
  string temp = get_temperature();
  cout << temp;
  return 0;
}
