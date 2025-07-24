#include<iostream>
using namespace std;
int odd_times(int arr[] , int n){
    int result = 0;
    for(int i = 0 ; i < n ; i++){
        result ^= arr[i];
    }
    return result;
}




void Input(int arr[] ,int n){
    cout << "Enter " << n << " elements: ";
    for(int i = 0; i<n ; i++){
        cin >> arr[i];
    }
}

void printArray(int arr[], int n){
    cout << "Given elements are: ";
    for(int i = 0; i<n ; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main(){
    int n;
    cout << "Enter array element: ";
    cin >> n;
    int arr[n];

    Input(arr,n);
    printArray(arr,n);
    cout << odd_times(arr,n);


}