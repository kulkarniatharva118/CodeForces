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
    getline(cin >> ws,s);
    s[0]=toupper(s[0]);
    cout<<s<<endl;
    return 0;
}