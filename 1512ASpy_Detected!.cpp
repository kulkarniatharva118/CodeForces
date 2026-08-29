#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cmath>
#include <unordered_map>
#include <set>
#include <cctype>
using namespace std;

int main() {
    int t=0,n=0,a=0;
    cin>>t;
    
    for(int i=0;i<t;i++){
        cin>>n;
        vector<int> arr(n);
        int commonValue=0;
        for(int j=0;j<n;j++){
            cin >> arr[j];
        }
        if(arr[0]==arr[1] ){
                commonValue=arr[0];
            }
            else if(arr[1]==arr[2]){
                commonValue=arr[1];
            }
            else{
                commonValue=arr[2];
            }
            for(int k=0;k<n;k++){
                if(arr[k]!=commonValue){
                    cout<<k+1<< '\n';
                    break;
                }
            }
        

    }
    
    return 0;
}