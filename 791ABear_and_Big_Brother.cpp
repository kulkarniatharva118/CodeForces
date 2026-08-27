#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cmath>
#include <unordered_map>
#include <cctype>
using namespace std;

int main() {
    int a=0,b=0,year=0;
    cin>>a>>b;
    while(a<=b){
        a*=3;
        b*=2;
        year++;

    }
    cout<<year<<endl;
    return 0;
}