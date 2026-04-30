class Solution {
public:
    bool isAnagram(string s, string t) {
        
        if (s.length() != t.length()) {
            return false;
        }

        std::unordered_map<char, int> m;
        for (const char& c : s) {
            m[c]++;
        }

        for (const char& c: t) {
            m[c]--;
            if (m[c] < 0) {
                return false;
            }
        }

        return true;
    }

};
