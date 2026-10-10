
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;

        multiset<int> s;

        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            s.insert(x);
        }

        long long operations = 0;

        while (!s.empty()) {
            auto it = s.begin();

            if (*it <= k) {
                s.erase(it);
            } else {
                int limit = 2 * k + 3;
                auto pos = s.upper_bound(limit);

                if (pos != s.begin()) {
                    --pos;
                } else {
                    pos = s.begin();
                }

                int x = *pos;
                s.erase(pos);

                s.insert(x / 2);
                s.insert(x / 2);
            }

            ++k;
            ++operations;
        }

        cout << operations << '\n';
    }

    return 0;
}
