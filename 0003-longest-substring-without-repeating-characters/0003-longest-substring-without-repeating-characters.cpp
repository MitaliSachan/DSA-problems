class Solution {
public:
        int lengthOfLongestSubstring(string s) {
        int ct=0 , maxlength=0;
        map<char ,int> mp;
        for(int i=0,j=0 ;j<s.size(); j++){
            mp[s[j]]++;
            ct++;
                while(mp[s[j]]>1){
                    mp[s[i++]]--;
                    ct--;
                }
            maxlength = max(maxlength,ct);
        }
        return maxlength;
    }
};