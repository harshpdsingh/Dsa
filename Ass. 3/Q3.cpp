#include<iostream>
using namespace std;

int main(){
    int Sp,Cp,P,L;
    cout<<"Enter Selling Price:"<<endl;
    cin>>Sp;
    cout<<"Enter Cost Price:"<<endl;
    cin>>Cp;
    P=Sp-Cp;
    L=Cp-Sp;
    if(Sp>Cp)
    {
        cout << "Profit = "<<P<<endl;
    }
    else if (Sp<Cp)
    {
        cout << "Loss = "<<L<<endl;
        
    }
    else
    {
        cout <<"No Profit and No Loss."<<endl;
    }
    return 0;
}