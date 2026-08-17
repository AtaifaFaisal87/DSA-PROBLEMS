class Solution {
public:
    bool isSubsequence(string s, string t) {
        int len1 = s.length();

        int i = 0;
        int j = 0;

        while (i != t.length() && j != len1) {
            if (s[j] == t[i]) {

                j++;
            }
            i++;
        }

        if (j == len1) {
            return true;
        } else {
            return false;
        }
    }
};