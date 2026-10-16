class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();

        int left =0;
        int right=n-1;
        int currentsum=0;
        while(left<right){
            currentsum=nums[left]+nums[right];
            if(currentsum==target){
                return {left+1,right+1};

            }
            else if(currentsum<target){
                left++;
            }
            else{
                right--;
            }
        }
        return {};
    }
};