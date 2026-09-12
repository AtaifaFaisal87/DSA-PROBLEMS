class Solution {
public:
    int mirrorDistance(int n) { return abs(n - reverse(n)); }

    int reverse(int num) {
        int rev = 0;

        while (num > 0) {
            int digit = num % 10;
            rev = rev * 10 + digit;
            num = num / 10;
        }

        return rev;
    }
};