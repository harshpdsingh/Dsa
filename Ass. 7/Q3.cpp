#include<iostream>
using namespace std;

void form(int arr[],int n){
    int i;
    for(i=0;i<n;i++){
        cout << "Enter an element : ";
        cin >> arr[i];
    }
    return;
}

void reverse(int arr[],int n){
    int i;
    cout << "Reverse of an array : " << endl;
    for(i=n-1;i>=0;i--){
        cout << arr[i] << endl;
    }
    return;
}

int main(){
    int n;
    cout << "Enter size of an array (2-100) : ";
    cin >> n;
    int arr[n];
    form(arr,n);
    reverse(arr,n);
    return 0;
}