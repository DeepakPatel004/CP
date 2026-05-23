#include <iostream>
#include <bits/stdc++.h>

using namespace std;

#define int long long


void solve(){

    int m = sqrtl(n) + 1;
    vector<long long> dec((n + m - 1) / m, 0);
    
    for(int i = 0; i < n; i++) {
        dec[i / m] += arr[i];
    }
    
    while(q--) {
        int l, r;
        cin >> l >> r;
        l--; r--;
        long long sum = 0;
        for(int i = l; i <= r;) {
            if(i % m == 0 && i + m - 1 <= r) {
                sum += dec[i / m];
                i += m;
            } else {
                sum += arr[i];
                i++;
            }
        }
        cout << sum << '\n';
    }

}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}