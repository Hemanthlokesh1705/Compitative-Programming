#include<bits/stdc++.h>
using namespace std;
long long minimum_steps(vector<int>&candies,vector<int>&oranges,int size){
    int min_candy=*min_element(candies.begin(),candies.end());
    int min_orange=*min_element(oranges.begin(),oranges.end());
    long long total_steps=0;
    for(int i=0;i<size;i++){
        int c_steps=candies[i]-min_candy;
        int o_steps=oranges[i]-min_orange;
        total_steps+=max(c_steps,o_steps);
    }
    return total_steps;
}
int main(){
    int n;
    cin>>n;
    while(n){
        int size;
        cin>>size;
        vector<int> candies,oranges;
        for(int i=0;i<size;i++){
            int val;
            cin>>val;
            candies.push_back(val);
        }
        for(int i=0;i<size;i++){
            int val;
            cin>>val;
            oranges.push_back(val);
        }
        long long ans=minimum_steps(candies,oranges,size);
        cout<<ans<<endl;
        n--;
    }
    return 0;
}