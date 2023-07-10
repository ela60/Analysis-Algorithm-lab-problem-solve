#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int x;
    cin >> x;
    if (x == 1)
    {
        cout << 0 << '\n';
        return;
    }
    int stepNumber = 1;
    int minVal = INT_MAX;
    while (stepNumber * stepNumber <= x)
    {
        int steps = (stepNumber - 1) + ceil((float)(x - stepNumber) / stepNumber);
        minVal = min(minVal, steps);
        stepNumber++;
    }
    cout << minVal << '\n';
}
int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        solve();
    }
}
