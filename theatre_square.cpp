#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, m, a;
    cin >> n >> m >> a;

    long long ceil_1 = (n+a-1)/a;
    long long ceil_2 = (m+a-1)/a;

    cout << ceil_1*ceil_2 << endl;
    return 0;
}