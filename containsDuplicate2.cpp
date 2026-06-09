#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;

// BETTER SOLUTION 0(nlogn) 
int main(){
    int n;
    cin>>n;
    vector<int>arr(n);

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr.begin(), arr.end());
    for(int i=0;i<n-1;i++){
        if(arr[i]==arr[i+1]){
            cout<<"true";
            return 0;
        }
    }
    cout<<"false"<<endl;
    return 0;
}
