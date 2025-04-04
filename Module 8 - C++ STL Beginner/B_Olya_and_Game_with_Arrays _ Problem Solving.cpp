#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;

        vector<pair<long long, long long> > first_2_mins;

        for (int i = 0; i < n; i++) // n
        {
            long long m;
            cin >> m;
            vector<long long> a(m);
            for (long long j = 0; j < m; j++) // m
                cin >> a[j];
            sort(a.begin(), a.end()); // mlog2m
            first_2_mins.push_back({a[1], a[0]});
        }

        sort(first_2_mins.begin(), first_2_mins.end()); // nlog2n
        long long answer = 0;

        long long first_min = first_2_mins[0].second;
        for (int i = 1; i < n; i++) // n
        {
            answer += first_2_mins[i].first;
            first_min = min(first_min, first_2_mins[i].second);
        }
        answer += first_min;

        cout << answer << endl;
    }
    return 0;
}

// tc - O(n*mlog2m + nlog2n) ~ O(10^6)
// sc - O(n)