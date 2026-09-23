#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, m, k;
    cin >> n >> m >> k;

    vector<int> happy(n);
    for (int i=0; i<n;i++) {
        cin >> happy[i];
    }

    sort(happy.begin(), happy.end());

    long long happiness = 0;

    // for (int i=1; i<=m; i++) {
    //     if (i%(k+1) == 0) {
    //         happiness += happy[n-2];
    //         continue;
    //     }

    //     happiness += happy[n-1];
    // }

    int repeat = m/(k+1);
    happiness += 1LL*repeat*happy[n-2];
    happiness += 1LL*(m-repeat)*happy[n-1];

    cout << happiness << endl;
    return 0;
}