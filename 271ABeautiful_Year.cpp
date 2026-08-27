#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cmath>
#include <unordered_map>
#include <cctype>
using namespace std;

int main() {
    int year=0;
    int freq[10]={};
    int digit=0;
    bool found = false;
    bool duplicate=false;
    
    cin>>year;
    year+=1;    
    while(!found){
        duplicate = false;
        for(int j = 0; j < 10; j++){
            freq[j] = 0;
        }
        int temp=year;
        while(temp!=0){
            
            digit = temp % 10;
            freq[digit]++;
            temp = temp / 10;
        }
        for(int i=0;i<10;i++){
            if(freq[i]>1){
                duplicate=true;
                break;
            }
        }
        if(duplicate){
            year++;
        }
        else{
            found=true;
        }
    }
    cout<<year<<endl;
    return 0;
}