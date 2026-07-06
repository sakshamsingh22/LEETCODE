class Solution {
public:

    // Finds the maximum frequency of any character
    int find(vector<int> &f)
    {
        int maxc = -1;

        for(int i = 0; i < 256; i++)
        {
            maxc = max(maxc, f[i]);
        }

        return maxc;
    }

    int characterReplacement(string s, int k) {

        int n = s.size();

        vector<int> f(256, 0);

        int low = 0;
        int res = INT_MIN;

        for(int high = 0; high < n; high++)
        {
            // Add current character
            f[s[high]]++;

            // Find character having maximum frequency
            int maxcnt = find(f);

            int len = high - low + 1;

            // Characters to replace
            int diff = len - maxcnt;

            while(diff > k)
            {
                f[s[low]]--;
                low++;

                maxcnt = find(f);

                len = high - low + 1;

                diff = len - maxcnt;
            }

            len = high - low + 1;
            res = max(res, len);
        }

        return res;
    }
};