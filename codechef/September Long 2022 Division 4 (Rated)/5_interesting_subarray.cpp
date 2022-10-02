#include <bits/stdc++.h>
#define int long long 
using namespace std;
 
signed main(){
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;
        int* arr = new int[n];
        for (int i=0 ;i < n ; i++){
            cin >> arr[i];
        }

        int mini = arr[0];
        int maxi = arr[0];

        for (int i = 0 ; i < n ;i++){
            
            if (mini > arr[i]){
                mini = arr[i];
            }

            if (maxi < arr[i]){
                maxi = arr[i];
            }
        }
        // cout << "here" <<endl;
        // cout << mini << " "<< maxi  << endl;

            if (mini < 0){
                cout << mini*maxi << " " << max(maxi*maxi,mini*mini);
            }else{
                cout << mini*mini << " " << maxi*maxi << endl;
            }

    }
    return 0;
}