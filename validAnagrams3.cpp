#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main(){
    string s,t;
    cin>>s>>t;
    
    if(s.size()!=t.size()){
        cout<<"false"<<endl;
        return 0;
    };
    int freq[26] = {0};
    for(char c : s){
        freq[c-'a']++;
    }
    for(char c : t){
        freq[c-'a']--;
    }
    for(int i = 0;i<26;i++){
        if(freq[i]<0){
            cout<<"false";
            return 0;
        }
    }
    cout << "true" << endl;
    return 1;

}