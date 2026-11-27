#include <iostream>
#include <string>
using namespace std;
int main() {
    string s = "codeforces";
    int t;
    cin >> t;
    while (t--) {
        char c;
        cin >> c;
        bool found = false;
        for (char x : s) {
            if (x == c) {
                found = true;
                break;
            }
        }
        cout << (found ? "YES" : "NO") << "\n";
    }
    return 0;
}
