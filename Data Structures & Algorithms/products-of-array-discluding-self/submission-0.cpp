class Solution {
public:
    std::vector<int> productExceptSelf(std::vector<int>& nums) {

        std::vector<int> output;

        for (int i = 0; i < nums.size(); i++)
        {
            int res = 1;
            for (int j = 0; j < nums.size(); j++)
            {
                if (i == j) continue;
                res *= nums.at(j);
            }
            output.emplace_back(res);
        }

        return output;
    }
};