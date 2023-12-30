#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter a no.:";
    cin>>n;
    if((n%2)==0){
        cout<<"No. entered is even.";
    }
    else{
        cout<<"No. entered is odd.";
    }
    return 0;
}