#include <iostream>
#include <math.h>
#define int long long 
using namespace std;

signed main() {
	int t;
	cin >> t;
	
	while (t--){
	    int n;
	    cin >> n;
	    
	    cout << ((int)sqrt(1+8*n) - 1)/2 << endl;
	}
}
