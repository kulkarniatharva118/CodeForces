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
    string t;
    getline(cin >> ws,s);
    getline(cin >> ws,t);
    reverse(s.begin(),s.end());
    if(s==t){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO";
    }
    return 0;
}