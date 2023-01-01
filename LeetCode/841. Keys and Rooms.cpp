class Solution {
public:
    // This function returns true if all rooms in the given vector of rooms can be visited starting from room 0.
    // Otherwise, it returns false.
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        // Create a vector of booleans to keep track of which rooms have been visited.
        // Initially, none of the rooms have been visited.
        vector<bool> visited( rooms.size(), false );
        
        // Create a queue to store the rooms that we need to visit.
        // Initially, we start from room 0.
        queue<int> q;
        q.push( 0 );
        
        // While there are still rooms in the queue that need to be visited...
        while( !q.empty() ) {
            // Get the size of the queue.
            int size = q.size();
            
            // For each room in the queue...
            for( int i = 0; i < size; i++ ) {
                // Get the room at the front of the queue.
                int room = q.front(); q.pop();
                
                // Mark the room as visited.
                visited[room] = true;
                
                // For each key in the current room...
                for( int ele: rooms[room])
                    // If the room that the key unlocks has not yet been visited...
                    if ( !visited[ele] )
                        // Add the room to the queue to be visited later.
                        q.push( ele );
            }
        }
        
        // Return true if all rooms have been visited, false otherwise.
        return count( visited.begin(), visited.end(), true ) == rooms.size();
    }
};
