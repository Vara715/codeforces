#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> nums(n);
        int odd = 0;
        int oddEven = 0;
        int even = 0;

        for (int i=0; i<n; i++) {
            cin >> nums[i];

            if (nums[i]%2 == 0) {
                if ((nums[i]/2)%2 == 0) {
                    even ++;
                } else {
                    oddEven++;
                }
            } else {
                odd++;
            }
        }

        cout << max(odd, max(even, oddEven)) << endl;
    }
    return 0;
}