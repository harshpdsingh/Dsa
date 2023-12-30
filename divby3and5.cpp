#include<iostream>
using namespace std;

int main(){
    int num;
    cout << "Enter a no.:";
    cin >> num;
    if((num%5==0) || (num%3==0))
    {
        cout << "No. is divisble by 3 or 5" << endl;
    }
    else
    {
        cout << "Number is not divisible by 3 or 5" << endl;
    }
    return 0;
}