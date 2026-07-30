class Solution {
public:
    int maxSubarraySumCircular(vector<int>& a) {

        int normalmax = a[0];
        int minsum = a[0];

        int maxres = a[0];
        int minres = a[0];

        int total = a[0];

        for(int i = 1; i < a.size(); i++) {

            total += a[i];

            // Maximum Subarray (Kadane)
            normalmax = max(a[i], normalmax + a[i]);
            maxres = max(maxres, normalmax);

            // Minimum Subarray (Kadane)
            minsum = min(a[i], minsum + a[i]);
            minres = min(minres, minsum);
        }

        // All elements are negative
        if(maxres < 0)
            return maxres;

        // Maximum of Normal Kadane and Circular Kadane
        return max(maxres, total - minres);
    }
};