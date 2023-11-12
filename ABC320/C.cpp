#include <bits/stdc++.h>
using namespace std;

// まだ理解できていない
int main()
{
    int m;
    vector<string> s(3);
    cin >> m;
    for (int i = 0; i < 3; i++)
    {
        cin >> s[i];
    }
    int minTime = INT_MAX;

    for (int i = 0; i < 3 * m; i++)
    {
        for (int j = 0; j < 3 * m; j++)
        {
            for (int k = 0; k < 3 * m; k++)
            {
                if ((i != j) && (i != k) && (j != k) && (s[0][i % m] == s[1][j % m]) && (s[0][i % m] == s[2][k % m]))
                {
                    int tmp = max(i, j);
                    int tmp2 = max(tmp, k);
                    minTime = min(minTime, tmp);
                }
            }
        }
    }

    if (minTime == INT_MAX)
    {
        cout << -1 << endl;
    }
    else
    {
        cout << minTime << endl;
    }
    return 0;
}