#include<iostream>
using namespace std;
 
int main(){
    int n,fd,sld,e;
    cout<<"Enter a 5 digit no.:";
    cin>>n;
    fd=n/10000;
    e=n/10;
    sld=e%10;
    cout<<fd<<endl;
    cout<<sld<<endl;
    cout<<"Sum = "<<(fd+sld);
    return 0;
}