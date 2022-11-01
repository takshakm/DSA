//Given an integer number n, return the difference between the product of its digits and the sum of its digits.
#include<iostream>
using namespace std;
int main(){
    int n,sum,prod,diff;
    cout<<"enter a number ";
    cin>>n;
    sum=0;
    prod=1;
    while(n!=0){
        int rem=n%10;
        prod=prod*rem;
        sum=sum+rem;
        n=n/10;
    }
    diff=prod-sum;
    cout<< diff<<endl;
    return 0;
}