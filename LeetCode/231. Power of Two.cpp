class Solution {
public:
    // Function that determines if a given integer is a power of two
    bool isPowerOfTwo(int n) {
        // Iterate through the integers 0 through 30
        for(int i=0; i<=30; i++){
            // Calculate the value of 2 raised to the power of i
            int ans=pow(2,i);
            // If this value is equal to the input n, return true
            if(ans==n){
                return true;
            }
        }
        // If the loop completes without finding a match, return false
        return false;
    }
};
