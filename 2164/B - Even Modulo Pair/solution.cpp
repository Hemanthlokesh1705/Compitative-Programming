#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define print(arr) for(auto &x:arr)cout<<x<<' ';
void solve() {
    int n;
    cin>>n;
    vector<int> arr(n,0);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int prev=-1;
    for(int i=0;i<n;i++){
        if(arr[i]%2==0){
            if(prev!=-1){
                cout<<prev<<" "<<arr[i]<<endl;
                return;
            }
            prev=arr[i];
        }
        else{
            if(i>0&&(arr[i-1]%2)&&arr[i]<2*arr[i-1]){
                cout<<arr[i-1]<<" "<<arr[i]<<endl;
                return;
            }
        }
    }
        for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            if((arr[j] % arr[i]) % 2 == 0) {
                cout << arr[i] << " " << arr[j] << "
";
                return;
            }
        }
    }
    cout<<-1<<endl;
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