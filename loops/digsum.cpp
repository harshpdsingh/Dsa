#include<iostream>
using namespace std;

int main(){
    int n,s=0;
    cout<<"Enter a no.:"<<endl;
    cin>>n;
    if (n<0)
    {
        n=(-1)*n;
    }
    while(n!=0){
        s+=(n%10);
        n=n/10;
    }
    cout<<"Sum of digits = "<<s<<endl;
    return 0;
}