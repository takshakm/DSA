/*
Given an integer x, return true if x is palindrome integer.

An integer is a palindrome when it reads the same backward as forward.

For example, 121 is a palindrome while 123 is not.
*/
class Solution {    //a public class solution is declared
public:
    bool isPalindrome(int x) {  //a boolean function is made (boolean function is a type of function which returns it's values in true and false)
        if(x<0 ||(x%10==0 && x !=0)){   //this is an edge case to check if the value of x is in negative or 0
            return false;
        }
        int rev=0;  //a variable reverse=rev is declared
        while(x>rev){   //the loop will run unitll value of x is more than reverse variable
            rev=rev*10+x%10;    //this will seperate the digits of x from the right and add up the reversed values in an order to make it reverse of the orignal value
            x/=10;  //this will shorten the orignal value of x by dividing it by 10 one by one, untill it's equal to 0
        }
        return x==rev || x==rev/10; //this will check if the reverse and the orignal value of x are equal and will return true if correct
    }
};