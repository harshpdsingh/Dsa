#include<iostream>
using namespace std;

int main(){
    int s=0,i,n;
    cout<<"Enter a no."<<endl;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        s=s+i;
    }
    cout<<"Sum = "<<s<<endl;

    for(i=5;true;i+=5)
    {
        if (i%7==0)
        {
            cout<<i<<endl;
            break;
        }
        
    }
    return 0;
}