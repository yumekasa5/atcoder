#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    string s, t;
    cin >> s >> t;
    int ans = -1;
    string pre = t.substr(0, n);
    string suf = t.substr(t.length() - n);
    if (s == pre && s == suf)
    {
        ans = 0;
    }
    else if (s == pre && s != suf)
    {
        ans = 1;
    }
    else if (s != pre && s == suf)
    {
        ans = 2;
    }
    else if (s != pre && s != suf)
    {
        ans = 3;
    }
    cout << ans << endl;
    return 0;
}