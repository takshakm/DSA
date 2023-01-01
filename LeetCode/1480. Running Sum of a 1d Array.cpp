/*
Given an array nums. We define a running sum of an array as runningSum[i] = sum(nums[0]…nums[i]).

Return the running sum of nums.
*/

class Solution {
public:
    // this function takes in a vector of integers called "nums" and returns a vector of integers
    vector<int> runningSum(vector<int>& nums) {
       // we loop through each element in the "nums" vector starting at the second element (index 1)
       for(int i=1;i<nums.size();i++){
           // we add the element at the current index to the element at the previous index
           nums[i]+=nums[i-1];
       }
       // we return the modified "nums" vector
       return nums;
    }
};
