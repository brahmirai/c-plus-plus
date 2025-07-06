#include<iostream>
using namespace std;
int main() {
    int n,sum=0;
    cout<<"enter the value of n:"<<endl;
    cin>>n;
    while(n>0) 
{
    sum=sum+n;
    n=n-1;
}    
cout<<"sum of all the number is:"<<sum<<endl;
return 0;
}