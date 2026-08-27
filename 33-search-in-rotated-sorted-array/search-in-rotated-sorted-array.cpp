class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n = nums.size();

        int low = 0;
        int high = n - 1;

        while (low <= high) {

            int mid = low + (high - low) / 2;

            // Target found
            if (nums[mid] == target) {
                return mid;
            }

            // Part 1 is sorted
            if (nums[mid] >= nums[0]) {

                // Target lies in Part 1
                if (nums[0] <= target && target < nums[mid]) {
                    high = mid - 1;
                }
                else {
                    low = mid + 1;
                }
            }

            // Part 2 is sorted
            else {

                // Target lies in Part 2
                if (nums[mid] < target && target <= nums[n - 1]) {
                    low = mid + 1;
                }
                else {
                    high = mid - 1;
                }
            }
        }

        return -1;
    }
};