#include<iostream>
using namespace std;
int odd_even(int num){
    return num & 1;
}

int main(){
    int num;
    cout << "Enter number: ";
    cin >> num;
    if (odd_even(num)){
        cout << "odd";
    }
    else{
        cout << "even";
    }
}