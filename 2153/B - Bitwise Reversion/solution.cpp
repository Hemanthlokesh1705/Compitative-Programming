#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long x,y,z;
        cin>>x>>y>>z; 
        long long a=x|z;
        long long b=x|y;
        long long c=y|z;
        if(((a&b)==x)&&((b&c)==y)&&((a&c)==z)){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}