class Solution {
public:
    static const int CHAR=256;
    bool isIsomorphic(string s, string t) {
        if (s.length() != t.length()) {
            return false;
        }

        // FIX 2: Use mapping arrays, not frequency counters.
        // mapS stores the mapping from s -> t
        // mapT stores the mapping from t -> s
        int mapS[CHAR] = {0};
        int mapT[CHAR] = {0};

        for (int i = 0; i < s.length(); i++) {
            char charS = s[i];
            char charT = t[i];

            // Case 1: No mapping exists for either character yet.
            if (mapS[charS] == 0 && mapT[charT] == 0) {
                // Create the mapping in both directions.
                mapS[charS] = charT;
                mapT[charT] = charS;
            }
            // Case 2: A mapping exists. Check if it's consistent.
            // If the mapping for charS is not charT, it's a violation.
            else if (mapS[charS] != charT) {
                return false;
            }
        }
        
        return true;
    }
};