//Example of runtime polymorphsm with virtual keyword
#include <iostream>
using namespace std;
class Shape
{
private:
    /* data */
public:
    virtual void draw(){
        cout << "Drawing..."<< endl;
    };
    
};
class Rectangle: public Shape
{
private:
    /* data */
public:
    void draw(){
        cout<<"Drawing Rectangle"<<endl;
    };
    
};
class Circle: public Shape
{
private:
    /* data */
public:
    void draw(){
        cout << "Drawing Circle" << endl;
    };
    
};
int main (){
    Shape *s;
    Shape sh;
    Rectangle rec;
    Circle circ;
    s=&sh;
    s->draw();
    s= & rec;
    s->draw();
    s= & circ;
    s->draw();
}


