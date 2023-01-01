class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<long long> st;
        for (const string& token : tokens) {
            // If the token is an operator
            if (token == "+" || token == "-" || token == "*" || token == "/") {
                // Pop the top 2 elements from the stack
                long long right = st.top(); st.pop();
                long long left = st.top(); st.pop();
                // Perform the operation and push the result back onto the stack
                if (token == "+") {
                    st.push(left + right);
                } else if (token == "-") {
                    st.push(left - right);
                } else if (token == "*") {
                    st.push(left * right);
                } else { // token == "/"
                    st.push(left / right);
                }
            } else {
                // token is an operand
                // Convert the string to a long long and push it onto the stack
                st.push(atoll(token.c_str()));
            }
        }
        // The result is the top of the stack
        return st.top();
    }
};
