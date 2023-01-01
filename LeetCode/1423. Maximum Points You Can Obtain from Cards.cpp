/*
There are several cards arranged in a row, and each card has an associated number of points. The points are given in the integer array cardPoints.

In one step, you can take one card from the beginning or from the end of the row. You have to take exactly k cards.

Your score is the sum of the points of the cards you have taken.

Given the integer array cardPoints and the integer k, return the maximum score you can obtain.
*/
class Solution {
public:
    // function to find the maximum score that can be obtained by removing k cards from the given array of card points
    int maxScore(vector<int>& cardPoints, int k) {
        int n = cardPoints.size(); // size of the array
        int sum = 0; // variable to store the sum of all the elements in the array
        
        // if k is greater than the size of the array, return 0 as we cannot remove more elements than the size of the array
        if (k > n) {
            return 0;
        }
        
        // calculate the sum of all the elements in the array
        for (auto x : cardPoints) {
            sum += x;
        }
        
        // size of the subarray to be removed is equal to n-k
        k = n - k;
        
        // if size of the subarray to be removed is 0, return sum as all elements need to be kept
        if (k == 0) {
            return sum;
        }
        
        // curr variable to store the sum of the current subarray
        // start variable to store the starting index of the current subarray
        // ans variable to store the maximum score
        int curr = 0, start = 0, ans = INT_MIN;
        
        // loop through the array
        for (int i = 0; i < n; i += 1) {
            // add the current element to the current sum
            curr += cardPoints[i];
            
            // if the current subarray is of size k, update the ans variable with the maximum of the current ans and the sum of all elements in the array minus the sum of the current subarray
            // then subtract the element at the start index from the current sum and increment the start index
            if (i >= k - 1) {
                ans = max(ans, sum - curr);
                curr -= cardPoints[start++];
            }
        }
        
        // return the maximum score
        return ans;
    }
};
