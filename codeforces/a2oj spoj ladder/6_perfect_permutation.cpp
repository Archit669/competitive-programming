#include <bits/stdc++.h>
using namespace std;
#define fo(i,n) for(i=0;i<n;i++)
#define ll long long

void solve() {
    int n;
    cin >> n;

    if (n&1){
        if (n==1) cout << 1 << " ";
        else{
            cout << 1 << " ";
            for (int i = 2 ; i <= n ; i++){
                if (i&1){
                    cout << i-1 << " ";
                }else{
                    cout << i+1 << " ";
                }
            }
        }
    }else{
        for (int i = 1 ;  i <= n ; i++){
            if(i&1){
                cout << i+1 << " ";
            }else{
                cout << i-1 << " ";
            }
        }
    }

    cout << endl;
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
