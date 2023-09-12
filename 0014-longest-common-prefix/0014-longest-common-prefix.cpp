class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string a="";
        int n=strs.size();
        sort(strs.begin(),strs.end());
        string st=strs[0],ed=strs[n-1];
        for(int i=0;i<min(st.size(),ed.size());i++){
            if(st[i]!=ed[i]){
                return a;
            }
            a+=st[i];
        }
        return a;
    }
};