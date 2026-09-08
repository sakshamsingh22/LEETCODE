class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int n =numbers.size();
        int left =0;
        int right=n-1;
        int currentsum;
        while(left<=right){
            currentsum = numbers[left] + numbers[right];
            if(currentsum==target){
                return{left+1,right+1};
            }
            else if(currentsum<target){
                left++;
            }
            else{
                right--;
            }
        }
        return {left,right};
    }
};