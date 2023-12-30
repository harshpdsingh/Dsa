#include<iostream>
using namespace std;

int main(){
    int n,fd,sd,td,e;
    cout<<"Enter a no.:";
    cin>>n;
    fd=n/100;
    e=n%100;
    sd=e/10;
    td=e%10;
    cout<<fd<<endl;
    cout<<sd<<endl;
    cout<<td<<endl;
    cout<<"Sum = "<<(fd+sd+td);
    return 0;

}