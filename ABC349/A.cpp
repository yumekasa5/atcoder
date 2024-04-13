#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int n;
    int a;
    int sum = 0;
    cin >> n;
    for (int i = 0; i < n - 1; i++)
    {
        cin >> a;
        sum += a;
    }
    int ans;
    ans = -sum;
    cout << ans << endl;
}