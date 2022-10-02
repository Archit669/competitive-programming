#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--){
	    int a,x,b,y;
	    cin >> a >> x >> b >> y;
	    
	    if ((a/x) > (b/y)) cout << "alice" << endl;
	    else if ((a/x) < (b/y)) cout << "bob" << endl;
	    else cout << "equal" << endl;
	}
	return 0;
}
