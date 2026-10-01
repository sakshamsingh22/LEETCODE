class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n=nums.size();
        int largest=INT_MIN;
        int secondlargest=INT_MIN;
        for(int i=0;i<n;i++){
            if(nums[i]>largest){
                secondlargest=largest;
                largest=nums[i];
            }
            else if(secondlargest!=largest && secondlargest<nums[i]){
                secondlargest=nums[i];

            }
        }
        return (largest-1)*(secondlargest-1);
    }
};