//https://atcoder.jp/contests/abc235/tasks/abc235_b

#include <bits/stdc++.h>

using namespace std;


int main() {
    int n;
    cin >> n;

    const int mx = 1e5+5;
    int cnt[mx];

    for (int i = 1; i <= n * 4 - 1; i++){
        int card;
        cin >> card;
        cnt[card]++;
    }

    for (int i = 1; i <= n; i++) {
        if (cnt[i] % 2 == 1) {
            cout << i;
            break;
        }
    }

    return 0;
}
