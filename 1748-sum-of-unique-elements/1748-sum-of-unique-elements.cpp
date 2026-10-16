class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        int freq[101] = {0};

        for (int i = 0; i < nums.size(); i++) {
            freq[nums[i]]++;
        }

        int sum = 0;

        for (int i = 0; i < nums.size(); i++) {
            if (freq[nums[i]] == 1) {
                sum += nums[i];
                freq[nums[i]] = 0;
            }
        }

        return sum;
    }
};