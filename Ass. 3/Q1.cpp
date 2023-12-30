#include <iostream>
using namespace std;

int main()
{
    int l, b;
    cout << "Enter Length:" << endl;
    cin >> l;
    cout << "Enter breadth:" << endl;
    cin >> b;
    if (l == b)
    {
        cout << "Square";
    }
    else
    {
        cout << "Rectangle";
    }
    return 0;
}