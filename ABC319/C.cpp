#include <bits/stdc++.h>
#include <algorithm>

int main()
{
    using namespace std;

    array<int, 9> cells;
    for (auto &&c : cells)
    {
        cin >> c;
    }

    vector<tuple<int, int, int>> row{
        {0, 1, 2},
        {3, 4, 5},
        {6, 7, 8},
        {0, 3, 6},
        {1, 4, 7},
        {2, 5, 8},
        {0, 4, 8},
        {2, 4, 6}};

    array<int, 9> order; // i個目のマスが何回目に開けられるか
    iota(begin(order), end(order), 0);
    int not_disappoint = 0, all = 0; // がっかりしない開け方の個数, 開け方の総数

    do
    {
        ++all;
        bool is_disppoint = false;
        for (auto [a, b, c] : row) // 1列に並んでいるマスa, b, cについて
        {

            if (cells[a] == cells[b] && order[a] < order[c] && order[b] < order[c])
            {
                is_disppoint = true;
            }
            else if (cells[a] == cells[c] && order[a] < order[b] && order[c] < order[b])
            {
                is_disppoint = true;
            }
            else if (cells[b] == cells[c] && order[b] < order[a] && order[c] < order[a])
            {
                is_disppoint = true;
            }
        }
        if (!is_disppoint)
        {
            ++not_disappoint;
        }
    } while (std::next_permutation(order.begin(), order.end())); // 開け方を全通り試す

    // 10桁で出力するように設定する
    cout << setprecision(10);
    cout << ((double)not_disappoint) / all << endl;
    return 0;
}