#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;
int main() {
    string s;
    cin >> s;

    string digits;
    for (char c : s) {
        if (isdigit(c)) digits.push_back(c);
    }

    sort(digits.begin(), digits.end());

    string ans;
    for (int i = 0; i < digits.size(); i++) {
        ans.push_back(digits[i]);
        if (i != digits.size() - 1) ans.push_back('+');
    }

    cout << ans << endl;
    return 0;
}