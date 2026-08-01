class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {

        unordered_map<int, int> prefixFreq;

        prefixFreq[0] = 1;

        int prefixSum = 0;
        int answer = 0;

        for (int i = 0; i < nums.size(); i++)
        {
            // Current Prefix Sum
            prefixSum += nums[i];

            // Required Previous Prefix Sum
            int neededPrefix = prefixSum - k;

            // Kitni baar neededPrefix mila?
            int frequency = prefixFreq[neededPrefix];

            // Utne subarrays mil gaye
            answer += frequency;

            // Current Prefix Sum store/update karo
            prefixFreq[prefixSum]++;
        }

        return answer;
    }
};