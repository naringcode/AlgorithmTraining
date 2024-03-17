#include <bits/stdc++.h>

using namespace std;

int n;

int a;
int b;

vector<pair<int, int>> vec;
int dp[104];

int res = 0;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> a >> b;

        vec.push_back({ a, b });
    }

    sort(vec.begin(), vec.end());

    for (int i = 0; i < n; i++)
    {
        dp[i] = 1;

        for (int j = 0; j < i; j++)
        {
            if (vec[i].second > vec[j].second)
            {
                dp[i] = max(dp[i], dp[j] + 1);
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        res = max(res, dp[i]);
    }

    cout << n - res;

    return 0;
}