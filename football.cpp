#include <bits/stdc++.h>
using namespace std;
int main() {
    string s;
    cin >> s;

    int onesCount = 0,zerosCount = 0;

    for (int i=0; i<s.size(); i++) {
        if (zerosCount >= 7 || onesCount >= 7) {
            cout << "YES" << endl;
            return 0;
        }

        if (s[i] == '1') {
            onesCount++;
            zerosCount = 0;
        } else {
            zerosCount++;
            onesCount = 0;
        }
    }

    if (zerosCount >= 7 || onesCount >= 7) {
        cout << "YES" << endl;
        return 0;
    }

    cout << "NO" << endl;
    return 0;
}