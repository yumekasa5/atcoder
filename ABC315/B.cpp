#include <bits/stdc++.h>
using namespace std;

int main()
{
    int m;
    cin >> m;
    vector<int> d(m);
    for (int i = 0; i < m; i++)
    {
        cin >> d[i];
    }
    int mid_day = (accumulate(d.begin(), d.end(), 0) + 1) / 2;
    int ans = 0;
    int ans_day = 0;
    int days = 0;
    for (int i = 0; i < m; i++)
    {
        days += d[i];
        if (days >= mid_day)
        {
            ans_day = d[i] - (days - mid_day);
            ans = i + 1;
            break;
        }
    }
    cout << ans << " " << ans_day << endl;
    return 0;
}