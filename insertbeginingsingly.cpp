//Inserting a node at the beginning and at the end
//I think it can also be implemented as a stack.
#include<iostream>
using namespace std;
//Anode to hold marks and create a linked list
struct Node{
int exam;
Node *next;//Note the use of * to create a pointer
};
int main(){
Node *Head=new Node;//To mark and point to the first Node
//First node
Node *P=new Node;
P->exam=20;
P->next=NULL;//First Node next field set to NULL
Head->next=P;
/*
//Creating nodes maually and adding them at the begining
Node * Q=new Node;
Q->exam=30;
Q->next=Head->next; 
Head->next=Q;
Node * R=new Node;
R->exam=40;
R->next=Head->next; 
Head->next=R;
Node * S=new Node;
S->exam=50;
S->next=Head->next; 
Head->next=S;
*/

//Insert in the beginning
// A loop to creat 5 nodes and has them inserted at the beginning each at a time
for(int i=1;i<=5;i++){
Node * T=new Node;
cout<<"Enter the node exam value"<<endl;
cin>>T->exam;
T->next=Head->next; 
Head->next=T;
}


//Creating a node Q to Iterate it using a while loop from the beggiing to the End
Node * Q=new Node;
Q->next=Head; // Q is poisition to point at Head
while(Q->next){
    Q=Q->next;
}

//Creating a new node and inserting at the end using pointer Q
Node * N=new Node;
N->exam=95;
N->next=NULL;
Q->next=N;


//Traversing throu the list printing out the values using mymk pointer
Node *mymk=new Node;// To be used to naviagate the nodes to print values
mymk=Head->next;
while(mymk!=0){
cout<<"Exam value="<<mymk->exam<<endl;//Outputing Q data
mymk=mymk->next; //moving to the nrxt node
}
return 0;
}