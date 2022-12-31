#include <iostream>
using namespace std;
class accessclass
{
private:
    //private attribute
    int salary;

public:
    //setter
    void setSalary(int s){
        salary = s;
    }
    //getter
    int getSalary(){
        return salary;
    }
};

int main(){
        accessclass myObj;
        myObj.setSalary(59333);
        cout<<myObj.getSalary();
        return 0;
}

