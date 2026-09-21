#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;

    while (t--) {
        int a, b, c;
        cin >> a >> b >> c;

        long long curr = abs(a-b);
        long long might = abs(a+c-b);

        if (might > curr) {
            cout << might << endl;
        } else {
            cout << curr << endl;
        }
    }
    return 0;
}