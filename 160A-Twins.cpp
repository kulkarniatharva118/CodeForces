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
    int n=0;
    int total=0;
    int taken=0;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr.begin(),arr.end(),greater<int>());
    total=accumulate(arr.begin(),arr.end(),0);
    int j=0;
    
    while(taken<=total-taken){
        taken+=arr[j];
        j++;
    }
    cout<<j;
    return 0;
}