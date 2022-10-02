#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n, k;
    string str;
    cin>>n>>k>>str;
    unordered_map<char,int> m;
    for(char&ch:str){
        m[ch] += ch=='1';
        m[ch] += ch=='0';
    }
    int answer = abs(m['1'] - m['0']);
    bool flag = false;
    if(answer%k!=0)flag=true;
    answer/=k;
    cout<<((flag)?answer+1:answer)<<'\n';
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n = 1;
    cin>>n;
    while(n--)solve();
    return 0;
}