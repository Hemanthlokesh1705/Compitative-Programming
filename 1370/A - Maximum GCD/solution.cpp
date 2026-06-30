#include<iostream>
using namespace std;
int main(){
    cin.tie(nullptr);
    cout.tie(nullptr);
    ios::sync_with_stdio(false);
    int t=1;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        if((n%2==0)){
            cout<<n/2<<endl;
        }
        else{
            cout<<(n-1)/2<<endl;
        }
    }
    return 0;
}