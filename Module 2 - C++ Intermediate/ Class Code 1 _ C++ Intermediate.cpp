#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            cout << a[i] << " " << a[j] << endl;
        }
    }

    return 0;
}

// i = 0,0,0,1,1,2
// j = 0,1,2,1,2,2

// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int n;
//     cin >> n;
//     int a[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> a[i];
//     }

//     int ans = INT_MIN; // lowest value a integer can have
//     cout << ans << endl;
//     for (int i = 0; i < n; i++)
//     {
//         ans = max(ans, a[i]);
//         cout << ans << " ";
//     }
//     cout << endl;
//     cout << ans << endl;

//     return 0;
// }

// // #include <bits/stdc++.h>
// // using namespace std;

// // int main()
// // {
// //     int n;
// //     cin >> n;
// //     int ans = 1;
// //     for (int i = 1; i <= n; i++)
// //     {
// //         ans = ans * i;
// //     }
// //     cout << ans << endl;
// //     return 0;
// // }