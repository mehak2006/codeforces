//question link: https://codeforces.com/contest/2074/problem/B
//submission link: https://codeforces.com/contest/2074/submission/310162075
//problem B: THE THIRD SIDE
//CODE->
/*
Approach:
PRIORITY QUEUE ->Max Heap (Default in C++ STL)
                        The largest element is always at the top.
                        Every time you pop(), the largest element is removed.
*/

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    priority_queue<int> pq; // Max Heap

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        pq.push(x); 
    }

    while (pq.size() > 1) {
        int a = pq.top(); pq.pop(); // Largest element
        int b = pq.top(); pq.pop(); // Second largest element
        int x = a + b - 1; // Maximum valid x
        pq.push(x); // Add back to heap
    }

    cout << pq.top() << endl; // Only remaining element
}

int main() {
    int t;
    cin >> t; // Number of test cases
    while (t--) {
        solve();
    }
    return 0;
}
