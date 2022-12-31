//Linked list data structure to create and set up linked list nodes.Then outputing the data in each node using a traversal node "mymk".
#include <iostream>
using namespace std;
//Anode to hold marks and create a linked list
struct Node{
int exam;
Node *next;//Note the use of * to create a pointer
};
int main(){
Node *mymk=new Node;// To be used to naviagate the nodes together
Node *Head=new Node;//To mark and point to the first Node
Head->next=NULL;
//Creating and setting up linked List Nodes
//Setting up node P
Node * P=new Node;//First Node
P->exam=20;
Head->next=P;
//Setting up node Q
Node *Q=new Node;
Q->exam=45;
P->next=Q; //Re- setting P pointer to point to node Q . This effectively joins P to Q
//Setting up node R
Node *R=new Node;
R->exam=50;
Q->next=R; //Re- setting Q pointer to point to node R. This effectively joins Q to R
//Setting up node S
Node *S=new Node;
S->exam=55;
R->next=S; //Re- setting R pointer to point to node S . This effectively joins R to S
//Setting up node T
Node *T=new Node;
T->exam=60;
S->next=T; 
T->next=NULL; //Re- The last node must be set to NULL
//Resetting the pointer mymk to go the first node P and using it to out put data
mymk=Head->next;
/* //Printing marks for Node P
cout<<"P Exam value="<<mymk->exam<<endl;
cout<<"P mem="<<mymk->next<<endl;
mymk=mymk->next; //Printing marks for Node R
cout<<"Q Exam value="<<mymk->exam<<endl;
cout<<"Q mem="<<mymk->next<<endl;
mymk=mymk->next; //Printing marks for Node S
cout<<"R Exam value="<<mymk->exam<<endl;
cout<<"R mem="<<mymk->next<<endl;
mymk=mymk->next; //Printing marks for Node T
cout<<"S Exam value="<<mymk->exam<<endl;
cout<<"S mem="<<mymk->next<<endl;
mymk=mymk->next; //Printing marks for Node T
cout<<"T Exam value="<<mymk->exam<<endl;
cout<<"T mem="<<mymk->next<<endl;*/


while(mymk!=0/*or plain (mymk)*/){
cout<<"Exam value="<<mymk->exam<<endl;//Outputing Q data
cout<<"mem="<<mymk->next<<endl;

mymk=mymk->next; //moving to the nrxt node
}

return 0;
}
