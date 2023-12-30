#include<iostream>
using namespace std;

int main(){
    int r,c,i,j;
    cout<<"Enter rows of rectangle - ";
    cin>>r;
    cout<<"Enter columns of rectangle - ";
    cin>>c;
    for(i=1;i<=r;i++){
        for(j=1;j<=c;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}