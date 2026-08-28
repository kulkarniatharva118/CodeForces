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
    string s;
    cin>>n;
    getline(cin>>ws,s);
    set<char> pan;
    for(char c:s){
        c=tolower(c);
        pan.insert(c);
    }
    if(pan.size()==26){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    return 0;
}