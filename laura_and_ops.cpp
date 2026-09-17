#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;

    while (t--) {
        int a, b, c;
        cin >> a >> b >> c;

        cout << (b % 2 == c % 2) << " "
             << (a % 2 == c % 2) << " "
             << (a % 2 == b % 2) << '\n';

        // if (a == b && b==c) {
        //     cout << 1 << " " << 1 << " " << 1 << endl;
        //     continue;
        // }

        // if (a == b) {
        //     cout << 0 << " " << 0 << " " << 1 << endl;
        //     continue;
        // }

        // if (a == c) {
        //     cout << 0 << " " << 1 << " " << 0 << endl;
        //     continue;
        // }

        // if (b==c) {
        //     cout << 1 << " " << 0 << " " << 0 << endl;
        //     continue;
        // }

        // if (a>b && a>c) {
        //     cout << 1 << " " << 0 << " " << 0 << endl;
        //     continue;
        // }

        // if (b>a && b>c) {
        //     cout << 0 << " " << 1 << " " << 0 << endl;
        //     continue;
        // }

        // if (c>b && c>a) {
        //     cout << 0 << " " << 0 << " " << 1 << endl;
        //     continue;
        // }
    }
    return 0;
}