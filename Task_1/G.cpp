#include <iostream>
#include <string>
using namespace std;
int main() {
    int h, w;
    cin >> h >> w;
    int row1 = -1, col1 = -1;
    int row2 = -1, col2 = -1;
    for (int i = 0; i < h; i++) {
        string s;
        cin >> s;
        for (int j = 0; j < w; j++) {
            if (s[j] == 'o') {
                if (row1 == -1) {
                    row1 = i;
                    col1 = j;
                } else {
                    row2 = i;
                    col2 = j;
                }
            }
        }
    }
    int rows = row1 - row2;
    int cols = col1 - col2;
    if (rows < 0) rows = -rows;
    if (cols < 0) cols = -cols;
    cout << rows + cols << "\n";
    return 0;
}
