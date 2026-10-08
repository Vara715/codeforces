#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;
int main() {
    int n, t;
    cin >> n >> t;

    string q;
    cin >> q;

    for (int j=0; j<t; j++) {
        for (int i=0; i<n-1; i++) {
            if (q[i] == 'B' && q[i+1] == 'G') {
                swap(q[i], q[i+1]);
                i++;
            }
        }
    }

    cout << q << endl;
    return 0;
}