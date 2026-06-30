#include<iostream>
#include<string>
 
using namespace std;
 
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t; cin >> t;
    int n;
    string s;
    bool ok;
    while(t--){
        cin >> n >> s;
        if(n % 2 && s[0] == 'b') cout << "NO
";
        else{
            ok = 1;
            for(int i = n % 2; i < n; i += 2)
                if(s[i] == s[i + 1] && s[i] != '?'){
                    ok = 0;
                    break;
                }
            cout << (ok?"YES
":"NO
");
        }
    }
    return 0;
}