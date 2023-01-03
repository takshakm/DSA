int minDeletionSize(vector<string>& strs) {
    // Get the number of columns in the grid
    int num_columns = strs[0].size();

    // Initialize a counter for the number of columns to delete
    int num_deletions = 0;

    // Iterate through each column in the grid
    for (int col = 0; col < num_columns; col++) {
        // Iterate through each string in the column, starting from the second one
        for (int row = 1; row < strs.size(); row++) {
            // If the current string is lexicographically smaller than the previous string,
            // increment the counter and break out of the inner loop
            if (strs[row][col] < strs[row - 1][col]) {
                num_deletions++;
                break;
            }
        }
    }

    // Return the number of columns to delete
    return num_deletions;
}
