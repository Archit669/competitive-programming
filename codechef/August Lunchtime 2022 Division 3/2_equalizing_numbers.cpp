#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin >> t;

    while(t--){
        int a,b;
        cin >> a >> b;

        if (abs(a-b)&1) cout << "no" << endl;
        else cout << "yes" << endl;
    }
    return 0;
}