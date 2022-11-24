//Recursion applied on Towers of Hanoi
//Moving the top n disks from Tower 'x' to Tower 'y'.
#include<iostream>
using namespace std;
void TowersOfHanoi(int n,char x,char y,char z){
    if(n>=1){
        TowersOfHanoi(n-1,x,z,y);
        cout<<"Move top Disks from Tower "<<x<<" To top disks of Tower "<<y<<endl;
        
        TowersOfHanoi(n-1,z,y,x);
    }
    
}
int main()
{
    int n = 3;
 
    // A, B and C are names of rods
    TowersOfHanoi(n, 'A', 'C', 'B');
    cout<<"    |||\n   |||||\n  |||||||\n____________";
    return 0;
}
/*
    |||
   |||||
  |||||||
____________
*/