#include<bits/stdc++.h>
using namespace std;
char win_predictor(string matches){
    int a,d;
    a=d=0;
    for(auto&m:matches){
        if(m=='A')a++;
        else{
            d++;
        }
    }
    if(a==d)return 'F';
    return a>d?'A':'D';
}
int main(){
    int n;
    cin>>n;
    string matches;
    cin>>matches;
    char ans=win_predictor(matches);
    if(ans=='A'){
        cout<<"Anton"<<endl;
    }
    else if(ans=='D'){
        cout<<"Danik"<<endl;
    }
    else{
        cout<<"Friendship"<<endl;
    }
    return 0;
}