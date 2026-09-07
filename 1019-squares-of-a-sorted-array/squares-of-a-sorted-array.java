class Solution {
    public int[] sortedSquares(int[] nums) {
        int left=0;
        int right=nums.length-1;
        int index=nums.length-1;
        int [] ans=new int[nums.length];
        while(left<=right){
            int leftsq=nums[left]*nums[left];
            int rightsq=nums[right]*nums[right];

            if(leftsq<rightsq){
                ans[index]=rightsq;
                right--;
            }
            else{
                ans[index]=leftsq;
                left++;
            }
            index--;
        }
        return ans;
    }
}