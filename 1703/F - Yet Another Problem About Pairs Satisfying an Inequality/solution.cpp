#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
 
        vector<int> a(n + 1);
        for (int i = 1; i <= n; i++) {
            cin >> a[i];
        }
 
        vector<int> valid;
 
        // Step 1: collect valid indices
        for (int i = 1; i <= n; i++) {
            if (a[i] < i) {
                valid.push_back(i);
            }
        }
 
        long long ans = 0;
 
        // Step 2: for each j
        for (int j : valid) {
            // count i < a[j]
            int cnt = lower_bound(valid.begin(), valid.end(), a[j]) - valid.begin();
            ans += cnt;
        }
 
        cout << ans << '
';
    }
 
    return 0;
}