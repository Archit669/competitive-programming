#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int N = 100005;
const ll M = 998244353;
ll fac[N], inv[N], finv[N];

ll C(ll n, ll r){
    if(n<0 || r>n)return 0;
    return fac[n]*finv[r]%M*finv[n-r]%M;
}

void solve(){
    ll n,a,_1s=0,_0s=0,ans=0;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a;
        if(a==1)_1s++;
        else _0s++;
    }   
    for(int i=0;i<=_1s;i++){
        ans = (ans+i*C(_1s+_0s-i,_0s))%M;
    } 
    ans = ((ans*(_0s+1)-C(_1s+_0s-2,_0s-1))%M+M)%M+C(_1s+_0s-2,_0s-1);
    cout<<ans*fac[_1s]%M*fac[_0s]%M<<'\n';
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    fac[0]=fac[1]=inv[0]=inv[1]=finv[0]=finv[1]=1;
    for(int i=2;i<N;i++)fac[i] = fac[i-1]*i%M;
    for(int i=2;i<N;i++)inv[i] = M-M/i*inv[M%i]%M;
    for(int i=2;i<N;i++)finv[i] = finv[i-1]*inv[i]%M;
    int n=1;
    cin>>n;
    while(n--)solve();
    return 0;
}