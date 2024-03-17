#include <bits/stdc++.h>

using namespace std;

int n;

int cost[1004][3];
int dp[1004][3];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    fill(&dp[0][0], &dp[0][0] + 1004 * 3, 999'999'999);

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> cost[i][j];
        }
    }

    dp[0][0] = cost[0][0];
    dp[0][1] = cost[0][1];
    dp[0][2] = cost[0][2];

    for (int i = 1; i < n; i++)
    {
        dp[i][0] = cost[i][0];
        dp[i][1] = cost[i][1];
        dp[i][2] = cost[i][2];

        dp[i][0] += min(dp[i - 1][1], dp[i - 1][2]);
        dp[i][1] += min(dp[i - 1][0], dp[i - 1][2]);
        dp[i][2] += min(dp[i - 1][0], dp[i - 1][1]);
    }

    cout << min({ dp[n - 1][0], dp[n - 1][1], dp[n - 1][2] });

    return 0;
}
