#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<long long> nums(n);
        for(int i=0; i<n; i++) {
            cin >> nums[i];
        }

        for (int i=0; i<n-1; i++) {
            if (nums[i] > nums[i+1]) {
                long long tmp = nums[i];
                nums[i] = nums[i+1];
                nums[i+1] = tmp+nums[i];
            }
        }

        cout << nums[n-1] << endl;
    }
    return 0;
}