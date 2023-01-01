//Given a signed 32-bit integer x, return x with its digits reversed. If reversing x causes the value to go outside the signed 32-bit integer range [-231, 231 - 1], then return 0.
class Solution { //a solution class is created
public: //this is a pubkic class
    int reverse(int x) {    //a reverse function is created
        int ans=0;  //initial value of ans is 0
        while(x!=0){    //the loop will execute unitll the entered value is equal to 0
            int digit=x%10; //seperating the digits of the value x by taking remeinder by %10 (this will seperate values from the right)
            if((ans>INT_MAX/10)||(ans<INT_MIN/10)){ //this is an edge case if the value of x is more/less than the length of INT data type
                return 0;   //it will return 0
            }
            ans = (ans*10)+digit;   //this will add 0 to the right side of the ans, such that new reversed values of x can be added
            x=x/10; //this will shorten the value of x one by one untill it's equal to 0 and once it is, the loop will terminate
        }
    return ans; //return answer
    }
};
