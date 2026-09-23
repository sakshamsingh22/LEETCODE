class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n = nums.size();
        int curr=nums[0];
        int currmin=nums[0];
        int res=nums[0];
        for(int i=1;i<n;i++){
            int v1=nums[i];
            int v2=nums[i]*curr;
            int v3=nums[i]*currmin;
            int minending=min(v1,min(v2,v3));
            int maxending=max(v1,max(v2,v3));
            res=max(res,max(minending,maxending));
            curr=maxending;
            currmin=minending;

        }
        return res;
    }
};