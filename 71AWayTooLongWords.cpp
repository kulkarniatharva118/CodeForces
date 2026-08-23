#include <iostream>
using namespace std;

int main(){
    int n=0;
    string word;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>word;
        if(word.size()<=10){
            cout<<word<<'\n';
        }
        else if(word.size()>10){
            int word_len=word.size() - 2;
            cout<<word[0]<<word_len<<word[word.size()-1]<<'\n'<<endl;
        }
    }
    return 0;
}