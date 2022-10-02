#include <bits/stdc++.h>
using namespace std;
#define fo(i,n) for(i=0;i<n;i++)
#define ll long long

void solve() {
    int n = 5; int xcor = 0 , ycor = 0;
    int arr[n][n];
    for (int i = 1 ; i <= n; i++){
        for (int j = 1 ; j <= n ; j++){
            cin >> arr[i-1][j-1];
            if (arr[i-1][j-1] == 1){
                xcor = i, ycor = j;
            }
        }
    }

    cout << abs(3-xcor) + abs(3-ycor) << endl;
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
