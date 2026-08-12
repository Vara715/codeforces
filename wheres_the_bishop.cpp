#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;

    while (t--) {
        vector<string> board(8);

        for (int i=0; i<8; i++) {
            cin >> board[i];
        }

        int bishop_i = 0;
        int bishop_j = 0;

        for (int i=1; i<7; i++) {
            for (int j=1; j<7; j++) {
                if (board[i-1][j-1] == '#' && board[i-1][j+1] == '#' && board[i+1][j-1] == '#' && board[i+1][j+1] == '#') {
                    bishop_i = i+1;
                    bishop_j = j+1;
                }
            }
        }

        cout << bishop_i << " " << bishop_j << endl;
    }
    return 0;
}