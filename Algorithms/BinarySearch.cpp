#include<iostream>
using namespace std;
int BinarySearch(int arr[],int size,int key){
    int start=0;
    int end=size-1;
    int mid=(start+end)/2;
    while(start<=end){
        if(arr[mid]==key){
            return mid;
        }
        //if greater
        if(key>arr[mid]){
            start=mid+1;
        }
        else{
            end=mid-1;
        }
        mid=(start+end)/2;
    }
    return -1;
}
int main(){
    int nums[7]={2,5,6,7,23,56,675};
    int descnums[6]={12,324,543,654};
    int ans = BinarySearch(nums,7,23);
    int ans2 = BinarySearch(descnums,6,12);
    cout<<ans<<endl;
    cout<<ans2;
}