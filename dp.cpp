#include <iostream>
#include <bits/stdc++.h> 
using namespace std;

#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define int long long
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define nl '\n'

void solve() {
    int n;
    cin>>n;
    vector<int> arr(n);

    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int m = sqrtl(n) + 1;
    vector<int> dec((n + m - 1) / m, LLONG_MAX);
          
    for(int i = 0; i < n; i++) {
        dec[i / m] = min(dec[i/m],arr[i]);
    }
    int q;
    cin>>q;
          
    while(q--) {
        int l, r;
              cin >> l >> r;
              
              int mini = LLONG_MAX;
              for(int i = l; i <= r;) {
                  if(i % m == 0 && i + m - 1 <= r) {
                      mini = min(mini,dec[i / m]);
                      i += m;
                  } else {
                      mini = min(mini,arr[i]);
                      i++;
                  }
              }
        cout << mini << '\n';
    }
}

signed main() {
    fast_io;
    int t = 1;
    // cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}