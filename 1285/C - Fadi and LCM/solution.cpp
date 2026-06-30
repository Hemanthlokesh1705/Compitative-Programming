#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
   ll n;
   cin>>n;
    ll a=1,b=n;
    for(ll i=1;i*i<=n;i++){
        if(n%i==0){
            ll x=i;
            ll y=n/i;
            if(__gcd(x,y)==1){
                a=x;
                b=y;
            }
        }
    }
    cout<<a<<" "<<b<<endl;
}