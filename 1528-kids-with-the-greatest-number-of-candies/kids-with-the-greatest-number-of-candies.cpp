class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int Max=0;
        int n = candies.size();
        for(int i=0;i<n;i++){
            Max=max(Max,candies[i]);
        }
        vector<bool>result;
        for(int i=0;i<n;i++){
            
            result.push_back(candies[i]+extraCandies>=Max);
            
       }
        return result;
        
    }
};