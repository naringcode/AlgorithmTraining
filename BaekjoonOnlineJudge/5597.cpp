#include <bits/stdc++.h>

using namespace std;

int arr[31];
int n;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    for (int i = 0; i < 28; i++)
    {
        cin >> n ;

        arr[n] = 1;
    }

    for (int i = 1; i <= 30; i++)
    {
        if (arr[i] == 0)
        {
            cout << i << '\n';
        }
    }

    return 0;
}
