#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) //n
        cin >> a[i];

    sort(a, a + n); //nlogn
    if (n == 1) // single candy in picture
    {
        if (a[0] > 1)
        {
            cout << "NO" << endl;
            return;
        }
        else
        {
            cout << "YES" << endl;
            return;
        }
    }

    // candies are more than 1
    if (a[n - 1] - a[n - 2] > 1)
        cout << "NO" << endl;
    else
        cout << "YES" << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}

// tc - O(nlogn) - O(10^5log2(10^5)) = O(10^5*17)
// sc - O(n)