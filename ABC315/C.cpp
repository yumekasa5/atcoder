#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<pair<int, int>> ice(n);
    for (int i = 0; i < n; i++)
    {
        cin >> ice[i].first >> ice[i].second;
    }

    vector<int> e1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if ((i != j) && (ice[i].first != ice[j].first))
            {
                e1.push_back(ice[i].second + ice[j].second);
            }
            else if ((i != j) && (ice[i].first == ice[j].first))
            {
                e1.push_back(ice[i].second + (ice[j].second) / 2);
            }
        }
    }
    int ans = *max_element(e1.begin(), e1.end());
    cout << ans << endl;
    return 0;
}