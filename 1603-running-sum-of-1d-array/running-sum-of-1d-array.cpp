class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int>sum;
        int n =nums.size();
        int currsum=0;

        for(int i=0;i<n;i++){
            currsum+=nums[i];
            sum.push_back(currsum);
        }
        return sum;
    }
};