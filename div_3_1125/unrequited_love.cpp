#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<long long> a(n);
        for (int i=0; i<n; i++) {
            cin >> a[i];
        }

        int m = n-4;

        //calculating score for each triad
        vector<long long> val(m);
        for (int i=0; i<m; i++) {
            val[i] = a[i]+a[i+2]-a[i+4];
        } 

        long long ans = 0;

        //freq for each traid and brute ways
        unordered_map<long long, long long> mp;
        for (int i=0; i<m; i++) {
            ans += mp[val[i]];
            mp[val[i]]++;    
        }

        //removing the things that overlap
        for (int i=0; i<m; i++) {
            if (i+2 < m && val[i] == val[i+2]) {
                ans--;
            }

            if (i+4 < m && val[i] == val[i+4]) {
                ans--;
            }
        }


        cout << ans << endl;
    }
    return 0;
}