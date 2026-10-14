class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int>set;
        vector<int>ans;
        for(auto i:nums1){
            set.insert(i);
        }
        for(auto j: nums2){
            if(set.find(j)!=set.end()){
                ans.push_back(j);
                set.erase(j);
        }
        }
        return ans;
    }
};