#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int solve() {
    int n;
    cin>>n;
    int prev=-1;
    bool flag=false;
    for(int i=1;i<=n;i++){
        int val;cin>>val;
        if(val>=prev){
            prev=val;
        }
        else{
           flag=true;
        }
    }
    return flag?1:n;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t = 1;
    cin >> t;
    while (t--) {
        int ans=solve();
        cout<<ans<<endl;
    }
}