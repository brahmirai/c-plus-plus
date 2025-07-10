#include<iostream>
using namespace std;
int main() {
    int n,i=2,flag=0;
    cout << "Enter a number: ";
    cin >> n;
    while(i<n){
      if(n%i==0){
      flag+=1;
    break;
    }
   i+=1;
    }
    if (flag==0)

    {
         cout << n << " is a prime number." << endl;
      }
      else
      {
         cout << n << " is not a prime number." << endl; 
    }
return 0;
    }
