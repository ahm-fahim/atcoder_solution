#include <bits/stdc++.h>

using namespace std;

int main()
{
    int N, M;
    cin >> N >> M;

    // Initialize an array to store the count of votes for each candidate
    int candidateVotes[N + 1] = {0};

    int currentWinner = -1;
    int maxVotes = 0;

    for (int i = 0; i < M; ++i)
    {
        int Ai;
        cin >> Ai;

        // Update the vote count for the current candidate
        candidateVotes[Ai]++;

        // Check if the current candidate has more votes than the current winner
        if (candidateVotes[Ai] > maxVotes || (candidateVotes[Ai] == maxVotes && Ai < currentWinner))
        {
            currentWinner = Ai;
            maxVotes = candidateVotes[Ai];
        }

        // Display the current winner after counting each vote
        cout << currentWinner << "\n";
    }

    return 0;
}