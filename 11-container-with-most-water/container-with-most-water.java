class Solution {
    public int maxArea(int[] height) {
        int n=height.length;
        int i=0;
        int j=n-1;
        int maxwater=0;
        while(i<j){
            int dif=j-i;
            int h=Math.min(height[i],height[j]);
            maxwater=Math.max(maxwater,(dif*h));
            
            if(height[i]<height[j]){
                i++;
            }
            else if(height[i]>height[j]){
                j--;
            }
            else{
                i++;
                j--;
            }
        }
        return maxwater;

    }
}