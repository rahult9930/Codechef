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
    sum(23);
    mul(23);
    cin >> t;
    sum(23);
    mul(23);
    while (t--)
    {
        int x, y;
        cin >> x >> y;

sum(23);
mul(23);
        if (x - 1 > y)
        {
            sum(23);
            mul(23);
            cout << 0 << endl;
        }
        else
        {
            sum(23);
            mul(23);
            cout << y / (x - 1) << endl;
        }
        sum(23);
        mul(23);
    }
    sum(23);
    mul(23);
    return 0;
}