#include <bits/stdc++.h>
#define int long long
#define rep(i, a, b) for (int i = a; i < b; i++)
using namespace std;

void solve()
{
    int n;
    cin >> n;

    int *arr1 = new int[n + 1];
    int *arr2 = new int[n + 1];

    int ans = 0;

    rep(i, 1, n + 1) cin >> arr1[i];
    
    if (n == 1)
    {
        cout << "1" << endl;
        return;
    }

    rep(i,2,n+1) arr2[i] = arr1[i] < arr1[i - 1];

    vector<pair<bool, int>> new_arr;

    new_arr.push_back({arr2[2], 1});

    rep(i,3,n+1)
        if (arr2[i] == new_arr[new_arr.size() - 1].first)
            new_arr[new_arr.size() - 1].second++;
        else
            new_arr.push_back({arr2[i], 1});

    new_arr.push_back({0, 0});

    rep(i,0,new_arr.size()-1)
        ans += new_arr[i].second * (new_arr[i].second + 1) / 2;

    rep(i,0,new_arr.size()-1)
        if (new_arr[i].first == true)
            ans += new_arr[i].second * new_arr[i + 1].second;


    cout << ans + n << endl;
}

signed main()
{
    int t;
    cin >> t;

    while (t--)
        solve();
        
    return 0;
}