#include <iostream>
#include <vector>
#include <unordered_map>

// Two Sum Problem: Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.
// best optimised Solution
// time complexity: O(n) and space complexity: O(n)
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
    unordered_map<int,int> mp;
    for(int i=0;i<n-1;i++){
        int need = target - nums[i];
        if(mp.find(need) != mp.end()){
            cout<<"Indices of the two numbers are: "<<mp[need]<<" and "<<i<<endl;
        }
        mp[nums[i]] = i;
        
    }
    return 0;

}
