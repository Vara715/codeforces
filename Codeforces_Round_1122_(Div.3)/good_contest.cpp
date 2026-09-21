#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        int minPart = INT_MAX;
        int tmp;

        for (int i=0; i<3; i++) {
            cin >> tmp;
            minPart = min(minPart, tmp);
        }

        cout << n-minPart << endl;
    }
    return 0;
}