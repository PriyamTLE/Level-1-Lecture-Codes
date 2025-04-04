#include <bits/stdc++.h>
using namespace std;

bool checker(long long mid, vector<long long> a, long long n, long long k)
{
    long long students = 0;
    for (long long i = 0; i < n; i++)
    {
        students += min(mid, a[i]);
    }
    return students >= (mid * k);
}

int main()
{
    long long k;
    cin >> k;
    long long n;
    cin >> n;
    vector<long long> a(n);
    for (long long i = 0; i < n; i++)
        cin >> a[i];

    long long low = 0;
    long long high = 0;
    for (long long i = 0; i < n; i++)
    {
        high += a[i];
    }
    high /= k;

    long long ans;
    while (low <= high)
    {
        long long mid = (low + high) / 2;

        if (checker(mid, a, n, k))
        {
            ans = mid;
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    cout << ans << endl;
    return 0;
}