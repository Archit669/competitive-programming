#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin >> t;

    while (t--){
        int w,x,y,z; 
        cin >> w >> x >> y >> z;
        if (x==w || y==w || z==w || x+y==w || y+z==w || z+x==w || x+y+z==w) cout << "yes" << endl;
        else cout << "no" << endl;
    }
    return 0;
}