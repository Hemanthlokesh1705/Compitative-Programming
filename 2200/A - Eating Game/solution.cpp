#include<bits/stdc++.h>
using namespace std;
void solve(vector<int>&arr,int n){
    int max_val=*max_element(arr.begin(),arr.end());
    int count=0;
    for(int i=0;i<n;i++){
        if(max_val==arr[i]){
            count++;
        }
    }
    cout<<count;
}
int main(){
    int x;
    cin>>x;
    vector<int> ans;
    int max_val=0;
    while(x--){
     int n;
     cin>>n;
     for(int i=0;i<n;i++){
         int val;
         cin>>val;
         ans.push_back(val);
     }
     solve(ans,n);
     cout<<endl;
     ans.clear();
    }
    return 0;
}