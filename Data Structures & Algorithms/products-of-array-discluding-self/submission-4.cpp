class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {

        int n = nums.size();

        std::vector<int> res(n, 1);

        int mult = 1;

        // Linke Seite
        for(int i = 0; i < n; i++){

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

        for(int i = n-1; i >= 0; i--){

            // Es gibt kein Element rechts neben dem letzten
            if(i == (n-1)){
                continue;
            }

            mult *= nums[i+1];
            res[i] *= mult;
        }

        return res;

    }
};
