// Program of function overloading with different types of arguments.
#include <iostream>
using namespace std;
class Add
{
private:
    /* data */
public:
    int sum(int a,int b){
        return a+b;
    };
    float sum(double a,int b){
        return a+b;
    }
};
int main (){
    Add a;
    cout << a.sum(4,5)<<endl;
    cout << a.sum(4.600,5);
}

