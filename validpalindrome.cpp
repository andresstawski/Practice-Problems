class Solution {
public:
    bool isPalindrome(string s) {
        vector<char> ans;
        vector<char> rev;
        int i;

        
        for (i = 0; i < s.length(); i++) {
            if (iswalnum(s[i]) && s[i] != ' ') {
               if(s[i]>=65 && s[i]<=92)
                 {
	                s[i]=s[i]+32;
                 }  
                
                ans.push_back(s[i]);
            }
        }
        rev = ans;
        reverse(rev.begin(), rev.end());

        return ans == rev;
    }
};
