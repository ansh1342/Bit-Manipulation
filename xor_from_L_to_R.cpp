// Brute force

// #include<iostream>
// using namespace std;
// int xor_L_to_R(int L,int R){
//     int Ans = 0;
//     for(int i = L; i <= R; i++){
//         Ans = Ans ^ i;
//     }
//     return Ans;
// }

// int main(){
//     int L;
//     cout << "Enter L: ";
//     cin >> L;
//     int R;
//     cout << "Enter R: ";
//     cin >> R;
//     cout << xor_L_to_R(L,R);
// }


#include<iostream>
using namespace std;
int xor_till(int n){
    if (n % 4 == 0){
        return n;
    } 
    else if(n % 4 == 1){
        return 1;
    }
    else if(n % 4 == 2){
        return n+1;
    }
    else{
        return 0;
    }
}

int xor_L_to_R(int L , int R){
    return xor_till(R) ^ xor_till(L-1);        
}

int main(){
    int L;
    cout << "Enter L: ";
    cin >> L;
    int R;
    cout << "Enter R: ";
    cin >> R;
    cout << xor_L_to_R(L,R);
}