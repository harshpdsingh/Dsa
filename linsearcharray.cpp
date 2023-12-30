#include<iostream>
using namespace std;

int main(){
    int n,i;
    cout << "Enter a size of array : ";
    cin >> n;
    int arr[n];
    for(i=0;i<n;i++){
        cout << "Enter an element : ";
        cin >> arr[i];
    }
    cout << "Enter the element to search : ";
    int es,c=0;
    cin >> es;
    for(i=0;i<n;i++){
        if(es == arr[i]){
            cout << "Index of the element = " << i;
            c++;
            break;
        }
    }
    if(c==0){
        cout << "-1";
    }
    return 0;
}