#include <bits/stdc++.h>
using namespace std;


int main(){
    map<int, int> cnt;

    int n;
    cin >> n;

    for (int i = 1; i <= n;i++){
        int a;
        cin >> a;
        cnt[a]++;
    }

    int ans = 0;

    for(auto i: cnt){
        if(i.first<= i.second)
            ans +=( i.second - i.first);
        else
            ans += (i.second);
    }
    cout << ans << "\n";
}