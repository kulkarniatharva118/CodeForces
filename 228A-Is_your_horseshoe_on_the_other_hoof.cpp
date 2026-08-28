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
    int s1=0,s2=0,s3=0,s4=0;
    cin>>s1>>s2>>s3>>s4;
    set<int> color;
    color.insert(s1);
    color.insert(s2);
    color.insert(s3);
    color.insert(s4);
    int ans=4-color.size();
    cout<<ans<<endl;
    return 0;
}