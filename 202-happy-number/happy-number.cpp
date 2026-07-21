class Solution {
public:
  int fun(int n){
            int sum=0;
            while(n>0){
                int dig=n%10;
                sum+=dig*dig;
                n=n/10;

            }
            return sum;
        }

    
    bool isHappy(int n) {
        int slow = n;
        int fast =fun(n);
        while(fast!=1 && slow!=fast){
            slow=fun(slow);
            fast=fun(fast);
            fast=fun(fast);
        }
        if(fast==1){
            return true;
        }
        else
        return false;


    }

    };
