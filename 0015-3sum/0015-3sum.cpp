class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
      int i;
      vector<vector<int>> ans;
      int n=nums.size();
      sort(nums.begin(),nums.end());
      set<vector<int>> res;
      if(n<3 || nums[0]>0){
          return {};
      }
      
      for(i=0;i<n;i++){
        int j=i+1;
        int k=n-1;
        while(j<k){
            int sum=nums[i]+nums[j]+nums[k];
            if(sum==0){
                res.insert({nums[i],nums[j],nums[k]});
                j++;
                k--;
            }
            else if(sum<0){
                j++;
            }
            else{
                k--;
            }
        }
      }
      ans.assign(res.begin(),res.end());
      return ans;  
    }
};