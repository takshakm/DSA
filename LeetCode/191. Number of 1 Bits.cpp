//Write a function that takes an unsigned integer and returns the number of '1' bits it has (also known as the Hamming weight).
//An unsigned integer is an integer which starts from 0, so it's positive (by default integers are signed)
class Solution {
public:
    int hammingWeight(uint32_t n) { //argument for unisgned integer is declared
        
        int count=0;
        while(n!=0) {
            if(n&1) {   //a bitwise operator '&' is used to check if the bits of the entered value are 1
                count++;    //if yes, count++
            }
            n = n>>1;            //it will right shift to check the next digit
        }
        return count;
    }
};