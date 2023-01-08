class Solution {
public:
    int maxPoints(vector<vector<int>>& points) {
        int n = points.size(); // n is the number of points in the given array
        if(n<=2) // if there are 0, 1, or 2 points, then the max number of points on the same line is n
            return n;
        
        int maxi = 2; // initialize the max number of points on the same line to 2
        for(int i=0; i<n; i++) { // iterate through all the points in the array
            for(int j=i+1; j<n; j++) { // for each point, iterate through all the other points in the array
                int count=2; // initialize the count to 2 because there are 2 points in the line
                for(int k=0; k<n; k++) { // iterate through all the points in the array
                    if(k!=i && k!=j) { // skip the current points i and j
                        if((points[j][1]-points[i][1])*(points[i][0]-points[k][0])==(points[i][1]-points[k][1])*(points[j][0]-points[i][0])) {
                            // if the slope of the line formed by points i and j is equal to the slope of the line formed by points i and k, then point k is also on the same line as points i and j
                            count++; // increment the count
                        }
                    }
                }
                maxi = max(maxi,count); // update the max number of points on the same line
            }
        }
        return maxi; // return the max number of points on the same line
    }
};
