#include<bits/stdc++.h>
using namespace std;
int helper(int size,string s){
    string ans="";
    for(int i=0;i<size;i++){
        if(!ans.empty()&&ans.back()=='('&&s[i]==')'){
            ans.pop_back();
        }
        else{
            ans.push_back(s[i]);
        }
        
    }
    int len=ans.size();
    return len/2;
    
}
int main(){
    int n;
    cin>>n;
    while(n){
        string s;
        int size;
        cin>>size;
        cin>>s;
        cout<<helper(size,s)<<endl;
        n--;
    }
    return 0;
}