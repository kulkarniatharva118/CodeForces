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
    int left=0;
    int right=n-1;
    bool turn=true;
    int sereja_ans=0;
    int dima_ans=0;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    while(left<=right){
        if(arr[left]>arr[right]){
            
            if(turn){
                sereja_ans+=arr[left];
                
            }
            else{
                dima_ans+=arr[left];
                
            }
            left++;
            turn=!turn;  
        }
        else{
            
            if(turn){
                sereja_ans+=arr[right];
                
            }
            else{
                dima_ans+=arr[right];
                
            }
            right--;
            turn=!turn;
        }

    }
    cout<<sereja_ans<<" "<<dima_ans;

    return 0;
}