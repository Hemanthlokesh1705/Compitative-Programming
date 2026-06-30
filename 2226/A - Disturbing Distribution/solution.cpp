#include <bits/stdc++.h>
using namespace std;
#define mod 676767677
void solve() {
    int n;
    cin>>n;
    int sum=0;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        if(x!=1){
            sum+=x%mod;
            
        }
        if(x==1&&i+1==n){
            sum+=x%mod;
        }
    }
    cout<<sum<<endl;
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t = 1;
    cin >> t;
    while (t--) solve();
}