#include <iostream>
using namespace std;
class Relational {
public:
  int userValue() {
    int a;
    cout << "\nEnter the number: ";
    cin >> a;
    return a;
  }
  void greatCheck(int a, int b) {

    if (a > b) {
      cout << "\na is greater than b";
    } else {
      cout << "\na is not greater than b";
    }
  }
  void smallCheck(int a, int b) {

    if (a < b) {
      cout << "\na is smaller than b";
    } else {
      cout << "\na is not smaller than b";
    }
  }
  void notEqual(int a, int b) {

    if (a != b) {
      cout << "\na is not equal than 5";
    } else {
      cout << "\na is equal than 5";
    }
  }
} rel;

int main() {
  int i;
  int a = rel.userValue();
  int b = rel.userValue();
  cout << "\n-------------------Relational Operators-------------------";
  cout << "\nSelect the operation to be performed-> ";
  cout << "\n(1) Check greatest with ( > )";
  cout << "\n(2) Check smallest with ( < )";
  cout << "\n(3) Check weather number are equal ( != )";
  cout << "\nEnter your choice: ";
  cin >> i;

  switch (i) {
  case 1:
    rel.greatCheck(a, b);
    break;
  case 2:
    rel.smallCheck(a, b);
    break;
  case 3:
    rel.notEqual(a, b);
    break;

  default:
    cout << "\nEnter valid option";
    break;
  }

  cout << "\n";
  return 0;
}