#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        int zeros = 0;


        vector<int> nums(n);
        for (int i=0; i<n; i++) {
            cin >> nums[i];
            if (nums[i] == 0) zeros++;
        }

        int mid = n/2;

        if (zeros > mid) {
            cout << "Elsie" << endl;
        } else {
            cout << "Bessie" << endl;
        }
    }
    return 0;
}