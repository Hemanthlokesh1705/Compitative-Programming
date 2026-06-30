#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void solve() {
    int a,b,x;
    cin>>a>>b>>x;
    int steps=0;
    int res=INT_MAX;
    while(a!=b){
        if(b>a)swap(a,b);
        res=min(res,steps+(a-b));
        a/=x;
        steps++;
        
    }
    res=min(res,steps);
    cout<<res<<endl;
    return;
 
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t = 1;
    cin >> t;
    while (t--){
        solve(); 
    }
}