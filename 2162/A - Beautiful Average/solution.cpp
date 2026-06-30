#include<bits/stdc++.h>
using namespace std;
int beautiful_average(vector<int>&arr){
    int n=arr.size();
    int max_average=-1;
    for(int i=0;i<n;i++){
        int sum=0;
        for(int j=i;j<n;j++){
             sum+=arr[j];
             int len=j-i+1;
            int avg=sum/len;
            max_average=max(max_average,avg);
        }
    }
    return  max_average;
}
int main() {
    int t;
    cin >> t;  // number of test cases
    while (t--) {
        int n;
        cin >> n;  // size of array
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
            cin >> arr[i];
 
        int ans = beautiful_average(arr);
        cout << ans << "
";
    }
    return 0;
}