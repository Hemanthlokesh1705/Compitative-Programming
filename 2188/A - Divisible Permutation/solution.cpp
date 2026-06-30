#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void solve(int n) {
    int first,second;
    if(n%2==0){
        first=n/2;
    }
    else{
        first=(n/2)+1;
    }
    second=first+1;
    for(int i=1;i<=n/2;i++){
        cout<<first<<" "<<second<<" ";
        first--;
        second++;
    }
    if(n%2!=0){
        cout<<1;
    }
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t = 1;
    cin >> t;
    while (t--) {
        int n;
        cin>>n;
        solve(n);
        cout<<endl;
    }
}