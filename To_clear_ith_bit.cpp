#include<iostream>
using namespace std;
int clear_bit(int num, int i){
    return num & (~(1 << i));
}

int main(){
    int num;
    int i;
    cout << "Enter number: ";
    cin >> num;
    cout << "Enter position: ";
    cin >> i;
    cout << clear_bit(num,i);
}