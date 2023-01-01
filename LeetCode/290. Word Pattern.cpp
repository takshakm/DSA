class Solution {
public:
    bool wordPattern(string pattern, string s) {
        // Create a vector to store the words in the string
        vector<string> words;
        
        // Get the length of the string
        int n = s.size();
        
        // Initialize a start index to 0
        int start = 0;
        
        // Iterate through the string
        for (int i = 0; i <= n; i++) {
            // If we have reached the end of the string or if we encounter a space,
            // we add the word to the words vector
            if (i == n || s[i] == ' ') {
                words.push_back(s.substr(start, i - start));
                start = i + 1;
            }
        }
        
        // If the number of words in the string does not match the number of characters
        // in the pattern, return false
        if (words.size() != pattern.size()) {
            return false;
        }
        
        // Create a map to store the mappings from characters in the pattern to words
        unordered_map<char, string> m;
        
        // Iterate through the pattern
        for (int i = 0; i < pattern.size(); i++) {
            // Get the current character in the pattern
            char c = pattern[i];
            
            // If the character is already in the map, check if it is mapped to the
            // correct word. If not, return false.
            if (m.count(c)) {
                if (m[c] != words[i]) {
                    return false;
                }
            }
            // If the character is not in the map, check if the current word is already
            // mapped to another character. If it is, return false. Otherwise, add the
            // mapping to the map.
            else {
                for (const auto& p : m) {
                    if (p.second == words[i]) {
                        return false;
                    }
                }
                m[c] = words[i];
            }
        }
        
        // If we have reached this point, it means that the pattern and the string match,
        // so we return true
        return true;
    }
};
