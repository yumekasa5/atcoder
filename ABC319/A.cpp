#include <bits/stdc++.h>
using namespace std;

int main()
{
    map<string, int> rating;
    rating["tourist"] = 3858;
    rating["ksun48"] = 3679;
    rating["Benq"] = 3658;
    rating["Um_nik"] = 3648;
    rating["apiad"] = 3638;
    rating["Stonefeang"] = 3630;
    rating["ecnerwala"] = 3613;
    rating["mnbvmar"] = 3555;
    rating["newbiedmy"] = 3516;
    rating["semiexp"] = 3481;
    string s;
    cin >> s;
    int ans = rating[s];
    cout << ans << endl;
    return 0;
}