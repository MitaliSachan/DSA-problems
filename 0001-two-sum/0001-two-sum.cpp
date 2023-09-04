class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int m=nums.size();
        int i,j;
        vector<int> res;
        for(i=0;i<m;i++){
            for(j=i+1;j<m;j++){
                if(nums[i]+nums[j]==target){
                    res.push_back(i);
                    res.push_back(j);
                    break;
                }
            }
        }
        return res;
    }
};