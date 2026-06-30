#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void solve() {
    int n;
    cin>>n; 
    unordered_map<int,int> freq;
    for(int i=1;i<=n;i++){
        int val;
        cin>>val;
        freq[val]++;
    }
    int cnt0 = freq[0];
    int cnt1 = freq[1];
 
    if(cnt0 == 0){
        cout<<"No"<<endl;
    }
    else if(cnt0 == 1){
        cout<<"Yes"<<endl;
    }
    else{ // cnt0 >= 2
        if(cnt1 == 0) cout<<"No"<<endl;
        else cout<<"Yes"<<endl;
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