#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    vector<long long> primes;
    for (long long i = 2; i <= 100000; i++) // 10^4
    {
        bool is_prime = true;
        for (long long j = 2; j * j <= i; j++) // 10^2
        {
            if (i % j == 0)
            {
                is_prime = false;
                break;
            }
        }
        if (is_prime)
            primes.push_back(i);
    }

    while (t--) // 10^3
    {
        long long d;
        cin >> d;

        long long p = *lower_bound(primes.begin(), primes.end(), 1 + d); // log2(10^4) = 13
        long long q = *lower_bound(primes.begin(), primes.end(), p + d);

        long long a = min(1LL * p * p * p, 1LL * p * q);
        cout << a << endl;
    }
}

// tc - O(t*log2n + 10^6) ~ O(10^6)
// sc - O(10^4)