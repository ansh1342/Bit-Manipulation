// #include<iostream>
// using namespace std;
// int set_or_unset(int num , int i){
//     return (num & (1 << i)) != 0;
// }

// int main(){
//     int num;
//     cout << "Enter number: ";
//     cin >> num;
//     int i;
//     cout << "Enter position: ";
//     cin >> i;
//     if(set_or_unset(num,i)){
//         cout << "Set";
//     }
//     else{
//         cout << "Unset";
//     }
// }



// Using right shift operator

#include<iostream>
using namespace std;
int set_or_unset(int num , int i){
    return ((num >> i) & 1) != 0;
}

int main(){
    int num;
    cout << "Enter number: ";
    cin >> num;
    int i;
    cout << "Enter position: ";
    cin >> i;
    if(set_or_unset(num,i)){
        cout << "Set";
    }
    else{
        cout << "Unset";
    }
}