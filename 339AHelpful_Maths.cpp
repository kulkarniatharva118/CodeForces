#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cmath>
#include <unordered_map>
#include <cctype>
using namespace std;

int main() {
    string s;
    string ans;
    getline(cin >> ws,s);
    for(char c: s){
        if(c !='+'){
            ans+=c;
        }
        
    }
    sort(ans.begin(),ans.end());
    for(int i=0;i<ans.size()-1;i++){
        cout<<ans[i]<<'+';
    }
    cout<<ans[ans.size()-1];
    return 0;
}