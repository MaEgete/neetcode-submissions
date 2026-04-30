class Solution {
public:

    std::vector<int> length;

    std::string encode(std::vector<std::string>& strs) {
        std::string strings = "";
        for (auto string : strs)
        {
            strings.append(string);
            length.push_back(string.length());
        }
        return strings;
    }

    std::vector<std::string> decode(std::string s) {

        std::vector<std::string> strings;

        int start = 0;
        for (auto var : length)
        {


            strings.emplace_back(s.substr(start, var));

            start += var;

        }

        return strings;
    }
};