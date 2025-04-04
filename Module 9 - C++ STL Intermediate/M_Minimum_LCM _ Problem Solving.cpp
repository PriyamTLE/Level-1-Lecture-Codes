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
        long long a = 1;
        for (long long fac = 2; fac * fac <= n; fac++) // sqrtn
        {
            if (n % fac == 0)
            {
                a = n / fac;
                break;
            }
        }
        cout << a << " " << n - a << endl;
    }
    return 0;
}

// tc - O(sqrt(10^9)) = O(10^4)
// sc - O(1)