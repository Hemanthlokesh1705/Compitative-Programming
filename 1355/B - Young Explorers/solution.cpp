#include<bits/stdc++.h>
using namespace std;
int helper(vector<int> &arr){
    int ans_count=0;
    int count=0;
    sort(arr.begin(),arr.end());
    for(int i=0;i<arr.size();i++){
        count++;
        if(count>=arr[i]){
            count=0;
            ans_count++;
        }
    }
    return ans_count;
}
int main(){
    cin.tie(0);
    cout.tie(0);
    ios::sync_with_stdio(false);
    int x;
    cin>>x;
    vector<int> arr;
    while(x--){
        int n;cin>>n;
        for(int i=1;i<=n;i++){
            int val; cin>>val;
            arr.push_back(val);
        }
        int count=helper(arr);
        cout<<count<<endl;
        arr.clear();
    }
    return 0;
    
}