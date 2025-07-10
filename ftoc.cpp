#include<iostream>
using namespace std;
int main() {
    float c,f;
    cout<<"enter temperature in farenheit: ";
    cin>>f;
    c=((f-32)*5)/9;
    cout<<"temperature in celsius is: "<<c<<endl;
    return 0;

}