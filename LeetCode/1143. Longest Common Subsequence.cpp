/*
Given two strings text1 and text2, return the length of their longest common subsequence. If there is no common subsequence, return 0.

A subsequence of a string is a new string generated from the original string with some characters (can be none) deleted without changing the relative order of the remaining characters.

For example, "ace" is a subsequence of "abcde".
A common subsequence of two strings is a subsequence that is common to both strings.

*/
#include<vector>
#include<string>
using namespace std;
class Solution {
public:
    int longestCommonSubsequence(string s1, string s2) {
        int m = s1.size(), n = s2.size();
        vector<vector<int>> dp(m+1, vector<int>(n+1));
        /*This line uses a nested loop to iterate over the characters of the two input strings. 
        The outer loop iterates over the characters in s1, and the inner loop iterates over the characters in s2.*/
        for(int i = 1; i <= m; ++i) 
            for(int j = 1; j <= n; ++j) {
                /*This line checks if the characters at the current indices in the two strings are the same.
                If they are, the code inside the if block will be executed.*/
                if (s1[i-1] == s2[j-1]) {
                    /*This line updates the value of the element in the dp vector at the current row and column by adding 1 to the value of the element in the previous row and column.*/
                    dp[i][j] = dp[i-1][j-1] + 1;
                } else {
                    /*This line updates the element in the dp vector at the current row and column by taking the maximum of the values in the previous row and the previous column.*/
                    dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
                }
            }

        return dp[m][n];
    }
};

