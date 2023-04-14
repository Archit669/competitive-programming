#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0 ; i < n ; i++) cin >> arr[i];

    int one_count= 0 ,zero_count = 0;
    int ans = 0;

    for (auto &x : arr){
        if (x==1) one_count++;
        if (x== 0) zero_count++;
        int mini = min(one_count,zero_count);
        one_count-= mini;
        zero_count-= mini;
        ans+= mini;
    }

    cout << ans+ (one_count/3) << endl;
}

int main(){
    int t;
    cin >> t;

    while(t--) solve();
    return 0;
}