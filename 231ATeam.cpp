#include <iostream>
using namespace std;

int main(){
    int n=0;
    int ans=0;
    cin>>n;
    for(int i=0;i<n;i++){
        int a=0,b=0,c=0;
        cin>>a>>b>>c;
        if(a+b+c>=2){
            ans++;
        }
    }
    cout<<ans<<endl;
    return 0;
}