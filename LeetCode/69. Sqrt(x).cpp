/*
Given a non-negative integer x, return the square root of x rounded down to the nearest integer. The returned integer should be non-negative as well.

You must not use any built-in exponent function or operator.

For example, do not use pow(x, 0.5) in c++ or x ** 0.5 in python.
*/
class Solution {
public:
    int binarySearch(int num){  //a function named binarySearch function is created
        int s=0;    //start variable
        int e=num;  //value of variable end is added equal to value of num
        long mid=s+(e-s)/2; //mid of the number is calculated with the main formula used in binary search
        int ans=-1; //initial value of ans is added to be -1
        while(s<=e){    //the loop runs untill variable start is less or equal to the variable end which is equal to the orignal variable num
            long square=mid*mid;    //square is calculated by multiplying the middle values
            if(square==num){    //if sq is equal to num then the sqroot is mid
                return mid;
            }
            else if(square<num){    //if sq is less then the value
                ans=mid;    //then ans will equal mid   
                s=mid+1;    //and start's value will change to mid+1
            }
            else{   //if it's a totally diffent case like sq>num
                e=mid-1;    //end will change to mid -1;
            }
            mid=s+(e-s)/2;  //mid's value is again initialized
            
        }
        return ans;
    }
    int mySqrt(int x) { //asking for arguments to add to the newly created function
        return binarySearch(x);
    }
};