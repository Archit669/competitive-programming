#include <bits/stdc++.h>
#define int long long
#define rep(i, a, b) for (int i = a; i < b; i++)
using namespace std;

int ans = 0;

void dfs(int i, int x, int y, int* a, int* b, vector<vector<int>>& memo , int n){
    if(i == n) {
        ans = max(ans, min(x, y));
        return;
    }
    if(memo[i][x] >= y && memo[i][x] != 0) return;
    memo[i][x] = y;
    dfs(i+1, x+a[i], y, a, b,memo,  n);
    dfs(i+1, x, y+b[i], a, b, memo, n);
}

void solve()
{
    int n;
    cin >> n;

    int* arr1 = new int[n];

    rep(i,0,n) cin >> arr1[i];

    int* arr2 = new int[n];
    rep(i,0,n) cin >> arr2[i];

    vector<vector<int>> dp(n,vector<int>(20001,0));
    ans = 0;
    dfs(0,0,0,arr1,arr2, dp, n);

    cout << ans << endl;

}

signed main()
{
    int t;
    cin >> t;

    while (t--)
        solve();
        
    return 0;
}