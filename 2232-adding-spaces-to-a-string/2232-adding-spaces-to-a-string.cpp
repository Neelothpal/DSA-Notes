class Solution {
public:
    string addSpaces(string s, vector<int>& spaces) {
        int n = spaces.size();
        int l = 0; // Start of current substring
        string str = "";

        for (int i = 0; i < n; i++) {
            // Append substring from current position to the next space
            str += s.substr(l, spaces[i] - l);
            str += " "; // Add a space
            l = spaces[i]; // Move start to the next position
        }

        // Add the remaining part of the string after the last space
        str += s.substr(l);

        return str;
    }
};
