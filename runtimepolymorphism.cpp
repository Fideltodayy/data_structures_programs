// a runtime polymorphsm example without the virtual keyword.
#include <iostream>
using namespace std;
class Animal
{
private:
    /* data */
public:
    void eat(){
        cout << "Eating..." <<endl;
    }
};
class Dog: public Animal
{
private:
    /* data */
public:
    void eat(){
        cout << "Eating bread...";
    }
};

int main(){
    Animal a;
    a.eat();
    Dog d;
    d.eat();
    return 0;
}

