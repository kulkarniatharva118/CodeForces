#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cmath>
#include <unordered_map>
#include <cctype>
using namespace std;

int main() {
    int n=0,k=0;
    cin>>n>>k;
    for(int i=0;i<k;i++){
        int temp=n%10;
        if(temp!=0){
            n--;
            temp=n%10;
            
        }
        else if(temp==0){
            n=n/10;
        }
    }
    cout<<n<<endl;
    return 0;
}