#include<bits/stdc++.h>
using namespace std;
string helper(string s){
    int len=s.length();
    string ans="";
    if(len>10){
        ans=s[0]+to_string(len-2)+s[len-1];
        return ans;
    }
    return s;
}
int main(){
    int n;
    cin>>n;
    while(n){
        string s;
        cin>>s;
        string ans=helper(s);
        cout<<ans<<endl;
        n--;
    }
    return 0;
}