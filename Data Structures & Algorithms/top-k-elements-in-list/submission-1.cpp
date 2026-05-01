class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        

        std::unordered_map<int, int> mp;


        for(int val : nums){

            mp[val]++;

        }

        auto findMax = [&](){
            return std::max_element(mp.begin(), mp.end(),
                [](const auto& a, const auto& b){
                    return a.second < b.second;
                }
            );
        };


        std::vector<int> k_most;

        for(int i = 0; i < k; i++){

            auto it = findMax();

            k_most.push_back(it->first);

            mp.erase(it);

        }

        return k_most;

    }
};
