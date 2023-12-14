#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool hasWinningStrategy(int k, const vector<int> &piles)
{
    int turns = 0;
    for (int stones : piles)
    {
        turns += (stones - 1) / k;
    }
    return (turns % 2) == 1; // Alice wins if the total turns are odd
}

int findMaxWinningK(const vector<int> &piles)
{
    int left = 1;
    int right = *max_element(piles.begin(), piles.end());
    int maxWinningK = -1;

    while (left <= right)
    {
        int mid = left + (right - left) / 2;
        if (hasWinningStrategy(mid, piles))
        {
            maxWinningK = max(maxWinningK, mid);
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }

    return maxWinningK;
}

int main()
{
    int N;
    cin >> N;

    vector<int> piles(N);
    for (int i = 0; i < N; ++i)
    {
        cin >> piles[i];
    }

    int maxWinningK = findMaxWinningK(piles);

    if (maxWinningK == 0)
    {
        cout << 0 << "\n";
    }
    else if (maxWinningK  == -1)
    {
        cout << -1 << "\n";
    }
    else
    {
        cout << maxWinningK << "\n";
    }

    return 0;
}
