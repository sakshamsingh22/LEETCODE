class Solution {
    public int countCommas(int n) {
        // int n=n.size();
        for(int i=0;i<n;i++){
            if(n<1000){
                return 0;
            }
            else{
                 return n-999;
            }
        } 
        return n-999;
    }
}