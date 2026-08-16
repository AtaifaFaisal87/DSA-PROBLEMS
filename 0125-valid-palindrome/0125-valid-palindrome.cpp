class Solution {
public:
    bool isPalindrome(string s) {

        if (s.length() == 0) {
            return true;
        }

        int j = 0;
        for (int i = s.length() - 1; i >= 0; i--) {

            if (!isalnum(s[i])) {
                continue;
            }
            else if (!isalnum(s[j])) {
                i++;
                j++;
                continue;
            } 
            else if (tolower(s[i]) != tolower(s[j])) {
                return false;
            }

            j++;
        }

        return true;
    }
};