#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;

    while (t--) {

        int n;
        char c;

        cin >> n >> c;

        string s;
        cin >> s;

        int left = 0;
        int right = n-1;
        int coins = 0;

        while (left < right) {
            if (s[left] != s[right]) {
                if (s[left] != c && s[right] != c) {
                    coins+=2;
                } else {
                    coins += 1;
                }
            }

            left++;
            right--;
        }

        cout << coins << endl;
    }
    return 0;
}