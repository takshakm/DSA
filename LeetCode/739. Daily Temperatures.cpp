class Solution {
public:
    // This function takes in a vector of integers representing daily temperatures and returns a vector of integers
    // representing the number of days until a warmer temperature
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        // Initialize an empty stack and a vector to store the results with the same size as the input temperature vector
        stack<int> stk;
        vector<int> ans(temperatures.size());

        // Iterate through the temperature vector in reverse order
        for (int i = temperatures.size() - 1; i >= 0; --i) {
            // While the stack is not empty and the current temperature is greater than or equal to the temperature at the top of the stack, pop the top element off the stack
            while (!stk.empty() && temperatures[i] >= temperatures[stk.top()]) {
                stk.pop();
            }
            // If the stack is empty, set the current element in the result vector to 0. Otherwise, set it to the difference between the current index and the index at the top of the stack
            ans[i] = stk.empty() ? 0 : stk.top() - i;
            // Push the current index onto the stack
            stk.push(i);
        }
        // Return the result vector
        return ans;
    }
};