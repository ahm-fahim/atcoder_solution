//https://atcoder.jp/contests/abc151/tasks/abc151_b
#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, k, m;
    cin >> n >> k >> m;

    int total = 0;

    for (int i = 1; i <= n - 1; i++) {
        int a;
        cin >> a;
        total += a;
    }

    int x = (n * m) - total;

    if (x < 0) x = 0;
    if (x > k) x = -1;

    cout << x << "\n";

    return 0;
}
