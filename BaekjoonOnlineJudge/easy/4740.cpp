#include <bits/stdc++.h>

using namespace std;

string str;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    while (true)
    {
        getline(cin, str);

        if ("***" == str)
            break;

        reverse(str.begin(), str.end());

        cout << str << '\n';
    }

    return 0;
}
