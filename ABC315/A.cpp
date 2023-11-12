#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    string chars = "aeiou";
    for (char c : chars)
    {
        s.erase(remove(s.begin(), s.end(), c), s.end());
    }
    cout << s << endl;
    return 0;
}