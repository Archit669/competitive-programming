#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    int ar[n];
    for(int i=0;i<n;i++)cin>>ar[i];
    unordered_map<int,int> m;
    for(int i=0;i<n;i++){
        m[ar[i]]++;
    }
    vector<int> arr;
    for(auto& i:m){
        arr.push_back(i.second);
    }
    sort(arr.begin(),arr.end());
    int s = arr.size();
    if(arr[s-1]&2==0){arr[s-1] = arr[s-1]/2;}
    else {arr[s-1] = (arr[s-1]+1)/2;}
    sort(arr.begin(),arr.end());
    cout<<arr[s-1]<<'\n';
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n = 1;
    cin>>n;
    while(n--)solve();
    return 0;
}