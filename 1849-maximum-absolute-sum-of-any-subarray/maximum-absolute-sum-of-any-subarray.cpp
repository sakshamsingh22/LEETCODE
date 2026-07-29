class Solution {
public:
    int maxAbsoluteSum(vector<int>& a) {
        
        int maxending=a[0];
        int minending=a[0];

        int maxsum=a[0];
        int minsum=a[0];
        for(int i=1;i<a.size();i++){
            maxending=max(maxending+a[i],a[i]);
            maxsum=max(maxsum,maxending);
            minending=min(a[i],minending+a[i]);
            minsum=min(minsum,minending);
            
        }
        return max(maxsum,abs(minsum));
    }
};