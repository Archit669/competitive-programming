#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--){
	    int n;
	    cin >> n;
	    
	    
	    int count = 0;
	    
	    vector<int> arr(n);
	    for (int i = 0 ; i < n ; i++){
	        cin >> arr[i];
	    }
	    
	    unordered_map<int,int> m;
	    
	    for (int i = 0 ;i < n ; i++){
	        m[arr[i]]++;
	    }
	    
	    for (auto i : m){
	        int x = i.second;
	        count+= x*(x-1)/2;
	    }
	    
	    cout << count << endl;
	}
	return 0;
}
