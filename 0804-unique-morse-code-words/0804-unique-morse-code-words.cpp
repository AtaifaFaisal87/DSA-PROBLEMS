class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        
        string arr[26] = {
            ".-", "-...", "-.-.", "-..", ".", "..-.", "--.",
            "....", "..", ".---", "-.-", ".-..", "--", "-.",
            "---", ".--.", "--.-", ".-.", "...", "-", "..-",
            "...-", ".--", "-..-", "-.--", "--.."
        };

        set<string> s;

        for(int i = 0; i < words.size(); i++)
        {
            string morse = "";

            for(int j = 0; j < words[i].length(); j++)
            {
                morse += arr[words[i][j] - 'a'];
            }

            s.insert(morse);
        }

        return s.size();
    }
};