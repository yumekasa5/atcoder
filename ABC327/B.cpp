#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int max = *max_element(a.begin(), a.end());
    int _max = max;
    int ans = 0;
    vector<int> b;
    for (int i = 0; i < n; i++)
    {
        if (a[i] != _max)
        {
            b.push_back(a[i]);
        }
    }
    ans = *max_element(b.begin(), b.end());
    cout << ans << endl;

    return 0;
}