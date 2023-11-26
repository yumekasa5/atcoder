#include <bits/stdc++.h>
using namespace std;

int main()
{
    int D;
    cin >> D;
    int d = sqrt(D);
    int ans = D;
    for (int x = 0; x <= d + 1; x++)
    {
        int z = x * x - D;
        if (z >= 0)
        {
            // y = 0
            ans = min(z, ans);
        }
        else
        {
            int y1 = sqrt(-z);     // lower cut
            int y2 = sqrt(-z) + 1; // upper cut
            int temp = min(abs(z + y1 * y1), abs(z + y2 * y2));
            ans = min(ans, temp);
        }
    }
    cout << ans << endl;

    return 0;
}