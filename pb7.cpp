// https://atcoder.jp/contests/abc326/tasks/abc326_a

#include <bits/stdc++.h>
using namespace std;

int main() {
    int x, y;
    cin >> x >> y;

    if (x > y) {
        int res_up = x - y;
        if (res_up <= 3) {
            cout << "Yes" << '\n';
        } else {
            cout << "No" << '\n';
        }
    }
    if (x < y) {
        int res_down = y - x;
        if (res_down <= 2) {
            cout << "Yes" << '\n';
        } else {
            cout << "No" << '\n';
        }
    }

    return 0;
}

/*#include <bits/stdc++.h>
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
}*/