#include <bits/stdc++.h>
using namespace std;
#define fo(i,n) for(i=0;i<n;i++)
#define ll long long

bool isPossible(int num){
    string n = to_string(num);
    vector<int> arr(10);
    for (int i = 0 ; i < n.size() ; i++){
        arr[n[i]-'0']++;
    }

    for (int i = 0 ; i < arr.size() ; i++){
        if (arr[i]>1) return false;
    }
    return true;
}

void solve() {
    int n;
    cin >> n;

    int ans = -1;

    for (int i = n+1 ; i <= 10000 ; i++){
        if (isPossible(i)) {ans = i ; break;}
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
