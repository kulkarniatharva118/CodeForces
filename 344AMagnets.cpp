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
    int grp=1;
     int repl=0;
    cin>>n;
    string now;
    string before;
    getline(cin>>ws,before);
    for(int i=1;i<n;i++){
        getline(cin>>ws,now);   
        if(before!=now){
            grp++;
        }
        before=now;
    }
    cout<<grp;
    return 0;
}