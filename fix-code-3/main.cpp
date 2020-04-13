#include <iostream>
#include <string>
using namespace std;

string add_prefix(const string input) {
  return "pre" + input;
}

int main() {
  string word;
  cout << "Please type a word: ";
  cin >> word;
  cout << "Your word with pre added is: " << add_prefix(word);
}
