#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        int ones = 0;
        int twos = 0;

        int tmp; 

        for (int i=0; i<n; i++) {
            cin >> tmp;
            
            if (tmp == 1) {
                ones++;
            } else {
                twos++;
            }
        }

        if (ones %2 ==0 && (twos%2==0 || ones >= 2)) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
    return 0;
}