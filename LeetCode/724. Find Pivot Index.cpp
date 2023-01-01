/*
Given an array of integers nums, calculate the pivot index of this array.

The pivot index is the index where the sum of all the numbers strictly to the left of the index is equal to the sum of all the numbers strictly to the index's right.

If the index is on the left edge of the array, then the left sum is 0 because there are no elements to the left. This also applies to the right edge of the array.

Return the leftmost pivot index. If no such index exists, return -1.
*/
class Solution {
public:
    int pivotIndex(vector<int>& nums){
// Initialize the sum of all elements in nums to right_sum
        int right_sum = accumulate(nums.begin(),nums.end(),0);
// Initialize left_sum to 0
        int left_sum = 0;
// Iterate through all elements in nums
        for(int i = 0;i < nums.size();i++){
// Subtract the current element from right_sum
            right_sum -= nums[i];
// If left_sum is equal to right_sum, return the current index
            if(left_sum == right_sum){
                return i;
            }
// Add the current element to left_sum
            left_sum += nums[i];
        }
// If no pivot index is found, return -1
    return -1;
    }
};