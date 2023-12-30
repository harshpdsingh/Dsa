#include<iostream>
using namespace std;

int main(){
    int a,b,c;
    cout<<"Enter value of a:";
    cin>>a;
    cout<<"Enter value of b:";
    cin>>b;
    c=b;
    b=a;
    a=c;
    cout<<"Value of a = "<<a<<endl;
    cout<<"value of b = "<<b<<endl;
    return 0;
}