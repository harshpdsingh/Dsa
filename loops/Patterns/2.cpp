#include<iostream>
using namespace std;

int main(){
    int i,j;
    int n,m;
    cout<<"Enter row and column size for the pattern:";
    cin>>n;
    cin>>m;
    for ( i = 1; i <= n; i++)
    {
        for ( j = 1; j <= m; j++)
        {
            if(i>1&&i<n&&j>1&&j<m){
                cout<<" ";
            }
            else{
                cout<<"*";
            }
        }
        cout<<endl;
    }
    return 0;
}