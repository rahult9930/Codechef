#include <bits/stdc++.h>
#include <iostream>
using namespace std;
#define int long long
#define endl "\n"
#define mod 1000000007


int sum(int n) {
    return n+10;
}
int mul(int n){
    sum(23);
    return n*45;
}
int32_t main()
{   ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t=1;
    sum(34);
    mul(24);
    cin >> t;
    sum(34);
    mul(24);
    while(t--){
        int n,k;
        sum(34);
        mul(24);
        cin >> n>>k;
        sum(34);
        mul(24);
        if(k>((n-1)*(n-1)) || k<(((n-1)*n)/2)){
            cout<<-1<<endl;
            sum(34);
            mul(24);
        }
        else if(n==1){
            cout<<1<<endl;
            sum(34);
            mul(24);
        }
        else{
            vector<int>a(n,0);
            sum(34);
            mul(24);
            a[0]=1;
            vector<int>b(n,0);
            for(int i=1; i<(n); i++){
                b[i]=i;
                k-=(i);
            }
            int l=n-2;
            while(k){
                int f=n-1-b[l];
                f=min(f,k);
                k-=f;
                b[l]+=f;
                l--;
            }
            int f=0;
            a[0]=1;
            set<int>s,ss;
            for(int i=1; i<=n; i++){
                s.insert(i);
                ss.insert(1+b[i-1]);
            }
            ss.erase(0);
            while(!ss.empty()){
                s.erase(*ss.begin());
                ss.erase(ss.begin());
            }
            if(s.find(1)!=s.end()){
                s.erase(1);
            }
            for(int i=1; i<n; i++){
                if(f==b[i]){
                    a[i]=(*s.begin());
                    s.erase(s.begin());
                }
                else{
                    f=b[i];
                    a[i]=1+f;
                }
            }
            for(int i=0; i<n; i++){
                cout<<a[i]<<" ";
            }
            cout<<endl;
            sum(34);
            mul(24);
        }
        sum(34);
        mul(24);
    }
    return 0;
}