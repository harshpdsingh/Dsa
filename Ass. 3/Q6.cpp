#include<iostream>
using namespace std;

int main(){
    int m;
    cout << "Enter your Marks:" << endl;
    cin>> m;
    if (m<=100&&m>=90)
    {
        cout << "Your grade is A+.";
    }
    else if (m>=80)
    {
        cout << "Your grade is A.";
    }
    else if (m>=70)
    {
        cout << "Your grade is B+.";
    }
    else if (m>=60)
    {
        cout << "Your grade is B.";
    }
    else if (m>=50)
    {
        cout << "Your grade is C.";   
    }
    else if (m>=40)
    {
        cout << "Your grade is D.";
    }
    else if (m>=30)
    {
        cout << "Your grade is E.";
    }
    else if (m>=0)
    {
        cout << "Your grade is F.";
    }
    else
    {
        cout << "Invalid!!";
    }
    return 0;
}