#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    string S, T;
    cin >> S >> T;
    vector<string> X;

    for (int i = 0; i < static_cast<int>(S.length()); i++) {
        if (S[i] != T[i]) {
            X.push_back(S);
            S[i] = T[i];
        }
    }

    sort(X.begin(), X.end());
    int minSize = X[0].size();
    vector<string> minElements;

    for (const string& element : X) {
        if (static_cast<int>(element.size()) == minSize) {
            minElements.push_back(element);
        } else {
            break;
        }
    }

    cout << minElements.size() << endl;
    for (const string& element : minElements) {
        cout << element << endl;
    }

    return 0;
}