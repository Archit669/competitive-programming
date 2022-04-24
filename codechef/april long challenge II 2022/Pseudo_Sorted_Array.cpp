#include <iostream>
using namespace std;

bool is_sorted(int* arr , int n ){
    for (int i = 0 ; i < n-1 ; i++){
        if (arr[i] > arr[i+1]){
            swap(arr[i],arr[i+1]);
            return 0;
        }
    }
    return 1;
}

bool is_pseudo_sorted(int* arr,int n){
    if (is_sorted(arr,n)){
        return 1;
    }else if(is_sorted(arr,n)){
        return 1;
    }
    return 0;
}
 
int main(){
    int t;
    cin >> t;

    while (t--){
        int n;
        cin >> n;
        int* arr = new int[n];
        for (int i =0  ; i < n ; i++){
            cin >> arr[i];
        }
        if (is_pseudo_sorted(arr,n)){
            cout << "yes" << endl;
        }else{
            cout << "no" << endl;
        }
    }
    return 0;
}