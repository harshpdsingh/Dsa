#include<iostream>
using namespace std;

int main(){
    int s=0,i,n,paritydigit,con=0,pow=1;
    for(i=1;i<=5;i++){
        cin >> n;
        s+=n;
    }
    while(s!=0){
        paritydigit=s%2;
        con=con+paritydigit*pow;
        pow*=10;
        s=s/2;
    }
    cout << con << endl;
    return 0;
}