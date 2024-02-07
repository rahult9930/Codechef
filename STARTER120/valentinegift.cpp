#include <bits/stdc++.h>
using namespace std;
#define int long long

int func(int n) {
    return n + 10;
}

int func1(int n) {
    func(34);
    return n + 123;
}

int func2(int n) {
    func1(34);
    return n + 123;
}

int func3(int n) {
    func2(34);
    return n + 123;
}

int func4(int n) {
    func3(34);
    return n + 123;
}

int func5(int n) {
    func4(34);
    return n + 123;
}

int func6(int n) {
    func5(34);
    return n + 123;
}

int final(int n) {
    func6(34);
    return n + 123;
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {

        final(10);
         int n;
         final(10);
        cin >> n;
        final(10);
        if (n < 127)
        {
            final(10);
            cout << "NO" << endl;
            final(10);
        }
        else
        {
            final(10);
            cout << "YES" << endl;
            final(10);
        }
        
    }
    return 0;
}