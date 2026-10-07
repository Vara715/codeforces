#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        ll k;
        cin >> n >> k;

        vector<ll> a(n), b(n), c(n);

        ll mx = LLONG_MIN;

        for (int i = 0; i < n; i++) {
            cin >> a[i] >> b[i] >> c[i];

            mx = max(mx, a[i] + b[i] + c[i]);
        }

        auto possible = [&](ll target) -> bool {

            ll operations = 0;

            for (int i = 0; i < n; i++) {

                ll sum = a[i] + b[i] + c[i];

                if (sum >= target)
                    continue;

                // All equal -> sum can never increase
                if (a[i] == b[i] && b[i] == c[i])
                    return false;

                ll need = target - sum;

                if (a[i] <= b[i] && b[i] <= c[i]) {

                    ll d = min(b[i] - a[i],
                               c[i] - b[i]) + 1;

                    operations += need + 2 * d;

                } else {

                    operations += need;
                }

                // We don't care about the exact value anymore
                if (operations > k)
                    return false;
            }

            return true;
        };

        ll lo = -4000000000000000000LL;
        ll hi = mx + k;

        while (lo < hi) {

            ll mid = lo + (hi - lo + 1) / 2;

            if (possible(mid))
                lo = mid;
            else
                hi = mid - 1;
        }

        cout << lo << '\n';
    }

    return 0;
}