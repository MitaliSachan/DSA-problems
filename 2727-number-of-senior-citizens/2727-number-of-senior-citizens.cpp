class Solution {
public:
    int countSeniors(vector<string>& details) {
        int pasg_ct=0;
        for(auto i:details){
            if(i[11]>'6'){
                pasg_ct++;
            }
            else if(i[11]=='6' && i[12]!='0'){
                pasg_ct++;
            }
        }
        return pasg_ct;
    }
};