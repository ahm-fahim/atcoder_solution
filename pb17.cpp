#include <bits/stdc++.h>
using namespace std;

const int MAX_N = 1000;      // boxes
const int MAX_COLORS = 1000; // colors

int boxes[MAX_N + 1];
int colors[MAX_N + 1][MAX_COLORS + 1]; // 2D array to store colors in each box

int main()
{
    int N, Q;
    cin >> N >> Q;

    for (int i = 1; i <= N; ++i)
    {
        cin >> boxes[i];
        colors[i][boxes[i]] = 1; // Initialize color count for each box
    }

    for (int q = 0; q < Q; ++q)
    {
        int a, b;
        cin >> a >> b;

        // Move balls from box a to box b
        for (int i = 1; i <= MAX_COLORS; ++i)
        {
            if (colors[a][i])
            {
                colors[b][i] += 1; // Add the color to box b
                colors[a][i] = 0;  // Remove the color from box a
            }
        }

        // Count the number of different colors in box b
        int count = 0;
        for (int i = 1; i <= MAX_COLORS; ++i)
        {
            if (colors[b][i])
            {
                count++;
            }
        }

        // Print the number of different colors in box b
        cout << count << "\n";
    }

    return 0;
}
