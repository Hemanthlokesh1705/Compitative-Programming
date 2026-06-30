#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define mysort(a) sort(a.begin(),a.end())
void solve() {
    int n,qn;
    cin>>n>>qn;
    vector<ll> arr(n+1,0),carr(n+1,0);
    ll val;
    for(int i=1;i<=n;i++){
        cin>>val;
        arr[i]=val;
    }
    int l,r;
    for(int i=0;i<qn;i++){
        cin>>l>>r;
        if(r+1<=n){
            carr[r+1]--;
        }
        carr[l]++;
    }
    for(int i=1;i<=n;i++){
        carr[i]+=carr[i-1];
    }
    mysort(carr);
    mysort(arr);
    ll sum=0;
    for(int i=1;i<=n;i++){
        sum+=(1LL*arr[i]*carr[i]);
    }
    cout<<sum<<endl;
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t = 1;
    while (t--){
        solve(); 
    }
}