#include <bits/stdc++.h>
using namespace std;

int main()
{
    int age;
    cin >> age;
    // age is always greater than equal to 0
    if (age <= 17)
    {
        cout << "Child" << endl;
    }
    else if (age <= 64)
    {
        cout << "Adult" << endl;
    }
    else
    {
        cout << "Senior Citizen" << endl;
    }
    return 0;
}