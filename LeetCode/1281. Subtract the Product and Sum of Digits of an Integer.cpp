//Given an integer number n, return the difference between the product of its digits and the sum of its digits.
#include<iostream>
using namespace std;
int main(){
// Declare variables for storing the input number, sum, product, and difference
    int n,sum,prod,diff;
// Prompt the user to enter a number
    cout<<"enter a number ";

// Read the number from the user
    cin>>n;

// Initialize sum and product to 0 and 1, respectively
    sum=0;
    prod=1;

// Loop until the number becomes 0
    while(n!=0){
    // Calculate the remainder when n is divided by 10
        int rem=n%10;

    // Update the product by multiplying it with the remainder
        prod=prod*rem;

    // Update the sum by adding the remainder
        sum=sum+rem;

    // Update the number by dividing it by 10
        n=n/10;
    }

// Calculate the difference between the product and sum
    diff=prod-sum;

// Print the difference
    cout<< diff<<endl;

// Return 0 to indicate successful execution
    return 0;
}