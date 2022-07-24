#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	
	while (t--){
	    int n,m;
	    cin >> n>>m;
	    
	    pair<int,int>ans;
	    int maxi = INT_MIN;
	    
	    for (int a = n ; a <= n+ m%n ; a++){
	        int b = m - m%a;
	        
	        if (maxi < abs(a-b)){
	            maxi = abs(a-b);
	            ans.first = a;
	            ans.second = b;
	        }
	    }
	    
	    cout << ans.first << " " << ans.second << endl;
	}
	return 0;
}
