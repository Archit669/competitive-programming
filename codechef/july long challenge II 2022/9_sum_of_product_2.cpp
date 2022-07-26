#include<iostream>
using namespace std;

#define mod 998244353

long long int fact(int n, int k){
    if(n<k)return 0;
    long long ans=1;
    for(int i=n; i>k; i--){
         ans = (ans*i)%mod;
    }
    return ans;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,temp,m=0;
        cin>>n;
        for(int i=0; i<n; i++){
            cin>>temp;
            m += temp;
        }
        
        long long int ans = (fact(n+1,n-m+2))%mod;
        ans = (ans*fact(n-m+1,0))%mod;
        ans = (ans*m)%mod;
        cout<<ans<<endl;
    }
    return 0;
}
