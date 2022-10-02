#include <bits/stdc++.h>
using namespace std;
#define fo(i,n) for(i=0;i<n;i++)
#define ll long long

void solve() {
    int x;
    cin >> x;

    if (x<=4){
        cout << "no" << endl;
        return;
    }

    for (int a = 1 ; a*a <= x ; a++){
        if ((x-2*a)%(a+2)==0){
            cout << "yes" << endl;
            return;
        }
    }

    cout << "no" << endl;
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
