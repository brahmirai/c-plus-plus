#include<iostream>
using namespace std;
int main() {
    char ch;
    cout<<"enter the character:"<<endl;
    cin>>ch;
    if(isupper(ch))
    {
        cout<<"it is a uppercase character"<<endl;
    }
    else if(islower(ch))
    {
        cout<<"it is a lowercase character"<<endl;
    }
    else{
        cout<<"it is a number"<<endl;
    }
    return 0;
    }
    