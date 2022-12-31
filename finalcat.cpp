#include <iostream>
using namespace std;
//struct Node
struct Node{
int itemid,pprice,tprice,qtty,ttlprofit;
string name;
Node *left=NULL;
Node *right=NULL;
};
//inorder
void inorder(Node* root){
if (root==NULL)
{
return;
}
inorder(root->left);
cout<<"2022"<<root->itemid<<"\t"<<root->name<<"\t\t\t"<<root->pprice<<"\t\t"<<root->tprice<<"\t\t"<<root->qtty<<"\t\t"<<root->ttlprofit<<endl;
inorder(root->right);
}
//insertion
void insert(Node* &root, int key){
    string Names[13]={"cable","charger","desktop","adapter","switch","kboard","phone","bulb","Excable","printer","stapler","ppunch","monitor"};
    string ename=Names[rand()%13];
    string electrical[7]={"cables","charger","adapter","switch","excable","plug","socket"};
    string electronic[7]={"desktop","kboard","phone","printer","monitor","laptop","mouse"};
    string elname=electronic[rand()%7];
    


 if (root == NULL) {
 root = new Node;
 root->itemid=key;
// root->name=ename;
 root->name=elname;
 root->pprice=100+rand()%50;
 root->tprice=150+rand()%100;
 root->qtty=rand()%30;
 root->ttlprofit=root->tprice-root->pprice;
 
 return;
 }
 
 if (key < root->itemid) {
 insert(root->left, key);
 }
 else if(key>root->itemid)
 {
 insert(root->right, key);
 }
}
int main(){

srand(time(0));

 Node *root=new Node;
 root->itemid=100;
 root->name="SUnit";
 root->pprice=110;
 root->tprice=200;
 root->qtty=11;
 root->ttlprofit=90;

 int var=0;

for( int x=1;x<=30;x++){    
   var=247+rand()%500;
  
    
  insert(root, var);
 }

cout<<"INORDER"<<endl;
cout<<"Itemid\tItem Name\t\tPprice\t\t Tprice\t\tQtty\t\t Ttlprofit"<<endl;
 inorder(root);
cout<<"\n"<<endl;


    return 0;
}
