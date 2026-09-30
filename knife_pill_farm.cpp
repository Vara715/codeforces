#include <bits/stdc++.h>
using namespace std;

// void solve(vector<int> &pills, int i, int &ans, vector<int> &b, int n, int m) {
//     if (b.size() == m) {
//         int res = 0;
//         for (int i=0; i<m-1; i++) {
//             res -= b[i];
//         }

//         res += m*b[m-1];
//         ans = max(res, ans);
//         return;
//     }

//     if (i >= n) return;

//     //add
//     b.push_back(pills[i]);
//     solve(pills, i+1, ans, b, n, m);

//     b.pop_back();
//     solve(pills, i+1, ans, b, n, m);
// }

long long solve(vector<int>& pills, int n, int m) {
    long long ans = LLONG_MIN;

    priority_queue<long long> pq;
    long long sum = 0;

    for (int i = 0; i < n; i++) {
        // Can pills[i] be the last element?
        if (pq.size() == m - 1) {
            ans = max(ans, 1LL * m * pills[i] - sum);
        }

        // Add pills[i] to the pool of previous elements
        pq.push(pills[i]);
        sum += pills[i];

        // Keep only the smallest m-1 elements
        if (pq.size() > m - 1) {
            sum -= pq.top();
            pq.pop();
        }
    }

    return ans;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, m;
        cin >> n >> m;

        vector<int> pills(n);
        for (int i=0; i<n; i++) {
            cin >> pills[i];
        }


        cout << solve(pills, n, m) << endl;


    }
    return 0;
}