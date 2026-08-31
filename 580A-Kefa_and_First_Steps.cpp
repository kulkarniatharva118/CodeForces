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
    int ans=1;
    int longest = 1;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    for(int j=1;j<n;j++){
        if(arr[j]>=arr[j-1]){
            ans++;
            if(ans>longest){
                longest=ans;
            }
            
        }
        else{
            ans=1;
        }
    }
    cout << longest;
    return 0;
}