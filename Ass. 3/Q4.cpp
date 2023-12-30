#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter a no.:" << endl;
    cin >> n;
    if (n<0)
    {
        cout << "The Number is negative and is skipped." << endl;
    }
    else
    {
        cout << "Number = " << n;
    }
    return 0;
}