class Solution {
public:
    int countCommas(int n) {
        int total = 0;

        for (int j = 1; j <= n; j++) {
            string s = to_string(j);
            int count = 0;

            for (int i = s.length() - 1; i >= 0; i--) {
                count++;

                if (count == 3 && i != 0) {
                    total++;
                    count = 0;
                }
            }
        }

        return total;
    }
};