#include<iostream>
using namespace std;

int main() {
    int f[12][12] = { 0 };
    int x = 5, y = 5, d = 1, p = 0;
    int c, n, i;
    char t; 

    while (cin >> c) {
        if (c == 9) break;

        if (c == 1) p = 0;
        if (c == 2) { p = 1; f[y][x] = 1; }
        if (c == 3) d = (d + 1) % 4;
        if (c == 4) d = (d + 3) % 4;

        if (c == 5) {
            cin >> t;  
            cin >> n;  

            for (i = 0; i < n; i++) {
                if (d == 0 && y > 0) y--;
                if (d == 1 && x < 11) x++;
                if (d == 2 && y < 11) y++;
                if (d == 3 && x > 0) x--;

                if (p == 1) f[y][x] = 1;
            }
        }

        if (c == 6) {
            for (int a = 0; a < 12; a++) {
                for (int b = 0; b < 12; b++) {
                    if (f[a][b] == 1) cout << "* ";
                    else cout << "  ";
                }
                cout << endl;
            }
        }
    }

    return 0;
}