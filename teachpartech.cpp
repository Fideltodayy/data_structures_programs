#include <iostream>
#include <stdlib.h>
using namespace std;

void begginer(){
    cout<<"We'll start with Hello World"<<endl;
}
void intermediate(){
    cout<<"You're not that bad"<<endl;
}
int main(){
    cout<<"Hello...My name is Alexa.Allow me to lead you.\nWhat's your name?"<<endl;
    string name = "";
    cin>>name;
    cout<<"Welcome " + name + "\nI'll teach you about Tech\nWhat's your hobby?"<<endl;
    string hobby = "";
    cin>>hobby;
    cout<<hobby +" "+"is quite an amzing activity"<<endl;
    cout<<"Help us place you in the right Tract.Rate your knowledge"<<endl;
    cout<<"1.Begginer"<<endl;
    cout<<"2.Intermediate"<<endl;
    cout<<"3.Proffessional"<<endl;
    cout<<"4.Teacher"<<endl;
    int numb;
    cin>>numb;
    switch (numb)
    {
    case 1:
        begginer();
        break;
    case 2:
        intprermediate();
        break;
    case 3:
        cout<<"Congrats proffessor!!"<<endl;
        break;
    case 4:
        cout<<"Damn.You're a Teacher now"<<endl;
        break;
    default:
        cout<<"Please enter a valid option"<<endl;
        break;
    }
    
    
    return 0;
}