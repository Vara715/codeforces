#include <bits/stdc++.h>
using namespace std;
int main() {
    long long x, y;
    if (cin >> x >> y) {
        if (x == y) {
            cout << "=\n";
        } else if (x == 1) {
            cout << "<\n"; // 1^y is 1, which is less than y^1
        } else if (y == 1) {
            cout << ">\n"; // x^1 is x, which is greater than 1^x
        } else if (x == 2 && y == 3) {
            cout << "<\n"; // 2^3 (8) < 3^2 (9)
        } else if (x == 3 && y == 2) {
            cout << ">\n"; // 3^2 (9) > 2^3 (8)
        } else if ((x == 2 && y == 4) || (x == 4 && y == 2)) {
            cout << "=\n"; // 2^4 (16) == 4^2 (16)
        } else {
            // For all other cases, the smaller base always yields the larger result
            if (x < y) {
                cout << ">\n";
            } else {
                cout << "<\n";
            }
        }
    }
    return 0;
}