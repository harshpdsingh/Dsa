#include<iostream>
using namespace std;

int main(){
    int n,i,j;
    cout<<"Enter value of n:"<<endl;
    cin>>n;
    for (i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}