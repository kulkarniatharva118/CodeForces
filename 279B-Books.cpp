#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cmath>
#include <numeric>
#include <unordered_map>
#include <set>
#include <cctype>
using namespace std;

int main() {
    int n=0,t=0;
    int left=0;
    int current_sum=0;
    int max_len=0;
    cin>>n>>t;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int right=0;right<n;right++){
        current_sum+=arr[right];
        while(current_sum>t){
            current_sum-=arr[left];
            left++;
        }
        int current_len=right-left+1;
        max_len=max(max_len,current_len);
        
    }
    cout<<max_len;
    
    return 0;
}