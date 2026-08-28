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
    string boz;
    cin>>boz;
    int i=0;
    string ans;
    while(i<boz.size()){
        if(boz[i]=='.'){
            ans +='0';
            i++;
        }
        else if(boz[i]=='-'){
            if(boz[i+1]=='.'){
                ans+='1';
                i+=2;
            }
            else if(boz[i+1]=='-'){
                ans+='2';
                i+=2;
            }
        }
    }
    cout<<ans;
    return 0;
}