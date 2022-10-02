#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin >> t;

    while (t--){
        int n;
        cin >> n;

        int temp;
        if(n&1) temp = n/2+1;
        else temp = n/2;

        unordered_map<int,int> m;

        int* arr = new int[n];
        for (int i = 0 ; i < n ; i++){
            cin >> arr[i];
            m[arr[i]]++;
        }
        bool flag = 1;
        for (auto i:m){
            if (i.second > temp) {cout << "no" << endl; flag = 0;}
        }
        if (flag){
            cout << "yes" << endl;
        }
    }
    return 0;
}