#include <iostream>
#include <vector>
#include <algorithm>

// Two Sum Problem: Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.
// better Solution
// time complexity: O(nlogn) and space complexity: O()
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of the array n: ";
    cin>>n;
    vector<int>nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    int target;
    cout<<"Enter the target: ";
    cin>>target;

    vector<pair<int,int>> arr;

    for(int i=0;i<n;i++){
        arr.push_back({nums[i],i});
    }
    sort(arr.begin(), arr.end());
    
    for(int i=0;i<n;i++){
        int low = i+1;
        int high = n-1;
        int need = target - arr[i].first;
        while(low<= high){
            int mid = (low+high)/2;
            if(arr[mid].first == need){
                cout<< arr[mid].second << " " << arr[i].second << endl;
                break;
            }
            else if(arr[mid].first < need){
                low = mid + 1;
            }
            else{
                high = mid - 1; 
            }
        }
    }

    return 0;

}
