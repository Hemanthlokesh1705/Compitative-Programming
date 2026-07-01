#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define print(arr) for(auto &x:arr)cout<<x<<' ';
void solve() {
  ll n,k,a=0;
        cin>>n>>k;
        for(int i=0; (1LL<<i)<=n;i++){
           ll b=min(k,n/(1LL<<i));
            a+=b;
            n-=b*(1LL<<i);
        }
        cout<<a<<"
";
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t = 1;
    cin>>t;
    while (t--){
        solve(); 
    }
}