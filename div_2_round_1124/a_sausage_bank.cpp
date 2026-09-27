#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;

        int amount = 0;

        amount += 2*(k-1);
        amount += pow(2, n-k+1);

        cout << amount << endl;
    }
    return 0;
}