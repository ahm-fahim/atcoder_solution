//https://atcoder.jp/contests/abc235/tasks/abc235_b

#include <bits/stdc++.h>

using namespace std;

const int s = 1e5 + 123;
int arr[s];

int main() {
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++) {
        cin >> arr[i];
    }

    int ans = arr[1];

    for (int i = 1; i <= n; i++) {
        if (arr[i] > arr[i - 1])ans = arr[i];
        else break;
    }

    cout << ans << "\n";

    return 0;
}