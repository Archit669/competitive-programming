#include <bits/stdc++.h>
using namespace std;
#define fo(i,n) for(i=0;i<n;i++)
#define ll long long

void solve() {
  int n;
  cin >> n;

  int* arr = new int[n];
  for (int i = 0 ; i < n ; i++) cin >> arr[i];

  int _1s = 0;
  int _2s = 0;
  int _3s = 0;
  int _4s = 0;
  int _5s = 0;
  int _6s = 0;
  int _7s = 0;

  int count = 0;
  bool flag = 1;
  
  for(int i = 0 ; i < n ; i++){
    if (_1s && _2s && _3s && _4s && _5s && _6s && _7s){
        cout << count << endl; 
        flag = 0;
        break;
    } 
    int a;
    a = arr[i];
    count++;

    if (a == 1) _1s++;
    if (a == 2) _2s++;
    if (a == 3) _3s++;
    if (a == 4) _4s++;
    if (a == 5) _5s++;
    if (a == 6) _6s++;
    if (a == 7) _7s++;
  }

  if (flag){
    cout << n << endl;
  }
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