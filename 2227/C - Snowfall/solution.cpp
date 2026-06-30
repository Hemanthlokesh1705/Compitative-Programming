#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;++i) cin>>a[i];
    vector<int> b,a2,a3,a6;
    for(int i=0;i<n;++i){
        if(a[i]%6==0) a6.push_back(a[i]);
        else if(a[i]%2==0) a2.push_back(a[i]);
        else if(a[i]%3==0) a3.push_back(a[i]);
        else b.push_back(a[i]);
    }
    for(int i=0;i<a3.size();++i) cout<<a3[i]<<' ';       
    for(int i=0;i<b.size();++i) cout<<b[i]<<' ';
    for(int i=0;i<a2.size();++i) cout<<a2[i]<<' ';
    for(int i=0;i<a6.size();++i) cout<<a6[i]<<' ';
    cout<<'
';
}
int main(){
    //cout<<"hello world"<<'
';
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int tt;
    cin>>tt;
    while(tt--){
        solve();
    }
    return 0;
}