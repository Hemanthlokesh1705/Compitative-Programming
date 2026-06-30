#include<bits/stdc++.h>
using namespace std;
int count_steps(int n){
    if(n<=5){
        return 1;
    }
    int remaining_steps=n%5;
    int steps=(n-steps)/5;
     if(remaining_steps==0)return steps;
    return steps+1;
}
int main(){
    int n;
    cin>>n;
    int steps=count_steps(n);
    cout<<steps<<endl;
    return 0;
}