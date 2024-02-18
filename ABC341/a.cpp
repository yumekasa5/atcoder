#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string ans;
    for (int i = 0; i <= n; i++)
    {
        ans.append("1");
        if (i < n)
        {
            ans.append("0");
        }
    }
    cout << ans << endl;
    return 0;
}