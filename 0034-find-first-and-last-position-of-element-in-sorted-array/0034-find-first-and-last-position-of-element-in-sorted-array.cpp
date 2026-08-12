class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {

        vector<int> v(2, -1);

        // Find first 
        int low = 0;
        int high = nums.size() - 1;

        while (low <= high) {

            int mid = low + (high - low) / 2;

            if (nums[mid] == target) {
                v[0] = mid;
                high = mid - 1;   // keep searching LEFT
            }
            else if (nums[mid] < target) {
                low = mid + 1;
            }
            else {
                high = mid - 1;
            }
        }

        // Find last 
        low = 0;
        high = nums.size() - 1;

        while (low <= high) {

            int mid = low + (high - low) / 2;

            if (nums[mid] == target) {
                v[1] = mid;
                low = mid + 1;    // keep searching RIGHT
            }
            else if (nums[mid] < target) {
                low = mid + 1;
            }
            else {
                high = mid - 1;
            }
        }

        return v;
    }
};