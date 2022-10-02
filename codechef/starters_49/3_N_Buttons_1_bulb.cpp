#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	
	while(t--){
	    int n;
	    cin >> n;
	    
	    string str1;
	    cin >> str1;
	    
	    string str2;
	    cin >> str2;
	    
	    bool on = 1;
	    
	    for (int i = 0 ; i < n ; i++){
	        if (str1[i] != str2[i]){
	            on = !on;
	        }
	    }
	    
	    cout << on << endl;
	}
	return 0;
}
