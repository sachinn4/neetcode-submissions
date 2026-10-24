class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> prod(n,1);

        //Calculate prefix product
        int pref = 1;
        for (int i = 0; i < n; i++){
            prod[i] = pref;
            pref *= nums[i];
        }
        
        //Calculate suffix product
        int suf = 1;
        for ( int i = n-1; i >= 0; i--){
            prod[i] *= suf;
            suf *= nums[i];
        }

        return prod;
    }
};
