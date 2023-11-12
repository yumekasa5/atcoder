#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> a(m);
    for (int i = 0; i < m; i++)
    {
        cin >> a[i];
    }
    vector<int> ans(n);
    int day = 0;
    for (int i = 0; i < m; i++)
    {
        for (int j = day; j < a[i]; j++)
        {
            ans[j] = a[i] - (j + 1);
        }
        day = a[i];
    }
    for (int i = 0; i < n; i++)
    {
        cout << ans[i] << endl;
    }
    return 0;
}