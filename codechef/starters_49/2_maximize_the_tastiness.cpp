#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin >> t;

    while(t--){
        int a,b,c,d;

        cin >> a >> b >> c >> d;

        int first = max(a,b);
        int second = max(c,d);

        cout << first + second << endl;
    }
    return 0;
}