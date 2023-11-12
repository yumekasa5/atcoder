#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    int ans = int(pow(a, b)) + int(pow(b, a));
    cout << ans << endl;
    return 0;
}