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
    int n=0,k=0;
    int current_min_sum=0;
    int best_index=0;
    cin>>n>>k;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    for(int p=0;p<k;p++){
        current_min_sum+=arr[p];
    }
    int best_min_sum=current_min_sum;
    int new_sum=0;
    for(int j=0;j+k<n;j++){
        new_sum=current_min_sum-arr[j]+arr[j+k];
        current_min_sum=new_sum;
        if(current_min_sum<best_min_sum){
            best_min_sum=current_min_sum;
            best_index=j+1;
        }
    }
    cout<<best_index+1;
    return 0;
}