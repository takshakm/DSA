/*
Given an integer n, return the least number of perfect square numbers that sum to n.

A perfect square is an integer that is the square of an integer; in other words, it is the product of some integer with itself. For example, 1, 4, 9, and 16 are perfect squares while 3 and 11 are not.
*/
class Solution 
{
public:
    // This function takes in an integer n and returns the minimum number of perfect squares 
    // that add up to n
    int numSquares(int n) 
    {
        // Define a lambda function called isqrt that takes in an integer and returns the
        // integer part of the square root of that integer
        auto isqrt = [](int n) { return (int)floor(sqrt(n)); };
        
        // If n is already a perfect square, then return 1
        if (pow(isqrt(n),2) == n) return 1;
        
        // Iterate through all integers from 1 to the integer part of the square root of n
        for (int i = 1; i <= isqrt(n); ++i)
        {
            // If n minus i squared is a perfect square, return 2
            if (n - i*i == pow(isqrt(n - i*i),2))
                return 2;
        }
                
        // Divide n by 4 until it is no longer divisible by 4
        while (n % 4 == 0) n /= 4;
        
        // If n modulo 8 is not equal to 7, return 3
        if   (n % 8 != 7) return 3; 
                
        // Otherwise, return 4
        return 4;
    }
};
