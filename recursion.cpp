//recursive function
#include <iostream>
using namespace std;
int sum(int k) {
  if (k > 0) {
    cout << k <<endl;
    return k + sum(k - 1);
  } else {
    return 0;
  }
}
int main() {
  cout << sum(3);
  return 0;
}
