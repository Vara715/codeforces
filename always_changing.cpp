#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        string s;
        cin >> s;

        int cnt0 = 0, cnt1 = 0;
        for (char c : s) {
            if (c == '0') cnt0++;
            else cnt1++;
        }

        int delta = cnt0 - cnt1;

        const int NEG = -1e9;

        int dp[2][2];
        for (int i = 0; i < 2; i++)
            for (int j = 0; j < 2; j++)
                dp[i][j] = NEG;

        for (char c : s) {
            int cur = c - '0';
            int ndp[2][2];

            for (int i = 0; i < 2; i++)
                for (int j = 0; j < 2; j++)
                    ndp[i][j] = dp[i][j];

            ndp[cur][cur] = max(ndp[cur][cur], 1);

            int opp = cur ^ 1;
            for (int st = 0; st < 2; st++) {
                if (dp[st][opp] != NEG)
                    ndp[st][cur] = max(ndp[st][cur], dp[st][opp] + 1);
            }

            memcpy(dp, ndp, sizeof(dp));
        }

        int best = -1;

        if (dp[0][0] != NEG && abs(delta - 1) <= 1)
            best = max(best, dp[0][0]);

        if (dp[1][1] != NEG && abs(delta + 1) <= 1)
            best = max(best, dp[1][1]);

        if (dp[0][1] != NEG && abs(delta) <= 1)
            best = max(best, dp[0][1]);

        if (dp[1][0] != NEG && abs(delta) <= 1)
            best = max(best, dp[1][0]);

        if (best == -1)
            cout << -1 << '\n';
        else
            cout << n - best << '\n';
    }

    return 0;
}