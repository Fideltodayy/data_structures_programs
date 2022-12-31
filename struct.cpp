#include <iostream>
#include <string>
using namespace std;
struct Node{
 int mark;
 Node *next; // Note the * ( pointer)
 };
int main(){
    Node*H=new Node;
    cout << "Enter name of Node "<< endl;
    string nodename="";
    cin >> nodename;
    Node * nodename = new Node;
    nodename -> marks = 20;
    H->next = nodename;




}
