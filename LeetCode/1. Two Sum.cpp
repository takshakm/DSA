class Solution {
public:
    // This function returns a vector of integers, which are the indices of the elements in the input vector that sum to the target
    vector<int> twoSum(vector<int>& nums, int target) {
        // We use a nested loop to iterate through each element in the input vector
        for (int i = 0; i < nums.size(); i++) {
            for (int j = i + 1; j < nums.size(); j++) {
                // If the sum of the current elements is equal to the target, we return their indices
                if (nums[i] + nums[j] == target) {
                    return {i, j};
                }
            }
        }
        // If no pair of elements sums to the target, we return an empty vector
        return {};
    }
};
