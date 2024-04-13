#include <bits/stdc++.h>
using namespace std;

bool JudgeAirportCode(const string str_S, const string str_T)
{
    // 文字列Tは英大文字からなる長さ3の文字列
    // 文字列Sは英小文字からなる長さ3以上10e5以下の文字列
    // 文字列Sが空港コードであるとは、次のいずれかを満たすこと
    // 1. S の長さ3の(連続とは限らない)部分列をとり、それを英大文字に変換したものをTとする
    // 2. S の長さ2の(連続とは限らない)部分列をとり、それを英大文字に変換したものの末尾にXを追加したものをTとする->Tの末尾がXならこちらの条件から考える？

    // 1.の条件
    bool cond1 = false;
    string temp = str_T;
    transform(temp.begin(), temp.end(), temp.begin(), ::tolower);
    int cnt = 0;
    for (char c : str_S)
    {
        if (temp[cnt] == c)
        {
            cnt++;
            if (cnt > 2)
            {
                cond1 = true;
                return true;
            }
        }
    }

    // 2.の条件
    bool cond2 = false;
    if (str_T[2] == 'X')
    {
        string temp = str_T.substr(0, 2);
        transform(temp.begin(), temp.end(), temp.begin(), ::tolower);
        int cnt = 0;
        for (char c : str_S)
        {
            if (temp[cnt] == c)
            {
                cnt++;
                if (cnt > 1)
                {
                    cond2 = true;
                    return true;
                }
            }
        }
    }

    if (cond1 || cond2)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main(void)
{
    string S = "";
    string T = "";
    cin >> S >> T;
    bool ans = false;
    ans = JudgeAirportCode(S, T);
    if (ans)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
}