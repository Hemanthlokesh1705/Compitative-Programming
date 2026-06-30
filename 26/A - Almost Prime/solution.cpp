#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define size 3000
vector<int> Prime_count(size+1,0);
void seive(){
    for(int i=2;i<=size;i++){
        if(Prime_count[i]==0){
            for(int j=2*i;j<=size;j+=i){
                Prime_count[j]++;
            }
        }
    }
}
void solve() {
    int n;
    cin>>n;
    ll count=0;
    if(n<4){
        cout<<0<<endl;
        return;
    }
    for(int i=2;i<=n;i++){
        if(Prime_count[i]==2){
            count++;
        }
    }
    cout<<count<<endl;
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    seive();
    solve();
}