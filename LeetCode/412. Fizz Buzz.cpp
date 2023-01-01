/*
Given an integer n, return a string array answer (1-indexed) where:

answer[i] == "FizzBuzz" if i is divisible by 3 and 5.
answer[i] == "Fizz" if i is divisible by 3.
answer[i] == "Buzz" if i is divisible by 5.
answer[i] == i (as a string) if none of the above conditions are true.
*/
class Solution {
public:
    vector<string> fizzBuzz(int n) {
        // Initialize an empty vector of strings called 'vec'
        vector<string> vec;
        
        // Iterate from 'i=1' to 'i=n'
        for(int i=1;i<=n;i++) {
            // If 'i' is a multiple of both 3 and 5, add "FizzBuzz" to 'vec'
            if(i % 3 == 0 && i % 5 == 0) {
                vec.push_back("FizzBuzz");
            }
            // If 'i' is a multiple of 3 (but not 5), add "Fizz" to 'vec'
            else if(i % 3 == 0) {
                vec.push_back("Fizz");
            }
            // If 'i' is a multiple of 5 (but not 3), add "Buzz" to 'vec'
            else if(i % 5 == 0) {
                vec.push_back("Buzz");
            }
            // If 'i' is not a multiple of either 3 or 5, add the string version of 'i' to 'vec'
            else {
                vec.push_back(to_string(i));
            }
        }
        
        // Return the completed 'vec'
        return vec;
    }
};
