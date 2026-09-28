#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, m;
    cin >> n >> m;

    vector<vector<int>> grid(n, vector<int> (m));
    int ans = -1;

    for (int i=0; i<n; i++) {
        int minInRow = INT_MAX;

        for (int j=0; j<m; j++) {
            cin >> grid[i][j];

            minInRow = min(minInRow, grid[i][j]);
        }

        ans = max(minInRow, ans);
    }


    cout << ans << endl;
    return 0;
}