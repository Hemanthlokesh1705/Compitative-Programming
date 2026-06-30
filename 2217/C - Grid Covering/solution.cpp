#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n, m, a, b;
        cin >> n >> m >> a >> b;
        
        if (__gcd(a,n)==1&&__gcd(b,m)==1&&__gcd(n,m)<=2)
            cout << "YES
";
        else
            cout << "NO
";
    }
    return 0;
}