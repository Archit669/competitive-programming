#include <iostream>
using namespace std;

bool isPossible(int mid,int x,int y,int n,int r){
    int normal_burger_price = r - y*mid;
    if (x*(n-mid) == r-y*mid) return true;
    return false;
}

int main() {
	int t;
	cin >> t;
	
	while(t--){
	    int x,y,n,r;
	    cin>>x>>y>>n>>r;
	    
	    int start = 0;
	    int end = n;
	    int ans = -1;
	    
	    while (start <= end){
	        int mid = start + (end - start)/2;
	        
	        if (isPossible(mid,x,y,n,r)){
	            ans = mid;
	            start = mid +1;
	        }else{
	            end = mid-1;
	        }
	    }
	    
        if (ans != -1)
	        cout << n-ans << ans << endl;
        else{
            cout << ans << endl;
        }
	}
	return 0;
}
