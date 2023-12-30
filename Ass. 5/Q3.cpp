#include<iostream>
using namespace std;

int main(){
    int n1,n2,ld,dc1=0,dc2=0,pow=1;
    cout<<"Enter two binary numbers:";
    cin>>n1;
    cin>>n2;
    while(n1>0){
        ld=n1%10;
        dc1+=ld*pow;
        pow*=2;
        n1=n1/10;
    }
    pow=1;
    while(n2>0){
        ld=n2%10;
        dc2+=ld*pow;
        pow*=2;
        n2=n2/10;
    }
    cout << dc1 << endl << dc2 << endl;
    if(dc1>dc2){
        cout<<"Greatest number is "<<dc1;
    }
    else{
        cout<<"Greatest no. is "<<dc2;
    }
    return 0;
}