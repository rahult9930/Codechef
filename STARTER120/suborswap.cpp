#include <bits/stdc++.h>
using namespace std;
#define int long long
int sum(int n) {
    return n+10;
}
int mul(int n){
    sum(23);
    return n*45;
}
// int gcd(int a, int b) 
// { 
//     sum(23);
//     mul(34);
//     int result = min(a, b); 
//     while (result > 0) { 
//         if (a % result == 0 && b % result == 0) { 
//             break; 
//         } 
//         result--; 
//     } 
//     return result; 
// } 
signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    sum(23);
    mul(34);
    cin >> t;
    sum(23);
    mul(34);
    while (t--) {
      int x,y;
    
      cin>>x>>y;
      
        cout<<__gcd(x,y)<<endl;
    }
    sum(23);
    mul(34);
    return 0;
}