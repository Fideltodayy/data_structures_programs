//Implementing a Queue using an array
#include <iostream>
using namespace std;
// Creating an array to implement a queue
//Global variables
int queue[100], size = 100 ,F = - 1, R = - 1;
//Function prototypes
void enqueue();
void dequeue();
void Display();
void menu();
//The main method
int main() {
menu();// Calling the menu function
return 0;
}
// A Function to dispay the menu of options
void menu(){
int ch;
 cout<<"1) Enque an element to the queue"<<endl;
 cout<<"2) Deque element from the queue"<<endl;
 cout<<"3) Display all the elements of queue"<<endl;
 cout<<"4) Display this menus"<<endl;
 cout<<"5) Exit"<<endl;
 do {
 cout<<"Enter your option : "<<endl;
 cin>>ch;
 switch (ch) {
 case 1: enqueue(); break;
 case 2: dequeue(); break;
 case 3: Display(); break;
 case 4: menu(); break;
 case 5: cout<<"Exit"<<endl;
 break;
 default: cout<<"Invalid choice"<<endl;
 }
 } while(ch!=5);
}


// A function enque data into a queue
void enqueue() {
 int val;
 if (R == 100-1)cout<<"Queue Is Full"<<endl;
 else {
 if (F == - 1)
 F = 0;
 cout<<"Enter the element to enqueue : "<<endl;
 cin>>val;
 R++;
 queue[R] = val;
 }
}
// A function dequeue data from the queue
void dequeue() {
 if (F == - 1 || F > R) {
 cout<<"Queue is Empty "<<endl;
 return ;
 } else {
 cout<<"Element dequeued from queue is : "<< queue[F] <<endl;
 F++;;
 }
}
// A function display data from the queue
void Display() {
 if (F == - 1)
 cout<<"Queue is empty"<<endl;
 else {
 cout<<"Queue elements are : \n";
 for (int i = F; i <= R; i++)
 cout<<queue[i]<<" "<<endl;
 }
}