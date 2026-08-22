class Solution {
public:
    int longestPalindrome(string s) {
        int n= s.size();
        unordered_map<char,int>mp;

        for(auto i:s){
            mp[i]++;
        }
        int ans=0;
        bool odd =false;
        for(auto i:mp){
            if(i.second%2==0){
                ans+=i.second;
            }
            else{
                ans+=i.second-1;
                odd=true;
                
            }
        }
        if(odd){
            ans+=1;
        }
        return ans;
    }
};