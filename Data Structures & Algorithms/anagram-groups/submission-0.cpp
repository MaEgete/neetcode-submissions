#include <array>

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {


        std::map<std::array<int, 26>, std::vector<std::string>> groups;

        for(const std::string& s : strs)
        {
            std::array<int, 26> count{}; // KEY

            for(const char& c : s)
            {
                count[c - 'a']++;
            }


            groups[count].push_back(s); // VALUE

        }

        std::vector<std::vector<std::string>> result;

        for(auto group : groups)
        {
            result.push_back(group.second);
            
        }
        
        return result;
    }
};
