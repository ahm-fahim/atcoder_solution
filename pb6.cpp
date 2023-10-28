//https://atcoder.jp/contests/abc233/tasks/abc233_b

#include <bits/stdc++.h>

using namespace std;

int main() {
    int l, r;
    cin >> l >> r;
    string s;
    cin >> s;

    for (int i = l - 1, j = r - 1; i < j; i++, j--) {
        char tmp = s[i];
        s[i] = s[j];
        s[j] = tmp;
    }

    for (int i = 0; i < s.size(); i++) {
        cout << s[i];
    }

    return 0;

}