#include <bits/stdc++.h>
using namespace std;
#define int long long
int t;
int32_t main() {
    cin.tie(0)->sync_with_stdio(0);
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        cout << max(n, m) + 1 << '\n';
    }
}