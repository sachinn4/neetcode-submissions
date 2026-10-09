class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.size() != t.size()) return false;

        vector<int> arr(26,0);

        for ( char ch : s){
            arr[ch - 'a']++;
        }

        for ( char ch : t){
            arr[ch - 'a']--;
        }

    
        for ( auto el : arr){
            if ( el != 0) return false;
        }

        return true;
    }
};
