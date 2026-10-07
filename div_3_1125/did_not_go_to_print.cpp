#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        string s;
        cin >> n >> s;

        stack<int> st;
        vector<bool> printed(n + 1, false);

        for (int i = 0; i < n; i++) {
            int val = s[i] - '0';

            if (val == 1) {
                st.push(i + 1);
            }
            else if (val == 2) {
                if (!st.empty()) {
                    printed[st.top()] = true;
                    st.pop();
                }
                else {
                    printed[i + 1] = true;
                }
            }
            else { // val == 3
                printed[i + 1] = true;
            }
        }

        int k = 0;

        for (int i = 1; i <= n; i++) {
            if (!printed[i]) {
                k++;
            }
        }

        cout << k << '\n';

        for (int i = 1; i <= n; i++) {
            if (!printed[i]) {
                cout << i << " ";
            }
        }

        cout << '\n';
    }

    return 0;
}