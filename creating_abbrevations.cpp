#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, m;
        cin >> n >> m;

        vector<string> words(n);
        vector<string> abbrevations(m);
        unordered_set<char> first_letters;

        for (int i=0; i<n; i++) {
            cin >> words[i];
            first_letters.insert(toupper(words[i][0]));
        }

        for (int i=0; i<m; i++) {
            cin >> abbrevations[i];
        }

        bool can = true;
        for (int i=0; i<m; i++) {
            for (char ch: abbrevations[i]) {
                if (first_letters.find(ch) == first_letters.end()) {
                    cout << "No" << endl;
                    can = false;
                    break;
                }
            }

            if (!can) {
                break;
            }
        }

        if (can) {
            cout << "Yes" << endl;
        }
    }
    return 0;
}