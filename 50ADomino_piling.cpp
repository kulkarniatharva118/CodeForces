#include <iostream>
using namespace std;

int main(){
    int m=0,n=0;
    int ans=0;
    cin>>m>>n;
    int area=m*n;

    if(area%2==0){
        ans=area/2;
    }
    else{
        int rem=area%2;
        area=area-rem;
        ans=area/2;
    }
    cout<<ans<<endl;
    return 0;
}