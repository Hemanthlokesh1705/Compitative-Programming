#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define print(arr) for(auto &x:arr)cout<<x<<' ';
void solve() {
    int n;
    cin>>n;
    string s;
    cin>>s;
    int run=1;
    for(int i=1;i<n;i++){
        if(s[i-1]!=s[i])run++;
    }
    if(run==2){
        cout<<2<<endl;
    }
    else{
        cout<<1<<endl;
    }
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