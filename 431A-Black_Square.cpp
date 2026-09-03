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
    vector<int> arr(4);
    for(int i=0;i<4;i++){
        cin>>arr[i];
    }
    string s;
    cin>>s;
    int ans=0;
    for(int i=0;i<s.size();i++){
        if(s[i]=='1'){
            ans+=arr[0];
            
        }
        else if(s[i]=='2'){
            ans+=arr[1];
            
        }
        else if(s[i]=='3'){
            ans+=arr[2];
            
        }
        else{
            ans+=arr[3];
            
        }

    }
    cout<<ans;
    return 0;
}