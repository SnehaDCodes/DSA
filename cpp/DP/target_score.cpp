/*A player wants to achieve a target score of n.

In one move, the player can score:
- 1 point
- 2 points
- 3 points
Find the total number of different ways to achieve the target score.*/

#include <iostream>
#include <vector>
using namespace std;

int countWays(int n)
{
    vector<int> dp(n + 1, 0);

    dp[0] = 1;

    for (int i = 1; i <= n; i++)
    {
        dp[i] += dp[i - 1];

        if (i >= 2)
            dp[i] += dp[i - 2];

        if (i >= 3)
            dp[i] += dp[i - 3];
    }

    return dp[n];
}

int main()
{
    int n;

    cout << "Enter target score: ";
    cin >> n;

    cout << "Total ways: " << countWays(n);

    return 0;
}