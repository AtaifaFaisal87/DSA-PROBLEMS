class Solution {
public:
    int totalNumbers(vector<int>& digits) {

        set<int> ans;

        for (int i = 0; i < digits.size(); i++) {
            for (int j = 0; j < digits.size(); j++) {
                for (int k = 0; k < digits.size(); k++) {

                    if (digits[i] == 0) {
                        continue;
                    }

                    if (i == j || j == k || i == k) {
                        continue;
                    }

                    if (digits[k] % 2 != 0) {
                        continue;
                    }

                    ans.insert(digits[i] * 100 + digits[j] * 10 + digits[k]);
                }
            }
        }

        return ans.size();
    }
};