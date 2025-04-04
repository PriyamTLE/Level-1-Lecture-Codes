#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long w, h, n;
    cin >> w >> h >> n;
    long long low = 0;
    long long high = 1;
    while (1)
    {
        long long nw = high / w;
        long long nh = high / h;
        if (nw * nh >= n)
            break;
        high *= 2;
    }
    long long ans;
    while (low <= high)
    {
        long long mid = (low + high) / 2;
        long long nw = mid / w;
        long long nh = mid / h;
        if (nw * nh >= n)
        {
            ans = mid;
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    cout << ans << endl;
    return 0;
}