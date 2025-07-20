#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter number: ";
    cin >> num;
    int i;
    cout <<"Enter position: ";
    cin >> i;

    int original = num;
    num = (num | (1 << i));

    cout << "Original Number : " << original << endl;
    cout << "Number after setting ith bit into number: " << num << endl;
}