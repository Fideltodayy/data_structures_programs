//Working With a Stack of Records
#include <stdlib.h>
#include<iostream>
using namespace std;
// Marks record used
struct marks{
int stid;
int cat1,cat2,exam;
};
//Push and Pop Methods
void push(marks mmks[], int *m);
void pop(marks mmks[],int *p);
//Grading methods
char grade(int m);
void frequency(char g );
//The main driver
int main(){
srand(time(0));
//Working with a stack of marks objects
int m=-1;
marks mmks[20];//creating an array to act as Stack
for(int i=1; i<=10;i++){
push(mmks,&m);
}
cout<<"Object Popped out"<<endl;
cout<<"StNumber\tCAT1\tCAT2\tEXAM\tAGG\tGRADE"<<endl;
//Loop For Poping
for( int j =1;j<=10;j++)
pop(mmks,&m);
return 0;
}

//FUNCTIONS
// A function to push marks into a stack
void push(marks mmks[], int *m){
marks *mk=new marks;
int stid=102456+rand()%1000;
int ct1=1+rand()%10;
int ct2=1+rand()%20;
int xm=1+rand()%70;
mk->stid=stid;
mk->cat1=ct1;
mk->cat2=ct2;
mk->exam=xm;
*m=*m+1;//Increasing the point by one
mmks[*m]=*mk;
cout<<stid<<"\t"<<ct1<<"\t"<<ct2<<"\t"<<xm<<"\t"<<endl;
}
// A function to push marks into a stack
void pop(marks mmks[], int *m){
marks *mk=new marks;
*mk=mmks[*m];
int stid=mk->stid;
int ct1=mk->cat1;
int ct2=mk->cat2;
int xm=mk->exam;
int sum=ct1+ct2+xm;
//mmks[*m]=*mk;
*m=*m-1;//Increasing the point by one
cout<<stid<<"\t\t"<<ct1<<"\t"<<ct2<<"\t"<<xm<<"\t"<<sum<<"\t"<<grade(sum)<<endl;
}
// A function to Return the grades of total exam
char grade(int m){
char g;
if(m>=70){
g='A';
}
else
if(m>=60){
g='B';
}
else
if(m>=50){
g='C';
}
else
if(m>=40){
g='D';
}
else{
g='F';
}
return g;
}