#include<bits/stdc++.h>
using namespace std;

void sub(string num){
    int carry = 0;
    for (int i = num.size() ; i>=0 ; i--){
        
    }
}

void solve(){
    string num;
    cin >> num;

    if (num[0]!='9') for (int i = 0 ; i < num.size(); i++) num[i] = '9' - num[i] + '0';
    else sub(num);
    cout << num << endl;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n = 1;
    cin>>n;
    while(n--)solve();
    return 0;
}