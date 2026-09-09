#include <bits/stdc++.h>
using namespace std;

int main() {
    int n=0,m=0;
    int ans=0;
    cin>>n>>m;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i]; 
    }  
    sort(arr.begin(),arr.end());
    for(int j=0;j<m;j++){
        if(arr[j]<0){
            ans+=abs(arr[j]);
        }
        
    }
    cout<<ans;
    return 0;
}