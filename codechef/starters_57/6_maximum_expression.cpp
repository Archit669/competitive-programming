#include<bits/stdc++.h>
using namespace std;
#define int long long


void solve() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    int n;
    cin >> n;

    string s1;
    cin >> s1;

    sort(s1.begin(),s1.end() , greater<int> ());

    string s2;
    for (auto &ch : s1){
        if (ch >= '0' && ch <= '9'){
            s2.push_back(ch);
            s2.push_back('_');
        }else{
            s2.push_back(ch);
        }
    }

    int i = s2.size();
    while (i >= 0){
        if (s2[i] >= '0' && s2[i] <= '9'){
            break;
        }
        i--;
    }

    int ptr1 = i-1;
    int ptr2 = i+2;

    while (ptr2 < s2.size()){
        swap(s2[ptr1],s2[ptr2]);
        ptr1-= 2;
        ptr2++;
    }

    for (auto &ch : s2){
        if (ch != '_')
            cout << ch;
    }cout << endl;
}

signed main() {
    int t=0;
    cin>>t;
    while(t--) solve();
}