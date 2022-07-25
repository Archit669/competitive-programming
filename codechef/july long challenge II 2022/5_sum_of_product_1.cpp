#include <iostream>
using namespace std;


int main() {
	long long int t;
	cin >> t;
	
	while(t--){
	    long long int n;
	    cin >> n;
	    
	    int* arr = new int[n];
	    for (int i = 0 ; i < n ; i++){
	        cin >> arr[i];
	    }
	    
	    long long int ans = 0;
	    long long int count = 0;
	    for (int i = 0 ; i < n ; i++){
	        if (arr[i]==1){
	            count+=1;
	        }else{
	            ans+=count*(count+1)/2;
	            count = 0;
	        }
	    }
	    
	   ans+=count*(count+1)/2;
	    
	    cout << ans << endl;
	}
	return 0;
}
