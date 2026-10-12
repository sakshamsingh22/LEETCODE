class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
         int n=nums.size();
         vector<int>sum;
         int currsum=0;
         for(int i=0;i<n;i++){
            currsum+=nums[i];
            sum.push_back(currsum);
          

         }
        return sum;
    }
};