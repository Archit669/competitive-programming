#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        int* arr = new int[n];

        unordered_map<int,int> m;

        for (int i = 0 ; i < n ; i++){
            cin >> arr[i];
            m[arr[i]]++; 
        }

        bool flag = 0;

        for (auto i: m){
            if (i.second%i.first){
                flag = 1;
                cout << "no" << endl;
                break;
            }
        }

        if (flag == 0){
            cout << "yes"<< endl;
        }

    }
    return 0;
}