#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;
int convertTimeToMinutes(string timeStr)
{
    string hr = "";
    string min = "";
    int flag = 0;
    for (auto i : timeStr)
    {
        if (i == ':')
        {
            flag = 1;
            continue;
        }
        !flag ? hr += i : min += i;
    }
    int totalMinutes = stoi(hr) * 60 + stoi(min);
    return totalMinutes;
}
bool isPalindromeTime(int minutes)
{
    string hr = to_string(minutes / 60);
    if (hr.size() == 1)
        hr = '0' + hr;
    string mins = to_string(minutes % 60);
    if (mins.size() == 1)
        mins = '0' + mins;
    return hr[0] == mins[1] && hr[1] == mins[0];
}

void solve()
{
    string s;
    cin >> s;
    int x;
    cin >> x;

    int res = 0;
    int currentTimeInMins = convertTimeToMinutes(s);
    map<int, bool> visited;
    while (1)
    {
        if (visited[currentTimeInMins])
            break;
        visited[currentTimeInMins] = 1;
        if (isPalindromeTime(currentTimeInMins))
        {
            res++;
        }

        currentTimeInMins += x;
        currentTimeInMins %= 24 * 60;
    }
    cout << res << '\n';
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
