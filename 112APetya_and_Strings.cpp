#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cmath>
#include <unordered_map>
#include <cctype>
using namespace std;

int main() {
    string s1;
    string s2;
    int ans=0;
    getline(std::cin >> std::ws, s1);
    getline(std::cin >> std::ws, s2);
    int min_len=min(s1.size(),s2.size());
    for(int i=0;i<min_len;i++){
        
        if(tolower(s1[i])<tolower(s2[i])){
            ans=-1;
            break;
        }
        else if(tolower(s1[i])==tolower(s2[i])){
            continue;
        }
        else{
            ans=1;
            break;
        }
    }
    cout << ans << endl;
    return 0;
}