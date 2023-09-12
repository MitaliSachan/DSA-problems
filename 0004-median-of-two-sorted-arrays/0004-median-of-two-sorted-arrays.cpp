class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int m,n;
        m=nums1.size();
        n=nums2.size();
        vector<int> nums3(m+n);
        merge(nums1.begin(),nums1.end(),nums2.begin(),nums2.end(),nums3.begin());
        if((m+n)%2!=0){
            return nums3[(m+n)/2];
        }
        else{
            return (nums3[(m+n+1)/2]+nums3[(m+n-1)/2])/2.0;
        }
    }
};
