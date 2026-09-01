#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<int> nums(n);

        for (int i=0; i<n; i++) {
            cin >> nums[i];
        }

        int total = 0;
        for (int i=0; i<n; i++) {
            if (nums[i] < 0) {
                total -= nums[i];
            } else {
                total+=nums[i];
            }
        }

        cout << total << endl;
    }
    return 0;
}