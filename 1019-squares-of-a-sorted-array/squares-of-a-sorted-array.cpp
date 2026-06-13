class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> neg, pos;

        for (int x : nums) {
            if (x < 0)
                neg.push_back(x * x);
            else
                pos.push_back(x * x);
        }

        vector<int> ans;

        int i = neg.size() - 1; // traverse neg backwards
        int j = 0;

        while (i >= 0 && j < pos.size()) {
            if (neg[i] <= pos[j])
                ans.push_back(neg[i--]);
            else
                ans.push_back(pos[j++]);
        }

        while (i >= 0) ans.push_back(neg[i--]);
        while (j < pos.size()) ans.push_back(pos[j++]);

        return ans;
    }
};