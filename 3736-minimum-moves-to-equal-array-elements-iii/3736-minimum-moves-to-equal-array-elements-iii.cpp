class Solution {
public:
    int minMoves(vector<int>& nums) {
        int max = INT_MIN;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] > max) {
                max = nums[i];
            }
        }
        int moves = 0;
        for (int i = 0; i < nums.size(); i++) {
            moves += max - nums[i];
        }

        return moves;
    }
};