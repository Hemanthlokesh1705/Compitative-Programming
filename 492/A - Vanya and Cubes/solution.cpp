#include<bits/stdc++.h>
using namespace std;
long long sum(int n){
    if(n==0)return 0;
    return 1LL*n*(n+1)*(n+2)/6;
}
int height(int cubes){
    int st=1,end=cubes;
    while(st<end){
        int mid=st+(end-st+1)/2;
        long long val=sum(mid);
        if(val>cubes){
            end=mid-1;
        }
        else{
            st=mid;
        }
    }
    return st;
}
int main(){
    int cubes;
    cin>>cubes;
    int ans=height(cubes);
    cout<<ans<<endl;
    return 0;
}