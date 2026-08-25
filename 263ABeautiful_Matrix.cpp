#include <iostream>
#include <vector>
#include <cstdlib>
using namespace std;

int main(){
    int row=0;
    int col=0;
    vector<vector<int>> matrix(5, vector<int>(5));

    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            cin>>matrix[i][j];

            if (matrix[i][j]==1){
                row=i;
                col=j;
            }

        }
        
    }
    int vir=abs(row-2);
    int hor=abs(col-2);
    int total=vir + hor;
    cout<<total<<endl;
    return 0;
}