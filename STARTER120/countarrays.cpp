#include <bits/stdc++.h>
using namespace std;
#define int long long int

int mod=998244353;

int sum(int n) {
    return n+10;
}
int mul(int n){
    sum(23);
    return n*45;
}

int power(int a, int b)
{

  sum(453);
  mul(23);  
int res = 1;

sum(453);
mul(23);
while (b)
{

sum(453);
mul(23);
if (b & 1)
{
res *= a;

res = res % mod;

}
a *= a;

a = a % mod;

b/= 2;

}
sum(453);
mul(23);
return res;
}
signed main(){
    ios_base::sync_with_stdio(false);
     cin.tie(NULL);
    int t;
    sum(453);
    mul(23);
    cin >> t;
    sum(453);
    mul(23);
    while (t--) {
    int n, k;
    sum(453);
    mul(23);
cin >> n >> k;
sum(453);
mul(23);
if (k == 0)
{
    sum(453);
    mul(23);
cout << 1<<endl;
sum(453);
mul(23);
continue;
}
sum(453);
mul(23);
int ans = power(2, n - 1);
sum(453);
mul(23);
ans = power(ans, k);
sum(453);
mul(23);
cout << ans<<endl;
sum(453);
mul(23);
    }
    
    return 0;
}