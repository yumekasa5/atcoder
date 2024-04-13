#include <bits/stdc++.h>
using namespace std;

bool JudgeString(const string str)
{
    unordered_map<char, int> charCount;
    for (char c : str)
    {
        charCount[c]++;
    }
    int len = (int)str.length();
    for (int i = 1; i <= len; i++)
    {
        int count = 0;
        for (const auto &c : charCount)
        {
            if (c.second == i)
            {
                count++;
            }
        }
        if (count == 0 || count == 2)
        {
            continue;
        }
        else
        {
            return false;
        }
    }
    return true;
}

int main(void)
{
    string s = "";
    cin >> s;
    bool ans = false;
    ans = JudgeString(s);
    if (ans)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
}