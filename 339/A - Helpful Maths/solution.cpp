#include <bits/stdc++.h>
using namespace std;
 
string helper(string s) {
    int c1 = 0, c2 = 0, c3 = 0;
 
    // count
    for (char c : s) {
        if (c == '1') c1++;
        else if (c == '2') c2++;
        else if (c == '3') c3++;
    }
 
    int i = 0;
 
    // place 1s
    while (c1--) {
        s[i++] = '1';
        if (i < s.size()) s[i++] = '+';
    }
 
    // place 2s
    while (c2--) {
        s[i++] = '2';
        if (i < s.size()) s[i++] = '+';
    }
 
    // place 3s
    while (c3--) {
        s[i++] = '3';
        if (i < s.size()) s[i++] = '+';
    }
 
    return s;
}
 
int main() {
    string s;
    cin >> s;
    cout << helper(s) << endl;
}