#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cmath>
#include <unordered_map>
#include <cctype>
using namespace std;

int main() {
    int freq[26]={};
    string s;
    int dis=0;
    getline(cin >> ws,s);
    for(char c:s){
        freq[c-'a']++;
        if(freq[c-'a']==1){
            dis++;
        }

    }
        if(dis%2==0){
            cout<<"CHAT WITH HER!"<<endl;
        }
        else{
            cout<<"IGNORE HIM!"<<endl;
        }
    return 0;
}