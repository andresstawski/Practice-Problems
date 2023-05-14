class Solution {
public:
    int strStr(string haystack, string needle) {
        string str = haystack;
        string substr = needle;
        int index = str.find(substr);
        return index;
    }
};
