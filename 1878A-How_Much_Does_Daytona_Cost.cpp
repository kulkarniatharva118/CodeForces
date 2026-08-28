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
    int t=0;
    int n=0,k=0;
    int a=0;
    bool found=false;
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>n>>k;
        found=false;
        for(int j=0;j<n;j++){
            cin>>a;
            if(a==k){
                found=true;
            }
        }
        if(found){
            cout<<"YES"<<'\n';
        }
        else{
            cout<<"NO"<<'\n';
        }
    }
    
    return 0;
}