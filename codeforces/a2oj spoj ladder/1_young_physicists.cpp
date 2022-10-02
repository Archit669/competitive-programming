#include <bits/stdc++.h>
using namespace std;
#define fo(i,n) for(i=0;i<n;i++)
#define ll long long

void solve() {
    int n;
    cin >> n;
    vector<int> xcor(n) , ycor(n) , zcor(n);
    int xsum = 0, ysum = 0 , zsum = 0;

    for (int i = 0 ; i < n ; i++){
        cin >> xcor[i]; 
        cin >> ycor[i]; 
        cin >> zcor[i]; 
    }

    for (int i = 0 ; i < n ; i++){
        xsum+=xcor[i];
        ysum+=ycor[i];
        zsum+=zcor[i];
    }

    bool ans = (xsum == 0 && ysum == 0 && zsum == 0);
    if (ans) cout << "YES" << endl;
    else cout << "NO" << endl;
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
