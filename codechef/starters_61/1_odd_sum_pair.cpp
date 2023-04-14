#include <bits/stdc++.h>
using namespace std;

void solve(){
    int a,b,c;
    cin >> a >> b >> c;

    int odd = 0;
    int even = 0; 

    if (a&1) odd++;
    else even++;
    if (b&1) odd++;
    else even++;
    if (c&1) odd++;
    else even++;

    if (odd && even) cout << "yes" << endl;
    else cout << "no" << endl;
}

int main(){
    int t;
    cin >> t;

    while(t--) solve();
    return 0;
}