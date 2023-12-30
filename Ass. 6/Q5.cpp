#include<iostream>
using namespace std;

void prime(int a,int b){
    int i,k=0,j;
    for(i=a;i<=b;i++){
        int c=0;
        for(j=1;j<=i;j++){
            if(i%j==0){
                c++;
            }
        }
        if(c==2){
            cout << i <<" ";
            k++;
        }
    }
    if(k==0){
        cout<<"No prime numbers found in between.";
    }
    return;
}

int main(){
    int a,b;
    cout << "Enter first number : ";
    cin>>a;
    cout << "Enter second number : ";
    cin>>b;
    prime(a,b);
    return 0;
}