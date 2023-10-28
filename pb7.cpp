// https://atcoder.jp/contests/abc326/tasks/abc326_a
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x, y;
    cin >> x >> y;

    if((x>y && (x-y<=3)) || (x<y && (y-x<=2))){
        cout << "YES\n";
    }else{
        cout << "NO\n";
    }

    return 0;
}