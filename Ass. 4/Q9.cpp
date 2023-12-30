#include <iostream>
using namespace std;

int main()
{
    int n, i, j, c, d, k, e,f=0;
    cout << "Enter a positive no.:";
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        c = 0;
        for (j = 1; j <= i; j++)
        {
            if (i % j == 0)
            {
                c++;
            }
        }
        if (c == 2)
        {
            for (k = 1; k <= n; k++)
            {
                d = 0;
                for (e = 1; e <= k; e++)
                {
                    if (k % e == 0)
                        d++;
                }
                if (d == 2)
                {
                    if (i + k == n && i<=k)
                    {
                        cout << i << " + " << k << " = " << n << endl;
                        f++;
                    }
                }
            }
        }
    }
    if(f==0){
        cout << " cannot be expressed as sum of two prime nos.";
    }
    return 0;
}
