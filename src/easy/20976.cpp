#include <bits/stdc++.h>

using namespace std;

int arr[3];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    cin >> arr[0] >> arr[1] >> arr[2];

    sort(arr, arr + 3);

    cout << arr[1];

    return 0;
}
