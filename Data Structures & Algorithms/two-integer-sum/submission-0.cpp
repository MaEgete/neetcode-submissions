class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {


        for(int i = 0; i < nums.size(); ++i)
        {
            int element = nums.at(i);

            int diff = target - element;

            for(int j = 0; j < nums.size(); ++j)
            {
                if (i == j)
                {
                    continue;
                }

                if(nums.at(j) == diff)
                {
                    return std::vector<int>{i, j};
                }
            }

        }

        return std::vector<int>{-1, -1};

    }
};
