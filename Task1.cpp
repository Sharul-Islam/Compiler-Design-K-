#include <iostream>
#include <string>

using namespace std;

int main() {
  string eq;
  cout << "Enter a string: ";
  cin >> eq;

  bool operatorFound = false;

  for (int i = 0; i < eq.length(); i++) {
    if (eq[i] == '+' || eq[i] == '-' || eq[i] == '*' || eq[i] == '/' || eq[i] == '%') {
      operatorFound = true;
      break;
    }
  }

  if (operatorFound) {
    cout << "The arithmetic operators in the string are: ";
    for (int i = 0; i < eq.length(); i++) {
      if (eq[i] == '+' || eq[i] == '-' || eq[i] == '*' || eq[i] == '/' || eq[i] == '%') {
        cout << eq[i] << " ";
      }
    }
    cout << endl;
  } else {
    cout << "There are no operators in the string." << endl;
  }

  return 0;
}
