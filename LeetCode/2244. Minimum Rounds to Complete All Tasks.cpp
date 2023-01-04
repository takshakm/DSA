class Solution {
public:
    int minimumRounds(vector<int>& tasks) {
        // Initialize the result to be 0
        int ans=0;

        // Create a frequency map to count the number of occurrences of each task
        unordered_map<int,int>freq;
        for(int i=0;i<tasks.size();i++){
            freq[tasks[i]]++;
        }

        // Iterate through the frequency map
        for(auto it:freq){
            // Get the frequency of the current task
            int k=it.second;
            // If the frequency is 1, return -1 because it is not possible to divide the task into groups of 3
            if(k==1)return -1;
            // If the frequency is divisible by 3, add the number of groups of 3 to the result
            if(k%3==0)
            ans+=k/3;
            // If the frequency is not divisible by 3, add the number of groups of 3 plus one extra round to the result
            else 
            ans+=(k/3)+1;
        }
     // Return the result
     return ans;
    }
};