
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
        ll m, k;
        cin >> n >> m >> k;

        vector<pair<ll, ll>> intervals(n);

        for (int i = 0; i < n; i++) {
            cin >> intervals[i].first >> intervals[i].second;
        }

        if (k == 0) {
            cout << intervals.back().second + 1 << '\n';
            continue;
        }

        ll val = 0;

        for (int i = 0; i < (int)intervals.size(); i++) {
            long long &l = intervals[i].first;
            long long &r = intervals[i].second;

            ll left = max(1LL, l);
            ll right = min(m, r);

            if (left <= right) {
                val += right - left + 1;
            }
        }

        auto infected = [&](ll x) -> int {
            int lo = 0, hi = n - 1;

            while (lo <= hi) {
                int mid = lo + (hi - lo) / 2;

                if (x < intervals[mid].first) {
                    hi = mid - 1;
                } else if (x > intervals[mid].second) {
                    lo = mid + 1;
                } else {
                    return 1;
                }
            }

            return 0;
        };

        ll slope = infected(m + 1) - infected(1);

        vector<pair<ll, int>> events;
        events.reserve(4 * n);

        for (int i = 0; i < (int)intervals.size(); i++) {
            long long l = intervals[i].first;
            long long r = intervals[i].second;

            events.push_back({l - m, +1});
            events.push_back({r + 1 - m, -1});
            events.push_back({l, -1});
            events.push_back({r + 1, +1});
        }

        sort(events.begin(), events.end());

        ll cur = 1;
        ll answer = -1;

        for (int i = 0; i < (int)events.size();) {
            ll pos = events[i].first;
            int delta = 0;

            while (i < (int)events.size() &&
                   events[i].first == pos) {
                delta += events[i].second;
                i++;
            }

            if (pos <= 1) {
                continue;
            }

            ll endVal = val + slope * (pos - cur);

            if (slope == 0) {
                if (val == k) {
                    answer = cur;
                    break;
                }
            } else {
                if (k >= min(val, endVal) &&
                    k <= max(val, endVal)) {
                    answer = cur + (k - val) / slope;
                    break;
                }
            }

            val = endVal;
            cur = pos;
            slope += delta;
        }

        cout << answer << '\n';
    }

    return 0;
}
