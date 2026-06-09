#include <iostream>
#include <vector>
#include<unordered_map>
using namespace std;

// BRUTE FORCE O(N)
int main(){
    int n,k;
    cin>>n;
    cin>>k;
    vector<int>arr(n);

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    unordered_map<int,int>mp;

    for(int i=0;i<n;i++){
        if(mp.find(arr[i]) != mp.end()){
            if(i-mp[arr[i]] <= k){
                cout<<"true";
                return 0;
            }
        }
        mp[arr[i]] = i;
    }

    cout<<"false"<<endl;
    return 0;
}
