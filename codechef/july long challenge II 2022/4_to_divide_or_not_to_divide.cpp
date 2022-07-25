#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	
	while(t--){
	    int a,b,n;
	    cin >>a >>b >> n;
	    
	    if (a%b==0) cout << -1 << endl;
	    else{
	        int i = n;
	        while(true){
	            if (i%a == 0 && i%b != 0){
	                cout << i << endl;
	                break;
	            }
	            i++;
	        }
	    }
	}
	return 0;
}
