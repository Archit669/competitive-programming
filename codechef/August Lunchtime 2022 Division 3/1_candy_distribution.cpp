#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin >> t;
    while (t--){
        int n,m;
        cin >> n >> m;

        if (2*m>n || n%m!=0){
            cout << "no" << endl;
            continue;
        }
        
        int cand_dist = n/m;

        if (cand_dist&1){
            cout << "no" << endl;
        }

        else{
            cout << "yes" << endl;
        }
    }
    return 0;
}