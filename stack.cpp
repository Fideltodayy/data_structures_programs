#include <iostream>
using namespace std;
int main (){
    stack(S);
    while (number!=0){
        int remainder= number % 2;
        push(S,remainder);
        number = number/2;
    }
    while (!isempty(S))
    {
        pop(S,x);
        print(x);
    }
    return;
}