#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define print(arr) for(auto &x:arr)cout<<x<<' ';
void solve() {
    int x;
    cin>>x;
    string s=to_string(x);
    int size=s.size();
    ll y=1;
    for(int i=0;i<size;i++){
        y*=10;
    }
    y=y+1;
    cout<<y<<endl;
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