class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_map<int,int> mp;

        for (auto el : nums){
            if (mp.count(el)) return true;

            mp[el]++;
        }

        return false;
    }
};