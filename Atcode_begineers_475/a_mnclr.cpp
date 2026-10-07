#include <bits/stdc++.h>
using namespace std;
int main() {
    string s;
    cin >> s;

    string ans = "";
    ans.push_back(s[0]);

    int n = s.size();

    for (int i=1; i<n; i++) {
        ans.push_back('o');
        ans.push_back(s[i]);
    }

    cout << ans << endl;
    return 0;
}