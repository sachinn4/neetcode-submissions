class Solution {
public:

    string encode(vector<string>& strs) {
        string encoder = "";

        for ( int i = 0; i < strs.size(); i++){
            int len = strs[i].length();
            encoder += to_string(len) + "#";
            encoder += strs[i];
        }

        return encoder;
    }

    vector<string> decode(string s) {
        vector<string> decoder;
        int i = 0;
        while( i < s.length()) {
            int j = i;
            //find the number 
            while ( s[j] != '#'){
                j++;
            }
            //extract that num string to int
            int len = stoi(s.substr(i,j-i));
            string word = s.substr(j+1,len);

            i = j+1 + len;

            decoder.push_back(word);
        }

        return decoder;
    }
};
