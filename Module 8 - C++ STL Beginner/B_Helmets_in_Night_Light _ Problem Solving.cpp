#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        long long n, p;
        cin >> n >> p;
        vector<pair<long long, long long> > v(n);

        for (int i = 0; i < n; i++)
        {
            long long x;
            cin >> x;
            v[i] = {0, x};
        }

        for (int i = 0; i < n; i++)
        {
            long long x;
            cin >> x;
            v[i].first = x;
        }

        // {2,4},{3,3},{2,2},{1,6}...

        sort(v.begin(), v.end()); // O(nlogn)

        long long cost = p;
        long long people = 1;
        for (auto it : v)
        {
            long long numberOfPeopleShared = it.second;
            long long sharingCost = it.first;
            if (sharingCost >= p)  
                break;
            if (people + numberOfPeopleShared > n)
            {
                cost += (n - people) * sharingCost;
                people = n;
                break;
            }
            else
            {
                cost += numberOfPeopleShared * sharingCost;
                people += numberOfPeopleShared;
            }
        }

        cost += (n - people) * p; // chief sharing
        cout << cost << endl;
    }
    return 0;
}

// TC - O(nlogn)
// SC - O(n)