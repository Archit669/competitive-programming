#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	
	while (t--){
	    int n;
	    cin >> n;
	    
	    if (n < 4) cout << -1 << endl;
	    else{
	        for (int i = 2 ; i <= n ; i+=2){
	            cout << i << " ";
	        }
	        for (int j = 1 ; j <= n ; j+=2){
	            cout << j << " ";
	        }cout << endl;
	    }
	}
	return 0;
}
