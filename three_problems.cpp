#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;

    vector<int> r(n);
    map<int, int> mp;
    for (int i=0; i<n; i++) {
        cin >> r[i];
        mp[r[i]] = i+1;
    }

    if (mp.size() < 3) {
        cout << -1 << " " << -1 << " " << -1 << endl;
        return 0;
    }

    int count = 0;

    for (auto it = mp.begin(); it != mp.end() && count < 3; it++) {
        cout << it->second << " ";
        count++;
    }

    cout << endl;
    return 0;
}