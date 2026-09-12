#include <bits/stdc++.h>
using namespace std;

int main() {
    int t=0;
    int n=0;
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>n;
        vector<int> arr(n);
        int count_one=0,count_zero=0;
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        for(int j=0;j<n;j++){
            if(arr[j]==1){
                count_one++;
            }
            else{
                count_zero++;
            }
        }
        if(n%2==0){
            if(count_one>=count_zero){
                cout<<"Bessie"<<'\n';
            }
            else{
                cout<<"Elsie"<<'\n';
            }
        }
        else{
            if(count_one<count_zero){
                cout<<"Elsie"<<'\n';
            }
            else{
                cout<<"Bessie"<<'\n';
            }
        }
    }
    return 0;
}