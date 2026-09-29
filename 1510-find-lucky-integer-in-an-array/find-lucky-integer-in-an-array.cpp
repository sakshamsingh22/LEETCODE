class Solution {
public:
    int findLucky(vector<int>& arr) {
        unordered_map<int,int>count;
        int n=arr.size();
        for(int i=0;i<n;i++){
            count[arr[i]]++;
        }
        int ans=-1;
        for(int i=0;i<n;i++){
            if(count[arr[i]]==arr[i]){
                ans=max(ans,arr[i]);
            }
        }
        return ans;
    }
};