#include<iostream>
using namespace std;

int main(){
    int n,i,j,f;
    cout<<"Enter how many factorials to calculate:";
    cin>>n;
    for(i=1;i<=n;i++){
        f=1;
        for(j=1;j<=i;j++){
            f=f*j;
        }
        cout << "Factorial of "<<i<<" = "<<f<<endl;
    }
    return 0;
}