class Solution {
public:
    string removeDuplicates(string s, int k) {
        stack<pair<char,int>>st;
        int n = s.size();
        for(int i=0;i<n;i++){
            if(!st.empty() && st.top().first==s[i]){
                st.top().second++;
                
            }
            else{
                st.push({s[i],1});
            }
            if(st.top().second==k){
                st.pop();
            }


        }
        string ans="";
        while(!st.empty()){
            ans+=string(st.top().second,st.top().first);
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
        
    }
};