#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cmath>
#include <numeric>
#include <unordered_map>
#include <set>
#include <cctype>
using namespace std;

int main() {
    int t=0,n=0;
    cin>>t;
    
    for(int i=0;i<t;i++){
        cin>>n;
        vector<int> arr(n);
        for(int j=0;j<n;j++){
            cin>>arr[j];
        }
        int left=0;
        int right=n-1;
        int countzeros=0;
        for(int j=0;j<n;j++){
            if(arr[j]==0){
                countzeros++;
            }
        }
        if(arr[left]==0 && arr[right] ==0){
            cout<<0<< '\n';;
        }

        else if(countzeros>=2 ){
            if(arr[left]==0 || arr[right]==0){
                cout<<1<< '\n';;
            }
            else if(arr[left]==1 && arr[right]==1){
            cout<<2<< '\n';
        }
        }
        else if (countzeros<2)
        {
            cout<<-1<< '\n';
        }

    }

    return 0;
}