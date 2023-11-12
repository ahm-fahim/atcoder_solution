#include <bits/stdc++.h>
using namespace std;

int n;
int v[114];
int main()
{
    cin >> n;
    rep1(i, n) cin >> v[i];
    int c = 0;
    rep1(i, 9)
    {
        if (i <= v[i])
            ++c;
        if (i <= v[i * 11])
            ++c;
        if (i * 11 <= v[i])
            ++c;
        if (i * 11 <= v[i * 11])
            ++c;
    }
    cout << c;
}