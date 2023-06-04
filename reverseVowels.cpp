class Solution {
public:
    string reverseVowels(string s) {
        //unordered_map<int, char> mp = {};

        vector<char> rev;
        vector<char> ans;
        int count = 0;

        for(int i = s.length() - 1; i >= 0; i--) {
            if (s[i] == 'a' || s[i] == 'A' || s[i] == 'e' || s[i] == 'E' || s[i] == 'i' ||
        s[i] == 'I' || s[i] == 'o' || s[i] == 'O' || s[i] == 'u' || s[i] == 'U') {
            rev.push_back(s[i]);
            }
        }

        for(int i = 0; i < s.length(); i++) {
            
            if (s[i] == 'a' || s[i] == 'A' || s[i] == 'e' || s[i] == 'E' || s[i] == 'i' ||
        s[i] == 'I' || s[i] == 'o' || s[i] == 'O' || s[i] == 'u' || s[i] == 'U') {
            ans.push_back(rev[count]);
            count++;
        } else { ans.push_back(s[i]); }
        
        }

        string sol(ans.begin(), ans.end());

        return sol;

    }

/*private:
    char vowelTest(char ch) {
        if (ch == 'a' || ch == 'A' || ch == 'e' || ch == 'E' || ch == 'i' ||
        ch == 'I' || ch == 'o' || ch == 'O' || ch == 'u' || ch == 'U') {
            return ch;
        }
        return;
    }*/

};
