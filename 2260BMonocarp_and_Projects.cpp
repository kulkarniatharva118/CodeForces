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
    long long t=0;
    long long x=0,y=0,k=0;
    cin>>t;
    for(long long i=0;i<t;i++){
        cin>>x>>y>>k;
        long long d=y-x;
        long long j=0;
        long long ans = 0;
        while (x+j<=d&& j < k){
            ans+=(y+j)%(x+j);
            j++;
        }
        ans+=(k-j)*d;
        cout<<ans<<'\n';
    }
    
    return 0;
}