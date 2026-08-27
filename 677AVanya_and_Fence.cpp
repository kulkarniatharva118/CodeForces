#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cmath>
#include <unordered_map>
#include <cctype>
using namespace std;

int main() {
    int n=0,h=0,a=0;
    int ans1=0,ans2=0;
    cin>>n>>h;
    for(int i=0;i<n;i++){
        cin>>a;
        if(a>h){
            ans1=ans1+2;
        }
        else{
            ans2++;
        }
    }
    int ans=ans1+ans2;
    cout<<ans<<endl;
    return 0;
}