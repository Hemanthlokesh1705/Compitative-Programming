#include <bits/stdc++.h>
using namespace std;
 
using ll = long long;
using ld = long double;
#define print(arr) for(auto&x:arr)cout<<x<<' ';
using pii = pair<int,int>;
using pll = pair<ll,ll>;
using vi = vector<int>;
using vll = vector<ll>;
using vpii = vector<pii>;
using vpll = vector<pll>;
template<typename T>
using minpq = priority_queue<T, vector<T>, greater<T>>;
template<typename T>
using maxpq = priority_queue<T>;
constexpr int INF = 1e9;
constexpr ll LINF = 1e18;
constexpr int MOD = 1e9 + 7;
#define pb push_back
#define ff first
#define ss second
 
void solve(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    int count=0;
    int max_count=0;
    for(int i=0;i<n;i++){
        if(s[i]=='#'){
            count++;
            max_count=max(max_count,count);
        }
        else{
            count=0;
        }
    }
    cout<<ceil(double(max_count)/2.0)<<endl;
    return;
}
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int T=1;
    cin>>T;
    while(T--){
        solve();
    }
 
    return 0;
}