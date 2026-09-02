class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {

        priority_queue<pair<int, int>,
                       vector<pair<int, int>>,
                       greater<pair<int, int>>> minHeap;

        unordered_map<int, int> mp;

        for(int i = 0; i < nums.size(); i++) {
            mp[nums[i]]++;
        }

        for(auto i : mp) {
            int num = i.first;
            int freq = i.second;

            minHeap.push({freq, num});

            if(minHeap.size() > k) {
                minHeap.pop();
            }
        }
        vector<int> ans;
        while(!minHeap.empty()) {
        ans.push_back(minHeap.top().second);
         minHeap.pop();
}

      return ans;  
    }
};