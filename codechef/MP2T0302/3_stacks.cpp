#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	
	while(t--)
	{
	    int n;
	    cin >> n;
	    
	    int* arr = new int[n];
	    
	    for (int i = 0 ; i < n ; i++) cin >> arr[i];
	    
	    vector<int> stack;
	    stack.push_back(arr[0]);
	    
	    for (int i = 1 ; i < n ; i++)
	    {
	        int ans = -1;

            int start = 0;
            int end = stack.size()-1;

            while (start <= end){
                int mid = start + (end - start)/2;
                if (arr[i] < stack[mid]){
                    ans = mid;
                    end = mid - 1;
                }else{
                    start = mid + 1;
                }
            }
	        if (ans == -1){
	            stack.push_back(arr[i]);
	        }else{
                stack[ans]= arr[i]; 
            }
	    }
	    
	    
	    cout << stack.size() << " ";
	    for (int i = 0 ; i < stack.size() ; i++) cout << stack[i] << " ";
	    cout << endl;
	}
	return 0;
}
