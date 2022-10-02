#include <bits/stdc++.h>
using namespace std;
#define fo(i,n) for(i=0;i<n;i++)
#define ll long long

void solve() {
    string s;
    cin >> s;

    string ans;

    for (int i = 0 ; i < s.size() ; i++){
        if (s[i] == '.') ans.push_back('0');
        if (s[i] == '-'){
            i++;
            if (s[i] == '.') ans.push_back('1');
            else ans.push_back('2');
        }
    }

    cout << ans << endl;
}
 
int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    srand(chrono::high_resolution_clock::now().time_since_epoch().count());

    int t = 1;
    // cin >> t;
    while(t--) {
      solve();
    }

    return 0;
}
