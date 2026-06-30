#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define print(arr) for(auto &x:arr)cout<<x<<' ';
void solve() {
    int x,y;
    cin>>x>>y;
    if(x%y==0){
        cout<<"yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
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