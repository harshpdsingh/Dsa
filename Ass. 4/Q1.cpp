#include<iostream>
using namespace std;

int main(){
    int n,i,f=1;
    cout<<"Enter a no. to calculate its factorial:";
    cin>>n;
    for ( i = 1; i <= n; i++)
    {
        f=f*i;
    }
    cout << "The factorial of " << n << " is " << f << endl;
    return 0;  
}