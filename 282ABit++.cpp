#include <iostream>
using namespace std;

int main(){
    int x=0;
    int n=0;
    string statement;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>statement;
        if(statement=="++X" || statement=="X++"){
            x++;
        }
        else if(statement=="--X" || statement=="X--"){
            x--;
        }
        
    }
    cout<<x;
    return 0;
}