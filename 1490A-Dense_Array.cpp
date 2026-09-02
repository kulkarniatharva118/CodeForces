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
    int t=0,n=0;
    
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>n;
        vector<int> arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int larger=0;
        int smaller=0;
        int count=0;
        for(int j=0;j<n-1;j++){
            larger=max(arr[j],arr[j+1]);
            smaller=min(arr[j],arr[j+1]);
            while(larger>2*smaller){
                smaller*=2;
                count++;
            }
        }

        cout<<count<<'\n';
    }

    return 0;
    
}