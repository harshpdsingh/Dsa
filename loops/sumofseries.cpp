#include<iostream>
using namespace std;

int main(){
    int n,i,s=0;
    cout<<"Enter value of n:";
    cin>>n;
    for(i=1;i<=n;i++){
        if(i%2==0){
            s=s+((-1)*i);
        }
        else{
            s=s+i;
        }
    }
    cout<<"Sum of given series = "<<s;
    return 0;
}