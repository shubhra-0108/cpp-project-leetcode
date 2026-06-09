#include <iostream>
#include <vector>
using namespace std;

// BRUTE FORCE O(N^2)
int main(){
    int n,k;
    cin>>n;
    cin>>k;
    vector<int>arr(n);

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        for(int j=i+1;j<=i+k && j<n;j++){
            if(arr[i]==arr[j]) {
                cout<<"true";
                return 0;
            }
        }
    }
    cout<<"false"<<endl;
    return 0;
}
