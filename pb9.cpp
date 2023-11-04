// https://atcoder.jp/contests/abc234/tasks/abc234_b
#include <bits/stdc++.h>
using namespace std;

const int mx = 123;
int x[mx], y[mx];

int main()
{
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        cin >> x[i] >> y[i];
    }

    int mxDist = 0;

    for (int i = 1; i <= n; i++)
    {
        for (int j = i + 1; j <= n; j++)
        {
            int curDist = (((x[i] - x[j]) * (x[i] - x[j])) + ((y[i] - y[j]) * (y[i] - y[j])));

            if (curDist > mxDist)
            {
                mxDist = curDist;
            }
        }
    }

    cout << fixed << setprecision(10);
    cout << double(sqrt(mxDist));

    return 0;
}