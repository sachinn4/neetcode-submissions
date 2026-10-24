class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        int n = nums.size();
        unordered_set<int> s;

        for ( auto val : nums){
            if (s.count(val)) return true;

            s.insert(val);
        }

        return false;

    }
};