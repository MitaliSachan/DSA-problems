class Solution {
public:
    int reverse(int x) {
        long int a=0;
        int r;
        while(x){
            r=x%10;
            a=a*10+r;
            x=x/10;
        }
        return a;
    }
    bool isSameAfterReversals(int num) {
        int an=reverse(num);
        an=reverse(an);
        cout<<an;
        if(num==an){
            return true;
        }
        return false;
    }
};