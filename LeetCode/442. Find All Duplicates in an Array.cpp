/*
Given an integer array nums of length n where all the integers of nums are in the range [1, n] and each integer appears once or twice, return an array of all the integers that appears twice.

You must write an algorithm that runs in O(n) time and uses only constant extra space.
*/
// This class defines the Solution
class Solution {
public:
// This method takes a vector of integers called nums and returns a vector of integers
    vector<int> findDuplicates(vector<int>& nums) {
// If the input vector is empty, return an empty vector
        if(nums.empty())return {};
// Initialize an empty vector called ans
        vector<int>ans;
// Iterate through the elements in the input vector
        for(int i=0;i<nums.size();i++){
// If the value at the index (abs(nums[i])-1) of the input vector is negative, it means the number at the current index has been seen before, so we add it to the ans vector
            if(nums[abs(nums[i])-1]<0)
                ans.push_back(abs(nums[i]));
// We mark the value at the index (abs(nums[i])-1) of the input vector as negative to indicate that we have seen the number at the current index
            nums[abs(nums[i])-1]=-nums[abs(nums[i])-1];
        }
// Return the ans vector which now contains all the duplicated numbers
    return ans;
    }
};