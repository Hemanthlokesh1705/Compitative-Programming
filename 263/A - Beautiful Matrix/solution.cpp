#include<bits/stdc++.h>
using namespace std;
int main(){
    int row,col;
    int val;
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            cin>>val;
            if(val==1){
                row=i;
                col=j;
            }
        }
    }
    int distance=0;
    distance=abs(2-col)+abs(2-row);
    cout<<distance<<endl;
    return 0;
    
}