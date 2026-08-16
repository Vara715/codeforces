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

        for (int i=0; i<n; i++) {
            if (nums[i] == 1) nums[i]++;

            if (i+1<n && nums[i+1]%nums[i] == 0) nums[i+1]++;
        }

        for (int i=0; i<n; i++) {

            if (i+1<n && nums[i+1]%nums[i] == 0) {
                nums[i+1]++;
                if (nums[i+1] % nums[i] == 0) nums[i+1]++;
            }
        }

        for (int i=0; i<n; i++) {
            cout << nums[i] << " ";
        }

        cout << endl;
    }
    return 0;
}