#include <bits/stdc++.h>
using namespace std;
#define fo(i,stations) for(i=0;i<stations;i++)
#define ll long long

void solve() {
    int stations;
    cin >> stations;

    int* time = new int[stations-1];
    int i = 0;
    fo(i,stations-1) cin >> time[i];

    int A_time = time[0];
    int B_time = 2*time[0];
    
    for (int i =1 ; i < stations-1 ; i++){
        A_time+=time[i];
        if (A_time<=B_time) B_time+=time[i];
        else B_time+=(A_time-B_time)+time[i];
    }

    cout << B_time << endl;
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
