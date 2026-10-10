
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        int m = 1;
        while (m <= n) {
            m <<= 1;
        }

        vector<int> pref;
        pref.reserve(2 * m);

        for (int i = 0; i < m; i++) {
            pref.push_back(i ^ (i >> 1));
        }

        for (int i = m - 1; i >= 0; i--) {
            pref.push_back(i ^ (i >> 1));
        }

        int k = (int)pref.size() - 1;
        cout << k << '\n';

        for (int i = 1; i <= k; i++) {
            cout << (pref[i - 1] ^ pref[i]);
            cout << (i == k ? '\n' : ' ');
        }
    }

    return 0;
}
