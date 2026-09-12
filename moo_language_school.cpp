#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;

    while (t--) {
        int n,k;
        cin >> n >> k;

        string s;
        cin >> s;

        int nhoj = 0;
        for (int i = 0; i < n; i += k) {
            int oneCount = 0;

            for (int j = i; j < i + k; j++) {
                if (s[j] == '0') {
                    break;
                }
                oneCount++;
            }

            if (oneCount == k) {
                nhoj++;
            }
        }

        cout << nhoj << endl;
    }
    return 0;
}