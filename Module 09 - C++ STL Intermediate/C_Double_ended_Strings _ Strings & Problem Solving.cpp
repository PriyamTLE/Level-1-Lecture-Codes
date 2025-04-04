#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string A, B;
        cin >> A >> B;
        int n = A.size(), m = B.size();
        int ans = 0;
        for (int len = 1; len <= min(n, m); len++) // min(n,m)
        {
            for (int i = 0; i + len <= n; i++) // n
            {
                for (int j = 0; j + len <= m; j++) // m
                {
                    if (A.substr(i, len) == B.substr(j, len)) // len
                    {
                        ans = max(ans, len);
                    }
                }
            }
        }
        cout << A.size() + B.size() - 2 * ans << endl;
    }
    return 0;
}

// Time Complexity: O(n*m*min(n,m)*len) - (20*20*20*20) -  160000 - 10^5
// Space Complexity: O(1)