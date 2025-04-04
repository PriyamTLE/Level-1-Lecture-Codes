#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        vector<long long> a(n);
        map<long long, long long> mp;
        for (long long i = 0; i < n; i++)
        {
            cin >> a[i];
            mp[a[i] - i]++;
        }
        long long ans = 0;
        for (auto it : mp)
        {
            ans += (it.second * (it.second - 1)) / 2;
        }
        cout << ans << endl;
    }
    return 0;
}

// Time Complexity: O(nlogn)
// Space Complexity: O(n)