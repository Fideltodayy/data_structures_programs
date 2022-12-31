#include <iostream>
#include <string>
#include <string.h>
using namespace std;

void display(int b[5]){
        for (int i = 0; i<5; i++)
            {cout<< b[i] << endl;}
    }
int main(){
    int b [5] = {19, 68, 12, 45, 72};
    display(b);

    return 0 ;
}