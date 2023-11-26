#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int n;
    string s;
    cin >> n;
    cin >> s;
    int count = 0;
    int unique_count = 0;
    for (size_t i = 0; i < s.length(); i++)
    {
        char current = s[i];
        count++;

        while (i + 1 < s.length() && s[i + 1] == current)
        {
            i++;
            count++;
        }

        unique_count += count;
        count = 0;
    }

    if (count > 0)
    {
        unique_count += 1;
    }

    cout << unique_count << endl;

    return 0;
}