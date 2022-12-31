#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;
// Create a Car class with some attributes
class Car {
  public:
    string brand;   
    string model;
    int year;
};

int main() {
  // Create an object of Car
  Car carObj1;
  carObj1.brand = "BMW";
  carObj1.model = "X5";
  carObj1.year = 1999;

  // Create another object of Car
  Car carObj2;
  carObj2.brand = "Ford";
  carObj2.model = "Mustang";
  carObj2.year = 1969;

  // Print attribute values
  cout << carObj1.brand << "\t" << carObj1.model << "\t" << carObj1.year <<endl;
  cout << carObj2.brand << "\t" << carObj2.model << "\t" << carObj2.year << "\n";
  return 0;
}