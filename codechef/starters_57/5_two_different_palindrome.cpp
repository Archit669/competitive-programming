#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--){
	    int a, b;
	    cin >> a >> b;
	    
	    if ((a&1) && (b&1)) cout << "no" << endl;
	    else if (a==1 || b == 1) cout << "no" << endl;
	    else cout << "yes" << endl;
	}
	return 0;
}
