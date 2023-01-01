/*
You are a professional robber planning to rob houses along a street. Each house has a certain amount of money stashed, the only constraint stopping you from robbing each of them is that adjacent houses have security systems connected and it will automatically contact the police if two adjacent houses were broken into on the same night.

Given an integer array nums representing the amount of money of each house, return the maximum amount of money you can rob tonight without alerting the police.
*/


//Example Testcase = [1,7,6,5,2,9]


#include<vector>
using namespace std;
class Solution {
public:
int rob(vector<int>& nums) {
    //code here
    int n=nums.size();  //n is declared as the size of the vector nums
    if (n==0) return 0; //it's an edge case for if the vetor nums is empty
    if (n==1) return nums[0];   //it's another edge case for if the vector nums has only one element
    vector<int> dp(n);  //a new vector dp is declared which will store the values
    dp[0]=nums[0];  //initial values in the vector dp are declared like the first value of vector dp equals first value of vector nums
    dp[1]=max(nums[0],nums[1]); //the second initial value of vector dp is defined which is the max of first value of nums and secons value of the vector nums
    for(int i=2;i<n;i++){   //a loop is declared which runs from the 2nd index to the size of the nums vector
        /*
        here is the main part of the program where the dynamic programming happens
        the next element in the dp vector is found on the bases of max of two elements
        the first element will be the i-1 element in vector dp
            like in this test case:- here in the above test case value of i is 2 by default then it will be 7
        and the second element will be i-2 element in vector dp added to the ith element in vector nums
            like in this test case:- since value of i is 2 by default then the elements will be 1 and 6 & 1+6=7
        */
        dp[i]=max(dp[i-1], dp[i-2]+nums[i]);
        //the above steps will repeat unless the end of vector nums is reached
    }
    return dp[n-1]; //returns the maximum value which will come at the end of vector dp
}
}; 