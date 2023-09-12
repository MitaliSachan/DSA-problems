class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int i,j,k,ans;
        int n=nums.size();
        sort(nums.begin(),nums.end());
        int diff,mint=INT_MAX;
        for(i=0;i<n;i++){
            j=i+1;
            k=n-1;
            while(j<k){
                int sum=nums[i]+nums[j]+nums[k];
                diff=abs(target-sum);
                if(diff==0){
                    return sum;
                }
                else if(diff<mint){
                    mint=diff;
                    ans=sum;
                }
                if(sum>target){
                    k--;
                }
                else{
                    j++;
                }
            }
        }
        return ans;
    }
};