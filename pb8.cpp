#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n, m;
    cin >> n >> m;
    long long arr[n];

    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
    }

    long long interval = arr[1] + m;

    long long ans = 0;
    for (int i = 1; i <= n; i++)
    {
        if (arr[i] < interval)
        {
            ans++;
        }
        if(arr[i]> interval){
            break;
        }
    }

    cout << ans;
}