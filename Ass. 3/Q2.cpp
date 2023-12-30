#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter a no."<<endl;
    cin>>n;
    if (n<0)
    {
        cout<<"Absolute Value = "<<(n*(-1))<<endl;
    }
    else
    {
        cout<<"Absolute Value = "<<n<<endl;
    }
    return 0;
}