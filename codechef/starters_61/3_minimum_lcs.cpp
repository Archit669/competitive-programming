#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;

    string a , b;
    cin >> a >> b;
    
    unordered_map<char,int> m1;
    for (int i= 0 ; i < n ; i++) m1[a[i]]++;

    unordered_map<char,int> m2;
    for (int i= 0 ; i < n ; i++) m2[b[i]]++;

    int maxi = 0;

    for (auto &x : m1){
        if (m2.find(x.first) != m2.end()){
            maxi = max(maxi, min(x.second, m2[x.first]));
        }
    }

    cout << maxi << endl;
}

int main(){
    int t;
    cin >> t;

    while(t--) solve();
    return 0;
}