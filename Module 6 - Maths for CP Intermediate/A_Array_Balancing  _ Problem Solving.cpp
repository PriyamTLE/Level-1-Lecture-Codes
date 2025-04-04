#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        int b[n];
        for (int i = 0; i < n; i++) // n
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++) // n
        {
            cin >> b[i];
        }
        // input

        ll sum = 0;
        for (int i = 0; i < n - 1; i++) // n
        {
            if ((abs(a[i] - a[i + 1]) + abs(b[i] - b[i + 1])) > (abs(a[i] - b[i + 1]) + abs(b[i] - a[i + 1])))
            {
                swap(a[i + 1], b[i + 1]); // do swap, since this is better case
            }
        }
        for (int i = 0; i < n - 1; i++)
        {
            sum += abs(a[i] - a[i + 1]) + abs(b[i] - b[i + 1]);
        }
        cout << sum << endl;
    }
}

// tc - O(n)
// sc - O(n)
