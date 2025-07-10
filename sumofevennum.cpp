#include<iostream>
using namespace std;
int main() {
  int n,i=1,sum=0;
  cout<<"enter the number of terms:";
  cin>>n;
  while(i<=n)
  {
    if(i%2==0)
    {
        sum+=i;
        cout<<i<<"is even"<<endl; 
        i+=1;
           }
    else{
        i+=1;
    }
}
cout<<"sum of even terms is:"<<sum<<endl;
return 0;
}
    