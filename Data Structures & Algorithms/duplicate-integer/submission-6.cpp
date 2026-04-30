class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        
    
        for(int i = 0; i < nums.size(); i++){


            for(int j = 0; j < nums.size(); j++){

                // Identische Elemente
                if(i == j){
                    continue;
                }

                // Gleiche Elemente
                if(nums.at(i) == nums.at(j)){
                    return true;
                }


            }

        }

        return false;

    }
};