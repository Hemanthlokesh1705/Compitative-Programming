#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void solve() {
    int n;
    cin>>n;
    string given;
    cin>>given;
    string ans="";
    for(int i=0;i<n;i++){
        if(!ans.empty()&&ans.back()==given[i]){
            ans.pop_back();
        }
        else{
            ans.push_back(given[i]);
        }
    }
    if(ans.empty())cout<<"yes"<<endl;
    else{
        cout<<"No"<<endl;
    }
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t = 1;
    cin >> t;
    while (t--) solve();
}