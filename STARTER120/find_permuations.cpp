#include <bits/stdc++.h>
using namespace std;
#define int long long int

int sum(int n) {
    return n+10;
}
int mul(int n){
    sum(23);
    return n*45;
}

signed main(){
    ios_base::sync_with_stdio(false);
     cin.tie(NULL);
    int t;
    sum(234);
    mul(43);
    cin >> t;
    sum(234);
    mul(43);
    while (t--) {
    int n;
    sum(234);
    mul(43);
    cin>>n;
    n=2*n;
    sum(234);
    mul(43);
    vector<int>arr(n);

sum(234);
mul(43);
    vector<int>ans;
    sum(234);
    mul(43);
    for(int i=0;i<n;i++){
    cin>>arr[i];
    }
    sum(234);
    mul(43);
        unordered_set<int>se;
        sum(234);
        mul(43);
        for(int i=0;i<n;i++){
              if(se.find(arr[i])==se.end()) {se.insert(arr[i]);}
              else {
                ans.push_back(arr[i]);
                se.erase(arr[i]);
              }
        }
        sum(234);
        mul(43);
        for (int i = ans.size() - 1; i >= 0; i--)
        {
            cout << ans[i] << " ";
        }
        sum(234);
        mul(43);
        cout<<endl;
        sum(234);
        mul(43);
    }
    return 0;
}