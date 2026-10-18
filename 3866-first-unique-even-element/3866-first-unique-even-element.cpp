class Solution {
public:
    int firstUniqueEven(vector<int>& nums) {
        int e;
        bool unique;

        for (int i = 0; i < nums.size(); i++) {
            unique = true;

            if (nums[i] % 2 == 0) {
                e = nums[i];

                for (int j = 0; j < nums.size(); j++) {
                    if (i != j && e == nums[j]) {
                        unique = false;
                        break;
                    }
                }

                if (unique) {
                    return e;
                }
            }
        }

        return -1;
    }
};