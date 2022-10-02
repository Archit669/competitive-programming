#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	
	while (t--){
	    int a, b,c;
	    cin >> a >> b >> c;
	    
	    int mini = min(min(a,b), min(b,c));
	    
	    if (a==b && a==mini) cout << "yes" << endl;
	    else if (b==c && b == mini) cout << "yes" << endl;
	    else if (a==c && c == mini) cout << "yes" << endl;
	    else cout << "no" << endl;
	} 
	return 0;
}
