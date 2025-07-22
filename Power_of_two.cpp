#include<iostream>
using namespace std;
int power_two(int num){
    return ((num > 0) && (num & (num -1))) == 0;
}

int main(){
    int num;
    cout<<"Enter number: ";
    cin >> num;
    if (power_two(num)){
        cout << "True";
    }
    else{
        cout << "False";
    }
}