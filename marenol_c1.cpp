#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;

    while(t--) {
        int n;
        cin >> n;

        string a;
        cin >> a;
        string b;
        cin >> b;

        if (n== 1) {
            if (a[0] == b[0]) {
                cout << "Yes" << endl;
                continue;
            } else {
                cout << "No" << endl;
                continue;
            }
        }

        if (n < 3) {
            cout << "No" << endl;
            continue;
        }

        if (a.find("101") != string::npos) {
            cout << "No" << endl;
            continue;
        }


        cout << "Yes" << endl;
    }
    return 0;
}