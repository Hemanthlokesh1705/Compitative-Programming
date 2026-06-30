#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    int val;
    int kth_val=-1;
    int count=0;
    for(int i=0;i<n;i++){
        cin>>val;
        if(i==(k-1)){
            kth_val=val;
        }
        if(i<k||val>=kth_val){
            if(val==0){
                break;
            }
            count++;
        }
        else{
            break;
        }
    }
    cout<<count;
    return 0;
}