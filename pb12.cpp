#include <bits/stdc++.h>
using namespace std;

int s[1001];

int main()
{
    int n, x;

    cin >> n >> x;

    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> s[i];

        if (s[i] <= x)
        {
            sum += s[i];
        }
    }
    cout << sum << "\n";
}