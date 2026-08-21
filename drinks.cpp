#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;
int main() {
    int n;
    cin >> n;
    vector<int> nums(n);

    for (int i=0; i<n; i++) {
        cin >> nums[i];
    }

    double ans = 0;

    for (int i=0; i<n; i++) {
        ans += (double)nums[i]/n;
    }

    cout << ans << endl;
    return 0;
}