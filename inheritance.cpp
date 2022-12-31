#include <iostream>
using namespace std;
//Base class
class   Vehicle
{
public:
    string brand = "Ford";
    void honk(){
        cout << "Hoot Hoot \n";
    }
};

//Derived class
class Car: public Vehicle
{
public:
    string model = "Mustang";
};




int main () {
Car myCar;
myCar.honk();
cout<<myCar.brand+" "+myCar.model;
return 0;
}