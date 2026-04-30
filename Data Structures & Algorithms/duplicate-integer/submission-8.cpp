class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        
        std::unordered_set<int> tmp{};


        for(int n : nums){

            if(tmp.contains(n)){
                return true;
            }

            tmp.insert(n);

        }

        return false;

    }
};