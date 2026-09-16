#include <bits/stdc++.h>
using namespace std;
int main() {
    int r, g, b;
    cin >> r >> g >> b;

    int time = 30;

    if (r-2 >= 0) {
        r-=2;
    } else {
        r=0;
    }


    while (r!=0 || g!=0 || b!=0) {
        if ((time+1)%3 == 0) {
            if (r-2 >= 0) {
                r-=2;
            } else {
                r=0;
            }
        } else if ((time+1)%3 == 1) {
            if (g-2 >= 0) {
                g-=2;
            } else {
                g=0;
            }
        } else {
            if (b-2 >= 0) {
                b-=2;
            } else {
                b=0;
            }
        }

        time++;
    }

    cout << time << endl;
    return 0;
}