/*
Given an integer n, return the least number of perfect square numbers that sum to n.

A perfect square is an integer that is the square of an integer; in other words, it is the product of some integer with itself. For example, 1, 4, 9, and 16 are perfect squares while 3 and 11 are not.
*/
class Solution 
{
public:
    int numSquares(int n) 
    {
        auto isqrt = [](int n) { return (int)floor(sqrt(n)); };
        
        if (pow(isqrt(n),2) == n) return 1;
        
        for (int i = 1; i <= isqrt(n); ++i)
            if (n - i*i == pow(isqrt(n - i*i),2))
                return 2;
                
        while (n % 4 == 0) n /= 4;
        if   (n % 8 != 7) return 3; 
                
        return 4;
    }
};