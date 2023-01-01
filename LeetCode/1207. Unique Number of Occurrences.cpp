//Given an array of integers arr, return true if the number of occurrences of each value in the array is unique, or false otherwise.
class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        // sort the array in ascending order
        sort(arr.begin(),arr.end());

        // initialize an empty vector to store the occurrences of each number
        vector<int> ans;

        // initialize a counter variable
        int i = 0;

        // loop through the sorted array
        while (i < arr.size()){
            // initialize a counter for the number of occurrences of the current number
            int count = 1;

            // loop through the remaining elements in the array
            for (int j = i+1; j< arr.size(); j++){
                // if the current element is the same as the one we are counting occurrences for,
                // increment the count
                if (arr[i] == arr[j])
                    count++;
            }

            // add the count of occurrences for the current number to the ans vector
            ans.push_back(count);

            // update the counter variable to skip the counted occurrences of the current number
            i = i + count;
        }

        // sort the ans vector in ascending order
        sort(ans.begin(),ans.end());

        // loop through the sorted ans vector
        for (int i = 0; i < ans.size() - 1; i++){
            // if any two consecutive elements in the ans vector are the same, return false
            if (ans[i] == ans [i+1])
                return false;
        }

        // if we reach this point, all occurrences in the ans vector are unique, so return true
        return true;
    }
};
