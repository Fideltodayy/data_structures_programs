//Using pointer operator to increase the value of a viariable
#include <stdlib.h>
#include<iostream>
using namespace std;
//Method to use pointer to increase variables
void increasX(int *y);
//Method to use pointer to decrease variables
void decreasX(int *y);
int main(){
int x=20;
//Calling a method that receive memory to a vraiable as arguments and increses its value
increasX(&x);
cout<<x<<endl;
//Calling a method that receive memory to a vraiable as arguments and decreses its value
decreasX(&x);
cout<<x<<endl;
//Using Loop to increase multiple times
for (int j=1;j<=20;j++){
increasX(&x);
cout<<x<<endl;}
//Using Loop to decrease multiple times
for (int j=1;j<=10;j++){
decreasX(&x);
cout<<x<<endl;}
return 0;
}
//A function that recieves a variable using pointer opeartor and increases its value
void increasX(int *x){
*x=*x+1;
}
//A function that recieves a variable using pointer opeartor and decreases its value
void decreasX(int *y){
*y=*y-1;
}
