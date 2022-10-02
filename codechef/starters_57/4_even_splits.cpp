#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	
	while (t--){
	    int n;
	    cin >> n;
	    
	    string str;
	    cin >> str;
	    
	    if (n == 2) cout << str << endl;
	    else{
	        int ptr = 0;
	        for (int i = 0 ; i < n ; i++){
	            if (str[i] == '0'){
	                swap(str[ptr],str[i]);
	                ptr++;
	            }
	        }
	        
	        cout << str << endl;
	    }
	}
	return 0;
}
