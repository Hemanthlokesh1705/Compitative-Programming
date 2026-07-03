#include <bits/stdc++.h>
using namespace std;
using ll = long long;
 
void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;
 
    vector<int> ones;
    for (int i = 0; i < n; i++)
        if (s[i] == '1') ones.push_back(i);
 
    int m = ones.size();
    int maxGap = 0;
    for (int k = 0; k < m; k++) {
        int cur = ones[k];
        int nxt = ones[(k + 1) % m];
        int gap = (nxt - cur + n) % n;
        if (gap == 0) gap = n;
        maxGap = max(maxGap, gap);
    }
 
    cout << (maxGap - 1) << "
";
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t = 1;
    cin >> t;
    while (t--) solve();
}