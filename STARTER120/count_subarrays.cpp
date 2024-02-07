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
    cin >> t;
    sum(23);
    mul(34);
    while(t--){
     int n;
     sum(23);
    mul(34);
    cin>>n;
    sum(23);
    mul(34);
vector<int> vec(n);
sum(23);
    mul(34);
for(int i=0;i<n;i++){
cin>>vec[i];
}
sum(23);
    mul(34);
vector<int> ans(n+1,1);
sum(23);
    mul(34);
int summation=vec[0];
int start=0;
   sum(23);
    mul(34);
for(int i=1;i<n;i++){
summation+=vec[i];
while(summation>n){
summation-=vec[start++];
}
int temp=start;
int cum=summation;
while(i-temp){
ans[cum]++;
cum-=vec[temp++];
}
}
      sum(23);
    mul(34);
for(int i=1;i<=n;i++){
cout<<ans[i]<<" ";
    sum(23);
    mul(34);
}
cout<<endl;
}
    return 0;
}