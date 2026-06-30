#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int sum=0;
    vector<int> coins;
    int val;
    for(int i=0;i<n;i++){
        cin>>val;
        sum+=val;
        coins.push_back(val);
    }
    double half_sum=sum/2.0;
    sort(coins.begin(),coins.end());
    int i;
    for(i=n-1;i>=0;i--){
        sum-=coins[i];
        if(sum<half_sum){
            break;
        }
    }
    cout<<n-i<<endl;
    return 0;
    
}