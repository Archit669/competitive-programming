#include <bits/stdc++.h>
using namespace std;
#define fo(i,n) for(i=0;i<n;i++)
#define ll long long

void solve() {
    int n, x;  
    cin >> n >> x;
    string s;
    cin >> s;

    for (int i= 0 ; i < x ; i++){
        for(int j =1 ; j < n ; j++){
            if (s[j] == 'G' && s[j-1] == 'B' ){
                swap(s[j],s[j-1]);
                j++;
            }
        }
    }

    cout << s << endl;
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
