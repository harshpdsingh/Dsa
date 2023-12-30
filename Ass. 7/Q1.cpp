#include<iostream>
using namespace std;

int main(){
    int n,e=0,o=0,i;
    cout << "Enter the size of the array : ";
    cin >> n;
    int arr[n];
    for(i=0;i<n;i++){
        cout << "Enter an element : ";
        cin >> arr[i];
    }
    for(i=0;i<n;i++){
        if(arr[i]%2==0){
            e++;
        }
        else{
            o++;
        }
    }
    cout << "Even numbers = " << e << endl;
    cout << "Odd numbers = " << o << endl;
    return 0;
}