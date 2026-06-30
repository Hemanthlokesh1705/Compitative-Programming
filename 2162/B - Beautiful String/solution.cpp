#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define print(arr) for(auto &x:arr)cout<<x<<" ";
void solve() {
    int n;
    cin>>n;
    string s;
    cin>>s;
    vector<int> ans;
    for(int i=0;i<n;i++){
        if(s[i]=='0'){
            ans.push_back(i+1);
        }
    }
    cout<<ans.size()<<endl;
    print(ans);
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