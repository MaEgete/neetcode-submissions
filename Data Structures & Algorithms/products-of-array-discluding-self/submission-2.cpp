class Solution {
public:
    std::vector<int> productExceptSelf(std::vector<int>& nums) {

        std::vector<int> output(nums.size(), 1);

        int prefix_result = 1;
        int postfix_result = 1;

        for (int i = 0; i < nums.size(); i++)
        {
            output[i] = prefix_result;
            prefix_result *= nums[i];
        }

        for (int i = nums.size() - 1; i >= 0; i--)
        {
            output[i] *= postfix_result;
            postfix_result *= nums[i];
        }

        return output;
    }

};