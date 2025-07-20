// # Brute force

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout << "Enter number: ";
//     cin >> n;
//     int Ans = 0;
//     for(int i = 1; i<=n; i++){
//         Ans = Ans ^ i;
//     }
//     cout << Ans;
// }
// Time Complexity - O(n)


// Optimize solution

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter number: ";
    cin>>n;
    if(n%4==0){
        cout<<n<<endl;
    }
    else if(n%4==1){
        cout<<1<<endl;
    }
    else if(n%4==2){
        cout<<n+1<<endl;
    }
    else{
        cout<<0<<endl;
    }
}

// Time Complexity - O(1)