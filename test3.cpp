#include<iostream>
using namespace std;
int main() {
    int a=123;
    double d=1.23;
    int size = sizeof(a);
    cout << "Size of int: " << size << endl;
    size = sizeof(d);
    cout << "Size of double d: " << size << endl; 
    return 0;
}