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
    vector<int> ans(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
        ans[arr[i]-1]=i;
    }

    for(int j=0;j<n;j++){
        cout<<ans[j]+1<<" ";
    }
    return 0;
}