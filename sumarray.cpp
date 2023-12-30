#include<iostream>
using namespace std;

int main(){
    int n,i,s=0;
    cout << "Enter size of the array : ";
    cin >> n;
    int arr[n];
    for(i=0;i<n;i++){
        cin >> arr[i];
        s=s+arr[i];
    }
    cout << "Sum of elements in the given array = " << s;
    return 0;
}