#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;
int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;

        string s;
        cin >> s;

        if (2*k > n) {
            cout << -1 << endl;
            continue;
        }

        int count = 0;
        for (int i=0; i<k; i++) {
            if (s[i] == 'L') {
                count++;
            }
        }


        for (int i=n-k; i<n; i++) {
            if (s[i] == 'R') count++;
        }

        cout << count << endl;
    }
    return 0;
}