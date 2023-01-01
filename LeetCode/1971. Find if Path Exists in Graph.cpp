class Solution {
public:
    bool validPath(int n, vector<vector<int>>& edges, int start, int end) {
        // Create a hash map that maps a node to its adjacent nodes
        unordered_map<int, vector<int>> hash;
        for(auto& edge : edges){
            // Add the two nodes of each edge to the hash map
            hash[edge[0]].push_back(edge[1]);
            hash[edge[1]].push_back(edge[0]);
        }

        // Create a queue to perform breadth-first search
        queue<int> q;
        // Add the start node to the queue
        q.push(start);
        // Create a vector to track visited nodes
        vector<bool> visit(n, false);
        // Perform breadth-first search
        while(!q.empty()){
            // Get the front node in the queue
            int cur = q.front();
            // Remove the front node from the queue
            q.pop();
            // Check if the current node is the end node
            if(cur == end) return true;
            // Loop through the adjacent nodes of the current node
            for(auto& node : hash[cur]){
                // If the adjacent node has not been visited yet, add it to the queue and mark it as visited
                if(!visit[node]){
                    q.push(node);
                    visit[node] = true;
                }
            }
        }
        // Return false if the end node is not found
        return false;
    }
};
