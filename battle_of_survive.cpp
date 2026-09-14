#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> fighters(n);
        long long sum = 0;

        for (int i=0; i<n; i++) {
            cin >> fighters[i];
            sum += fighters[i];
        }

        cout << sum - 2*fighters[n-2] << endl;
    }
    return 0;
}