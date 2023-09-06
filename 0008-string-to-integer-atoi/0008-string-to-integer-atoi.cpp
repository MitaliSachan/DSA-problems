class Solution {
public:
    int myAtoi(string s) {
        int i=0,n=s.size();
        while(s[i]==' ') i++;
        int pos=0,neg=0;
        if(s[i]=='+'){
            pos++;
            i++;
        }
        if(s[i]=='-'){
            neg++;
            i++;
        }
        double res=0;
        while(i<n && s[i]>='0' && s[i]<='9'){
            res=res*10+(s[i]-'0');
            i++;
        }
        if(neg>0){
            res=-res;
        }
        if(neg>0 && pos>0){
            return 0;
        }
        if(res>INT_MAX) res=INT_MAX;
        if(res<INT_MIN) res=INT_MIN;
        return (int)res;

    }
};