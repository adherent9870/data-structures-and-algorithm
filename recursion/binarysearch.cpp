#include <iostream>
#include <vector>
using namespace std; 

class Solution {
public: 
    int bin (vector <int> &nums, int target, int st, int end){
        if(st>end){
            return -1;
        } 
        int mid=st+(end-st)/2; 
        if(nums[mid]==target){
            return mid;
        } 
        else if(nums[mid]>target){
            return bin(nums,target,st,mid-1);
        } 
        else{
            return bin(nums,target,mid+1,end);
        }
    }
    int search(vector<int>& nums, int target) { 
        
        int st=0; 
        int end=nums.size(); 
        return bin(nums,target,st,end-1);
    }
}; 

int main(){ 
    Solution s;
     vector <int> nums={5,6,7,8,9,12,15}; 
     int target=12;
     cout <<s.search(nums,target) <<endl; 
   return 0;
}