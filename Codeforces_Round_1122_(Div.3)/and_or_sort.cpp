#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        string s;
        cin >> s;

        int zeros = 0;
        for (int i=0; i<n; i++) {
            if (s[i] == '0') zeros++;
        }

        if (s[0] == '1') {
            cout << zeros << endl;
            continue;
        }

        int ones = 0;
        int ans = zeros;

        for (int i=0; i<n; i++) {
            if (s[i] == '1') {
                ones++;
            } else {
                zeros--;
            }

            ans = min(ans, ones+zeros);
        }

        cout << ans << endl;
    }


    return 0;
}