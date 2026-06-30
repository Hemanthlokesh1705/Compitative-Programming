#include<iostream>
using namespace std;
struct node{
    int a,b,c;
};
node helper(int num){
    node temp;
    if(num%2==0){
        temp.c=1;
        int k=(num-2)/2;
        temp.a=k;
        temp.b=k+1;
    }
    else{
        temp.c=1;
        int k=(num-1)/2;
        if(k%2==0){
            temp.a=k+1;
            temp.b=k-1;
        }
        else{
            temp.a=k-2;
            temp.b=k+2;
        }
    }
    return temp;
}
int main(){
    cin.tie(0);
    cout.tie(0);
    ios::sync_with_stdio(false);
    int t;
    cin>>t;
    while(t--){
        int num;
        cin>>num;
        node temp=helper(num);
        cout<<temp.a<<" "<<temp.b<<" "<<temp.c<<endl;
    }
}