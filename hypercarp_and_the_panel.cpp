#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<int> panel(n);

        for (int i=0; i<n; i++) {
            cin >> panel[i];
        }

        int del = 0;
        int count = 1;

        for (int i=1; i<n; i++) {
            if (panel[i] == panel[i-1]) {
                count++;

                if (count > 2) {
                    del++;
                }
            }  else {
                count = 1;
            }
        }

        cout << n-del << endl;
    }
    return 0;
}