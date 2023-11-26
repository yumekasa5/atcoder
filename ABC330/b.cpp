#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, l, r;
    cin >> n >> l >> r;
    vector<int> ans;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        int _l = abs(l - a);
        int _r = abs(r - a);
        if (a <= l)
        {
            ans.push_back(l);
        }
        else if (r <= a)
        {
            ans.push_back(r);
        }
        else if (l < a && a < r)
        {
            ans.push_back(a);
        }
    }

    for (int i = 0; i < static_cast<int>(ans.size()); i++)
    {
        cout << ans[i] << " ";
    }
    cout << endl;

    return 0;
}