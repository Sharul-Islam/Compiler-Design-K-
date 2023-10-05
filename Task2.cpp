#include <iostream>
#include <string>

using namespace std;

int main() {

  string eq;
  cout << "Enter : ";
  cin >> eq;


  bool variableFound = false;

  for (int i = 0; i < eq.length(); i++) {
    if (isalpha(eq[i])) {
      variableFound = true;
    }
  }

  if (variableFound) {
    cout << "The arithmetic variables in the equation are: ";
    for (int i = 0; i < eq.length(); i++) {
      if (isalpha(eq[i])) {
        cout << eq[i] << " ";
      }
    }
    cout << endl;
  } else {
    cout << "There are no variables" << endl;
  }

  return 0;
}
