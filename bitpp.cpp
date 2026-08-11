#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;
int main() {
    int n;
    cin >> n;
    int x = 0;

    while (n--) {
        string input;
        cin >> input;

        for (int i=0; i<input.size(); i++) {
            if (input[i] == '-') {
                x -= 1;
                break;
            } else if (input[i] == '+') {
                x+=1;
                break;
            }
        }
    }

    cout << x << endl;
    return 0;
}