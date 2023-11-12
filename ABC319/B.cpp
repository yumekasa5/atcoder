#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<char> ans(n + 1);
    vector<int> k;
    for (int i = 1; i <= 9; ++i)
    {
        if (n % i == 0)
        {
            k.push_back(i);
        }
    }
    int size = static_cast<int>(k.size());
    ans[0] = '1';
    for (int i = 1; i < n + 1; i++)
    {
        vector<int> cand;
        for (int j = 0; j < size; j++)
        {
            int n_k = n / k[j];
            if ((i % n_k) == 0)
            {
                cand.push_back(k[j]);
            }
        }
        if (static_cast<int>(cand.size()) == 0)
        {
            ans[i] = '-';
        }
        else
        {
            auto min = min_element(cand.begin(), cand.end());
            int minV = *min;
            string minstr = to_string(minV);
            ans[i] = static_cast<char>(minstr[0]);
        }
    }
    for (int i = 0; i < n + 1; i++)
        cout << ans[i];
    cout << endl;
    return 0;
}