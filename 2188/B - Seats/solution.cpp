#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void solve() {
    int n;
    cin>>n;
    string s;
    cin>>s;
    s+='1';                          // sentinel for trailing zeros
    int zeros=0;
    int min_seats=0;
    bool is_first_segment=true;      // tracks if this segment touches the TRUE start
    int last_idx = s.size()-1;       // index of the sentinel '1'
 
    for(int i=0;i<(int)s.size();i++){
        if(s[i]=='1'){
            int adj_zeros = zeros;
            if (is_first_segment) adj_zeros++;   // segment touches true start
            if (i == last_idx)    adj_zeros++;   // segment touches true end (sentinel)
 
            min_seats += (adj_zeros/3);
            min_seats++;              // count this '1' itself
            zeros=0;
            is_first_segment=false;
        }
        else{
            zeros++;
        }
    }
    min_seats--;                      // remove the sentinel's count
    cout<<min_seats<<endl;
    return;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t = 1;
    cin >> t;
    while (t--){
        solve(); 
    }
}