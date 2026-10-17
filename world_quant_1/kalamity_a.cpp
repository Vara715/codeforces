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

        vector<int> ones;
        for (int i=0; i<n; i++) {
            if (s[i] == '1') {
                ones.push_back(i+1);
            }
        }

        int k = ones.size();
        if (k==1) {
            cout << 0 << endl;
        } else if (k==2) {
            cout << 1 << endl;
        } else {
            cout << ones.back() - ones.front() << endl;
        }
    }
    return 0;
}