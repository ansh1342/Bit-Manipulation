#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter a: ";
    cin >> a;         // let a = 27
    int b;
    cout<<"Enter b: ";
    cin >> b;         // let b = 31 
    cout <<"Before Swapping: " << endl << "a = " << a << endl << "b = " << b << endl;
    a = a ^ b;        // a = 27 ^ 31 = 4
    b = a ^ b;        // b = 4 ^ 31 = 27    b = (a^b)^b = a
    a = a ^ b;        // a = 4 ^ 27 = 31    a = a^(a^b) = b
    cout <<"After swapping: " << endl << "a = " << a << endl << "b = " << b << endl;
}