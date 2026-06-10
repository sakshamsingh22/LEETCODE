class Solution {
public:
    bool isHappy(int n) {
        set<int>s;
        
        while(n!=1){
            if(s.count(n)){
                return false;
            }
            s.insert(n);
            int sum=0;
            int digit;
            while(n>0){
                digit=n%10;
                sum=sum+digit*digit;
                n=n/10;
            }
            n=sum;
        }
        return true;
    }
};