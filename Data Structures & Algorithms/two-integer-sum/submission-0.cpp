class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int ,int> m;
        vector <int> v;
        
        int ans;
        for (int i = 0 ; i < nums.size(); i++){
            int first = nums[i];
            int sec = target - first;

            if (m.find(sec) != m.end()){
                v.push_back(m[sec]);
                v.push_back(i);
            }
            m[first] = i;
        }

        return v;
    }
};
