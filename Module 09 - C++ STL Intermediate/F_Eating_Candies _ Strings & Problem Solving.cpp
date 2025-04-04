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
        for (long long i = 0; i < n; i++)
            cin >> a[i];

        long long left = 0;
        long long right = n - 1;

        long long alice_weight = a[0];
        long long bob_weight = a[n - 1];

        long long max_candies = 0;

        while (left < right)
        {
            if (alice_weight < bob_weight)
            {
                left++;
                alice_weight += a[left];
            }
            else if (alice_weight > bob_weight)
            {
                right--;
                bob_weight += a[right];
            }
            else
            {
                max_candies = max(max_candies, left + 1 + n - right);
                left++;
                right--;
                alice_weight += a[left];
                bob_weight += a[right];
            }
        }
        cout << max_candies << endl;
    }
    return 0;
}

// Time Complexity: O(n)
// Space Complexity: O(n)