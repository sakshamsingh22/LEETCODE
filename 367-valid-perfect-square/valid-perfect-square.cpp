class Solution {
public:
    bool isPerfectSquare(int num) {
        long long lo =1,high =num;
        while(lo<=high){
            long long mid=lo+(high-lo)/2;
            long long sqrt=mid*mid;
             if(sqrt==num){
                return true;
             }
             else if(sqrt<num){
                lo=mid+1;
             }
             else{
                high=mid-1;
             }
        }
  
      return false;
    }
};