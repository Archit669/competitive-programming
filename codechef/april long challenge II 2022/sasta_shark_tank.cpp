#include <iostream>
using namespace std;
 
int main(){
    int t;
    cin >> t;
    while (t--){
        int x , y;
        cin >> x >> y;
        
        if (10*x == 5*y){
            cout << "ANY" << endl;
        }else if (10*x > 5*y){
            cout << "FIRST" << endl;
        }else{
            cout << "SECOND" << endl;
        }
    }
    return 0;
}