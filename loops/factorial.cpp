#include<iostream>
using namespace std;

int main(){
    int n,i,f=1;
    cout << "Enter value of n:";
    cin>>n;
    if(n>0){
        for(i=1;i<=n;i++){
            f=f*i;
        }
    }
    else if(n<0){
        for(i=-1;i>=n;i--){
            f=f*i;
        }
    }
    else{
        f=0;
    }
    cout<<"Factorial of "<<n<<" = "<<f;
    return 0;
}