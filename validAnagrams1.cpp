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
    int n=s.size();
    vector<bool>result(n,false);

    for(int i=0;i<n;i++){
        bool found = false;
        for(int j=0;j<n;j++){
            if(!result[j] && s[i]==s[j]){
                result[j] = true;
                found = true;
                break;
            }
        }
        if(!found) return false;
    }
    cout << "true" << endl;

}