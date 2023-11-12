#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<vector<int>> sheet(n, vector<int>(4));
    vector<vector<bool>> table(100, vector<bool>(100));
    for (int i = 0; i < n; i++)
    {
        cin >> sheet[i][0] >> sheet[i][1] >> sheet[i][2] >> sheet[i][3];
        for (int x = sheet[i][0]; x < sheet[i][1]; x++)
        {
            for (int y = sheet[i][2]; y < sheet[i][3]; y++)
            {
                table[x][y] = true;
            }
        }
    }
    int ans = 0;
    for (int i = 0; i < 100; i++)
    {
        for (int j = 0; j < 100; j++)
        {
            if (table[i][j])
            {
                ans++;
            }
        }
    }
    cout << ans << endl;
    return 0;
}