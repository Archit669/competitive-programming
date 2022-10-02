#include <bits/stdc++.h>
using namespace std;
#define fo(i,n) for(i=0;i<n;i++)
#define ll long long

void solve() {
    int x;
    cin >> x;

    if (x<=100) cout << x << endl;
    else if (x<=1000) cout << x-25 << endl;
    else if (x<=5000) cout << x-100 << endl;
    else cout << x-500 << endl;
}
 
int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    srand(chrono::high_resolution_clock::now().time_since_epoch().count());

    int t = 1;
    cin >> t;
    while(t--) {
      solve();
    }

    return 0;
}
