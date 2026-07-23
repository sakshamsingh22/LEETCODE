class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int current =nums[0];
        int ans= nums[0];
        for(int i=1;i<nums.size();i++){
            int v1=current+nums[i];
            int v2=nums[i];
            current=max(v1,v2);
            ans=max(ans,current);
        }
        return ans;

    }
};