class Solution {
public:
    string countAndSay(int n) {
        if(n==1){
            return "1";
        }
        string req=countAndSay(n-1)+" ";
        string ans="";
        char val=req[0];
        int freq(0);
        for(char c:req){
           if(c==val){
                freq++;}
            else{
                ans+=to_string(freq)+val;
                val=c;
                freq=1;
            }
        }
        return ans;
    }
};