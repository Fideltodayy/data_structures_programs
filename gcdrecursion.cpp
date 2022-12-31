#include <iostream>
using namespace std;
int gcd(int x, int y){
 if (y == 0)
 return x;
 else
 return gcd(y, x % y);
}
int main(){
    int first;
    int second;
    cout<<"Enter the first value"<<endl;
    cin>>first;
    cout<<"Enter the second value"<<endl;
    cin>>second;

    cout<<gcd(first,second)<<endl;
    

}