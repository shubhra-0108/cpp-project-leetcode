#include <iostream>
#include <vector>
#include<algorithm>
#include<unordered_map>
using namespace std;

//optimised O(n)
int main(){
    int n;
    cin>>n;
    vector<int>arr(n);

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    unordered_map<int,int>mp;
    for(int i=0;i<n;i++){
        if(mp.find(arr[i]) !=mp.end()){
            cout<<"true";
            return 0;
        }
        mp[arr[i]] = i;
    }
    cout<<"false"<<endl;
    return 0;
}
