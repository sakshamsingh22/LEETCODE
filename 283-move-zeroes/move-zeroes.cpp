class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n=nums.size();
        vector<int>ans(n);
        int index=0;
        for(int i=0;i<n;i++){
            if(nums[i]!=0){
                ans[index]=nums[i];
                index++;
            }

        }
        while(index<n){
            ans[index]=0;
            index++;
        }
        for(int i=0;i<n;i++){
            nums[i]=ans[i];
        }


        
    }
};