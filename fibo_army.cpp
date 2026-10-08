#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;

    int prev1 = 1, prev2 = 1;

    for (int i=2; i<=n; i++) {
        int tmp = prev1+prev2;
        prev1 = prev2;
        prev2 = tmp;
    }

    cout << prev2 << endl;
    
    return 0;
}