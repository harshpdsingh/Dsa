#include<iostream>
using namespace std;

int main(){
    int n,i,max;
    cout << "Enter size of array : ";
    cin >> n;
    int arr[n];
    for(i=0;i<n;i++){
        cout << "Enter an element : ";
        cin >> arr[i];
    }
    max=arr[0];
    for(i=0;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    cout << "Maximum element in the array = " << max;
    return 0;
}
