class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) {
        // If the input array is empty, return 0
        if (points.empty()) return 0;

        // Sort the input array based on the second element of each subarray.
        // The lambda function passed to the sort function compares the second element of two subarrays,
        // and returns true if the second element of the first subarray is less than the second element of the second subarray.
        sort(points.begin(), points.end(), [](const auto& a, const auto& b) {
            return a[1] < b[1];
        });

        // Initialize the number of arrows to be 1, and set the position of the first arrow to be the second element of the first subarray
        int arrowPos = points[0][1], arrows = 1;

        // Iterate through the rest of the subarrays
        for (int i = 1; i < points.size(); ++i) {
            // If the position of the arrow is to the left of the start of the current subarray, update the number of arrows and the position of the arrow
            if (arrowPos < points[i][0]) {
                ++arrows;
                arrowPos = points[i][1];
            }
        }
        // Return the total number of arrows
        return arrows;
    }
};
