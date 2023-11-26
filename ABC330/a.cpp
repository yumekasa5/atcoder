#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, l;
    cin >> n >> l;
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        int a = 0;
        cin >> a;
        if (a >= l)
        {
            ans += 1;
        }
    }

    cout << ans << endl;

    return 0;
}