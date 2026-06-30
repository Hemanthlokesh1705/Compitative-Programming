#include<bits/stdc++.h>
using namespace std;
int min_stone_removal(int n,string s){
    if(n<=0)return 0;
    int count=0;
    for(int i=1;i<n;i++){
        if(s[i-1]==s[i]){
            count++;
        }
    }
    return count;
}
int main(){
    int n;
    string s;
    cin>>n;
    cin>>s;
    int ans=min_stone_removal(n,s);
    cout<<ans<<endl;
    return 0;
}