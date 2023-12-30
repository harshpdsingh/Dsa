#include<iostream>
using namespace std;

int fmax(int n,int arr[]){
    int i,m=arr[0];
    for(i=0;i<n;i++){
        if(arr[i]>m){
            m=arr[i];
        }
    }
    return m;
}

int fmin(int n,int arr[]){
    int i,s=arr[0];
    for(i=0;i<n;i++){
        if(arr[i]<s){
            s=arr[i];
        }
    }
    return s;
}
int main(){
    int i,n,sum;
    cout << "Enter size of array between 2 and 100 : ";
    cin >> n;
    int arr[n];
    for(i=0;i<n;i++){
        cout << "Enter an element : ";
        cin >> arr[i];
    }
    sum=fmax(n,arr)+fmin(n,arr);
    cout << "Sum of greatest and smallest number = " << sum;
    return 0;
}