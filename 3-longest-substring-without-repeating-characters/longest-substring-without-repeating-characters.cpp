class Solution {
public:
    int lengthOfLongestSubstring(string s) {
    
        unordered_map<char,int> mp;
        int j = 0;
        int maxlen = 0;

        for(int i = 0; i < s.length(); i++){
            if(mp.find(s[i]) != mp.end()){
                j = max(j, mp[s[i]] + 1);
            }

            mp[s[i]] = i;

            maxlen = max(maxlen, i - j + 1);
        }
        return maxlen;
    }
};