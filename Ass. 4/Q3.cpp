#include<iostream>
using namespace std;

int main(){
    int n,i,s=0;
    cout << "Enter a no.:";
    cin >> n;
    for(i=1;i<=n;i++){
        s=s+i;
    }
    cout << "Sum of natural numbers upto " << n <<" = " << s;
    return 0;
}