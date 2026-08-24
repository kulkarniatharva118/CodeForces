#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n=0;
    int k=0;
    int ans=0;
    cin>>n>>k;
    vector<int> arr(n);
    
    for(int i =0;i<n;i++){
        cin>>arr[i];
    }
    int kscore= arr[k-1];
    for(int j=0;j<n;j++){
    if(arr[j]>=kscore && arr[j]>0){
        ans++;
    }
    
    }
    
    cout<<ans<<endl;
    return 0;
}