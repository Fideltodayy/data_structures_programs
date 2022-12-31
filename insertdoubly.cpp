//DOUBLY LINKED LIST Implementations: Insertions At the Beginning & End
#include<iostream>
using namespace std;
//A node to hold marks and create a doubly linked list
struct Node{
int exam;
Node *next;
Node *prev;
};
int main(){
Node *mymk=new Node;// To be used to naviagate/traverse the nodes together
//mymk->next=NULL;
Node *Head=new Node;//To mark beginning of list and point to the first Node
//First node
Node * P=new Node;
P->exam=20;
P->next=NULL;//First Node next field set to NULL
Head->next=P;
P->prev=Head;//First Node next field set to pont to Head


/* //Creating nodes and adding them one at a time at the beggining
Node * Q=new Node;
Q->exam=30;
Q->next=Head->next; 
Head->next=Q;
Q->prev=Head; 
Node * R=new Node;
R->exam=40;
R->next=Head->next; 
Head->next=R;
R->prev=Head;
Node * S=new Node;
S->exam=50;
S->next=Head->next; 
Head->next=S;
S->prev=Head; 
*/
// A lopp to creat 5 nodes and has them inserted at the beginning each at a time
for(int i=1;i<=5;i++){
Node * T=new Node;
cout<<"Enter the node exam value"<<endl;
cin>>T->exam;
T->next=Head->next; 
Head->next=T;
T->prev=Head; 
}
/*Creating a node Q to Iterate it using a while loop from the begginning to the End
This is to enable us insert a node at the end*/
Node * Q=new Node;
Q->next=Head;
while(Q->next){
Q=Q->next; //moving to the next node
}
//At the end of the loop Q will be pointing at node exam=20
//Creating a new node to inserting at the end using the pointer Q
Node * N=new Node;
N->exam=95;
N->next=NULL;
Q->next=N;
N->prev=Q; 
//Traversing throu the array printing out the values from the beginning
mymk=Head->next;
while(mymk!=0){
cout<<"Exam value="<<mymk->exam<<endl;//Outputing Q data
mymk=mymk->next; //moving to the next node
}
return 0;
}
