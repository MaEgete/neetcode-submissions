class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {

        // nums: [1, 2, 4, 6]


        std::vector<int> res(nums.size(), 1);
        // {1, 1, 1, 1}

        int mult = 1;

        // Linke Seite
        for(int i = 0; i < nums.size(); i++){

            // Für den ersten Wert gibt es kein Element links davon
            if(i == 0){
                continue;
            }

            // Aktueller Wert wird mit dem zu vor multipliziert
            mult *= nums[i-1];
            res[i] *= mult;

        }


        // Rechte Seite

        mult = 1;

        for(int i = nums.size()-1; i >= 0; i--){

            // Es gibt kein Element rechts neben dem letzten
            if(i == (nums.size()-1)){
                continue;
            }

            mult *= nums[i+1];
            res[i] *= mult;
        }

        return res;

    }
};
