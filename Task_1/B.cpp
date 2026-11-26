#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    long long sum = 1LL * n * (n + 1) / 2;

    if (sum % 2 == 1) {
        cout << "NO";
        return 0;
    }

    int a[1000000], b[1000000];
    int x = 0, y = 0;
    long long s = 0;

    for (int i = n; i >= 1; i--) {
        if (s + i <= sum / 2) {
            a[x] = i;
            x++;
            s += i;
        }
        else {
            b[y] = i;
            y++;
        }
    }

    cout << "YES" << endl;

    cout << x << endl;
    for (int i = 0; i < x; i++) {
        cout << a[i] << " ";
    }

    cout << endl << y << endl;

    for (int i = 0; i < y; i++) {
        cout << b[i] << " ";
    }

    return 0;
}
