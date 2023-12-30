#include<iostream>
using namespace std;

int main(){
    int a,b,i,p=1;
    cout << "Enter no.:";
    cin>>a;
    cout<< "Enter to the power:";
    cin>>b;
    for(i=1;i<=b;i++){
        p*=a;
    }
    cout<<"Result = "<<p;
    return 0;
}