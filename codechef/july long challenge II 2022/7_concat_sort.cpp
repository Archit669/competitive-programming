#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	
	while(t--){
	    int n;
	    cin >> n;
	    
	    int* original = new int[n];
	    for (int i = 0 ; i< n; i++){
	        cin >> original[i];
	    }
	    
	    int* sorted = new int[n];
	    for (int i = 0 ; i < n ; i++){
	        sorted[i] = original[i];
	    }
	    
	    sort(sorted,sorted+n);
	    
	    vector<int> rem;
	    
	    int p = 0;
	    int q = 0;
	    
	    while(p<n && q<n){
	        if (original[p] == sorted[q]){
	            p++; q++;
	        }else{
	            rem.push_back(original[p]);
	            p++;
	        }
	    }
	    
	    int r = rem.size()-1;
	    int res = 0;
	    int flag = 1;
	    
	    while(q<n && r>=0 && r < rem.size()){
	        if (rem[res] == sorted[q]){
	            res++;
	            q++;
	        }else{
	            cout << "No" << endl;
	            flag = 0;
	            break;
	        }
	    }
	    
	    if (flag)
	        cout << "yes" << endl;
	}
	return 0;
}