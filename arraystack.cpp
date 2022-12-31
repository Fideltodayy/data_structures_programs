//Implememnting a Stack using an arrray
//Modified to return the sum of all the integer values pushed into the stack

#include <stdlib.h>
#include<iostream>
using namespace std;
//Methods to push and pop
int pop(int s[],int *y);
void push(int s[],int val, int *p);
int main(){
//Pointer P should always be at the top pointing at the top index position occupied by data.
int p=-1;// A valiable to iterate throught the stack
int nval;
int size=10;
int mystack[size];// Creating an stack(an array)
int sumofpushed=0;
//Pushing Data Nodes
cout<<"Pushed Value\tPointer Position\t"<<endl;
for(int i=1;i<=10;i++){
nval=1+rand()%70;
push(mystack,nval,&p); // Calling the push function
cout<<nval<<"\t\t\t"<<p<<endl;
sumofpushed+=nval;
}
cout <<"Sum of pushed"<<"\t"<<  sumofpushed << endl;
//Poping Data Nodes
cout<<"POinter position after Pushing\t"<<p<<endl;
int valu;
cout<<"Pointer Position\tPoped Value"<<endl;
for(int i=1;i<=5;i++){
cout<<p<<"\t\t\t";
valu=pop(mystack,&p);
cout<<valu<<endl;
}
return 0;
}

//Functions
//The function pops out the value and decreases the pointer one point below
int pop(int s[],int *y){
int val;
val=s[*y];
*y=*y-1;// decreasing the pointer "p" by one
return val;
}
//The function pushes into the a new value and increases the pointer one point above
void push(int s[],int nval, int *p){
*p=*p+1;//Increasing the pointer "p" by one
s[*p]=nval;
}
