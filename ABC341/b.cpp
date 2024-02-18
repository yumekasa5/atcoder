#include <bits/stdc++.h>
using namespace std;

void convert(int i, vector<long long> &s, vector<long long> &t, vector<long long> &a)
{
    long long unit = a[i] / s[i];
    a[i] -= s[i] * unit;
    a[i + 1] += t[i] * unit;
    return;
}

int main()
{
    long long n;
    cin >> n;
    vector<long long> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    vector<long long> s(n - 1);
    vector<long long> t(n - 1);
    for (int i = 0; i < n - 1; i++)
    {
        cin >> s[i];
        cin >> t[i];
    }

    for (int i = 0; i < n - 1; i++)
    {
        convert(i, s, t, a);
    }

    long long ans = a[n - 1];
    cout << ans << endl;
    return 0;
}