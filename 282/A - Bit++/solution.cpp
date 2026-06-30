#include<bits/stdc++.h>
using namespace std;
bool helper(string s){
    for(auto&x:s){
        if(x=='+'){
            return true;
        }
    }
    return false;
}
int main(){
    int n;
    cin>>n;
    int x=0;
    string statement;
    while(n){
        cin>>statement;
        if(helper(statement)){
            x++;
        }else{
            x--;
        }
        n--;
    }
    cout<<x<<endl;
    return 0;
}