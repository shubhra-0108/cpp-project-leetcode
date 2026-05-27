#include <iostream>
#include <vector>

// Two Sum Problem: Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.
// Two Sum Brute Force Solution
// time complexity: O(n^2) and space complexity: O(1)
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
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(nums[i] + nums[j] == target){
                cout<<"Indices of the two numbers are: "<<i<<" and "<<j<<endl;
            }
        }

    }
    return 0;

}
