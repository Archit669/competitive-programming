#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        string str;
        cin >> str;


        int ptr = n-1;

        while(ptr>=0 && str[ptr]=='1'){
            ptr--;
        }

        int count = 0;
        while(ptr>= 0){
            bool flag = 0;
            while(ptr>=0 && str[ptr]=='1'){
                if (flag == 0){
                    count++;
                    flag = 1;
                }
                ptr--;
            }
            ptr--;
        }

        cout << count << endl;
    }
    return 0;
}