/*
An array arr a mountain if the following properties hold:

arr.length >= 3
There exists some i with 0 < i < arr.length - 1 such that:
arr[0] < arr[1] < ... < arr[i - 1] < arr[i]
arr[i] > arr[i + 1] > ... > arr[arr.length - 1]
Given a mountain array arr, return the index i such that arr[0] < arr[1] < ... < arr[i - 1] < arr[i] > arr[i + 1] > ... > arr[arr.length - 1].

You must solve it in O(log(arr.length)) time complexity.

*/
class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        // Initialize start and end indices, and mid point index
        int s=0;
        int e=arr.size()-1;
        int mid=s+(e-s)/2;
        
        // Loop until start index is no longer less than end index
        while(s<e){
            // If element at mid+1 is greater than element at mid, peak must be after mid
            if(arr[mid]<arr[mid+1]){
                s=mid+1;
            }
            // Otherwise, peak must be before or at mid
            else{
                e=mid;
            }
            // Update mid point index
            mid=s+(e-s)/2;
        }
        // Return start index, which will contain the peak index
        return s;
    }
};
