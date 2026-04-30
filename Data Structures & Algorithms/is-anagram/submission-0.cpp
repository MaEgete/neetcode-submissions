#include <algorithm>

class Solution {
public:
    bool isAnagram(string s, string t) {
        
        // Beide Strings nach Lexikographischer Ordnung sortieren

        // Und dann vergleichen

        std::sort(s.begin(), s.end());
        std::sort(t.begin(), t.end());

        if(!s.compare(t))
        {
            return true;
        }

        return false;

    }
};
