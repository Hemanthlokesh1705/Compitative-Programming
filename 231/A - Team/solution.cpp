#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int count=0;
    while(n){
        int A,B,C;
        cin>>A>>B>>C;
        if(A&&B||B&&C||A&&C){
            count++;
        }
        n--;
    }
    cout<<count<<endl;
    return 0;
}