#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;
int main() {
    int m, n;
    cin >> m >> n;

    int prod = m*n;

    if (prod%2 == 0) {
        cout << prod/2 << endl;
    } else {
        cout << (prod-1)/2 << endl;
    }
    
    return 0;
}