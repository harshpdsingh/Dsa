#include<iostream>
using namespace std;

int main(){
    int i,j,c=1,k;
    for(i=5;i>=1;i--){
        for(j=i-1;j>=1;j--){
            cout<<" ";
        }
        k=65;
        for(j=1;j<=c;j++){
            cout<<(char)k;
            k++;
        }
        c+=2;
        cout<<endl;
    }
    c=7;
    for(i=1;i<=4;i++){
        for(j=1;j<=i;j++){
            cout<<" ";
        }
        k=65;
        for(j=1;j<=c;j++){
            cout<<(char)k;
            k++;
        }
        c-=2;
        cout<<endl;
    }
    return 0;
    
}