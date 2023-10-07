#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long T, A, K;
    cin >> T >> A >> K;

    if (T + A <= K)
    {
        cout << "0 0\n";
    }
    else if (T >= K)
    {
        cout << (T - K) << " " << A << "\n";
    }
    else
    {
        cout << "0 " << A - (K - T) << "\n";
    }

    return 0;
}