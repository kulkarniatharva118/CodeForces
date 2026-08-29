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
    int n=0;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    auto max_len=max_element(arr.begin(),arr.end());
    int max_val= *max_len;
    int max_index=distance(arr.begin(),max_len);

    auto min_len=min_element(arr.rbegin(),arr.rend());
    int min_val= *min_len;
    int min_reverse=distance(arr.rbegin(),min_len);
    int min_index=arr.size()-1 - min_reverse;

    if(max_index>min_index){
        min_index++;
    }
    int last=n-1;
    int max_moves=max_index;
    int min_moves=last-min_index;
    int ans=max_moves + min_moves;
    cout<<ans;
    return 0;
}