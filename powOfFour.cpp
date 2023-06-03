class Solution {
public:
    bool isPowerOfFour(int n) {
        if (n == 1) return true;
        if (n == pow(4, 15)) return true;
        int i;

        for(i = 0; i < 15; i++) {
            if(n == pow(4, i)) {
                return true;
            }
        }
        return false;
    }
};
