class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        // Sort the prices in ascending order
        sort(costs.begin(), costs.end());

        // Count the number of ice cream bars the boy can buy
        int count = 0;
        for (int i = 0; i < costs.size(); i++) {
            if (coins >= costs[i]) {
                coins -= costs[i];
                count++;
            } else {
                // The boy cannot afford the remaining ice cream bars, so we break out of the loop
                break;
            }
        }

        return count;
    }
};
