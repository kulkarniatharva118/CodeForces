#include <bits/stdc++.h>
using namespace std;

int main() {
    int t=0,n=0,k=0;
    cin>>t;
    for (int i = 0; i < t; i++){
        cin>>n>>k;
        
        vector<vector<int>> arr(n,vector<int>(n));
        if(k<n || k > 2*n - 1){
            cout<<-1<<'\n';
            continue;
        }
        int x = k - n;
        int value = 1;
        for (int j = 0; j < n; j++){
            arr[j][j]=value++;
            if(j<x){
                arr[j][j+1]=value++;
            }
        }
        for (int i = 0; i < n; i++){
            for (int j = 0; j < n; j++){
                if(arr[i][j] == 0){
                    arr[i][j] = value++;
                }
            }
        }
        for (int i = 0; i < n; i++){
            for (int j = 0; j < n; j++){
                cout << arr[i][j] << " ";
            }
            cout << '\n';
        }
    }
    
    return 0;
}