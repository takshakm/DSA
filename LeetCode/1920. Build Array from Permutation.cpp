/*Given a zero-based permutation nums (0-indexed), build an array ans of the same length where ans[i] = nums[nums[i]] for each 0 <= i < nums.length and return it.

A zero-based permutation nums is an array of distinct integers from 0 to nums.length - 1 (inclusive).
*/
class Solution {
public:
    // This function takes in a vector of integers called 'nums'
    // and returns a vector of integers
    vector<int> buildArray(vector<int>& nums) {

        // Initialize a variable 'n' to the size of 'nums'
        int n = nums.size();

        // Initialize a vector 'ans' of size 'n'
        vector<int> ans(n);

        // Iterate through the elements of 'nums'
        for (int i = 0; i < n; i++) {
            // Set the i-th element of 'ans' to the value at the index 
            // specified by the i-th element of 'nums' in 'nums'
            ans[i] = nums[nums[i]];
        }

        // Return the modified 'ans' vector
        return ans;
    }
};
