#include <bits/stdc++.h>
using namespace std;
#define fo(i,n) for(i=0;i<n;i++)
#define ll long long

void solve() {
    int n , x, y;
    cin >> n >> x >> y;

    map<int,int> m;

    int* arr = new int[n];
    int i = 0;
    fo(i,n) cin >> arr[i];
    i = 0;
    fo(i,n) m[arr[i]]++;
    while (y--){

        auto it = m.begin();
        int prev_val = it->first;
        int new_val = it->first^x;
        if (prev_val > new_val){
            if ((y&1)) new_val = prev_val;
            y = 0;
        }
        if (it->second == 1)
            m.erase(it);
        else
            it->second = it->second - 1;
        m[new_val]++;
    }

    for (auto i: m){
        while(i.second){
            cout << i.first << " ";
            i.second--;
        }
    }cout << endl;

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
