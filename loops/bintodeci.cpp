#include<iostream>
using namespace std;

int main(){
    int n,pow=1,s=0,ld;
    cout << "Enter a binary no.:";
    cin >> n;
    while(n!=0){
        ld=n%10;
        s=s+(ld*pow);
        pow*=2;
        n=n/10;
    }
    cout << "Decimal conversion = " << s <<endl;
    return 0;
}