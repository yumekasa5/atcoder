#include <iostream>
using namespace std;

int n, q;
char s[300001];
int a[300000], b[300000];

int main(void)
{
    cin >> n >> q;
    for (int i = 1; i <= n; i++)
    {
        cin >> s[i];
    }
    for (int i = 1; i <= n - 1; i++)
    {
        if (s[i] == s[i + 1])
        {
            a[i] = 1;
        }
    }
    for (int i = 1; i <= n - 1; i++)
    {
        b[i] = b[i - 1] + a[i];
    }

    int l, r;
    for (int i = 1; i <= q; i++)
    {
        cin >> l >> r;
        cout << b[r - 1] - b[l - 1] << "\n";
    }
}