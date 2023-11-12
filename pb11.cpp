#include <bits/stdc++.h>
using namespace std;
const int mx = 1e5 + 123;
int main()
{
    double b;
    cin >> b;

    double ans = 0;
    for (int i = 1; i <= mx; i++)
    {
        if (pow(i, i) == b)
        {
            ans = i;
            break;
        }
    }

    if (ans != 0)
    {
        cout << ans << "\n";
    }
    else
    {
        cout << "-1\n";
    }

    return 0;
}