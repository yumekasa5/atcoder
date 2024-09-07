#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int n;
    cin >> n;
    vector<vector<int>> vec(n, vector<int>(n, 0));
    for(int i =0; i < n; i++)
    {
        for(int j = 0; j < i + 1; j++)
        {
            cin >> vec[i][j];
        }
    }

    int element = 1;
    for(int i = 1; i <= n; i++)
    {
        int tmp = 0;
        if(element >= i)
        {
            tmp = vec[element-1][i-1];
        }
        else if(element < i)
        {
            tmp = vec[i-1][element-1];
        }
        element = tmp;
    }

    cout << element << endl;
    return 0;
}