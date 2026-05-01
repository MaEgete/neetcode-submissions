class Solution {
public:

    string encode(vector<string>& strs) {

        std::stringstream ss;

        for(const auto& s : strs) {
            ss << s.size() << "#" << s;
        }

        return ss.str();

    }


    vector<string> decode(string s) {

        std::vector<std::string> res;

        int i = 0;

        while(i < s.size()){

            // 5#Hello5#World

            // Endindex
            int j = i;

            while(s[j] != '#'){
                j++;
            }

            // Zahl die vor '#' steht
            int len = std::stoi(s.substr(i, j-i));

            // # überspringen
            j++;

            // Bei j beginnt der String der Länge len
            res.push_back(s.substr(j, len));

            i = j + len;

        }

        return res;

    }
};
