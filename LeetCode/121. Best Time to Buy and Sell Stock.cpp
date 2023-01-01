class Solution {
public:
    // This function takes in a vector of integers called 'prices' and returns an integer
    int maxProfit(vector<int>& prices) {
        // Initialize variables to keep track of the maximum profit and the lowest price seen so far
        int maxPro = 0;
        int minPrice = INT_MAX;
        
        // Iterate through the prices vector
        for(int i = 0; i < prices.size(); i++){
            // Update the minimum price seen so far if the current price is lower
            minPrice = min(minPrice, prices[i]);
            // Update the maximum profit by comparing it to the difference between the current price and the minimum price seen so far
            maxPro = max(maxPro, prices[i] - minPrice);
        }
        
        // Return the maximum profit
        return maxPro;
    }
};
