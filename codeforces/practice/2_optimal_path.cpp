#include<bits/stdc++.h>
using namespace std;


void solve(){
    long long int n, m;
    cin >> m >> n;

    long long int sum = 0;
    sum+= n*(n+1)/2;
    sum+= n*(m*(m+1)/2)-n;

    cout << sum << endl;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long int n = 1;
    cin>>n;
    while(n--)solve();
    return 0;
}