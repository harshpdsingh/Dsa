#include<iostream>
using namespace std;

int main(){
    int n,c=0;
    cout<<"Enter a number:";
    cin>>n;
    while(n>0){
        c++;
        n=n/10;
    }
    cout<<"Nummber entered is a "<<c<<" digit no."<<endl;
    return 0;
}