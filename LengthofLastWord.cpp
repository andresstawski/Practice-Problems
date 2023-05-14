class Solution {
public:
    int lengthOfLastWord(string s) {
        int i;
        int count = 0;

        for (i = s.size() -1; i >= 0; i--) {
            if (s[i] != ' ') {
                count++;
            }
            else if (count != 0 && s[i] == ' ') {
                return count;
            }
        }
        return count;
    }
};
