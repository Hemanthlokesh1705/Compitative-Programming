#include <bits/stdc++.h>
#define int long long
using namespace std;
 
void solve(){
    string s;
    cin>>s;
    int a=0,b=0;
    for(char c:s){
        if(c=='2'){
            a++;
        }
        else if(c=='4'){
            continue;
        }
        else{
            b=max(a,b)+1;
        }
    }
 
    cout<<s.size()-max(a,b)<<"
";
}
 
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin>>t;
    while(t--) solve();
}