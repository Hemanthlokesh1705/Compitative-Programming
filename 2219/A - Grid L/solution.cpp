#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int helper(int val){
    return (val-1)/2;
}
pair<int,int> solve(int p,int q) {
    int s=2*(p+2*q)+1;
 
    for(int i=2;i<=sqrt(s);i++){
        if(s%i==0){
            int A=i;
            int B=s/i;
            int n=(A-1)/2;
            int m=(B-1)/2;
            if(n>=1&&m>=1){
                int H=m *(n + 1);
                int V =n*(m + 1);
                if(q<=H&&q<=V){
                    return {m,n};
                }
                    
           }
        }
    }
    return {-1,-1};
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t = 1;
    cin >> t;
    while (t--) {
        int p,q;
        cin>>p>>q;
        pair<int,int> ans=solve(p,q);
        if(ans.first!=-1){
            cout<<ans.first<<" "<<ans.second<<endl;
        }
        else{
            cout<<-1<<endl;
        }
        
    }
    return 0;
}