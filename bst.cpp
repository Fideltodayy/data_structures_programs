//Implementing Binary Sear Tree
#include <iostream>
using namespace std;
// Node structure to store a BST to create the tree
struct Node{
 int data;
 Node* left =NULL, *right =NULL;
};
/*// A recursive Function to perform inorder traversal on the tree
void inorder(Node* root){
 if (root ==NULL) { // Incase it is an empty tree
 return;
 }
// Recursively calling itself
 inorder(root->left);
 cout << root->data <<endl;
 inorder(root->right);
}//End of inorder traversal*/

// A recursive Function to perform preorder traversal on the tree
void preorder(Node* root){
 if (root ==NULL) { // Incase it is an empty tree
 return;
 }
// Recursively calling itself
 cout << root->data <<endl;
 preorder(root->left);
 preorder(root->right);
}//End of inorder traversal

//A function that receives a root node and an integer values.
void insert(Node* &root, int key){
 // if the root is null, create a new node and return it
 if (root == NULL) {
 root = new Node;
 root->data=key;
 return;
 }
 // if the given key is less than the root node, call recursively insert for the left node;
 // otherwise, call recursively insert for the left node;
 if (key < root->data) {
 insert(root->left, key);
 }
 else { // for key >= root->data
 insert(root->right, key);
 }
}//end of insert function


int main(){
 /*Node *root=new Node;
 root->left=NULL;
 root->right=NULL;
 root->data=20;
 Node *M=new Node;
 M->left=NULL;
 M->right=NULL;
 M->data=15;
 root->left=M;
 Node *P=new Node;
 P->left=NULL;
 P->right=NULL;
 P->data=5;
 M->left=P;
 Node * Q=new Node;
 Q->left=NULL;
 Q->right=NULL;
 Q->data=18;
 M->right=Q;
 Node * N=new Node;
 N->left=NULL;
 N->right=NULL;
 N->data=35;
 root->right=N;
 Node * R=new Node;
 R->left=NULL;
 R->right=NULL;
 R->data=25;
 N->left=R;
 Node * S=new Node;
 S->left=NULL;
 S->right=NULL;
 S->data=40;
 N->right=S;
 Node * T=new Node;
 T->left=NULL;
 T->right=NULL;
 T->data=22;
 R->left=T;
 Node * U=new Node;
 U->left=NULL;
 U->right=NULL;
 U->data=30;
 R->right=U;
 
 inorder(root);*/
 srand(time(0));
 Node *root=new Node; 
 root->data=20;
 int var=0;
// Calling insert 20 times and each time generation random integer marks in the range of 0-70
for( int x=0;x<=20;x++){
 var=rand()%70;
 insert(root, var);
 }
//Calling the inorder to print out the tree node values
 preorder(root);
 return 0;
}