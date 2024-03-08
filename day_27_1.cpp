class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
         if (strs.empty()) {
            return ""; // Empty input
        }
        
        string prefix = strs[0]; // Initialize with the first string
        
        for (int i = 1; i < strs.size(); i++) {
            // Iterate through the rest of the strings
            while (strs[i].find(prefix) != 0) {
                // Check if the current prefix is a prefix of the current string
                // If not, shorten the prefix by removing the last character
                prefix = prefix.substr(0, prefix.length() - 1);
                if (prefix.empty()) {
                    return ""; // No common prefix found
                }
            }
        }
        
        return prefix;
    }
};