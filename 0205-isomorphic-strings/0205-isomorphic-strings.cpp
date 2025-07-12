class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if (s.length() != t.length())
            return false;

        // ASCII mapping arrays initialized with -1
        int mapS[256] = {0}; // s → t
        int mapT[256] = {0}; // t → s

        for (int i = 0; i < s.length(); i++) {
            char c1 = s[i];
            char c2 = t[i];

            // If already mapped, check for consistency
            if (mapS[c1] == 0 && mapT[c2] == 0) {
                // Establish mapping
                mapS[c1] = c2;
                mapT[c2] = c1;
            } else {
                // Check if mapping is valid
                if (mapS[c1] != c2 || mapT[c2] != c1)
                    return false;
            }
        }

        return true;
    }
};