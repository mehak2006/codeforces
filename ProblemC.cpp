//question link: https://codeforces.com/contest/2074/problem/C
//submission link: https://codeforces.com/contest/2074/submission/310164478
//problem C: XOR AND TRIANGLE
//CODE->
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int x;
    cin >> x;

    // Find the highest power of 2 ≤ x
    int power = 1;
    while (power * 2 <= x) {
        power *= 2;
    }
    
    int y = power - 1;  // Best candidate for y
    int m = x ^ y;  // XOR of x and y

    // Check triangle inequality
    if (x + y > m && x + m > y && y + m > x) {
        cout << y << endl;
    } else {
        cout << -1 << endl;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
