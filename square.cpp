#include <bits/stdc++.h>
using namespace std;

long long gcd_custom(long long a, long long b) {
    while (b != 0) {
        long long r = a % b;
        a = b;
        b = r;
    }
    return a;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        long long n;
        cin >> n;

        long long k = (4LL * n) / gcd_custom(4LL, n + 1);
        cout << k + 1 << '\n';
    }

    return 0;
}