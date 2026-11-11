/*Suppose you have a staircase with 4 steps.

You can climb either:
- 1 step at a time
- 2 steps at a time
Find the total number of different ways to reach the fourth step.*/
#include <iostream>
#include <vector>
using namespace std;

int climbStairs(int n) {

    vector<int> dp(n + 1);

    dp[0] = 1;
    dp[1] = 1;

    for (int i = 2; i <= n; i++) {
        dp[i] = dp[i - 1] + dp[i - 2];
    }

    return dp[n];
}

int main() {

    int n;

    cout << "Enter number of stairs: ";
    cin >> n;

    cout << "Total ways: " << climbStairs(n);

    return 0;
}
