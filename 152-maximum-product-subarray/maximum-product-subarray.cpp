class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n=nums.size();
        int curr=nums[0];
        int currmin=nums[0];
        int res=nums[0];
        for(int i=1;i<n;i++){
        int v1=nums[i];
        int v2= curr*nums[i];
        int v3=currmin*nums[i];
       
            int min_ending=max(v1,max(v2,v3));
            int max_ending=min(v1,min(v2,v3));
            res=max(res,max(min_ending,max_ending));
            curr =max_ending;
            currmin=min_ending;

        }


        return res;
    }
};