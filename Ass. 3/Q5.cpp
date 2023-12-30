#include <iostream>
using namespace std;

int main()
{
    char ch;
    float n1, n2;
    cout << "Enter an operator(+,-,*,/):-" ;
    cin >> ch;
    switch (ch)
    {
    case '+':
        cout << "Enter 1st Number:" << endl;
        cin >> n1;
        cout << "Enter 2nd Number:" << endl;
        cin >> n2;
        cout << "Output = " << (n1 + n2) << endl;
        break;
    case '-':
        cout << "Enter 1st Number:" << endl;
        cin >> n1;
        cout << "Enter 2nd Number:" << endl;
        cin >> n2;
        cout << "Output = " << (n1 - n2) << endl;
        break;
    case '*':
        cout << "Enter 1st Number:" << endl;
        cin >> n1;
        cout << "Enter 2nd Number:" << endl;
        cin >> n2;
        cout << "Output = " << (n1 * n2) << endl;
        break;
    case '/':
        cout << "Enter 1st Number:" << endl;
        cin >> n1;
        cout << "Enter 2nd Number:" << endl;
        cin >> n2;
        cout << "Output = " << (n1 / n2) << endl;
        break;
    default:
        cout << "Invalid Choice." << endl;
        break;
    }
    return 0;
}