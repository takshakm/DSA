class Solution {
public:
    bool detectCapitalUse(string word) {
        // Initialize counters for upper and lower case letters
        int numUpper = 0;
        int numLower = 0;

        // Loop through each character in the string
        for (int i = 0; i < word.size(); i++) {
            // If the character is upper case, increment the upper case counter
            if (isupper(word[i])) {
                numUpper++;
            // If the character is lower case, increment the lower case counter
            } else {
                numLower++;
            }
        }

        // Return true if all letters are upper case, all letters are lower case,
        // or only the first letter is upper case
        return (numUpper == 0 || numLower == 0 || (numUpper == 1 && isupper(word[0])));
    }
};
