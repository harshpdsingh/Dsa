#include<iostream>
using namespace std;

int main(){
    int s=0,i=1,n,num;
    cout<<"enter a no.:"<<endl;
    cin>>n;
    do{
        cout<<"Enter a no.:";
        cin>>num;
        s+=num;
        i++;
    }while(i<=n);
    cout<<s<<endl;
    return 0;
}