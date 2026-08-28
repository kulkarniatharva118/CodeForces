#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cmath>
#include <unordered_map>
#include <cctype>
using namespace std;

int main() {
    int n=0,p=0,q=0;
    cin>>n;
    int ans=0;
    for(int i=0;i<n;i++){
        cin>>p>>q;
        if(q-p>=2){
            ans++;
        }
    }
    cout<<ans<<endl;
    return 0;
}