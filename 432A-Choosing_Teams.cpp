#include <bits/stdc++.h>
using namespace std;

int main() {
    int n=0,k=0;
    cin>>n>>k;
    int count=0;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int j=0;j<n;j++){
        if(arr[j]+k<=5){
            count++;
        }
    }
    cout<<count/3;
    return 0;
}