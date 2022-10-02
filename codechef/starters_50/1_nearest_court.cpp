#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	
	while(t--){
	   int x,y;
	   cin >> x >> y;
	   
	   int mid = (x+y)/2;
	   
	   if (x<y){
	       cout << y-mid << endl;
	   }else{
	       cout << x - mid << endl;
	   }
	}
	return 0;
}
