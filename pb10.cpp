//https://atcoder.jp/contests/abc327/tasks/abc327_a
#include <bits/stdc++.h>
using namespace std;

bool hasAdjacentOccurrences(const string& str) {
    for (int i = 0; i < str.length() - 1; ++i) {
        if ((str[i] == 'a' && str[i + 1] == 'b') || (str[i] == 'b' && str[i + 1] == 'a')) {
            return true;
        }
    }
    return false;
}

int main() {
    int N;
    cin>> N;

    string S;

    for(int i = 0; i<N; i++){
        char c;
        cin >> c;
        S+=c;
    }


    if (hasAdjacentOccurrences(S)) {
        cout << "Yes\n";
    } else {
        cout << "No\n";
    }

    return 0;
}
