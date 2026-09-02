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
    cin>>n;
    vector<int> arr(n);
    
    int current_diff=0;
    
    int left_indext=0;
    int right_index=1;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
   
    int best_dif=abs(arr[0]-arr[1]);
    for(int i=0;i<n;i++){
        current_diff=abs(arr[i]-arr[(i + 1) % n]);
    
        if(current_diff<best_dif){
            best_dif=current_diff;
            left_indext=i;
            right_index=(i+1)%n;
            
        }
    }
    cout<<left_indext+1<<" "<<right_index+1;
    return 0;
}