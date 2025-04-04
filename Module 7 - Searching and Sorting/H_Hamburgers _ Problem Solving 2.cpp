#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    long long have_B, have_S, have_C;
    cin >> have_B >> have_S >> have_C;
    long long price_B, price_S, price_C;
    cin >> price_B >> price_S >> price_C;
    long long money;
    cin >> money;

    long long count_of_B = 0;
    long long count_of_S = 0;
    long long count_of_C = 0;

    for (long long i = 0; i < s.size(); i++)
    {
        if (s[i] == 'B')
            count_of_B++;
        else if (s[i] == 'S')
            count_of_S++;
        else
            count_of_C++;
    }

    long long low = 0;
    long long high = 1e13;
    long long ans;
    while (low <= high)
    {
        long long mid = (low + high) / 2;

        long long money_needed = 0;
        money_needed += max(0LL, mid * count_of_B - have_B) * price_B;
        money_needed += max(0LL, mid * count_of_S - have_S) * price_S;
        money_needed += max(0LL, mid * count_of_C - have_C) * price_C;
        if(money_needed <= money)
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