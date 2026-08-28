#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cmath>
#include <unordered_map>
#include <cctype>
using namespace std;

int main() {
    long long n=0;
    cin>>n;
    int rem=0;
    int dig=0;
    
    while(n!=0){
        rem=n%10;
        if(rem==4 || rem ==7){
            dig++;
        }
        n=n/10;
    }
    if(dig==7 || dig==4){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    return 0;
}