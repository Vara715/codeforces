#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;

    while (t--) {
        long long n;
        cin >> n;

        int size = 0;
        int i = 1;

        while (n% (long long)i == 0) {
            size++;
            i++;
        }

        cout << size << endl;
    }
    return 0;
}