#include <iostream>
#include <stdlib.h>
using namespace std;
int plusFunc(int x, int y) {
  return x + y;
}

double plusFunc(double x, double y) {
  return x + y;
}

int main() {
    int sum1;
    cin >> sum1;
    int sum2;
    cin >> sum2;
  int myNum1 = plusFunc(sum1, sum2);
  double myNum2 = plusFunc(sum1, sum2);
  cout << "Int: " << myNum1 << "\n";
  cout << "Double: " << myNum2;
  return 0;
}