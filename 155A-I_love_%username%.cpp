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
    cin>>n;
    int max_records = 0;
    int min_records = 0;
    int current_max=0;
    int current_min=0;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];

    }
    current_max=arr[0];
    current_min=arr[0];
    for(int j=1;j<n;j++){

        if(current_max<arr[j]){
            current_max=arr[j];
            max_records++;
        }
        else if(current_min>arr[j]){
            current_min=arr[j];
            min_records++;
        }
    }    
    

    cout<<max_records+min_records;
    return 0;
}