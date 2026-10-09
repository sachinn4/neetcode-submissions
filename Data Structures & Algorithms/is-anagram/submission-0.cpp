class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int> count(26,0);

        for ( char c : s){
            count[c - 'a']++;
        }
        for ( char c : t){
            count[c - 'a']--;
        }

        bool all_zero = all_of(count.begin(),count.end(),[](int val){
            return val == 0;
        });

        return all_zero;

        
    }
};
