#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, m;
    cin >> n >> m;

    vector<int> sale(n);
    for (int i=0; i<n; i++) {
        cin >> sale[i];
    }

    sort(sale.begin(), sale.end());
    int profit = 0;

    for (int i=0; i<m && i<n; i++) {
        if (sale[i] < 0) {
            profit -= sale[i];
        } else {
            break;
        }
    }

    cout << profit << endl;

    return 0;
}