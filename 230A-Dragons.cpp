#include <bits/stdc++.h>
using namespace std;

int main() {
    int s=0,n=0;
    bool defeated = true;
    cin>>s>>n;
    vector<pair<int,int>> arr(n);
    for (int i = 0; i < n; i++){
        cin >> arr[i].first >> arr[i].second;    
    }
    sort(arr.begin(), arr.end());
    for(int j=0;j<n;j++){
        if(s<=arr[j].first){
            defeated = false;
            break;
        }
        else{
            
            s+=arr[j].second;
            
        }
    }
    if(defeated){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    
    return 0;
}