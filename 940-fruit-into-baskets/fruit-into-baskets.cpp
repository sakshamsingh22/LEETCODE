class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        unordered_map<int,int>freq;
        int n=fruits.size();

        int low=0;
        int high =0;
        int ans=INT_MIN;
        for(int high=0;high<n;high++){
            freq[fruits[high]]++;
            while(freq.size()>2){
                freq[fruits[low]]--;
                if(freq[fruits[low]]==0){
                    freq.erase(fruits[low]);
                }
                low++;
            }
            if(freq.size()<=2){
               ans=max(ans,high-low+1);
            }


        }
            return ans;

        
    }
};