#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	
	while (t--){
	    int n;
	    cin >> n;
	    
	    int count = 0;
	    
	    int* arr = new int[n];
	    
	    for (int i = 0 ; i < n ; i++) cin >> arr[i];
	    
	    bool flag = 0;
	    for (int i = 0 ; i < n ; i++){
	        if (arr[i] < 0) count++;
	        if (arr[i] == 0) {
	            cout << 0 << endl;
	            flag = 1;
	            break;
	        }
	    }
	    
	    if (flag == 0)
	        cout << count%2 << endl;
	}
	return 0;
}
